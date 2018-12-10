using UnityEngine;
using System;
using System.IO;
using System.Net;
using UnityEngine.Networking;
using System.Collections;
using System.Text;
using System.Collections.Generic;

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

        
        Debug.Log("post request start");

        StartCoroutine(fuck(texture));

        //https://vision.googleapis.com/v1/images:annotate
    }

    public IEnumerator fuck(Texture2D textureGiven)
    {
        Debug.Log("upload function start");
        
        byte[] byteArray;

        byteArray = textureGiven.EncodeToJPG();
        Debug.Log(byteArray);
        string json = null;

        try {
            string encodedText = Convert.ToBase64String(byteArray);
            Debug.Log(encodedText);
            json = "{'requests':[{'image':{'content':'" + encodedText + "'},'features':[{'type':'LABEL_DETECTION','maxResults':3}] }]}";
            Debug.Log("final json before encoding::");

            Debug.Log(json);


        }
        catch (Exception e)
        {
            Debug.Log(e);
            json = "{'requests':[{'image':{'content':'" + byteArray + "'},'features':[{'type':'LABEL_DETECTION','maxResults':3}] }]}";
        }




        WWWForm form = new WWWForm();
       
            var formData = System.Text.Encoding.UTF8.GetBytes(json);

        


            //test

            var headers = new Dictionary<string, string> { { "Content-Type", "application/json" } };
            Debug.Log("headers generated"+headers);

        Hashtable postHeader = new Hashtable();
        postHeader.Add("Content-Type", "application/json");

        Debug.Log("about to post request...");

            Debug.Log(formData);

            var www = new WWW("https://vision.googleapis.com/v1/images:annotate?key=AIzaSyDCirLZznbK02r6Wr42b0Pf1wKhPeMzQb8",formData,headers);
            yield return www;

            //Debug.Log("Error" + www.error.ToString());
            Debug.Log("Data" + www.text);
            Debug.Log(www.responseHeaders + "Done" + www.isDone);
            //dispose.
            www.Dispose();
            //test



            //wRequest.uploadHandler = uH;
            //wRequest.downloadHandler = dH;
            //wRequest.chunkedTransfer = false;
            //wRequest.SetRequestHeader("Content-Type", "application/json");
            //yield return wRequest.SendWebRequest();

            //if (wRequest.isNetworkError || wRequest.isHttpError)
            //{
            //    Debug.Log(wRequest.error);
            //}
            //else
            //{
            //    Debug.Log("OK, responseCode: " + wRequest.responseCode);

            //    Debug.Log("OK, response:");

            //    string responseText = wRequest.downloadHandler.text;
            //    Debug.Log(responseText);
            //    Debug.Log(wRequest.error);

            //}
        
        
    }


    public void PlayVideo()
    {
        ((MovieTexture)gameObjPlayVideo.GetComponent<Renderer>().material.mainTexture).Play();
    }
}