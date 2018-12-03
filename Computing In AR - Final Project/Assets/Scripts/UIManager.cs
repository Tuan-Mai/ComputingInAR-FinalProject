using UnityEngine;
using System;
using System.IO;
using System.Net;
using UnityEngine.Networking;
using System.Collections;

public class UIManager : MonoBehaviour
{

    public static UIManager Instance { get; private set; }

    public GameObject gameObjDisplayPhoto;
    public GameObject gameObjPlayVideo;
    void Awake()
    {
        Instance = this;
    }

    public void LoadPhotoToTexture(Texture2D texture)
    {
        Debug.Log("LPTT photo start");
        gameObjDisplayPhoto.GetComponent<MeshRenderer>().materials[0].SetTexture("_MainTex", texture);

        string json = @"{
                'requests':[
            {
      'image':{
        'source':{
          'imageUri':
            'https://www.google.com/images/branding/googlelogo/2x/googlelogo_color_272x92dp.png'
        }
      },
      'features':[
        {
          'type':'LOGO_DETECTION',
          'maxResults':1
        }
      ]
    }
  ]
}";

        Debug.Log("post request start");
        


        using (UnityWebRequest www = UnityWebRequest.Put("https://vision.googleapis.com/v1/images:annotate", json))
        {
            www.SendWebRequest();

            if (www.isNetworkError || www.isHttpError)
            {
                Debug.Log(www.error);
            }
            else
            {
                Debug.Log("OK, response:");
                Debug.Log(www.downloadHandler.text);
            }
        }
    }

    public void PlayVideo()
    {
        ((MovieTexture)gameObjPlayVideo.GetComponent<Renderer>().material.mainTexture).Play();
    }
}