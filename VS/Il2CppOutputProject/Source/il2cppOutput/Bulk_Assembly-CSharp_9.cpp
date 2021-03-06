﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// GLTF.AttributeAccessor
struct AttributeAccessor_t906274905;
// GLTF.Math.Color[]
struct ColorU5BU5D_t1735271552;
// GLTF.Math.Matrix4x4
struct Matrix4x4_t3584866707;
// GLTF.Math.Vector2[]
struct Vector2U5BU5D_t623575368;
// GLTF.Math.Vector3[]
struct Vector3U5BU5D_t137387629;
// GLTF.Math.Vector4[]
struct Vector4U5BU5D_t1595950846;
// GLTF.Schema.AccessorId
struct AccessorId_t96769721;
// GLTF.Schema.AccessorSparse
struct AccessorSparse_t1447441109;
// GLTF.Schema.Asset
struct Asset_t4292491636;
// GLTF.Schema.Buffer
struct Buffer_t869705777;
// GLTF.Schema.BufferId
struct BufferId_t2787902107;
// GLTF.Schema.BufferViewId
struct BufferViewId_t4185270750;
// GLTF.Schema.Buffer[]
struct BufferU5BU5D_t3404391404;
// GLTF.Schema.CameraId
struct CameraId_t1207636538;
// GLTF.Schema.DefaultExtensionFactory
struct DefaultExtensionFactory_t3535768014;
// GLTF.Schema.ExtTextureTransformExtensionFactory
struct ExtTextureTransformExtensionFactory_t766531290;
// GLTF.Schema.GLTFRoot
struct GLTFRoot_t676886847;
// GLTF.Schema.IExtension
struct IExtension_t609955314;
// GLTF.Schema.Image
struct Image_t782620675;
// GLTF.Schema.ImageId
struct ImageId_t3414506292;
// GLTF.Schema.Image[]
struct ImageU5BU5D_t562016402;
// GLTF.Schema.KHR_materials_pbrSpecularGlossinessExtensionFactory
struct KHR_materials_pbrSpecularGlossinessExtensionFactory_t3070429945;
// GLTF.Schema.Material
struct Material_t2790518843;
// GLTF.Schema.MaterialCommonConstant
struct MaterialCommonConstant_t2574134879;
// GLTF.Schema.MaterialId
struct MaterialId_t1334539377;
// GLTF.Schema.Material[]
struct MaterialU5BU5D_t1970395258;
// GLTF.Schema.Mesh
struct Mesh_t2726263229;
// GLTF.Schema.MeshId
struct MeshId_t2690594789;
// GLTF.Schema.MeshPrimitive
struct MeshPrimitive_t2910245916;
// GLTF.Schema.MeshPrimitive[]
struct MeshPrimitiveU5BU5D_t3392744437;
// GLTF.Schema.Mesh[]
struct MeshU5BU5D_t1017691824;
// GLTF.Schema.Node
struct Node_t3990671929;
// GLTF.Schema.NodeId
struct NodeId_t3934031855;
// GLTF.Schema.NodeId[]
struct NodeIdU5BU5D_t520773494;
// GLTF.Schema.NormalTextureInfo
struct NormalTextureInfo_t1344565953;
// GLTF.Schema.OcclusionTextureInfo
struct OcclusionTextureInfo_t1842066315;
// GLTF.Schema.PbrMetallicRoughness
struct PbrMetallicRoughness_t313043948;
// GLTF.Schema.SamplerId
struct SamplerId_t2839447902;
// GLTF.Schema.Scene
struct Scene_t1955661005;
// GLTF.Schema.SceneId
struct SceneId_t3402743638;
// GLTF.Schema.Scene[]
struct SceneU5BU5D_t2571818336;
// GLTF.Schema.SkinId
struct SkinId_t3905368637;
// GLTF.Schema.Texture
struct Texture_t812196831;
// GLTF.Schema.TextureId
struct TextureId_t2497679170;
// GLTF.Schema.TextureInfo
struct TextureInfo_t616718776;
// GLTF.Schema.Texture[]
struct TextureU5BU5D_t1584057798;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t2755812594;
// Newtonsoft.Json.Linq.JToken
struct JToken_t1038539247;
// System.Action
struct Action_t1264377477;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_t1617499438;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityGLTF.Cache.BufferCacheData>[]
struct EntryU5BU5D_t2783951582;
// System.Collections.Generic.Dictionary`2/Entry<System.String,GLTF.AttributeAccessor>[]
struct EntryU5BU5D_t868759461;
// System.Collections.Generic.Dictionary`2/Entry<System.String,GLTF.Schema.AccessorId>[]
struct EntryU5BU5D_t2878464965;
// System.Collections.Generic.Dictionary`2/Entry<System.String,GLTF.Schema.IExtension>[]
struct EntryU5BU5D_t197219208;
// System.Collections.Generic.Dictionary`2/Entry<UnityGLTF.GLTFSceneImporter/MaterialType,UnityEngine.Shader>[]
struct EntryU5BU5D_t1751116809;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityGLTF.Cache.BufferCacheData>
struct KeyCollection_t3483447822;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,GLTF.AttributeAccessor>
struct KeyCollection_t881206675;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,GLTF.Schema.AccessorId>
struct KeyCollection_t71701491;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,GLTF.Schema.IExtension>
struct KeyCollection_t584887084;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityGLTF.GLTFSceneImporter/MaterialType,UnityEngine.Shader>
struct KeyCollection_t3162973695;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityGLTF.Cache.BufferCacheData>
struct ValueCollection_t714849373;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,GLTF.AttributeAccessor>
struct ValueCollection_t2407575522;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,GLTF.Schema.AccessorId>
struct ValueCollection_t1598070338;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,GLTF.Schema.IExtension>
struct ValueCollection_t2111255931;
// System.Collections.Generic.Dictionary`2/ValueCollection<UnityGLTF.GLTFSceneImporter/MaterialType,UnityEngine.Shader>
struct ValueCollection_t394375246;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1968819495;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityGLTF.Cache.BufferCacheData>
struct Dictionary_2_t3293772351;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t132545152;
// System.Collections.Generic.Dictionary`2<System.String,GLTF.AttributeAccessor>
struct Dictionary_2_t691531204;
// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.AccessorId>
struct Dictionary_2_t4176993316;
// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.ExtensionFactory>
struct Dictionary_2_t3086455368;
// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.IExtension>
struct Dictionary_2_t395211613;
// System.Collections.Generic.Dictionary`2<UnityGLTF.GLTFSceneImporter/MaterialType,System.Object>
struct Dictionary_2_t1901415676;
// System.Collections.Generic.Dictionary`2<UnityGLTF.GLTFSceneImporter/MaterialType,UnityEngine.Shader>
struct Dictionary_2_t2973298224;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t763310475;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t3954782707;
// System.Collections.Generic.IEqualityComparer`1<UnityGLTF.GLTFSceneImporter/MaterialType>
struct IEqualityComparer_1_t2705105050;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t3068621835;
// System.Collections.Generic.List`1<GLTF.Schema.Accessor>
struct List_1_t3133863255;
// System.Collections.Generic.List`1<GLTF.Schema.Animation>
struct List_1_t2745658046;
// System.Collections.Generic.List`1<GLTF.Schema.Buffer>
struct List_1_t2341780519;
// System.Collections.Generic.List`1<GLTF.Schema.BufferView>
struct List_1_t4122173868;
// System.Collections.Generic.List`1<GLTF.Schema.Camera>
struct List_1_t3496179184;
// System.Collections.Generic.List`1<GLTF.Schema.Image>
struct List_1_t2254695417;
// System.Collections.Generic.List`1<GLTF.Schema.Material>
struct List_1_t4262593585;
// System.Collections.Generic.List`1<GLTF.Schema.Mesh>
struct List_1_t4198337971;
// System.Collections.Generic.List`1<GLTF.Schema.MeshPrimitive>
struct List_1_t87353362;
// System.Collections.Generic.List`1<GLTF.Schema.Node>
struct List_1_t1167779375;
// System.Collections.Generic.List`1<GLTF.Schema.NodeId>
struct List_1_t1111139301;
// System.Collections.Generic.List`1<GLTF.Schema.Sampler>
struct List_1_t2951094649;
// System.Collections.Generic.List`1<GLTF.Schema.Scene>
struct List_1_t3427735747;
// System.Collections.Generic.List`1<GLTF.Schema.Skin>
struct List_1_t1143834715;
// System.Collections.Generic.List`1<GLTF.Schema.Texture>
struct List_1_t2284271573;
// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.AccessorId>>
struct List_1_t1354100762;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t2066740105;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// System.Collections.Generic.List`1<System.String>
struct List_1_t3319525431;
// System.Collections.Generic.List`1<UnityGLTF.Cache.MeshCacheData[]>
struct List_1_t695246165;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.IO.FileStream
struct FileStream_t4292183065;
// System.IO.MemoryStream
struct MemoryStream_t94973147;
// System.IO.Stream
struct Stream_t1273022909;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t156472862;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Int32[][]
struct Int32U5BU5DU5BU5D_t3365920845;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t2342208608;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.Text.RegularExpressions.Capture
struct Capture_t2232016050;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t1927754563;
// System.Text.RegularExpressions.Group
struct Group_t2468205786;
// System.Text.RegularExpressions.GroupCollection
struct GroupCollection_t69770484;
// System.Text.RegularExpressions.Match
struct Match_t3408321083;
// System.Text.RegularExpressions.Regex
struct Regex_t3657309853;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_t4293407246;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t51159052;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t2916547576;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t2974092902;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t61518632;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.Uri
struct Uri_t100236324;
// System.Uri/UriInfo
struct UriInfo_t1092684687;
// System.UriParser
struct UriParser_t3890150400;
// System.Void
struct Void_t1185182177;
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.MeshCollider
struct MeshCollider_t903564387;
// UnityEngine.MeshFilter
struct MeshFilter_t3523625662;
// UnityEngine.MeshRenderer
struct MeshRenderer_t587009260;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557;
// UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t2149801800;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t3852015985;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Renderer
struct Renderer_t2627027031;
// UnityEngine.Shader
struct Shader_t4151988712;
// UnityEngine.Texture
struct Texture_t3661962703;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t149664596;
// UnityEngine.Texture[]
struct TextureU5BU5D_t908295702;
// UnityEngine.Transform
struct Transform_t3600365921;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t934056436;
// UnityGLTF.AsyncAction
struct AsyncAction_t3334821446;
// UnityGLTF.Cache.AssetCache
struct AssetCache_t783611398;
// UnityGLTF.Cache.BufferCacheData
struct BufferCacheData_t110091724;
// UnityGLTF.Cache.MaterialCacheData
struct MaterialCacheData_t2754836532;
// UnityGLTF.Cache.MaterialCacheData[]
struct MaterialCacheDataU5BU5D_t484490365;
// UnityGLTF.Cache.MeshCacheData
struct MeshCacheData_t1944180602;
// UnityGLTF.Cache.MeshCacheData[]
struct MeshCacheDataU5BU5D_t3518138719;
// UnityGLTF.Cache.MeshCacheData[][]
struct MeshCacheDataU5BU5DU5BU5D_t3916407366;
// UnityGLTF.GLTFComponent
struct GLTFComponent_t238219215;
// UnityGLTF.GLTFComponent/<Start>d__8
struct U3CStartU3Ed__8_t1918030142;
// UnityGLTF.GLTFSceneImporter
struct GLTFSceneImporter_t274320441;
// UnityGLTF.GLTFSceneImporter/<ImportScene>d__22
struct U3CImportSceneU3Ed__22_t599600113;
// UnityGLTF.GLTFSceneImporter/<Load>d__21
struct U3CLoadU3Ed__21_t2072795234;
// UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35
struct U3CLoadBufferU3Ed__35_t2608884095;
// UnityGLTF.GLTFSceneImporter/<LoadImage>d__34
struct U3CLoadImageU3Ed__34_t347840408;
// UnityGLTF.WebRequestException
struct WebRequestException_t1410780468;

extern RuntimeClass* Action_t1264377477_il2cpp_TypeInfo_var;
extern RuntimeClass* AssetCache_t783611398_il2cpp_TypeInfo_var;
extern RuntimeClass* AsyncAction_t3334821446_il2cpp_TypeInfo_var;
extern RuntimeClass* AttributeAccessor_t906274905_il2cpp_TypeInfo_var;
extern RuntimeClass* BufferCacheData_t110091724_il2cpp_TypeInfo_var;
extern RuntimeClass* ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var;
extern RuntimeClass* Convert_t2465617642_il2cpp_TypeInfo_var;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t2973298224_il2cpp_TypeInfo_var;
extern RuntimeClass* Dictionary_2_t691531204_il2cpp_TypeInfo_var;
extern RuntimeClass* DownloadHandlerTexture_t2149801800_il2cpp_TypeInfo_var;
extern RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ExtTextureTransformExtension_t1454646850_il2cpp_TypeInfo_var;
extern RuntimeClass* GLTFSceneImporter_t274320441_il2cpp_TypeInfo_var;
extern RuntimeClass* GameObject_t1113636619_il2cpp_TypeInfo_var;
extern RuntimeClass* Int64_t3736567304_il2cpp_TypeInfo_var;
extern RuntimeClass* KHR_materials_pbrSpecularGlossinessExtension_t1217762009_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var;
extern RuntimeClass* LoadType_t225521639_il2cpp_TypeInfo_var;
extern RuntimeClass* MaterialCacheData_t2754836532_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_t2790518843_il2cpp_TypeInfo_var;
extern RuntimeClass* Material_t340375123_il2cpp_TypeInfo_var;
extern RuntimeClass* MemoryStream_t94973147_il2cpp_TypeInfo_var;
extern RuntimeClass* MeshCacheDataU5BU5D_t3518138719_il2cpp_TypeInfo_var;
extern RuntimeClass* MeshCacheData_t1944180602_il2cpp_TypeInfo_var;
extern RuntimeClass* Mesh_t3648964284_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern RuntimeClass* Path_t1605229823_il2cpp_TypeInfo_var;
extern RuntimeClass* Regex_t3657309853_il2cpp_TypeInfo_var;
extern RuntimeClass* SchemaExtensions_t3846062055_il2cpp_TypeInfo_var;
extern RuntimeClass* SemanticProperties_t862543966_il2cpp_TypeInfo_var;
extern RuntimeClass* Texture2D_t3840446185_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CImportSceneU3Ed__22_t599600113_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CLoadBufferU3Ed__35_t2608884095_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CLoadImageU3Ed__34_t347840408_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CLoadU3Ed__21_t2072795234_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CStartU3Ed__8_t1918030142_il2cpp_TypeInfo_var;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector4_t3319028937_il2cpp_TypeInfo_var;
extern RuntimeClass* WebRequestException_t1410780468_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1270222075;
extern String_t* _stringLiteral134923747;
extern String_t* _stringLiteral1366107322;
extern String_t* _stringLiteral1394251666;
extern String_t* _stringLiteral150320106;
extern String_t* _stringLiteral1595134219;
extern String_t* _stringLiteral1668731369;
extern String_t* _stringLiteral173857951;
extern String_t* _stringLiteral1801776656;
extern String_t* _stringLiteral1810507830;
extern String_t* _stringLiteral2071373363;
extern String_t* _stringLiteral218779911;
extern String_t* _stringLiteral2191403227;
extern String_t* _stringLiteral2196942292;
extern String_t* _stringLiteral2200975496;
extern String_t* _stringLiteral2311315672;
extern String_t* _stringLiteral243366994;
extern String_t* _stringLiteral2445489756;
extern String_t* _stringLiteral247783397;
extern String_t* _stringLiteral2550118673;
extern String_t* _stringLiteral2678669937;
extern String_t* _stringLiteral2732841182;
extern String_t* _stringLiteral2758179804;
extern String_t* _stringLiteral2800895899;
extern String_t* _stringLiteral2875383692;
extern String_t* _stringLiteral2892157592;
extern String_t* _stringLiteral2906997769;
extern String_t* _stringLiteral3155662446;
extern String_t* _stringLiteral3184621405;
extern String_t* _stringLiteral3258293634;
extern String_t* _stringLiteral3327625703;
extern String_t* _stringLiteral3417796654;
extern String_t* _stringLiteral3452630243;
extern String_t* _stringLiteral3524756202;
extern String_t* _stringLiteral3579607444;
extern String_t* _stringLiteral3580957363;
extern String_t* _stringLiteral3626444962;
extern String_t* _stringLiteral380657706;
extern String_t* _stringLiteral3949742573;
extern String_t* _stringLiteral3957048425;
extern String_t* _stringLiteral3958763139;
extern String_t* _stringLiteral4134818583;
extern String_t* _stringLiteral4142678977;
extern String_t* _stringLiteral4181509080;
extern String_t* _stringLiteral731044324;
extern String_t* _stringLiteral757312457;
extern String_t* _stringLiteral757602046;
extern String_t* _stringLiteral776698491;
extern String_t* _stringLiteral778727724;
extern String_t* _stringLiteral840530743;
extern String_t* _stringLiteral85505625;
extern String_t* _stringLiteral941579186;
extern const RuntimeMethod* Dictionary_2_Add_m3713014608_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m1581467031_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m2046315356_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m485820497_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m3186304916_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m2569376538_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m517788400_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m649114996_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m1197856806_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m2249658819_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1259228363_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1477117687_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m1905243441_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2155416867_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Item_m2671063389_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m329187123_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_set_Item_m3918191617_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m3666935078_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m4272534395_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m1188984695_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m402865962_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3557287468_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3853553557_RuntimeMethod_var;
extern const RuntimeMethod* GLTFSceneImporter_U3CImportSceneU3Eb__22_0_m1839693015_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisMeshCollider_t903564387_m1821887173_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisMeshFilter_t3523625662_m262607486_RuntimeMethod_var;
extern const RuntimeMethod* GameObject_AddComponent_TisMeshRenderer_t587009260_m2704270113_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1610083374_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m270393519_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Contains_m195709148_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3308604002_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1059274901_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2233704377_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2917776829_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3096908490_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m3533462362_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m4192079870_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m430863746_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2012599669_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2536950298_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m2800780356_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m3831054255_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m4240667468_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m578470191_RuntimeMethod_var;
extern const RuntimeMethod* List_1_set_Item_m3842666524_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisTexture2D_t3840446185_m2566223136_RuntimeMethod_var;
extern const RuntimeMethod* U3CImportSceneU3Ed__22_MoveNext_m4284647012_RuntimeMethod_var;
extern const RuntimeMethod* U3CImportSceneU3Ed__22_System_Collections_IEnumerator_Reset_m1384092205_RuntimeMethod_var;
extern const RuntimeMethod* U3CLoadBufferU3Ed__35_System_Collections_IEnumerator_Reset_m956519408_RuntimeMethod_var;
extern const RuntimeMethod* U3CLoadImageU3Ed__34_MoveNext_m3821244950_RuntimeMethod_var;
extern const RuntimeMethod* U3CLoadImageU3Ed__34_System_Collections_IEnumerator_Reset_m319494151_RuntimeMethod_var;
extern const RuntimeMethod* U3CLoadU3Ed__21_MoveNext_m1636262611_RuntimeMethod_var;
extern const RuntimeMethod* U3CLoadU3Ed__21_System_Collections_IEnumerator_Reset_m2257599618_RuntimeMethod_var;
extern const RuntimeMethod* U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_m616509203_RuntimeMethod_var;
extern const uint32_t GLTFComponent_Start_m815783551_MetadataUsageId;
extern const uint32_t GLTFComponent__ctor_m494052798_MetadataUsageId;
extern const uint32_t GLTFSceneImporter_AbsoluteFilePath_m2222415970_MetadataUsageId;
extern const uint32_t GLTFSceneImporter_AbsoluteUriPath_m3886472302_MetadataUsageId;
extern const uint32_t GLTFSceneImporter_ApplyTextureTransform_m3840624985_MetadataUsageId;
extern const uint32_t GLTFSceneImporter_BuildAttributesForMeshes_m3432206748_MetadataUsageId;
extern const uint32_t GLTFSceneImporter_BuildMeshAttributes_m204857246_MetadataUsageId;
extern const uint32_t GLTFSceneImporter_CreateMaterial_m2608357372_MetadataUsageId;
extern const uint32_t GLTFSceneImporter_CreateMeshObject_m1035315303_MetadataUsageId;
extern const uint32_t GLTFSceneImporter_CreateMeshPrimitive_m3733527890_MetadataUsageId;
extern const uint32_t GLTFSceneImporter_CreateNode_m3930028413_MetadataUsageId;
extern const uint32_t GLTFSceneImporter_CreateScene_m1370845587_MetadataUsageId;
extern const uint32_t GLTFSceneImporter_CreateTexture_m847048103_MetadataUsageId;
extern const uint32_t GLTFSceneImporter_ImportScene_m2136484356_MetadataUsageId;
extern const uint32_t GLTFSceneImporter_LoadBuffer_m2914567583_MetadataUsageId;
extern const uint32_t GLTFSceneImporter_LoadImage_m653685946_MetadataUsageId;
extern const uint32_t GLTFSceneImporter_Load_m915775585_MetadataUsageId;
extern const uint32_t GLTFSceneImporter_SetShaderForMaterialType_m2318134295_MetadataUsageId;
extern const uint32_t GLTFSceneImporter_TransformAttributes_m3267586206_MetadataUsageId;
extern const uint32_t GLTFSceneImporter__ctor_m122975503_MetadataUsageId;
extern const uint32_t GLTFSceneImporter__ctor_m299105020_MetadataUsageId;
extern const uint32_t U3CImportSceneU3Ed__22_MoveNext_m4284647012_MetadataUsageId;
extern const uint32_t U3CImportSceneU3Ed__22_System_Collections_IEnumerator_Reset_m1384092205_MetadataUsageId;
extern const uint32_t U3CLoadBufferU3Ed__35_MoveNext_m1135036225_MetadataUsageId;
extern const uint32_t U3CLoadBufferU3Ed__35_System_Collections_IEnumerator_Reset_m956519408_MetadataUsageId;
extern const uint32_t U3CLoadImageU3Ed__34_MoveNext_m3821244950_MetadataUsageId;
extern const uint32_t U3CLoadImageU3Ed__34_System_Collections_IEnumerator_Reset_m319494151_MetadataUsageId;
extern const uint32_t U3CLoadU3Ed__21_MoveNext_m1636262611_MetadataUsageId;
extern const uint32_t U3CLoadU3Ed__21_System_Collections_IEnumerator_Reset_m2257599618_MetadataUsageId;
extern const uint32_t U3CStartU3Ed__8_MoveNext_m532355330_MetadataUsageId;
extern const uint32_t U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_m616509203_MetadataUsageId;
extern const uint32_t WebRequestException__ctor_m1100128511_MetadataUsageId;
extern const uint32_t WebRequestException__ctor_m2991602755_MetadataUsageId;
extern const uint32_t WebRequestException__ctor_m376355303_MetadataUsageId;
extern const uint32_t WebRequestException__ctor_m613315964_MetadataUsageId;
struct CertificateHandler_t2739891000_marshaled_com;
struct Color_t1637600301 ;
struct DownloadHandler_t2937767557_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t463507806_marshaled_com;
struct UnityWebRequest_t463507806_marshaled_pinvoke;
struct UploadHandler_t2993558019_marshaled_com;
struct Vector2_t4136528133 ;
struct Vector3_t4136528132 ;
struct Vector4_t4136528135 ;

struct ColorU5BU5D_t1735271552;
struct Vector2U5BU5D_t623575368;
struct Vector3U5BU5D_t137387629;
struct Vector4U5BU5D_t1595950846;
struct ByteU5BU5D_t4116647657;
struct Int32U5BU5D_t385246372;
struct ObjectU5BU5D_t2843939325;
struct StringU5BU5D_t1281789340;
struct UInt32U5BU5D_t2770800703;
struct ColorU5BU5D_t941916413;
struct Texture2DU5BU5D_t149664596;
struct TextureU5BU5D_t908295702;
struct Vector2U5BU5D_t1457185986;
struct Vector3U5BU5D_t1718750761;
struct Vector4U5BU5D_t934056436;
struct MaterialCacheDataU5BU5D_t484490365;
struct MeshCacheDataU5BU5D_t3518138719;


#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef GLTFID_1_T1862120373_H
#define GLTFID_1_T1862120373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFId`1<GLTF.Schema.Accessor>
struct  GLTFId_1_t1862120373  : public RuntimeObject
{
public:
	// System.Int32 GLTF.Schema.GLTFId`1::Id
	int32_t ___Id_0;
	// GLTF.Schema.GLTFRoot GLTF.Schema.GLTFId`1::Root
	GLTFRoot_t676886847 * ___Root_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GLTFId_1_t1862120373, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Root_1() { return static_cast<int32_t>(offsetof(GLTFId_1_t1862120373, ___Root_1)); }
	inline GLTFRoot_t676886847 * get_Root_1() const { return ___Root_1; }
	inline GLTFRoot_t676886847 ** get_address_of_Root_1() { return &___Root_1; }
	inline void set_Root_1(GLTFRoot_t676886847 * value)
	{
		___Root_1 = value;
		Il2CppCodeGenWriteBarrier((&___Root_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFID_1_T1862120373_H
#ifndef GLTFID_1_T1070037637_H
#define GLTFID_1_T1070037637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFId`1<GLTF.Schema.Buffer>
struct  GLTFId_1_t1070037637  : public RuntimeObject
{
public:
	// System.Int32 GLTF.Schema.GLTFId`1::Id
	int32_t ___Id_0;
	// GLTF.Schema.GLTFRoot GLTF.Schema.GLTFId`1::Root
	GLTFRoot_t676886847 * ___Root_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GLTFId_1_t1070037637, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Root_1() { return static_cast<int32_t>(offsetof(GLTFId_1_t1070037637, ___Root_1)); }
	inline GLTFRoot_t676886847 * get_Root_1() const { return ___Root_1; }
	inline GLTFRoot_t676886847 ** get_address_of_Root_1() { return &___Root_1; }
	inline void set_Root_1(GLTFRoot_t676886847 * value)
	{
		___Root_1 = value;
		Il2CppCodeGenWriteBarrier((&___Root_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFID_1_T1070037637_H
#ifndef GLTFID_1_T2850430986_H
#define GLTFID_1_T2850430986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFId`1<GLTF.Schema.BufferView>
struct  GLTFId_1_t2850430986  : public RuntimeObject
{
public:
	// System.Int32 GLTF.Schema.GLTFId`1::Id
	int32_t ___Id_0;
	// GLTF.Schema.GLTFRoot GLTF.Schema.GLTFId`1::Root
	GLTFRoot_t676886847 * ___Root_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GLTFId_1_t2850430986, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Root_1() { return static_cast<int32_t>(offsetof(GLTFId_1_t2850430986, ___Root_1)); }
	inline GLTFRoot_t676886847 * get_Root_1() const { return ___Root_1; }
	inline GLTFRoot_t676886847 ** get_address_of_Root_1() { return &___Root_1; }
	inline void set_Root_1(GLTFRoot_t676886847 * value)
	{
		___Root_1 = value;
		Il2CppCodeGenWriteBarrier((&___Root_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFID_1_T2850430986_H
#ifndef GLTFID_1_T982952535_H
#define GLTFID_1_T982952535_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFId`1<GLTF.Schema.Image>
struct  GLTFId_1_t982952535  : public RuntimeObject
{
public:
	// System.Int32 GLTF.Schema.GLTFId`1::Id
	int32_t ___Id_0;
	// GLTF.Schema.GLTFRoot GLTF.Schema.GLTFId`1::Root
	GLTFRoot_t676886847 * ___Root_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GLTFId_1_t982952535, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Root_1() { return static_cast<int32_t>(offsetof(GLTFId_1_t982952535, ___Root_1)); }
	inline GLTFRoot_t676886847 * get_Root_1() const { return ___Root_1; }
	inline GLTFRoot_t676886847 ** get_address_of_Root_1() { return &___Root_1; }
	inline void set_Root_1(GLTFRoot_t676886847 * value)
	{
		___Root_1 = value;
		Il2CppCodeGenWriteBarrier((&___Root_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFID_1_T982952535_H
#ifndef GLTFID_1_T2990850703_H
#define GLTFID_1_T2990850703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFId`1<GLTF.Schema.Material>
struct  GLTFId_1_t2990850703  : public RuntimeObject
{
public:
	// System.Int32 GLTF.Schema.GLTFId`1::Id
	int32_t ___Id_0;
	// GLTF.Schema.GLTFRoot GLTF.Schema.GLTFId`1::Root
	GLTFRoot_t676886847 * ___Root_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GLTFId_1_t2990850703, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Root_1() { return static_cast<int32_t>(offsetof(GLTFId_1_t2990850703, ___Root_1)); }
	inline GLTFRoot_t676886847 * get_Root_1() const { return ___Root_1; }
	inline GLTFRoot_t676886847 ** get_address_of_Root_1() { return &___Root_1; }
	inline void set_Root_1(GLTFRoot_t676886847 * value)
	{
		___Root_1 = value;
		Il2CppCodeGenWriteBarrier((&___Root_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFID_1_T2990850703_H
#ifndef GLTFID_1_T2926595089_H
#define GLTFID_1_T2926595089_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFId`1<GLTF.Schema.Mesh>
struct  GLTFId_1_t2926595089  : public RuntimeObject
{
public:
	// System.Int32 GLTF.Schema.GLTFId`1::Id
	int32_t ___Id_0;
	// GLTF.Schema.GLTFRoot GLTF.Schema.GLTFId`1::Root
	GLTFRoot_t676886847 * ___Root_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GLTFId_1_t2926595089, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Root_1() { return static_cast<int32_t>(offsetof(GLTFId_1_t2926595089, ___Root_1)); }
	inline GLTFRoot_t676886847 * get_Root_1() const { return ___Root_1; }
	inline GLTFRoot_t676886847 ** get_address_of_Root_1() { return &___Root_1; }
	inline void set_Root_1(GLTFRoot_t676886847 * value)
	{
		___Root_1 = value;
		Il2CppCodeGenWriteBarrier((&___Root_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFID_1_T2926595089_H
#ifndef GLTFID_1_T4191003789_H
#define GLTFID_1_T4191003789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFId`1<GLTF.Schema.Node>
struct  GLTFId_1_t4191003789  : public RuntimeObject
{
public:
	// System.Int32 GLTF.Schema.GLTFId`1::Id
	int32_t ___Id_0;
	// GLTF.Schema.GLTFRoot GLTF.Schema.GLTFId`1::Root
	GLTFRoot_t676886847 * ___Root_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GLTFId_1_t4191003789, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Root_1() { return static_cast<int32_t>(offsetof(GLTFId_1_t4191003789, ___Root_1)); }
	inline GLTFRoot_t676886847 * get_Root_1() const { return ___Root_1; }
	inline GLTFRoot_t676886847 ** get_address_of_Root_1() { return &___Root_1; }
	inline void set_Root_1(GLTFRoot_t676886847 * value)
	{
		___Root_1 = value;
		Il2CppCodeGenWriteBarrier((&___Root_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFID_1_T4191003789_H
#ifndef GLTFID_1_T1679351767_H
#define GLTFID_1_T1679351767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFId`1<GLTF.Schema.Sampler>
struct  GLTFId_1_t1679351767  : public RuntimeObject
{
public:
	// System.Int32 GLTF.Schema.GLTFId`1::Id
	int32_t ___Id_0;
	// GLTF.Schema.GLTFRoot GLTF.Schema.GLTFId`1::Root
	GLTFRoot_t676886847 * ___Root_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GLTFId_1_t1679351767, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Root_1() { return static_cast<int32_t>(offsetof(GLTFId_1_t1679351767, ___Root_1)); }
	inline GLTFRoot_t676886847 * get_Root_1() const { return ___Root_1; }
	inline GLTFRoot_t676886847 ** get_address_of_Root_1() { return &___Root_1; }
	inline void set_Root_1(GLTFRoot_t676886847 * value)
	{
		___Root_1 = value;
		Il2CppCodeGenWriteBarrier((&___Root_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFID_1_T1679351767_H
#ifndef GLTFID_1_T1012528691_H
#define GLTFID_1_T1012528691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFId`1<GLTF.Schema.Texture>
struct  GLTFId_1_t1012528691  : public RuntimeObject
{
public:
	// System.Int32 GLTF.Schema.GLTFId`1::Id
	int32_t ___Id_0;
	// GLTF.Schema.GLTFRoot GLTF.Schema.GLTFId`1::Root
	GLTFRoot_t676886847 * ___Root_1;

public:
	inline static int32_t get_offset_of_Id_0() { return static_cast<int32_t>(offsetof(GLTFId_1_t1012528691, ___Id_0)); }
	inline int32_t get_Id_0() const { return ___Id_0; }
	inline int32_t* get_address_of_Id_0() { return &___Id_0; }
	inline void set_Id_0(int32_t value)
	{
		___Id_0 = value;
	}

	inline static int32_t get_offset_of_Root_1() { return static_cast<int32_t>(offsetof(GLTFId_1_t1012528691, ___Root_1)); }
	inline GLTFRoot_t676886847 * get_Root_1() const { return ___Root_1; }
	inline GLTFRoot_t676886847 ** get_address_of_Root_1() { return &___Root_1; }
	inline void set_Root_1(GLTFRoot_t676886847 * value)
	{
		___Root_1 = value;
		Il2CppCodeGenWriteBarrier((&___Root_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFID_1_T1012528691_H
#ifndef GLTFPROPERTY_T1589224293_H
#define GLTFPROPERTY_T1589224293_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFProperty
struct  GLTFProperty_t1589224293  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.IExtension> GLTF.Schema.GLTFProperty::Extensions
	Dictionary_2_t395211613 * ___Extensions_4;
	// Newtonsoft.Json.Linq.JToken GLTF.Schema.GLTFProperty::Extras
	JToken_t1038539247 * ___Extras_5;

public:
	inline static int32_t get_offset_of_Extensions_4() { return static_cast<int32_t>(offsetof(GLTFProperty_t1589224293, ___Extensions_4)); }
	inline Dictionary_2_t395211613 * get_Extensions_4() const { return ___Extensions_4; }
	inline Dictionary_2_t395211613 ** get_address_of_Extensions_4() { return &___Extensions_4; }
	inline void set_Extensions_4(Dictionary_2_t395211613 * value)
	{
		___Extensions_4 = value;
		Il2CppCodeGenWriteBarrier((&___Extensions_4), value);
	}

	inline static int32_t get_offset_of_Extras_5() { return static_cast<int32_t>(offsetof(GLTFProperty_t1589224293, ___Extras_5)); }
	inline JToken_t1038539247 * get_Extras_5() const { return ___Extras_5; }
	inline JToken_t1038539247 ** get_address_of_Extras_5() { return &___Extras_5; }
	inline void set_Extras_5(JToken_t1038539247 * value)
	{
		___Extras_5 = value;
		Il2CppCodeGenWriteBarrier((&___Extras_5), value);
	}
};

struct GLTFProperty_t1589224293_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.ExtensionFactory> GLTF.Schema.GLTFProperty::_extensionRegistry
	Dictionary_2_t3086455368 * ____extensionRegistry_0;
	// GLTF.Schema.DefaultExtensionFactory GLTF.Schema.GLTFProperty::_defaultExtensionFactory
	DefaultExtensionFactory_t3535768014 * ____defaultExtensionFactory_1;
	// GLTF.Schema.KHR_materials_pbrSpecularGlossinessExtensionFactory GLTF.Schema.GLTFProperty::_KHRExtensionFactory
	KHR_materials_pbrSpecularGlossinessExtensionFactory_t3070429945 * ____KHRExtensionFactory_2;
	// GLTF.Schema.ExtTextureTransformExtensionFactory GLTF.Schema.GLTFProperty::_TexTransformFactory
	ExtTextureTransformExtensionFactory_t766531290 * ____TexTransformFactory_3;

public:
	inline static int32_t get_offset_of__extensionRegistry_0() { return static_cast<int32_t>(offsetof(GLTFProperty_t1589224293_StaticFields, ____extensionRegistry_0)); }
	inline Dictionary_2_t3086455368 * get__extensionRegistry_0() const { return ____extensionRegistry_0; }
	inline Dictionary_2_t3086455368 ** get_address_of__extensionRegistry_0() { return &____extensionRegistry_0; }
	inline void set__extensionRegistry_0(Dictionary_2_t3086455368 * value)
	{
		____extensionRegistry_0 = value;
		Il2CppCodeGenWriteBarrier((&____extensionRegistry_0), value);
	}

	inline static int32_t get_offset_of__defaultExtensionFactory_1() { return static_cast<int32_t>(offsetof(GLTFProperty_t1589224293_StaticFields, ____defaultExtensionFactory_1)); }
	inline DefaultExtensionFactory_t3535768014 * get__defaultExtensionFactory_1() const { return ____defaultExtensionFactory_1; }
	inline DefaultExtensionFactory_t3535768014 ** get_address_of__defaultExtensionFactory_1() { return &____defaultExtensionFactory_1; }
	inline void set__defaultExtensionFactory_1(DefaultExtensionFactory_t3535768014 * value)
	{
		____defaultExtensionFactory_1 = value;
		Il2CppCodeGenWriteBarrier((&____defaultExtensionFactory_1), value);
	}

	inline static int32_t get_offset_of__KHRExtensionFactory_2() { return static_cast<int32_t>(offsetof(GLTFProperty_t1589224293_StaticFields, ____KHRExtensionFactory_2)); }
	inline KHR_materials_pbrSpecularGlossinessExtensionFactory_t3070429945 * get__KHRExtensionFactory_2() const { return ____KHRExtensionFactory_2; }
	inline KHR_materials_pbrSpecularGlossinessExtensionFactory_t3070429945 ** get_address_of__KHRExtensionFactory_2() { return &____KHRExtensionFactory_2; }
	inline void set__KHRExtensionFactory_2(KHR_materials_pbrSpecularGlossinessExtensionFactory_t3070429945 * value)
	{
		____KHRExtensionFactory_2 = value;
		Il2CppCodeGenWriteBarrier((&____KHRExtensionFactory_2), value);
	}

	inline static int32_t get_offset_of__TexTransformFactory_3() { return static_cast<int32_t>(offsetof(GLTFProperty_t1589224293_StaticFields, ____TexTransformFactory_3)); }
	inline ExtTextureTransformExtensionFactory_t766531290 * get__TexTransformFactory_3() const { return ____TexTransformFactory_3; }
	inline ExtTextureTransformExtensionFactory_t766531290 ** get_address_of__TexTransformFactory_3() { return &____TexTransformFactory_3; }
	inline void set__TexTransformFactory_3(ExtTextureTransformExtensionFactory_t766531290 * value)
	{
		____TexTransformFactory_3 = value;
		Il2CppCodeGenWriteBarrier((&____TexTransformFactory_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFPROPERTY_T1589224293_H
#ifndef SEMANTICPROPERTIES_T862543966_H
#define SEMANTICPROPERTIES_T862543966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.SemanticProperties
struct  SemanticProperties_t862543966  : public RuntimeObject
{
public:

public:
};

struct SemanticProperties_t862543966_StaticFields
{
public:
	// System.String GLTF.Schema.SemanticProperties::POSITION
	String_t* ___POSITION_0;
	// System.String GLTF.Schema.SemanticProperties::NORMAL
	String_t* ___NORMAL_1;
	// System.String GLTF.Schema.SemanticProperties::JOINT
	String_t* ___JOINT_2;
	// System.String GLTF.Schema.SemanticProperties::WEIGHT
	String_t* ___WEIGHT_3;
	// System.String GLTF.Schema.SemanticProperties::TANGENT
	String_t* ___TANGENT_4;
	// System.String GLTF.Schema.SemanticProperties::INDICES
	String_t* ___INDICES_5;

public:
	inline static int32_t get_offset_of_POSITION_0() { return static_cast<int32_t>(offsetof(SemanticProperties_t862543966_StaticFields, ___POSITION_0)); }
	inline String_t* get_POSITION_0() const { return ___POSITION_0; }
	inline String_t** get_address_of_POSITION_0() { return &___POSITION_0; }
	inline void set_POSITION_0(String_t* value)
	{
		___POSITION_0 = value;
		Il2CppCodeGenWriteBarrier((&___POSITION_0), value);
	}

	inline static int32_t get_offset_of_NORMAL_1() { return static_cast<int32_t>(offsetof(SemanticProperties_t862543966_StaticFields, ___NORMAL_1)); }
	inline String_t* get_NORMAL_1() const { return ___NORMAL_1; }
	inline String_t** get_address_of_NORMAL_1() { return &___NORMAL_1; }
	inline void set_NORMAL_1(String_t* value)
	{
		___NORMAL_1 = value;
		Il2CppCodeGenWriteBarrier((&___NORMAL_1), value);
	}

	inline static int32_t get_offset_of_JOINT_2() { return static_cast<int32_t>(offsetof(SemanticProperties_t862543966_StaticFields, ___JOINT_2)); }
	inline String_t* get_JOINT_2() const { return ___JOINT_2; }
	inline String_t** get_address_of_JOINT_2() { return &___JOINT_2; }
	inline void set_JOINT_2(String_t* value)
	{
		___JOINT_2 = value;
		Il2CppCodeGenWriteBarrier((&___JOINT_2), value);
	}

	inline static int32_t get_offset_of_WEIGHT_3() { return static_cast<int32_t>(offsetof(SemanticProperties_t862543966_StaticFields, ___WEIGHT_3)); }
	inline String_t* get_WEIGHT_3() const { return ___WEIGHT_3; }
	inline String_t** get_address_of_WEIGHT_3() { return &___WEIGHT_3; }
	inline void set_WEIGHT_3(String_t* value)
	{
		___WEIGHT_3 = value;
		Il2CppCodeGenWriteBarrier((&___WEIGHT_3), value);
	}

	inline static int32_t get_offset_of_TANGENT_4() { return static_cast<int32_t>(offsetof(SemanticProperties_t862543966_StaticFields, ___TANGENT_4)); }
	inline String_t* get_TANGENT_4() const { return ___TANGENT_4; }
	inline String_t** get_address_of_TANGENT_4() { return &___TANGENT_4; }
	inline void set_TANGENT_4(String_t* value)
	{
		___TANGENT_4 = value;
		Il2CppCodeGenWriteBarrier((&___TANGENT_4), value);
	}

	inline static int32_t get_offset_of_INDICES_5() { return static_cast<int32_t>(offsetof(SemanticProperties_t862543966_StaticFields, ___INDICES_5)); }
	inline String_t* get_INDICES_5() const { return ___INDICES_5; }
	inline String_t** get_address_of_INDICES_5() { return &___INDICES_5; }
	inline void set_INDICES_5(String_t* value)
	{
		___INDICES_5 = value;
		Il2CppCodeGenWriteBarrier((&___INDICES_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SEMANTICPROPERTIES_T862543966_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef DICTIONARY_2_T3293772351_H
#define DICTIONARY_2_T3293772351_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityGLTF.Cache.BufferCacheData>
struct  Dictionary_2_t3293772351  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2783951582* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3483447822 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t714849373 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ___entries_1)); }
	inline EntryU5BU5D_t2783951582* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2783951582** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2783951582* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ___keys_7)); }
	inline KeyCollection_t3483447822 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3483447822 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3483447822 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ___values_8)); }
	inline ValueCollection_t714849373 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t714849373 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t714849373 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3293772351, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T3293772351_H
#ifndef DICTIONARY_2_T691531204_H
#define DICTIONARY_2_T691531204_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,GLTF.AttributeAccessor>
struct  Dictionary_2_t691531204  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t868759461* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t881206675 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2407575522 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t691531204, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t691531204, ___entries_1)); }
	inline EntryU5BU5D_t868759461* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t868759461** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t868759461* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t691531204, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t691531204, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t691531204, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t691531204, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t691531204, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t691531204, ___keys_7)); }
	inline KeyCollection_t881206675 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t881206675 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t881206675 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t691531204, ___values_8)); }
	inline ValueCollection_t2407575522 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2407575522 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2407575522 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t691531204, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T691531204_H
#ifndef DICTIONARY_2_T4176993316_H
#define DICTIONARY_2_T4176993316_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.AccessorId>
struct  Dictionary_2_t4176993316  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2878464965* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t71701491 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t1598070338 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t4176993316, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t4176993316, ___entries_1)); }
	inline EntryU5BU5D_t2878464965* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2878464965** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2878464965* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t4176993316, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t4176993316, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t4176993316, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t4176993316, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t4176993316, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t4176993316, ___keys_7)); }
	inline KeyCollection_t71701491 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t71701491 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t71701491 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t4176993316, ___values_8)); }
	inline ValueCollection_t1598070338 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t1598070338 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t1598070338 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t4176993316, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T4176993316_H
#ifndef DICTIONARY_2_T395211613_H
#define DICTIONARY_2_T395211613_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.IExtension>
struct  Dictionary_2_t395211613  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t197219208* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t584887084 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2111255931 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t395211613, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t395211613, ___entries_1)); }
	inline EntryU5BU5D_t197219208* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t197219208** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t197219208* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t395211613, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t395211613, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t395211613, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t395211613, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t395211613, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t395211613, ___keys_7)); }
	inline KeyCollection_t584887084 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t584887084 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t584887084 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t395211613, ___values_8)); }
	inline ValueCollection_t2111255931 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2111255931 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2111255931 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t395211613, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T395211613_H
#ifndef DICTIONARY_2_T2973298224_H
#define DICTIONARY_2_T2973298224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<UnityGLTF.GLTFSceneImporter/MaterialType,UnityEngine.Shader>
struct  Dictionary_2_t2973298224  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t385246372* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1751116809* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3162973695 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t394375246 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2973298224, ___buckets_0)); }
	inline Int32U5BU5D_t385246372* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t385246372** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t385246372* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2973298224, ___entries_1)); }
	inline EntryU5BU5D_t1751116809* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1751116809** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1751116809* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((&___entries_1), value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2973298224, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2973298224, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2973298224, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2973298224, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2973298224, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2973298224, ___keys_7)); }
	inline KeyCollection_t3162973695 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3162973695 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3162973695 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2973298224, ___values_8)); }
	inline ValueCollection_t394375246 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t394375246 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t394375246 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2973298224, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T2973298224_H
#ifndef LIST_1_T2341780519_H
#define LIST_1_T2341780519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.Buffer>
struct  List_1_t2341780519  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BufferU5BU5D_t3404391404* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2341780519, ____items_1)); }
	inline BufferU5BU5D_t3404391404* get__items_1() const { return ____items_1; }
	inline BufferU5BU5D_t3404391404** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BufferU5BU5D_t3404391404* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2341780519, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2341780519, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2341780519, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2341780519_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BufferU5BU5D_t3404391404* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2341780519_StaticFields, ____emptyArray_5)); }
	inline BufferU5BU5D_t3404391404* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BufferU5BU5D_t3404391404** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BufferU5BU5D_t3404391404* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2341780519_H
#ifndef LIST_1_T2254695417_H
#define LIST_1_T2254695417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.Image>
struct  List_1_t2254695417  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ImageU5BU5D_t562016402* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2254695417, ____items_1)); }
	inline ImageU5BU5D_t562016402* get__items_1() const { return ____items_1; }
	inline ImageU5BU5D_t562016402** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ImageU5BU5D_t562016402* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2254695417, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2254695417, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2254695417, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2254695417_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ImageU5BU5D_t562016402* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2254695417_StaticFields, ____emptyArray_5)); }
	inline ImageU5BU5D_t562016402* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ImageU5BU5D_t562016402** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ImageU5BU5D_t562016402* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2254695417_H
#ifndef LIST_1_T4262593585_H
#define LIST_1_T4262593585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.Material>
struct  List_1_t4262593585  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t1970395258* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4262593585, ____items_1)); }
	inline MaterialU5BU5D_t1970395258* get__items_1() const { return ____items_1; }
	inline MaterialU5BU5D_t1970395258** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MaterialU5BU5D_t1970395258* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4262593585, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4262593585, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4262593585, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t4262593585_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MaterialU5BU5D_t1970395258* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4262593585_StaticFields, ____emptyArray_5)); }
	inline MaterialU5BU5D_t1970395258* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MaterialU5BU5D_t1970395258** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MaterialU5BU5D_t1970395258* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4262593585_H
#ifndef LIST_1_T4198337971_H
#define LIST_1_T4198337971_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.Mesh>
struct  List_1_t4198337971  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MeshU5BU5D_t1017691824* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4198337971, ____items_1)); }
	inline MeshU5BU5D_t1017691824* get__items_1() const { return ____items_1; }
	inline MeshU5BU5D_t1017691824** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MeshU5BU5D_t1017691824* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4198337971, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4198337971, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4198337971, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t4198337971_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MeshU5BU5D_t1017691824* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4198337971_StaticFields, ____emptyArray_5)); }
	inline MeshU5BU5D_t1017691824* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MeshU5BU5D_t1017691824** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MeshU5BU5D_t1017691824* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T4198337971_H
#ifndef LIST_1_T87353362_H
#define LIST_1_T87353362_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.MeshPrimitive>
struct  List_1_t87353362  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MeshPrimitiveU5BU5D_t3392744437* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t87353362, ____items_1)); }
	inline MeshPrimitiveU5BU5D_t3392744437* get__items_1() const { return ____items_1; }
	inline MeshPrimitiveU5BU5D_t3392744437** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MeshPrimitiveU5BU5D_t3392744437* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t87353362, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t87353362, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t87353362, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t87353362_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MeshPrimitiveU5BU5D_t3392744437* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t87353362_StaticFields, ____emptyArray_5)); }
	inline MeshPrimitiveU5BU5D_t3392744437* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MeshPrimitiveU5BU5D_t3392744437** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MeshPrimitiveU5BU5D_t3392744437* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T87353362_H
#ifndef LIST_1_T1111139301_H
#define LIST_1_T1111139301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.NodeId>
struct  List_1_t1111139301  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	NodeIdU5BU5D_t520773494* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1111139301, ____items_1)); }
	inline NodeIdU5BU5D_t520773494* get__items_1() const { return ____items_1; }
	inline NodeIdU5BU5D_t520773494** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(NodeIdU5BU5D_t520773494* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1111139301, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1111139301, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1111139301, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t1111139301_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	NodeIdU5BU5D_t520773494* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1111139301_StaticFields, ____emptyArray_5)); }
	inline NodeIdU5BU5D_t520773494* get__emptyArray_5() const { return ____emptyArray_5; }
	inline NodeIdU5BU5D_t520773494** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(NodeIdU5BU5D_t520773494* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1111139301_H
#ifndef LIST_1_T3427735747_H
#define LIST_1_T3427735747_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.Scene>
struct  List_1_t3427735747  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SceneU5BU5D_t2571818336* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3427735747, ____items_1)); }
	inline SceneU5BU5D_t2571818336* get__items_1() const { return ____items_1; }
	inline SceneU5BU5D_t2571818336** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SceneU5BU5D_t2571818336* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3427735747, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3427735747, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3427735747, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3427735747_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SceneU5BU5D_t2571818336* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3427735747_StaticFields, ____emptyArray_5)); }
	inline SceneU5BU5D_t2571818336* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SceneU5BU5D_t2571818336** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SceneU5BU5D_t2571818336* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3427735747_H
#ifndef LIST_1_T2284271573_H
#define LIST_1_T2284271573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<GLTF.Schema.Texture>
struct  List_1_t2284271573  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TextureU5BU5D_t1584057798* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2284271573, ____items_1)); }
	inline TextureU5BU5D_t1584057798* get__items_1() const { return ____items_1; }
	inline TextureU5BU5D_t1584057798** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TextureU5BU5D_t1584057798* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2284271573, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2284271573, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t2284271573, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t2284271573_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TextureU5BU5D_t1584057798* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t2284271573_StaticFields, ____emptyArray_5)); }
	inline TextureU5BU5D_t1584057798* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TextureU5BU5D_t1584057798** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TextureU5BU5D_t1584057798* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2284271573_H
#ifndef LIST_1_T3319525431_H
#define LIST_1_T3319525431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.String>
struct  List_1_t3319525431  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t1281789340* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____items_1)); }
	inline StringU5BU5D_t1281789340* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t1281789340** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t1281789340* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3319525431, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t3319525431_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t1281789340* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3319525431_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t1281789340* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t1281789340** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t1281789340* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3319525431_H
#ifndef LIST_1_T695246165_H
#define LIST_1_T695246165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityGLTF.Cache.MeshCacheData[]>
struct  List_1_t695246165  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MeshCacheDataU5BU5DU5BU5D_t3916407366* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t695246165, ____items_1)); }
	inline MeshCacheDataU5BU5DU5BU5D_t3916407366* get__items_1() const { return ____items_1; }
	inline MeshCacheDataU5BU5DU5BU5D_t3916407366** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MeshCacheDataU5BU5DU5BU5D_t3916407366* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t695246165, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t695246165, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t695246165, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

struct List_1_t695246165_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MeshCacheDataU5BU5DU5BU5D_t3916407366* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t695246165_StaticFields, ____emptyArray_5)); }
	inline MeshCacheDataU5BU5DU5BU5D_t3916407366* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MeshCacheDataU5BU5DU5BU5D_t3916407366** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MeshCacheDataU5BU5DU5BU5D_t3916407366* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((&____emptyArray_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T695246165_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
#ifndef MARSHALBYREFOBJECT_T2760389100_H
#define MARSHALBYREFOBJECT_T2760389100_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t2760389100  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t2342208608 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t2760389100, ____identity_0)); }
	inline ServerIdentity_t2342208608 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t2342208608 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t2342208608 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_pinvoke
{
	ServerIdentity_t2342208608 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t2760389100_marshaled_com
{
	ServerIdentity_t2342208608 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T2760389100_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef CAPTURE_T2232016050_H
#define CAPTURE_T2232016050_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Capture
struct  Capture_t2232016050  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Capture::_text
	String_t* ____text_0;
	// System.Int32 System.Text.RegularExpressions.Capture::_index
	int32_t ____index_1;
	// System.Int32 System.Text.RegularExpressions.Capture::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__text_0() { return static_cast<int32_t>(offsetof(Capture_t2232016050, ____text_0)); }
	inline String_t* get__text_0() const { return ____text_0; }
	inline String_t** get_address_of__text_0() { return &____text_0; }
	inline void set__text_0(String_t* value)
	{
		____text_0 = value;
		Il2CppCodeGenWriteBarrier((&____text_0), value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Capture_t2232016050, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Capture_t2232016050, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAPTURE_T2232016050_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef ASYNCACTION_T3334821446_H
#define ASYNCACTION_T3334821446_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.AsyncAction
struct  AsyncAction_t3334821446  : public RuntimeObject
{
public:
	// System.Boolean UnityGLTF.AsyncAction::_workerThreadRunning
	bool ____workerThreadRunning_0;
	// System.Exception UnityGLTF.AsyncAction::_savedException
	Exception_t * ____savedException_1;

public:
	inline static int32_t get_offset_of__workerThreadRunning_0() { return static_cast<int32_t>(offsetof(AsyncAction_t3334821446, ____workerThreadRunning_0)); }
	inline bool get__workerThreadRunning_0() const { return ____workerThreadRunning_0; }
	inline bool* get_address_of__workerThreadRunning_0() { return &____workerThreadRunning_0; }
	inline void set__workerThreadRunning_0(bool value)
	{
		____workerThreadRunning_0 = value;
	}

	inline static int32_t get_offset_of__savedException_1() { return static_cast<int32_t>(offsetof(AsyncAction_t3334821446, ____savedException_1)); }
	inline Exception_t * get__savedException_1() const { return ____savedException_1; }
	inline Exception_t ** get_address_of__savedException_1() { return &____savedException_1; }
	inline void set__savedException_1(Exception_t * value)
	{
		____savedException_1 = value;
		Il2CppCodeGenWriteBarrier((&____savedException_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCACTION_T3334821446_H
#ifndef ASSETCACHE_T783611398_H
#define ASSETCACHE_T783611398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.Cache.AssetCache
struct  AssetCache_t783611398  : public RuntimeObject
{
public:
	// UnityEngine.Texture2D[] UnityGLTF.Cache.AssetCache::<ImageCache>k__BackingField
	Texture2DU5BU5D_t149664596* ___U3CImageCacheU3Ek__BackingField_0;
	// UnityEngine.Texture[] UnityGLTF.Cache.AssetCache::<TextureCache>k__BackingField
	TextureU5BU5D_t908295702* ___U3CTextureCacheU3Ek__BackingField_1;
	// UnityGLTF.Cache.MaterialCacheData[] UnityGLTF.Cache.AssetCache::<MaterialCache>k__BackingField
	MaterialCacheDataU5BU5D_t484490365* ___U3CMaterialCacheU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityGLTF.Cache.BufferCacheData> UnityGLTF.Cache.AssetCache::<BufferCache>k__BackingField
	Dictionary_2_t3293772351 * ___U3CBufferCacheU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<UnityGLTF.Cache.MeshCacheData[]> UnityGLTF.Cache.AssetCache::<MeshCache>k__BackingField
	List_1_t695246165 * ___U3CMeshCacheU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CImageCacheU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AssetCache_t783611398, ___U3CImageCacheU3Ek__BackingField_0)); }
	inline Texture2DU5BU5D_t149664596* get_U3CImageCacheU3Ek__BackingField_0() const { return ___U3CImageCacheU3Ek__BackingField_0; }
	inline Texture2DU5BU5D_t149664596** get_address_of_U3CImageCacheU3Ek__BackingField_0() { return &___U3CImageCacheU3Ek__BackingField_0; }
	inline void set_U3CImageCacheU3Ek__BackingField_0(Texture2DU5BU5D_t149664596* value)
	{
		___U3CImageCacheU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CImageCacheU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CTextureCacheU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AssetCache_t783611398, ___U3CTextureCacheU3Ek__BackingField_1)); }
	inline TextureU5BU5D_t908295702* get_U3CTextureCacheU3Ek__BackingField_1() const { return ___U3CTextureCacheU3Ek__BackingField_1; }
	inline TextureU5BU5D_t908295702** get_address_of_U3CTextureCacheU3Ek__BackingField_1() { return &___U3CTextureCacheU3Ek__BackingField_1; }
	inline void set_U3CTextureCacheU3Ek__BackingField_1(TextureU5BU5D_t908295702* value)
	{
		___U3CTextureCacheU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CTextureCacheU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CMaterialCacheU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AssetCache_t783611398, ___U3CMaterialCacheU3Ek__BackingField_2)); }
	inline MaterialCacheDataU5BU5D_t484490365* get_U3CMaterialCacheU3Ek__BackingField_2() const { return ___U3CMaterialCacheU3Ek__BackingField_2; }
	inline MaterialCacheDataU5BU5D_t484490365** get_address_of_U3CMaterialCacheU3Ek__BackingField_2() { return &___U3CMaterialCacheU3Ek__BackingField_2; }
	inline void set_U3CMaterialCacheU3Ek__BackingField_2(MaterialCacheDataU5BU5D_t484490365* value)
	{
		___U3CMaterialCacheU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMaterialCacheU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CBufferCacheU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AssetCache_t783611398, ___U3CBufferCacheU3Ek__BackingField_3)); }
	inline Dictionary_2_t3293772351 * get_U3CBufferCacheU3Ek__BackingField_3() const { return ___U3CBufferCacheU3Ek__BackingField_3; }
	inline Dictionary_2_t3293772351 ** get_address_of_U3CBufferCacheU3Ek__BackingField_3() { return &___U3CBufferCacheU3Ek__BackingField_3; }
	inline void set_U3CBufferCacheU3Ek__BackingField_3(Dictionary_2_t3293772351 * value)
	{
		___U3CBufferCacheU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CBufferCacheU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CMeshCacheU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AssetCache_t783611398, ___U3CMeshCacheU3Ek__BackingField_4)); }
	inline List_1_t695246165 * get_U3CMeshCacheU3Ek__BackingField_4() const { return ___U3CMeshCacheU3Ek__BackingField_4; }
	inline List_1_t695246165 ** get_address_of_U3CMeshCacheU3Ek__BackingField_4() { return &___U3CMeshCacheU3Ek__BackingField_4; }
	inline void set_U3CMeshCacheU3Ek__BackingField_4(List_1_t695246165 * value)
	{
		___U3CMeshCacheU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMeshCacheU3Ek__BackingField_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSETCACHE_T783611398_H
#ifndef BUFFERCACHEDATA_T110091724_H
#define BUFFERCACHEDATA_T110091724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.Cache.BufferCacheData
struct  BufferCacheData_t110091724  : public RuntimeObject
{
public:
	// System.Int64 UnityGLTF.Cache.BufferCacheData::<ChunkOffset>k__BackingField
	int64_t ___U3CChunkOffsetU3Ek__BackingField_0;
	// System.IO.Stream UnityGLTF.Cache.BufferCacheData::<Stream>k__BackingField
	Stream_t1273022909 * ___U3CStreamU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CChunkOffsetU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BufferCacheData_t110091724, ___U3CChunkOffsetU3Ek__BackingField_0)); }
	inline int64_t get_U3CChunkOffsetU3Ek__BackingField_0() const { return ___U3CChunkOffsetU3Ek__BackingField_0; }
	inline int64_t* get_address_of_U3CChunkOffsetU3Ek__BackingField_0() { return &___U3CChunkOffsetU3Ek__BackingField_0; }
	inline void set_U3CChunkOffsetU3Ek__BackingField_0(int64_t value)
	{
		___U3CChunkOffsetU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CStreamU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BufferCacheData_t110091724, ___U3CStreamU3Ek__BackingField_1)); }
	inline Stream_t1273022909 * get_U3CStreamU3Ek__BackingField_1() const { return ___U3CStreamU3Ek__BackingField_1; }
	inline Stream_t1273022909 ** get_address_of_U3CStreamU3Ek__BackingField_1() { return &___U3CStreamU3Ek__BackingField_1; }
	inline void set_U3CStreamU3Ek__BackingField_1(Stream_t1273022909 * value)
	{
		___U3CStreamU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CStreamU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFERCACHEDATA_T110091724_H
#ifndef MATERIALCACHEDATA_T2754836532_H
#define MATERIALCACHEDATA_T2754836532_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.Cache.MaterialCacheData
struct  MaterialCacheData_t2754836532  : public RuntimeObject
{
public:
	// UnityEngine.Material UnityGLTF.Cache.MaterialCacheData::<UnityMaterial>k__BackingField
	Material_t340375123 * ___U3CUnityMaterialU3Ek__BackingField_0;
	// UnityEngine.Material UnityGLTF.Cache.MaterialCacheData::<UnityMaterialWithVertexColor>k__BackingField
	Material_t340375123 * ___U3CUnityMaterialWithVertexColorU3Ek__BackingField_1;
	// GLTF.Schema.Material UnityGLTF.Cache.MaterialCacheData::<GLTFMaterial>k__BackingField
	Material_t2790518843 * ___U3CGLTFMaterialU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CUnityMaterialU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MaterialCacheData_t2754836532, ___U3CUnityMaterialU3Ek__BackingField_0)); }
	inline Material_t340375123 * get_U3CUnityMaterialU3Ek__BackingField_0() const { return ___U3CUnityMaterialU3Ek__BackingField_0; }
	inline Material_t340375123 ** get_address_of_U3CUnityMaterialU3Ek__BackingField_0() { return &___U3CUnityMaterialU3Ek__BackingField_0; }
	inline void set_U3CUnityMaterialU3Ek__BackingField_0(Material_t340375123 * value)
	{
		___U3CUnityMaterialU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUnityMaterialU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CUnityMaterialWithVertexColorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MaterialCacheData_t2754836532, ___U3CUnityMaterialWithVertexColorU3Ek__BackingField_1)); }
	inline Material_t340375123 * get_U3CUnityMaterialWithVertexColorU3Ek__BackingField_1() const { return ___U3CUnityMaterialWithVertexColorU3Ek__BackingField_1; }
	inline Material_t340375123 ** get_address_of_U3CUnityMaterialWithVertexColorU3Ek__BackingField_1() { return &___U3CUnityMaterialWithVertexColorU3Ek__BackingField_1; }
	inline void set_U3CUnityMaterialWithVertexColorU3Ek__BackingField_1(Material_t340375123 * value)
	{
		___U3CUnityMaterialWithVertexColorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CUnityMaterialWithVertexColorU3Ek__BackingField_1), value);
	}

	inline static int32_t get_offset_of_U3CGLTFMaterialU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(MaterialCacheData_t2754836532, ___U3CGLTFMaterialU3Ek__BackingField_2)); }
	inline Material_t2790518843 * get_U3CGLTFMaterialU3Ek__BackingField_2() const { return ___U3CGLTFMaterialU3Ek__BackingField_2; }
	inline Material_t2790518843 ** get_address_of_U3CGLTFMaterialU3Ek__BackingField_2() { return &___U3CGLTFMaterialU3Ek__BackingField_2; }
	inline void set_U3CGLTFMaterialU3Ek__BackingField_2(Material_t2790518843 * value)
	{
		___U3CGLTFMaterialU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CGLTFMaterialU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALCACHEDATA_T2754836532_H
#ifndef MESHCACHEDATA_T1944180602_H
#define MESHCACHEDATA_T1944180602_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.Cache.MeshCacheData
struct  MeshCacheData_t1944180602  : public RuntimeObject
{
public:
	// UnityEngine.Mesh UnityGLTF.Cache.MeshCacheData::<LoadedMesh>k__BackingField
	Mesh_t3648964284 * ___U3CLoadedMeshU3Ek__BackingField_0;
	// System.Collections.Generic.Dictionary`2<System.String,GLTF.AttributeAccessor> UnityGLTF.Cache.MeshCacheData::<MeshAttributes>k__BackingField
	Dictionary_2_t691531204 * ___U3CMeshAttributesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CLoadedMeshU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshCacheData_t1944180602, ___U3CLoadedMeshU3Ek__BackingField_0)); }
	inline Mesh_t3648964284 * get_U3CLoadedMeshU3Ek__BackingField_0() const { return ___U3CLoadedMeshU3Ek__BackingField_0; }
	inline Mesh_t3648964284 ** get_address_of_U3CLoadedMeshU3Ek__BackingField_0() { return &___U3CLoadedMeshU3Ek__BackingField_0; }
	inline void set_U3CLoadedMeshU3Ek__BackingField_0(Mesh_t3648964284 * value)
	{
		___U3CLoadedMeshU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CLoadedMeshU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CMeshAttributesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(MeshCacheData_t1944180602, ___U3CMeshAttributesU3Ek__BackingField_1)); }
	inline Dictionary_2_t691531204 * get_U3CMeshAttributesU3Ek__BackingField_1() const { return ___U3CMeshAttributesU3Ek__BackingField_1; }
	inline Dictionary_2_t691531204 ** get_address_of_U3CMeshAttributesU3Ek__BackingField_1() { return &___U3CMeshAttributesU3Ek__BackingField_1; }
	inline void set_U3CMeshAttributesU3Ek__BackingField_1(Dictionary_2_t691531204 * value)
	{
		___U3CMeshAttributesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CMeshAttributesU3Ek__BackingField_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCACHEDATA_T1944180602_H
#ifndef U3CSTARTU3ED__8_T1918030142_H
#define U3CSTARTU3ED__8_T1918030142_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFComponent/<Start>d__8
struct  U3CStartU3Ed__8_t1918030142  : public RuntimeObject
{
public:
	// System.Int32 UnityGLTF.GLTFComponent/<Start>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityGLTF.GLTFComponent/<Start>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityGLTF.GLTFComponent UnityGLTF.GLTFComponent/<Start>d__8::<>4__this
	GLTFComponent_t238219215 * ___U3CU3E4__this_2;
	// System.IO.FileStream UnityGLTF.GLTFComponent/<Start>d__8::<gltfStream>5__2
	FileStream_t4292183065 * ___U3CgltfStreamU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__8_t1918030142, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__8_t1918030142, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__8_t1918030142, ___U3CU3E4__this_2)); }
	inline GLTFComponent_t238219215 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GLTFComponent_t238219215 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GLTFComponent_t238219215 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_U3CgltfStreamU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__8_t1918030142, ___U3CgltfStreamU3E5__2_3)); }
	inline FileStream_t4292183065 * get_U3CgltfStreamU3E5__2_3() const { return ___U3CgltfStreamU3E5__2_3; }
	inline FileStream_t4292183065 ** get_address_of_U3CgltfStreamU3E5__2_3() { return &___U3CgltfStreamU3E5__2_3; }
	inline void set_U3CgltfStreamU3E5__2_3(FileStream_t4292183065 * value)
	{
		___U3CgltfStreamU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CgltfStreamU3E5__2_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3ED__8_T1918030142_H
#ifndef U3CIMPORTSCENEU3ED__22_T599600113_H
#define U3CIMPORTSCENEU3ED__22_T599600113_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter/<ImportScene>d__22
struct  U3CImportSceneU3Ed__22_t599600113  : public RuntimeObject
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::sceneIndex
	int32_t ___sceneIndex_2;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::<>4__this
	GLTFSceneImporter_t274320441 * ___U3CU3E4__this_3;
	// System.Boolean UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::isMultithreaded
	bool ___isMultithreaded_4;
	// GLTF.Schema.Scene UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::<scene>5__2
	Scene_t1955661005 * ___U3CsceneU3E5__2_5;
	// System.Int32 UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::<i>5__3
	int32_t ___U3CiU3E5__3_6;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t599600113, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t599600113, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_sceneIndex_2() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t599600113, ___sceneIndex_2)); }
	inline int32_t get_sceneIndex_2() const { return ___sceneIndex_2; }
	inline int32_t* get_address_of_sceneIndex_2() { return &___sceneIndex_2; }
	inline void set_sceneIndex_2(int32_t value)
	{
		___sceneIndex_2 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t599600113, ___U3CU3E4__this_3)); }
	inline GLTFSceneImporter_t274320441 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GLTFSceneImporter_t274320441 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GLTFSceneImporter_t274320441 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}

	inline static int32_t get_offset_of_isMultithreaded_4() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t599600113, ___isMultithreaded_4)); }
	inline bool get_isMultithreaded_4() const { return ___isMultithreaded_4; }
	inline bool* get_address_of_isMultithreaded_4() { return &___isMultithreaded_4; }
	inline void set_isMultithreaded_4(bool value)
	{
		___isMultithreaded_4 = value;
	}

	inline static int32_t get_offset_of_U3CsceneU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t599600113, ___U3CsceneU3E5__2_5)); }
	inline Scene_t1955661005 * get_U3CsceneU3E5__2_5() const { return ___U3CsceneU3E5__2_5; }
	inline Scene_t1955661005 ** get_address_of_U3CsceneU3E5__2_5() { return &___U3CsceneU3E5__2_5; }
	inline void set_U3CsceneU3E5__2_5(Scene_t1955661005 * value)
	{
		___U3CsceneU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsceneU3E5__2_5), value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__3_6() { return static_cast<int32_t>(offsetof(U3CImportSceneU3Ed__22_t599600113, ___U3CiU3E5__3_6)); }
	inline int32_t get_U3CiU3E5__3_6() const { return ___U3CiU3E5__3_6; }
	inline int32_t* get_address_of_U3CiU3E5__3_6() { return &___U3CiU3E5__3_6; }
	inline void set_U3CiU3E5__3_6(int32_t value)
	{
		___U3CiU3E5__3_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIMPORTSCENEU3ED__22_T599600113_H
#ifndef U3CLOADU3ED__21_T2072795234_H
#define U3CLOADU3ED__21_T2072795234_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter/<Load>d__21
struct  U3CLoadU3Ed__21_t2072795234  : public RuntimeObject
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter/<Load>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityGLTF.GLTFSceneImporter/<Load>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter/<Load>d__21::<>4__this
	GLTFSceneImporter_t274320441 * ___U3CU3E4__this_2;
	// System.Int32 UnityGLTF.GLTFSceneImporter/<Load>d__21::sceneIndex
	int32_t ___sceneIndex_3;
	// System.Boolean UnityGLTF.GLTFSceneImporter/<Load>d__21::isMultithreaded
	bool ___isMultithreaded_4;
	// UnityEngine.Networking.UnityWebRequest UnityGLTF.GLTFSceneImporter/<Load>d__21::<www>5__2
	UnityWebRequest_t463507806 * ___U3CwwwU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__21_t2072795234, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__21_t2072795234, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__21_t2072795234, ___U3CU3E4__this_2)); }
	inline GLTFSceneImporter_t274320441 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GLTFSceneImporter_t274320441 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GLTFSceneImporter_t274320441 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_sceneIndex_3() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__21_t2072795234, ___sceneIndex_3)); }
	inline int32_t get_sceneIndex_3() const { return ___sceneIndex_3; }
	inline int32_t* get_address_of_sceneIndex_3() { return &___sceneIndex_3; }
	inline void set_sceneIndex_3(int32_t value)
	{
		___sceneIndex_3 = value;
	}

	inline static int32_t get_offset_of_isMultithreaded_4() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__21_t2072795234, ___isMultithreaded_4)); }
	inline bool get_isMultithreaded_4() const { return ___isMultithreaded_4; }
	inline bool* get_address_of_isMultithreaded_4() { return &___isMultithreaded_4; }
	inline void set_isMultithreaded_4(bool value)
	{
		___isMultithreaded_4 = value;
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CLoadU3Ed__21_t2072795234, ___U3CwwwU3E5__2_5)); }
	inline UnityWebRequest_t463507806 * get_U3CwwwU3E5__2_5() const { return ___U3CwwwU3E5__2_5; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwwwU3E5__2_5() { return &___U3CwwwU3E5__2_5; }
	inline void set_U3CwwwU3E5__2_5(UnityWebRequest_t463507806 * value)
	{
		___U3CwwwU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E5__2_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADU3ED__21_T2072795234_H
#ifndef U3CLOADBUFFERU3ED__35_T2608884095_H
#define U3CLOADBUFFERU3ED__35_T2608884095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35
struct  U3CLoadBufferU3Ed__35_t2608884095  : public RuntimeObject
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GLTF.Schema.Buffer UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::buffer
	Buffer_t869705777 * ___buffer_2;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::<>4__this
	GLTFSceneImporter_t274320441 * ___U3CU3E4__this_3;
	// System.String UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::sourceUri
	String_t* ___sourceUri_4;
	// System.Int32 UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::bufferIndex
	int32_t ___bufferIndex_5;
	// System.String UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::<uri>5__2
	String_t* ___U3CuriU3E5__2_6;
	// UnityEngine.Networking.UnityWebRequest UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::<www>5__3
	UnityWebRequest_t463507806 * ___U3CwwwU3E5__3_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_t2608884095, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_t2608884095, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_buffer_2() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_t2608884095, ___buffer_2)); }
	inline Buffer_t869705777 * get_buffer_2() const { return ___buffer_2; }
	inline Buffer_t869705777 ** get_address_of_buffer_2() { return &___buffer_2; }
	inline void set_buffer_2(Buffer_t869705777 * value)
	{
		___buffer_2 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_2), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_3() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_t2608884095, ___U3CU3E4__this_3)); }
	inline GLTFSceneImporter_t274320441 * get_U3CU3E4__this_3() const { return ___U3CU3E4__this_3; }
	inline GLTFSceneImporter_t274320441 ** get_address_of_U3CU3E4__this_3() { return &___U3CU3E4__this_3; }
	inline void set_U3CU3E4__this_3(GLTFSceneImporter_t274320441 * value)
	{
		___U3CU3E4__this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_3), value);
	}

	inline static int32_t get_offset_of_sourceUri_4() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_t2608884095, ___sourceUri_4)); }
	inline String_t* get_sourceUri_4() const { return ___sourceUri_4; }
	inline String_t** get_address_of_sourceUri_4() { return &___sourceUri_4; }
	inline void set_sourceUri_4(String_t* value)
	{
		___sourceUri_4 = value;
		Il2CppCodeGenWriteBarrier((&___sourceUri_4), value);
	}

	inline static int32_t get_offset_of_bufferIndex_5() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_t2608884095, ___bufferIndex_5)); }
	inline int32_t get_bufferIndex_5() const { return ___bufferIndex_5; }
	inline int32_t* get_address_of_bufferIndex_5() { return &___bufferIndex_5; }
	inline void set_bufferIndex_5(int32_t value)
	{
		___bufferIndex_5 = value;
	}

	inline static int32_t get_offset_of_U3CuriU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_t2608884095, ___U3CuriU3E5__2_6)); }
	inline String_t* get_U3CuriU3E5__2_6() const { return ___U3CuriU3E5__2_6; }
	inline String_t** get_address_of_U3CuriU3E5__2_6() { return &___U3CuriU3E5__2_6; }
	inline void set_U3CuriU3E5__2_6(String_t* value)
	{
		___U3CuriU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CuriU3E5__2_6), value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CLoadBufferU3Ed__35_t2608884095, ___U3CwwwU3E5__3_7)); }
	inline UnityWebRequest_t463507806 * get_U3CwwwU3E5__3_7() const { return ___U3CwwwU3E5__3_7; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwwwU3E5__3_7() { return &___U3CwwwU3E5__3_7; }
	inline void set_U3CwwwU3E5__3_7(UnityWebRequest_t463507806 * value)
	{
		___U3CwwwU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E5__3_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADBUFFERU3ED__35_T2608884095_H
#ifndef U3CLOADIMAGEU3ED__34_T347840408_H
#define U3CLOADIMAGEU3ED__34_T347840408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter/<LoadImage>d__34
struct  U3CLoadImageU3Ed__34_t347840408  : public RuntimeObject
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UnityGLTF.GLTFSceneImporter UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::<>4__this
	GLTFSceneImporter_t274320441 * ___U3CU3E4__this_2;
	// System.Int32 UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::imageID
	int32_t ___imageID_3;
	// GLTF.Schema.Image UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::image
	Image_t782620675 * ___image_4;
	// System.String UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::rootPath
	String_t* ___rootPath_5;
	// System.String UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::<uri>5__2
	String_t* ___U3CuriU3E5__2_6;
	// UnityEngine.Networking.UnityWebRequest UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::<www>5__3
	UnityWebRequest_t463507806 * ___U3CwwwU3E5__3_7;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t347840408, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t347840408, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E2__current_1), value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t347840408, ___U3CU3E4__this_2)); }
	inline GLTFSceneImporter_t274320441 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GLTFSceneImporter_t274320441 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GLTFSceneImporter_t274320441 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3E4__this_2), value);
	}

	inline static int32_t get_offset_of_imageID_3() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t347840408, ___imageID_3)); }
	inline int32_t get_imageID_3() const { return ___imageID_3; }
	inline int32_t* get_address_of_imageID_3() { return &___imageID_3; }
	inline void set_imageID_3(int32_t value)
	{
		___imageID_3 = value;
	}

	inline static int32_t get_offset_of_image_4() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t347840408, ___image_4)); }
	inline Image_t782620675 * get_image_4() const { return ___image_4; }
	inline Image_t782620675 ** get_address_of_image_4() { return &___image_4; }
	inline void set_image_4(Image_t782620675 * value)
	{
		___image_4 = value;
		Il2CppCodeGenWriteBarrier((&___image_4), value);
	}

	inline static int32_t get_offset_of_rootPath_5() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t347840408, ___rootPath_5)); }
	inline String_t* get_rootPath_5() const { return ___rootPath_5; }
	inline String_t** get_address_of_rootPath_5() { return &___rootPath_5; }
	inline void set_rootPath_5(String_t* value)
	{
		___rootPath_5 = value;
		Il2CppCodeGenWriteBarrier((&___rootPath_5), value);
	}

	inline static int32_t get_offset_of_U3CuriU3E5__2_6() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t347840408, ___U3CuriU3E5__2_6)); }
	inline String_t* get_U3CuriU3E5__2_6() const { return ___U3CuriU3E5__2_6; }
	inline String_t** get_address_of_U3CuriU3E5__2_6() { return &___U3CuriU3E5__2_6; }
	inline void set_U3CuriU3E5__2_6(String_t* value)
	{
		___U3CuriU3E5__2_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CuriU3E5__2_6), value);
	}

	inline static int32_t get_offset_of_U3CwwwU3E5__3_7() { return static_cast<int32_t>(offsetof(U3CLoadImageU3Ed__34_t347840408, ___U3CwwwU3E5__3_7)); }
	inline UnityWebRequest_t463507806 * get_U3CwwwU3E5__3_7() const { return ___U3CwwwU3E5__3_7; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwwwU3E5__3_7() { return &___U3CwwwU3E5__3_7; }
	inline void set_U3CwwwU3E5__3_7(UnityWebRequest_t463507806 * value)
	{
		___U3CwwwU3E5__3_7 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwwwU3E5__3_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CLOADIMAGEU3ED__34_T347840408_H
#ifndef COLOR_T1637600301_H
#define COLOR_T1637600301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Math.Color
struct  Color_t1637600301 
{
public:
	// System.Single GLTF.Math.Color::<R>k__BackingField
	float ___U3CRU3Ek__BackingField_0;
	// System.Single GLTF.Math.Color::<G>k__BackingField
	float ___U3CGU3Ek__BackingField_1;
	// System.Single GLTF.Math.Color::<B>k__BackingField
	float ___U3CBU3Ek__BackingField_2;
	// System.Single GLTF.Math.Color::<A>k__BackingField
	float ___U3CAU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CRU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Color_t1637600301, ___U3CRU3Ek__BackingField_0)); }
	inline float get_U3CRU3Ek__BackingField_0() const { return ___U3CRU3Ek__BackingField_0; }
	inline float* get_address_of_U3CRU3Ek__BackingField_0() { return &___U3CRU3Ek__BackingField_0; }
	inline void set_U3CRU3Ek__BackingField_0(float value)
	{
		___U3CRU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CGU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Color_t1637600301, ___U3CGU3Ek__BackingField_1)); }
	inline float get_U3CGU3Ek__BackingField_1() const { return ___U3CGU3Ek__BackingField_1; }
	inline float* get_address_of_U3CGU3Ek__BackingField_1() { return &___U3CGU3Ek__BackingField_1; }
	inline void set_U3CGU3Ek__BackingField_1(float value)
	{
		___U3CGU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CBU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Color_t1637600301, ___U3CBU3Ek__BackingField_2)); }
	inline float get_U3CBU3Ek__BackingField_2() const { return ___U3CBU3Ek__BackingField_2; }
	inline float* get_address_of_U3CBU3Ek__BackingField_2() { return &___U3CBU3Ek__BackingField_2; }
	inline void set_U3CBU3Ek__BackingField_2(float value)
	{
		___U3CBU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CAU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Color_t1637600301, ___U3CAU3Ek__BackingField_3)); }
	inline float get_U3CAU3Ek__BackingField_3() const { return ___U3CAU3Ek__BackingField_3; }
	inline float* get_address_of_U3CAU3Ek__BackingField_3() { return &___U3CAU3Ek__BackingField_3; }
	inline void set_U3CAU3Ek__BackingField_3(float value)
	{
		___U3CAU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T1637600301_H
#ifndef QUATERNION_T764299249_H
#define QUATERNION_T764299249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Math.Quaternion
struct  Quaternion_t764299249 
{
public:
	// System.Single GLTF.Math.Quaternion::<X>k__BackingField
	float ___U3CXU3Ek__BackingField_1;
	// System.Single GLTF.Math.Quaternion::<Y>k__BackingField
	float ___U3CYU3Ek__BackingField_2;
	// System.Single GLTF.Math.Quaternion::<Z>k__BackingField
	float ___U3CZU3Ek__BackingField_3;
	// System.Single GLTF.Math.Quaternion::<W>k__BackingField
	float ___U3CWU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CXU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Quaternion_t764299249, ___U3CXU3Ek__BackingField_1)); }
	inline float get_U3CXU3Ek__BackingField_1() const { return ___U3CXU3Ek__BackingField_1; }
	inline float* get_address_of_U3CXU3Ek__BackingField_1() { return &___U3CXU3Ek__BackingField_1; }
	inline void set_U3CXU3Ek__BackingField_1(float value)
	{
		___U3CXU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CYU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Quaternion_t764299249, ___U3CYU3Ek__BackingField_2)); }
	inline float get_U3CYU3Ek__BackingField_2() const { return ___U3CYU3Ek__BackingField_2; }
	inline float* get_address_of_U3CYU3Ek__BackingField_2() { return &___U3CYU3Ek__BackingField_2; }
	inline void set_U3CYU3Ek__BackingField_2(float value)
	{
		___U3CYU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CZU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Quaternion_t764299249, ___U3CZU3Ek__BackingField_3)); }
	inline float get_U3CZU3Ek__BackingField_3() const { return ___U3CZU3Ek__BackingField_3; }
	inline float* get_address_of_U3CZU3Ek__BackingField_3() { return &___U3CZU3Ek__BackingField_3; }
	inline void set_U3CZU3Ek__BackingField_3(float value)
	{
		___U3CZU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CWU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Quaternion_t764299249, ___U3CWU3Ek__BackingField_4)); }
	inline float get_U3CWU3Ek__BackingField_4() const { return ___U3CWU3Ek__BackingField_4; }
	inline float* get_address_of_U3CWU3Ek__BackingField_4() { return &___U3CWU3Ek__BackingField_4; }
	inline void set_U3CWU3Ek__BackingField_4(float value)
	{
		___U3CWU3Ek__BackingField_4 = value;
	}
};

struct Quaternion_t764299249_StaticFields
{
public:
	// GLTF.Math.Quaternion GLTF.Math.Quaternion::Identity
	Quaternion_t764299249  ___Identity_0;

public:
	inline static int32_t get_offset_of_Identity_0() { return static_cast<int32_t>(offsetof(Quaternion_t764299249_StaticFields, ___Identity_0)); }
	inline Quaternion_t764299249  get_Identity_0() const { return ___Identity_0; }
	inline Quaternion_t764299249 * get_address_of_Identity_0() { return &___Identity_0; }
	inline void set_Identity_0(Quaternion_t764299249  value)
	{
		___Identity_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T764299249_H
#ifndef VECTOR2_T4136528133_H
#define VECTOR2_T4136528133_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Math.Vector2
struct  Vector2_t4136528133 
{
public:
	// System.Single GLTF.Math.Vector2::<X>k__BackingField
	float ___U3CXU3Ek__BackingField_0;
	// System.Single GLTF.Math.Vector2::<Y>k__BackingField
	float ___U3CYU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CXU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Vector2_t4136528133, ___U3CXU3Ek__BackingField_0)); }
	inline float get_U3CXU3Ek__BackingField_0() const { return ___U3CXU3Ek__BackingField_0; }
	inline float* get_address_of_U3CXU3Ek__BackingField_0() { return &___U3CXU3Ek__BackingField_0; }
	inline void set_U3CXU3Ek__BackingField_0(float value)
	{
		___U3CXU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CYU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Vector2_t4136528133, ___U3CYU3Ek__BackingField_1)); }
	inline float get_U3CYU3Ek__BackingField_1() const { return ___U3CYU3Ek__BackingField_1; }
	inline float* get_address_of_U3CYU3Ek__BackingField_1() { return &___U3CYU3Ek__BackingField_1; }
	inline void set_U3CYU3Ek__BackingField_1(float value)
	{
		___U3CYU3Ek__BackingField_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T4136528133_H
#ifndef VECTOR3_T4136528132_H
#define VECTOR3_T4136528132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Math.Vector3
struct  Vector3_t4136528132 
{
public:
	// System.Single GLTF.Math.Vector3::<X>k__BackingField
	float ___U3CXU3Ek__BackingField_2;
	// System.Single GLTF.Math.Vector3::<Y>k__BackingField
	float ___U3CYU3Ek__BackingField_3;
	// System.Single GLTF.Math.Vector3::<Z>k__BackingField
	float ___U3CZU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CXU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Vector3_t4136528132, ___U3CXU3Ek__BackingField_2)); }
	inline float get_U3CXU3Ek__BackingField_2() const { return ___U3CXU3Ek__BackingField_2; }
	inline float* get_address_of_U3CXU3Ek__BackingField_2() { return &___U3CXU3Ek__BackingField_2; }
	inline void set_U3CXU3Ek__BackingField_2(float value)
	{
		___U3CXU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CYU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Vector3_t4136528132, ___U3CYU3Ek__BackingField_3)); }
	inline float get_U3CYU3Ek__BackingField_3() const { return ___U3CYU3Ek__BackingField_3; }
	inline float* get_address_of_U3CYU3Ek__BackingField_3() { return &___U3CYU3Ek__BackingField_3; }
	inline void set_U3CYU3Ek__BackingField_3(float value)
	{
		___U3CYU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CZU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Vector3_t4136528132, ___U3CZU3Ek__BackingField_4)); }
	inline float get_U3CZU3Ek__BackingField_4() const { return ___U3CZU3Ek__BackingField_4; }
	inline float* get_address_of_U3CZU3Ek__BackingField_4() { return &___U3CZU3Ek__BackingField_4; }
	inline void set_U3CZU3Ek__BackingField_4(float value)
	{
		___U3CZU3Ek__BackingField_4 = value;
	}
};

struct Vector3_t4136528132_StaticFields
{
public:
	// GLTF.Math.Vector3 GLTF.Math.Vector3::Zero
	Vector3_t4136528132  ___Zero_0;
	// GLTF.Math.Vector3 GLTF.Math.Vector3::One
	Vector3_t4136528132  ___One_1;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(Vector3_t4136528132_StaticFields, ___Zero_0)); }
	inline Vector3_t4136528132  get_Zero_0() const { return ___Zero_0; }
	inline Vector3_t4136528132 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(Vector3_t4136528132  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_One_1() { return static_cast<int32_t>(offsetof(Vector3_t4136528132_StaticFields, ___One_1)); }
	inline Vector3_t4136528132  get_One_1() const { return ___One_1; }
	inline Vector3_t4136528132 * get_address_of_One_1() { return &___One_1; }
	inline void set_One_1(Vector3_t4136528132  value)
	{
		___One_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T4136528132_H
#ifndef VECTOR4_T4136528135_H
#define VECTOR4_T4136528135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Math.Vector4
struct  Vector4_t4136528135 
{
public:
	// System.Single GLTF.Math.Vector4::<X>k__BackingField
	float ___U3CXU3Ek__BackingField_0;
	// System.Single GLTF.Math.Vector4::<Y>k__BackingField
	float ___U3CYU3Ek__BackingField_1;
	// System.Single GLTF.Math.Vector4::<Z>k__BackingField
	float ___U3CZU3Ek__BackingField_2;
	// System.Single GLTF.Math.Vector4::<W>k__BackingField
	float ___U3CWU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CXU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Vector4_t4136528135, ___U3CXU3Ek__BackingField_0)); }
	inline float get_U3CXU3Ek__BackingField_0() const { return ___U3CXU3Ek__BackingField_0; }
	inline float* get_address_of_U3CXU3Ek__BackingField_0() { return &___U3CXU3Ek__BackingField_0; }
	inline void set_U3CXU3Ek__BackingField_0(float value)
	{
		___U3CXU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CYU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Vector4_t4136528135, ___U3CYU3Ek__BackingField_1)); }
	inline float get_U3CYU3Ek__BackingField_1() const { return ___U3CYU3Ek__BackingField_1; }
	inline float* get_address_of_U3CYU3Ek__BackingField_1() { return &___U3CYU3Ek__BackingField_1; }
	inline void set_U3CYU3Ek__BackingField_1(float value)
	{
		___U3CYU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CZU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Vector4_t4136528135, ___U3CZU3Ek__BackingField_2)); }
	inline float get_U3CZU3Ek__BackingField_2() const { return ___U3CZU3Ek__BackingField_2; }
	inline float* get_address_of_U3CZU3Ek__BackingField_2() { return &___U3CZU3Ek__BackingField_2; }
	inline void set_U3CZU3Ek__BackingField_2(float value)
	{
		___U3CZU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CWU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Vector4_t4136528135, ___U3CWU3Ek__BackingField_3)); }
	inline float get_U3CWU3Ek__BackingField_3() const { return ___U3CWU3Ek__BackingField_3; }
	inline float* get_address_of_U3CWU3Ek__BackingField_3() { return &___U3CWU3Ek__BackingField_3; }
	inline void set_U3CWU3Ek__BackingField_3(float value)
	{
		___U3CWU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T4136528135_H
#ifndef ACCESSORID_T96769721_H
#define ACCESSORID_T96769721_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.AccessorId
struct  AccessorId_t96769721  : public GLTFId_1_t1862120373
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACCESSORID_T96769721_H
#ifndef BUFFERID_T2787902107_H
#define BUFFERID_T2787902107_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.BufferId
struct  BufferId_t2787902107  : public GLTFId_1_t1070037637
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFERID_T2787902107_H
#ifndef BUFFERVIEWID_T4185270750_H
#define BUFFERVIEWID_T4185270750_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.BufferViewId
struct  BufferViewId_t4185270750  : public GLTFId_1_t2850430986
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFERVIEWID_T4185270750_H
#ifndef GLTFCHILDOFROOTPROPERTY_T1666645821_H
#define GLTFCHILDOFROOTPROPERTY_T1666645821_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFChildOfRootProperty
struct  GLTFChildOfRootProperty_t1666645821  : public GLTFProperty_t1589224293
{
public:
	// System.String GLTF.Schema.GLTFChildOfRootProperty::Name
	String_t* ___Name_6;

public:
	inline static int32_t get_offset_of_Name_6() { return static_cast<int32_t>(offsetof(GLTFChildOfRootProperty_t1666645821, ___Name_6)); }
	inline String_t* get_Name_6() const { return ___Name_6; }
	inline String_t** get_address_of_Name_6() { return &___Name_6; }
	inline void set_Name_6(String_t* value)
	{
		___Name_6 = value;
		Il2CppCodeGenWriteBarrier((&___Name_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFCHILDOFROOTPROPERTY_T1666645821_H
#ifndef GLTFROOT_T676886847_H
#define GLTFROOT_T676886847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFRoot
struct  GLTFRoot_t676886847  : public GLTFProperty_t1589224293
{
public:
	// System.Collections.Generic.List`1<System.String> GLTF.Schema.GLTFRoot::ExtensionsUsed
	List_1_t3319525431 * ___ExtensionsUsed_6;
	// System.Collections.Generic.List`1<System.String> GLTF.Schema.GLTFRoot::ExtensionsRequired
	List_1_t3319525431 * ___ExtensionsRequired_7;
	// System.Collections.Generic.List`1<GLTF.Schema.Accessor> GLTF.Schema.GLTFRoot::Accessors
	List_1_t3133863255 * ___Accessors_8;
	// System.Collections.Generic.List`1<GLTF.Schema.Animation> GLTF.Schema.GLTFRoot::Animations
	List_1_t2745658046 * ___Animations_9;
	// GLTF.Schema.Asset GLTF.Schema.GLTFRoot::Asset
	Asset_t4292491636 * ___Asset_10;
	// System.Collections.Generic.List`1<GLTF.Schema.Buffer> GLTF.Schema.GLTFRoot::Buffers
	List_1_t2341780519 * ___Buffers_11;
	// System.Collections.Generic.List`1<GLTF.Schema.BufferView> GLTF.Schema.GLTFRoot::BufferViews
	List_1_t4122173868 * ___BufferViews_12;
	// System.Collections.Generic.List`1<GLTF.Schema.Camera> GLTF.Schema.GLTFRoot::Cameras
	List_1_t3496179184 * ___Cameras_13;
	// System.Collections.Generic.List`1<GLTF.Schema.Image> GLTF.Schema.GLTFRoot::Images
	List_1_t2254695417 * ___Images_14;
	// System.Collections.Generic.List`1<GLTF.Schema.Material> GLTF.Schema.GLTFRoot::Materials
	List_1_t4262593585 * ___Materials_15;
	// System.Collections.Generic.List`1<GLTF.Schema.Mesh> GLTF.Schema.GLTFRoot::Meshes
	List_1_t4198337971 * ___Meshes_16;
	// System.Collections.Generic.List`1<GLTF.Schema.Node> GLTF.Schema.GLTFRoot::Nodes
	List_1_t1167779375 * ___Nodes_17;
	// System.Collections.Generic.List`1<GLTF.Schema.Sampler> GLTF.Schema.GLTFRoot::Samplers
	List_1_t2951094649 * ___Samplers_18;
	// GLTF.Schema.SceneId GLTF.Schema.GLTFRoot::Scene
	SceneId_t3402743638 * ___Scene_19;
	// System.Collections.Generic.List`1<GLTF.Schema.Scene> GLTF.Schema.GLTFRoot::Scenes
	List_1_t3427735747 * ___Scenes_20;
	// System.Collections.Generic.List`1<GLTF.Schema.Skin> GLTF.Schema.GLTFRoot::Skins
	List_1_t1143834715 * ___Skins_21;
	// System.Collections.Generic.List`1<GLTF.Schema.Texture> GLTF.Schema.GLTFRoot::Textures
	List_1_t2284271573 * ___Textures_22;

public:
	inline static int32_t get_offset_of_ExtensionsUsed_6() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___ExtensionsUsed_6)); }
	inline List_1_t3319525431 * get_ExtensionsUsed_6() const { return ___ExtensionsUsed_6; }
	inline List_1_t3319525431 ** get_address_of_ExtensionsUsed_6() { return &___ExtensionsUsed_6; }
	inline void set_ExtensionsUsed_6(List_1_t3319525431 * value)
	{
		___ExtensionsUsed_6 = value;
		Il2CppCodeGenWriteBarrier((&___ExtensionsUsed_6), value);
	}

	inline static int32_t get_offset_of_ExtensionsRequired_7() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___ExtensionsRequired_7)); }
	inline List_1_t3319525431 * get_ExtensionsRequired_7() const { return ___ExtensionsRequired_7; }
	inline List_1_t3319525431 ** get_address_of_ExtensionsRequired_7() { return &___ExtensionsRequired_7; }
	inline void set_ExtensionsRequired_7(List_1_t3319525431 * value)
	{
		___ExtensionsRequired_7 = value;
		Il2CppCodeGenWriteBarrier((&___ExtensionsRequired_7), value);
	}

	inline static int32_t get_offset_of_Accessors_8() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Accessors_8)); }
	inline List_1_t3133863255 * get_Accessors_8() const { return ___Accessors_8; }
	inline List_1_t3133863255 ** get_address_of_Accessors_8() { return &___Accessors_8; }
	inline void set_Accessors_8(List_1_t3133863255 * value)
	{
		___Accessors_8 = value;
		Il2CppCodeGenWriteBarrier((&___Accessors_8), value);
	}

	inline static int32_t get_offset_of_Animations_9() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Animations_9)); }
	inline List_1_t2745658046 * get_Animations_9() const { return ___Animations_9; }
	inline List_1_t2745658046 ** get_address_of_Animations_9() { return &___Animations_9; }
	inline void set_Animations_9(List_1_t2745658046 * value)
	{
		___Animations_9 = value;
		Il2CppCodeGenWriteBarrier((&___Animations_9), value);
	}

	inline static int32_t get_offset_of_Asset_10() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Asset_10)); }
	inline Asset_t4292491636 * get_Asset_10() const { return ___Asset_10; }
	inline Asset_t4292491636 ** get_address_of_Asset_10() { return &___Asset_10; }
	inline void set_Asset_10(Asset_t4292491636 * value)
	{
		___Asset_10 = value;
		Il2CppCodeGenWriteBarrier((&___Asset_10), value);
	}

	inline static int32_t get_offset_of_Buffers_11() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Buffers_11)); }
	inline List_1_t2341780519 * get_Buffers_11() const { return ___Buffers_11; }
	inline List_1_t2341780519 ** get_address_of_Buffers_11() { return &___Buffers_11; }
	inline void set_Buffers_11(List_1_t2341780519 * value)
	{
		___Buffers_11 = value;
		Il2CppCodeGenWriteBarrier((&___Buffers_11), value);
	}

	inline static int32_t get_offset_of_BufferViews_12() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___BufferViews_12)); }
	inline List_1_t4122173868 * get_BufferViews_12() const { return ___BufferViews_12; }
	inline List_1_t4122173868 ** get_address_of_BufferViews_12() { return &___BufferViews_12; }
	inline void set_BufferViews_12(List_1_t4122173868 * value)
	{
		___BufferViews_12 = value;
		Il2CppCodeGenWriteBarrier((&___BufferViews_12), value);
	}

	inline static int32_t get_offset_of_Cameras_13() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Cameras_13)); }
	inline List_1_t3496179184 * get_Cameras_13() const { return ___Cameras_13; }
	inline List_1_t3496179184 ** get_address_of_Cameras_13() { return &___Cameras_13; }
	inline void set_Cameras_13(List_1_t3496179184 * value)
	{
		___Cameras_13 = value;
		Il2CppCodeGenWriteBarrier((&___Cameras_13), value);
	}

	inline static int32_t get_offset_of_Images_14() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Images_14)); }
	inline List_1_t2254695417 * get_Images_14() const { return ___Images_14; }
	inline List_1_t2254695417 ** get_address_of_Images_14() { return &___Images_14; }
	inline void set_Images_14(List_1_t2254695417 * value)
	{
		___Images_14 = value;
		Il2CppCodeGenWriteBarrier((&___Images_14), value);
	}

	inline static int32_t get_offset_of_Materials_15() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Materials_15)); }
	inline List_1_t4262593585 * get_Materials_15() const { return ___Materials_15; }
	inline List_1_t4262593585 ** get_address_of_Materials_15() { return &___Materials_15; }
	inline void set_Materials_15(List_1_t4262593585 * value)
	{
		___Materials_15 = value;
		Il2CppCodeGenWriteBarrier((&___Materials_15), value);
	}

	inline static int32_t get_offset_of_Meshes_16() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Meshes_16)); }
	inline List_1_t4198337971 * get_Meshes_16() const { return ___Meshes_16; }
	inline List_1_t4198337971 ** get_address_of_Meshes_16() { return &___Meshes_16; }
	inline void set_Meshes_16(List_1_t4198337971 * value)
	{
		___Meshes_16 = value;
		Il2CppCodeGenWriteBarrier((&___Meshes_16), value);
	}

	inline static int32_t get_offset_of_Nodes_17() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Nodes_17)); }
	inline List_1_t1167779375 * get_Nodes_17() const { return ___Nodes_17; }
	inline List_1_t1167779375 ** get_address_of_Nodes_17() { return &___Nodes_17; }
	inline void set_Nodes_17(List_1_t1167779375 * value)
	{
		___Nodes_17 = value;
		Il2CppCodeGenWriteBarrier((&___Nodes_17), value);
	}

	inline static int32_t get_offset_of_Samplers_18() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Samplers_18)); }
	inline List_1_t2951094649 * get_Samplers_18() const { return ___Samplers_18; }
	inline List_1_t2951094649 ** get_address_of_Samplers_18() { return &___Samplers_18; }
	inline void set_Samplers_18(List_1_t2951094649 * value)
	{
		___Samplers_18 = value;
		Il2CppCodeGenWriteBarrier((&___Samplers_18), value);
	}

	inline static int32_t get_offset_of_Scene_19() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Scene_19)); }
	inline SceneId_t3402743638 * get_Scene_19() const { return ___Scene_19; }
	inline SceneId_t3402743638 ** get_address_of_Scene_19() { return &___Scene_19; }
	inline void set_Scene_19(SceneId_t3402743638 * value)
	{
		___Scene_19 = value;
		Il2CppCodeGenWriteBarrier((&___Scene_19), value);
	}

	inline static int32_t get_offset_of_Scenes_20() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Scenes_20)); }
	inline List_1_t3427735747 * get_Scenes_20() const { return ___Scenes_20; }
	inline List_1_t3427735747 ** get_address_of_Scenes_20() { return &___Scenes_20; }
	inline void set_Scenes_20(List_1_t3427735747 * value)
	{
		___Scenes_20 = value;
		Il2CppCodeGenWriteBarrier((&___Scenes_20), value);
	}

	inline static int32_t get_offset_of_Skins_21() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Skins_21)); }
	inline List_1_t1143834715 * get_Skins_21() const { return ___Skins_21; }
	inline List_1_t1143834715 ** get_address_of_Skins_21() { return &___Skins_21; }
	inline void set_Skins_21(List_1_t1143834715 * value)
	{
		___Skins_21 = value;
		Il2CppCodeGenWriteBarrier((&___Skins_21), value);
	}

	inline static int32_t get_offset_of_Textures_22() { return static_cast<int32_t>(offsetof(GLTFRoot_t676886847, ___Textures_22)); }
	inline List_1_t2284271573 * get_Textures_22() const { return ___Textures_22; }
	inline List_1_t2284271573 ** get_address_of_Textures_22() { return &___Textures_22; }
	inline void set_Textures_22(List_1_t2284271573 * value)
	{
		___Textures_22 = value;
		Il2CppCodeGenWriteBarrier((&___Textures_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFROOT_T676886847_H
#ifndef IMAGEID_T3414506292_H
#define IMAGEID_T3414506292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.ImageId
struct  ImageId_t3414506292  : public GLTFId_1_t982952535
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGEID_T3414506292_H
#ifndef MATERIALID_T1334539377_H
#define MATERIALID_T1334539377_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.MaterialId
struct  MaterialId_t1334539377  : public GLTFId_1_t2990850703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALID_T1334539377_H
#ifndef MESHID_T2690594789_H
#define MESHID_T2690594789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.MeshId
struct  MeshId_t2690594789  : public GLTFId_1_t2926595089
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHID_T2690594789_H
#ifndef NODEID_T3934031855_H
#define NODEID_T3934031855_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.NodeId
struct  NodeId_t3934031855  : public GLTFId_1_t4191003789
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEID_T3934031855_H
#ifndef NUMERICARRAY_T4287889340_H
#define NUMERICARRAY_T4287889340_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.NumericArray
struct  NumericArray_t4287889340 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32[] GLTF.Schema.NumericArray::AsUInts
			UInt32U5BU5D_t2770800703* ___AsUInts_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			UInt32U5BU5D_t2770800703* ___AsUInts_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// GLTF.Math.Vector2[] GLTF.Schema.NumericArray::AsVec2s
			Vector2U5BU5D_t623575368* ___AsVec2s_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector2U5BU5D_t623575368* ___AsVec2s_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// GLTF.Math.Vector3[] GLTF.Schema.NumericArray::AsVec3s
			Vector3U5BU5D_t137387629* ___AsVec3s_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3U5BU5D_t137387629* ___AsVec3s_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// GLTF.Math.Vector4[] GLTF.Schema.NumericArray::AsVec4s
			Vector4U5BU5D_t1595950846* ___AsVec4s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector4U5BU5D_t1595950846* ___AsVec4s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// GLTF.Math.Color[] GLTF.Schema.NumericArray::AsColors
			ColorU5BU5D_t1735271552* ___AsColors_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			ColorU5BU5D_t1735271552* ___AsColors_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// GLTF.Math.Vector2[] GLTF.Schema.NumericArray::AsTexcoords
			Vector2U5BU5D_t623575368* ___AsTexcoords_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector2U5BU5D_t623575368* ___AsTexcoords_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// GLTF.Math.Vector3[] GLTF.Schema.NumericArray::AsVertices
			Vector3U5BU5D_t137387629* ___AsVertices_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3U5BU5D_t137387629* ___AsVertices_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// GLTF.Math.Vector3[] GLTF.Schema.NumericArray::AsNormals
			Vector3U5BU5D_t137387629* ___AsNormals_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3U5BU5D_t137387629* ___AsNormals_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// GLTF.Math.Vector4[] GLTF.Schema.NumericArray::AsTangents
			Vector4U5BU5D_t1595950846* ___AsTangents_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector4U5BU5D_t1595950846* ___AsTangents_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32[] GLTF.Schema.NumericArray::AsTriangles
			UInt32U5BU5D_t2770800703* ___AsTriangles_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			UInt32U5BU5D_t2770800703* ___AsTriangles_9_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_AsUInts_0() { return static_cast<int32_t>(offsetof(NumericArray_t4287889340, ___AsUInts_0)); }
	inline UInt32U5BU5D_t2770800703* get_AsUInts_0() const { return ___AsUInts_0; }
	inline UInt32U5BU5D_t2770800703** get_address_of_AsUInts_0() { return &___AsUInts_0; }
	inline void set_AsUInts_0(UInt32U5BU5D_t2770800703* value)
	{
		___AsUInts_0 = value;
		Il2CppCodeGenWriteBarrier((&___AsUInts_0), value);
	}

	inline static int32_t get_offset_of_AsVec2s_1() { return static_cast<int32_t>(offsetof(NumericArray_t4287889340, ___AsVec2s_1)); }
	inline Vector2U5BU5D_t623575368* get_AsVec2s_1() const { return ___AsVec2s_1; }
	inline Vector2U5BU5D_t623575368** get_address_of_AsVec2s_1() { return &___AsVec2s_1; }
	inline void set_AsVec2s_1(Vector2U5BU5D_t623575368* value)
	{
		___AsVec2s_1 = value;
		Il2CppCodeGenWriteBarrier((&___AsVec2s_1), value);
	}

	inline static int32_t get_offset_of_AsVec3s_2() { return static_cast<int32_t>(offsetof(NumericArray_t4287889340, ___AsVec3s_2)); }
	inline Vector3U5BU5D_t137387629* get_AsVec3s_2() const { return ___AsVec3s_2; }
	inline Vector3U5BU5D_t137387629** get_address_of_AsVec3s_2() { return &___AsVec3s_2; }
	inline void set_AsVec3s_2(Vector3U5BU5D_t137387629* value)
	{
		___AsVec3s_2 = value;
		Il2CppCodeGenWriteBarrier((&___AsVec3s_2), value);
	}

	inline static int32_t get_offset_of_AsVec4s_3() { return static_cast<int32_t>(offsetof(NumericArray_t4287889340, ___AsVec4s_3)); }
	inline Vector4U5BU5D_t1595950846* get_AsVec4s_3() const { return ___AsVec4s_3; }
	inline Vector4U5BU5D_t1595950846** get_address_of_AsVec4s_3() { return &___AsVec4s_3; }
	inline void set_AsVec4s_3(Vector4U5BU5D_t1595950846* value)
	{
		___AsVec4s_3 = value;
		Il2CppCodeGenWriteBarrier((&___AsVec4s_3), value);
	}

	inline static int32_t get_offset_of_AsColors_4() { return static_cast<int32_t>(offsetof(NumericArray_t4287889340, ___AsColors_4)); }
	inline ColorU5BU5D_t1735271552* get_AsColors_4() const { return ___AsColors_4; }
	inline ColorU5BU5D_t1735271552** get_address_of_AsColors_4() { return &___AsColors_4; }
	inline void set_AsColors_4(ColorU5BU5D_t1735271552* value)
	{
		___AsColors_4 = value;
		Il2CppCodeGenWriteBarrier((&___AsColors_4), value);
	}

	inline static int32_t get_offset_of_AsTexcoords_5() { return static_cast<int32_t>(offsetof(NumericArray_t4287889340, ___AsTexcoords_5)); }
	inline Vector2U5BU5D_t623575368* get_AsTexcoords_5() const { return ___AsTexcoords_5; }
	inline Vector2U5BU5D_t623575368** get_address_of_AsTexcoords_5() { return &___AsTexcoords_5; }
	inline void set_AsTexcoords_5(Vector2U5BU5D_t623575368* value)
	{
		___AsTexcoords_5 = value;
		Il2CppCodeGenWriteBarrier((&___AsTexcoords_5), value);
	}

	inline static int32_t get_offset_of_AsVertices_6() { return static_cast<int32_t>(offsetof(NumericArray_t4287889340, ___AsVertices_6)); }
	inline Vector3U5BU5D_t137387629* get_AsVertices_6() const { return ___AsVertices_6; }
	inline Vector3U5BU5D_t137387629** get_address_of_AsVertices_6() { return &___AsVertices_6; }
	inline void set_AsVertices_6(Vector3U5BU5D_t137387629* value)
	{
		___AsVertices_6 = value;
		Il2CppCodeGenWriteBarrier((&___AsVertices_6), value);
	}

	inline static int32_t get_offset_of_AsNormals_7() { return static_cast<int32_t>(offsetof(NumericArray_t4287889340, ___AsNormals_7)); }
	inline Vector3U5BU5D_t137387629* get_AsNormals_7() const { return ___AsNormals_7; }
	inline Vector3U5BU5D_t137387629** get_address_of_AsNormals_7() { return &___AsNormals_7; }
	inline void set_AsNormals_7(Vector3U5BU5D_t137387629* value)
	{
		___AsNormals_7 = value;
		Il2CppCodeGenWriteBarrier((&___AsNormals_7), value);
	}

	inline static int32_t get_offset_of_AsTangents_8() { return static_cast<int32_t>(offsetof(NumericArray_t4287889340, ___AsTangents_8)); }
	inline Vector4U5BU5D_t1595950846* get_AsTangents_8() const { return ___AsTangents_8; }
	inline Vector4U5BU5D_t1595950846** get_address_of_AsTangents_8() { return &___AsTangents_8; }
	inline void set_AsTangents_8(Vector4U5BU5D_t1595950846* value)
	{
		___AsTangents_8 = value;
		Il2CppCodeGenWriteBarrier((&___AsTangents_8), value);
	}

	inline static int32_t get_offset_of_AsTriangles_9() { return static_cast<int32_t>(offsetof(NumericArray_t4287889340, ___AsTriangles_9)); }
	inline UInt32U5BU5D_t2770800703* get_AsTriangles_9() const { return ___AsTriangles_9; }
	inline UInt32U5BU5D_t2770800703** get_address_of_AsTriangles_9() { return &___AsTriangles_9; }
	inline void set_AsTriangles_9(UInt32U5BU5D_t2770800703* value)
	{
		___AsTriangles_9 = value;
		Il2CppCodeGenWriteBarrier((&___AsTriangles_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of GLTF.Schema.NumericArray
struct NumericArray_t4287889340_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t* ___AsUInts_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t* ___AsUInts_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector2_t4136528133 * ___AsVec2s_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector2_t4136528133 * ___AsVec2s_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector3_t4136528132 * ___AsVec3s_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3_t4136528132 * ___AsVec3s_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector4_t4136528135 * ___AsVec4s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector4_t4136528135 * ___AsVec4s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Color_t1637600301 * ___AsColors_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			Color_t1637600301 * ___AsColors_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector2_t4136528133 * ___AsTexcoords_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector2_t4136528133 * ___AsTexcoords_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector3_t4136528132 * ___AsVertices_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3_t4136528132 * ___AsVertices_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector3_t4136528132 * ___AsNormals_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3_t4136528132 * ___AsNormals_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector4_t4136528135 * ___AsTangents_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector4_t4136528135 * ___AsTangents_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t* ___AsTriangles_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t* ___AsTriangles_9_forAlignmentOnly;
		};
	};
};
// Native definition for COM marshalling of GLTF.Schema.NumericArray
struct NumericArray_t4287889340_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t* ___AsUInts_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t* ___AsUInts_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector2_t4136528133 * ___AsVec2s_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector2_t4136528133 * ___AsVec2s_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector3_t4136528132 * ___AsVec3s_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3_t4136528132 * ___AsVec3s_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector4_t4136528135 * ___AsVec4s_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector4_t4136528135 * ___AsVec4s_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Color_t1637600301 * ___AsColors_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			Color_t1637600301 * ___AsColors_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector2_t4136528133 * ___AsTexcoords_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector2_t4136528133 * ___AsTexcoords_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector3_t4136528132 * ___AsVertices_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3_t4136528132 * ___AsVertices_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector3_t4136528132 * ___AsNormals_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector3_t4136528132 * ___AsNormals_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			Vector4_t4136528135 * ___AsTangents_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			Vector4_t4136528135 * ___AsTangents_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t* ___AsTriangles_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t* ___AsTriangles_9_forAlignmentOnly;
		};
	};
};
#endif // NUMERICARRAY_T4287889340_H
#ifndef SAMPLERID_T2839447902_H
#define SAMPLERID_T2839447902_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.SamplerId
struct  SamplerId_t2839447902  : public GLTFId_1_t1679351767
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAMPLERID_T2839447902_H
#ifndef TEXTUREID_T2497679170_H
#define TEXTUREID_T2497679170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.TextureId
struct  TextureId_t2497679170  : public GLTFId_1_t1012528691
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREID_T2497679170_H
#ifndef TEXTUREINFO_T616718776_H
#define TEXTUREINFO_T616718776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.TextureInfo
struct  TextureInfo_t616718776  : public GLTFProperty_t1589224293
{
public:
	// GLTF.Schema.TextureId GLTF.Schema.TextureInfo::Index
	TextureId_t2497679170 * ___Index_6;
	// System.Int32 GLTF.Schema.TextureInfo::TexCoord
	int32_t ___TexCoord_7;

public:
	inline static int32_t get_offset_of_Index_6() { return static_cast<int32_t>(offsetof(TextureInfo_t616718776, ___Index_6)); }
	inline TextureId_t2497679170 * get_Index_6() const { return ___Index_6; }
	inline TextureId_t2497679170 ** get_address_of_Index_6() { return &___Index_6; }
	inline void set_Index_6(TextureId_t2497679170 * value)
	{
		___Index_6 = value;
		Il2CppCodeGenWriteBarrier((&___Index_6), value);
	}

	inline static int32_t get_offset_of_TexCoord_7() { return static_cast<int32_t>(offsetof(TextureInfo_t616718776, ___TexCoord_7)); }
	inline int32_t get_TexCoord_7() const { return ___TexCoord_7; }
	inline int32_t* get_address_of_TexCoord_7() { return &___TexCoord_7; }
	inline void set_TexCoord_7(int32_t value)
	{
		___TexCoord_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREINFO_T616718776_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef KEYVALUEPAIR_2_T2279698187_H
#define KEYVALUEPAIR_2_T2279698187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,GLTF.Schema.AccessorId>
struct  KeyValuePair_2_t2279698187 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	AccessorId_t96769721 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2279698187, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2279698187, ___value_1)); }
	inline AccessorId_t96769721 * get_value_1() const { return ___value_1; }
	inline AccessorId_t96769721 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(AccessorId_t96769721 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2279698187_H
#ifndef ENUMERATOR_T3000383178_H
#define ENUMERATOR_T3000383178_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<GLTF.Schema.NodeId>
struct  Enumerator_t3000383178 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t1111139301 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	NodeId_t3934031855 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3000383178, ___list_0)); }
	inline List_1_t1111139301 * get_list_0() const { return ___list_0; }
	inline List_1_t1111139301 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t1111139301 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3000383178, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3000383178, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3000383178, ___current_3)); }
	inline NodeId_t3934031855 * get_current_3() const { return ___current_3; }
	inline NodeId_t3934031855 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(NodeId_t3934031855 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3000383178_H
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t257213610 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___list_0)); }
	inline List_1_t257213610 * get_list_0() const { return ___list_0; }
	inline List_1_t257213610 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t257213610 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t594665363_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t594665363_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef STREAM_T1273022909_H
#define STREAM_T1273022909_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.Stream
struct  Stream_t1273022909  : public MarshalByRefObject_t2760389100
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t156472862 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t2974092902 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t156472862 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t156472862 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t156472862 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((&____activeReadWriteTask_2), value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t1273022909, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t2974092902 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t2974092902 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t2974092902 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((&____asyncActiveSemaphore_3), value);
	}
};

struct Stream_t1273022909_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t1273022909 * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t1273022909_StaticFields, ___Null_1)); }
	inline Stream_t1273022909 * get_Null_1() const { return ___Null_1; }
	inline Stream_t1273022909 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t1273022909 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((&___Null_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAM_T1273022909_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef GROUP_T2468205786_H
#define GROUP_T2468205786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Group
struct  Group_t2468205786  : public Capture_t2232016050
{
public:
	// System.Int32[] System.Text.RegularExpressions.Group::_caps
	Int32U5BU5D_t385246372* ____caps_4;
	// System.Int32 System.Text.RegularExpressions.Group::_capcount
	int32_t ____capcount_5;
	// System.String System.Text.RegularExpressions.Group::_name
	String_t* ____name_6;

public:
	inline static int32_t get_offset_of__caps_4() { return static_cast<int32_t>(offsetof(Group_t2468205786, ____caps_4)); }
	inline Int32U5BU5D_t385246372* get__caps_4() const { return ____caps_4; }
	inline Int32U5BU5D_t385246372** get_address_of__caps_4() { return &____caps_4; }
	inline void set__caps_4(Int32U5BU5D_t385246372* value)
	{
		____caps_4 = value;
		Il2CppCodeGenWriteBarrier((&____caps_4), value);
	}

	inline static int32_t get_offset_of__capcount_5() { return static_cast<int32_t>(offsetof(Group_t2468205786, ____capcount_5)); }
	inline int32_t get__capcount_5() const { return ____capcount_5; }
	inline int32_t* get_address_of__capcount_5() { return &____capcount_5; }
	inline void set__capcount_5(int32_t value)
	{
		____capcount_5 = value;
	}

	inline static int32_t get_offset_of__name_6() { return static_cast<int32_t>(offsetof(Group_t2468205786, ____name_6)); }
	inline String_t* get__name_6() const { return ____name_6; }
	inline String_t** get_address_of__name_6() { return &____name_6; }
	inline void set__name_6(String_t* value)
	{
		____name_6 = value;
		Il2CppCodeGenWriteBarrier((&____name_6), value);
	}
};

struct Group_t2468205786_StaticFields
{
public:
	// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::_emptygroup
	Group_t2468205786 * ____emptygroup_3;

public:
	inline static int32_t get_offset_of__emptygroup_3() { return static_cast<int32_t>(offsetof(Group_t2468205786_StaticFields, ____emptygroup_3)); }
	inline Group_t2468205786 * get__emptygroup_3() const { return ____emptygroup_3; }
	inline Group_t2468205786 ** get_address_of__emptygroup_3() { return &____emptygroup_3; }
	inline void set__emptygroup_3(Group_t2468205786 * value)
	{
		____emptygroup_3 = value;
		Il2CppCodeGenWriteBarrier((&____emptygroup_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GROUP_T2468205786_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_5)); }
	inline Vector3_t3722313464  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t3722313464  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_6)); }
	inline Vector3_t3722313464  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t3722313464 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t3722313464  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_7)); }
	inline Vector3_t3722313464  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t3722313464 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t3722313464  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_8)); }
	inline Vector3_t3722313464  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t3722313464 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t3722313464  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_9)); }
	inline Vector3_t3722313464  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t3722313464 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t3722313464  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_10)); }
	inline Vector3_t3722313464  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t3722313464 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t3722313464  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_11)); }
	inline Vector3_t3722313464  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t3722313464  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_12)); }
	inline Vector3_t3722313464  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t3722313464 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t3722313464  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef GLBSTREAM_T3327861285_H
#define GLBSTREAM_T3327861285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter/GLBStream
struct  GLBStream_t3327861285 
{
public:
	// System.IO.Stream UnityGLTF.GLTFSceneImporter/GLBStream::Stream
	Stream_t1273022909 * ___Stream_0;
	// System.Int64 UnityGLTF.GLTFSceneImporter/GLBStream::StartPosition
	int64_t ___StartPosition_1;

public:
	inline static int32_t get_offset_of_Stream_0() { return static_cast<int32_t>(offsetof(GLBStream_t3327861285, ___Stream_0)); }
	inline Stream_t1273022909 * get_Stream_0() const { return ___Stream_0; }
	inline Stream_t1273022909 ** get_address_of_Stream_0() { return &___Stream_0; }
	inline void set_Stream_0(Stream_t1273022909 * value)
	{
		___Stream_0 = value;
		Il2CppCodeGenWriteBarrier((&___Stream_0), value);
	}

	inline static int32_t get_offset_of_StartPosition_1() { return static_cast<int32_t>(offsetof(GLBStream_t3327861285, ___StartPosition_1)); }
	inline int64_t get_StartPosition_1() const { return ___StartPosition_1; }
	inline int64_t* get_address_of_StartPosition_1() { return &___StartPosition_1; }
	inline void set_StartPosition_1(int64_t value)
	{
		___StartPosition_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityGLTF.GLTFSceneImporter/GLBStream
struct GLBStream_t3327861285_marshaled_pinvoke
{
	Stream_t1273022909 * ___Stream_0;
	int64_t ___StartPosition_1;
};
// Native definition for COM marshalling of UnityGLTF.GLTFSceneImporter/GLBStream
struct GLBStream_t3327861285_marshaled_com
{
	Stream_t1273022909 * ___Stream_0;
	int64_t ___StartPosition_1;
};
#endif // GLBSTREAM_T3327861285_H
#ifndef WEBREQUESTEXCEPTION_T1410780468_H
#define WEBREQUESTEXCEPTION_T1410780468_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.WebRequestException
struct  WebRequestException_t1410780468  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTEXCEPTION_T1410780468_H
#ifndef ATTRIBUTEACCESSOR_T906274905_H
#define ATTRIBUTEACCESSOR_T906274905_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.AttributeAccessor
struct  AttributeAccessor_t906274905  : public RuntimeObject
{
public:
	// GLTF.Schema.AccessorId GLTF.AttributeAccessor::<AccessorId>k__BackingField
	AccessorId_t96769721 * ___U3CAccessorIdU3Ek__BackingField_0;
	// GLTF.Schema.NumericArray GLTF.AttributeAccessor::<AccessorContent>k__BackingField
	NumericArray_t4287889340  ___U3CAccessorContentU3Ek__BackingField_1;
	// System.IO.Stream GLTF.AttributeAccessor::<Stream>k__BackingField
	Stream_t1273022909 * ___U3CStreamU3Ek__BackingField_2;
	// System.Int64 GLTF.AttributeAccessor::<Offset>k__BackingField
	int64_t ___U3COffsetU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CAccessorIdU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AttributeAccessor_t906274905, ___U3CAccessorIdU3Ek__BackingField_0)); }
	inline AccessorId_t96769721 * get_U3CAccessorIdU3Ek__BackingField_0() const { return ___U3CAccessorIdU3Ek__BackingField_0; }
	inline AccessorId_t96769721 ** get_address_of_U3CAccessorIdU3Ek__BackingField_0() { return &___U3CAccessorIdU3Ek__BackingField_0; }
	inline void set_U3CAccessorIdU3Ek__BackingField_0(AccessorId_t96769721 * value)
	{
		___U3CAccessorIdU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CAccessorIdU3Ek__BackingField_0), value);
	}

	inline static int32_t get_offset_of_U3CAccessorContentU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AttributeAccessor_t906274905, ___U3CAccessorContentU3Ek__BackingField_1)); }
	inline NumericArray_t4287889340  get_U3CAccessorContentU3Ek__BackingField_1() const { return ___U3CAccessorContentU3Ek__BackingField_1; }
	inline NumericArray_t4287889340 * get_address_of_U3CAccessorContentU3Ek__BackingField_1() { return &___U3CAccessorContentU3Ek__BackingField_1; }
	inline void set_U3CAccessorContentU3Ek__BackingField_1(NumericArray_t4287889340  value)
	{
		___U3CAccessorContentU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CStreamU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AttributeAccessor_t906274905, ___U3CStreamU3Ek__BackingField_2)); }
	inline Stream_t1273022909 * get_U3CStreamU3Ek__BackingField_2() const { return ___U3CStreamU3Ek__BackingField_2; }
	inline Stream_t1273022909 ** get_address_of_U3CStreamU3Ek__BackingField_2() { return &___U3CStreamU3Ek__BackingField_2; }
	inline void set_U3CStreamU3Ek__BackingField_2(Stream_t1273022909 * value)
	{
		___U3CStreamU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CStreamU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3COffsetU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AttributeAccessor_t906274905, ___U3COffsetU3Ek__BackingField_3)); }
	inline int64_t get_U3COffsetU3Ek__BackingField_3() const { return ___U3COffsetU3Ek__BackingField_3; }
	inline int64_t* get_address_of_U3COffsetU3Ek__BackingField_3() { return &___U3COffsetU3Ek__BackingField_3; }
	inline void set_U3COffsetU3Ek__BackingField_3(int64_t value)
	{
		___U3COffsetU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEACCESSOR_T906274905_H
#ifndef ALPHAMODE_T172262820_H
#define ALPHAMODE_T172262820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.AlphaMode
struct  AlphaMode_t172262820 
{
public:
	// System.Int32 GLTF.Schema.AlphaMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AlphaMode_t172262820, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ALPHAMODE_T172262820_H
#ifndef BUFFER_T869705777_H
#define BUFFER_T869705777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.Buffer
struct  Buffer_t869705777  : public GLTFChildOfRootProperty_t1666645821
{
public:
	// System.String GLTF.Schema.Buffer::Uri
	String_t* ___Uri_7;
	// System.Int32 GLTF.Schema.Buffer::ByteLength
	int32_t ___ByteLength_8;

public:
	inline static int32_t get_offset_of_Uri_7() { return static_cast<int32_t>(offsetof(Buffer_t869705777, ___Uri_7)); }
	inline String_t* get_Uri_7() const { return ___Uri_7; }
	inline String_t** get_address_of_Uri_7() { return &___Uri_7; }
	inline void set_Uri_7(String_t* value)
	{
		___Uri_7 = value;
		Il2CppCodeGenWriteBarrier((&___Uri_7), value);
	}

	inline static int32_t get_offset_of_ByteLength_8() { return static_cast<int32_t>(offsetof(Buffer_t869705777, ___ByteLength_8)); }
	inline int32_t get_ByteLength_8() const { return ___ByteLength_8; }
	inline int32_t* get_address_of_ByteLength_8() { return &___ByteLength_8; }
	inline void set_ByteLength_8(int32_t value)
	{
		___ByteLength_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFER_T869705777_H
#ifndef BUFFERVIEWTARGET_T70817647_H
#define BUFFERVIEWTARGET_T70817647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.BufferViewTarget
struct  BufferViewTarget_t70817647 
{
public:
	// System.Int32 GLTF.Schema.BufferViewTarget::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BufferViewTarget_t70817647, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFERVIEWTARGET_T70817647_H
#ifndef DRAWMODE_T3231661045_H
#define DRAWMODE_T3231661045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.DrawMode
struct  DrawMode_t3231661045 
{
public:
	// System.Int32 GLTF.Schema.DrawMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DrawMode_t3231661045, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRAWMODE_T3231661045_H
#ifndef EXTTEXTURETRANSFORMEXTENSION_T1454646850_H
#define EXTTEXTURETRANSFORMEXTENSION_T1454646850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.ExtTextureTransformExtension
struct  ExtTextureTransformExtension_t1454646850  : public RuntimeObject
{
public:
	// GLTF.Math.Vector2 GLTF.Schema.ExtTextureTransformExtension::Offset
	Vector2_t4136528133  ___Offset_0;
	// GLTF.Math.Vector2 GLTF.Schema.ExtTextureTransformExtension::Scale
	Vector2_t4136528133  ___Scale_2;
	// System.Int32 GLTF.Schema.ExtTextureTransformExtension::TexCoord
	int32_t ___TexCoord_4;

public:
	inline static int32_t get_offset_of_Offset_0() { return static_cast<int32_t>(offsetof(ExtTextureTransformExtension_t1454646850, ___Offset_0)); }
	inline Vector2_t4136528133  get_Offset_0() const { return ___Offset_0; }
	inline Vector2_t4136528133 * get_address_of_Offset_0() { return &___Offset_0; }
	inline void set_Offset_0(Vector2_t4136528133  value)
	{
		___Offset_0 = value;
	}

	inline static int32_t get_offset_of_Scale_2() { return static_cast<int32_t>(offsetof(ExtTextureTransformExtension_t1454646850, ___Scale_2)); }
	inline Vector2_t4136528133  get_Scale_2() const { return ___Scale_2; }
	inline Vector2_t4136528133 * get_address_of_Scale_2() { return &___Scale_2; }
	inline void set_Scale_2(Vector2_t4136528133  value)
	{
		___Scale_2 = value;
	}

	inline static int32_t get_offset_of_TexCoord_4() { return static_cast<int32_t>(offsetof(ExtTextureTransformExtension_t1454646850, ___TexCoord_4)); }
	inline int32_t get_TexCoord_4() const { return ___TexCoord_4; }
	inline int32_t* get_address_of_TexCoord_4() { return &___TexCoord_4; }
	inline void set_TexCoord_4(int32_t value)
	{
		___TexCoord_4 = value;
	}
};

struct ExtTextureTransformExtension_t1454646850_StaticFields
{
public:
	// GLTF.Math.Vector2 GLTF.Schema.ExtTextureTransformExtension::OFFSET_DEFAULT
	Vector2_t4136528133  ___OFFSET_DEFAULT_1;
	// GLTF.Math.Vector2 GLTF.Schema.ExtTextureTransformExtension::SCALE_DEFAULT
	Vector2_t4136528133  ___SCALE_DEFAULT_3;
	// System.Int32 GLTF.Schema.ExtTextureTransformExtension::TEXCOORD_DEFAULT
	int32_t ___TEXCOORD_DEFAULT_5;

public:
	inline static int32_t get_offset_of_OFFSET_DEFAULT_1() { return static_cast<int32_t>(offsetof(ExtTextureTransformExtension_t1454646850_StaticFields, ___OFFSET_DEFAULT_1)); }
	inline Vector2_t4136528133  get_OFFSET_DEFAULT_1() const { return ___OFFSET_DEFAULT_1; }
	inline Vector2_t4136528133 * get_address_of_OFFSET_DEFAULT_1() { return &___OFFSET_DEFAULT_1; }
	inline void set_OFFSET_DEFAULT_1(Vector2_t4136528133  value)
	{
		___OFFSET_DEFAULT_1 = value;
	}

	inline static int32_t get_offset_of_SCALE_DEFAULT_3() { return static_cast<int32_t>(offsetof(ExtTextureTransformExtension_t1454646850_StaticFields, ___SCALE_DEFAULT_3)); }
	inline Vector2_t4136528133  get_SCALE_DEFAULT_3() const { return ___SCALE_DEFAULT_3; }
	inline Vector2_t4136528133 * get_address_of_SCALE_DEFAULT_3() { return &___SCALE_DEFAULT_3; }
	inline void set_SCALE_DEFAULT_3(Vector2_t4136528133  value)
	{
		___SCALE_DEFAULT_3 = value;
	}

	inline static int32_t get_offset_of_TEXCOORD_DEFAULT_5() { return static_cast<int32_t>(offsetof(ExtTextureTransformExtension_t1454646850_StaticFields, ___TEXCOORD_DEFAULT_5)); }
	inline int32_t get_TEXCOORD_DEFAULT_5() const { return ___TEXCOORD_DEFAULT_5; }
	inline int32_t* get_address_of_TEXCOORD_DEFAULT_5() { return &___TEXCOORD_DEFAULT_5; }
	inline void set_TEXCOORD_DEFAULT_5(int32_t value)
	{
		___TEXCOORD_DEFAULT_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTTEXTURETRANSFORMEXTENSION_T1454646850_H
#ifndef GLTFACCESSORATTRIBUTETYPE_T886210391_H
#define GLTFACCESSORATTRIBUTETYPE_T886210391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFAccessorAttributeType
struct  GLTFAccessorAttributeType_t886210391 
{
public:
	// System.Int32 GLTF.Schema.GLTFAccessorAttributeType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GLTFAccessorAttributeType_t886210391, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFACCESSORATTRIBUTETYPE_T886210391_H
#ifndef GLTFCOMPONENTTYPE_T2886675373_H
#define GLTFCOMPONENTTYPE_T2886675373_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.GLTFComponentType
struct  GLTFComponentType_t2886675373 
{
public:
	// System.Int32 GLTF.Schema.GLTFComponentType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GLTFComponentType_t2886675373, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFCOMPONENTTYPE_T2886675373_H
#ifndef IMAGE_T782620675_H
#define IMAGE_T782620675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.Image
struct  Image_t782620675  : public GLTFChildOfRootProperty_t1666645821
{
public:
	// System.String GLTF.Schema.Image::Uri
	String_t* ___Uri_7;
	// System.String GLTF.Schema.Image::MimeType
	String_t* ___MimeType_8;
	// GLTF.Schema.BufferViewId GLTF.Schema.Image::BufferView
	BufferViewId_t4185270750 * ___BufferView_9;

public:
	inline static int32_t get_offset_of_Uri_7() { return static_cast<int32_t>(offsetof(Image_t782620675, ___Uri_7)); }
	inline String_t* get_Uri_7() const { return ___Uri_7; }
	inline String_t** get_address_of_Uri_7() { return &___Uri_7; }
	inline void set_Uri_7(String_t* value)
	{
		___Uri_7 = value;
		Il2CppCodeGenWriteBarrier((&___Uri_7), value);
	}

	inline static int32_t get_offset_of_MimeType_8() { return static_cast<int32_t>(offsetof(Image_t782620675, ___MimeType_8)); }
	inline String_t* get_MimeType_8() const { return ___MimeType_8; }
	inline String_t** get_address_of_MimeType_8() { return &___MimeType_8; }
	inline void set_MimeType_8(String_t* value)
	{
		___MimeType_8 = value;
		Il2CppCodeGenWriteBarrier((&___MimeType_8), value);
	}

	inline static int32_t get_offset_of_BufferView_9() { return static_cast<int32_t>(offsetof(Image_t782620675, ___BufferView_9)); }
	inline BufferViewId_t4185270750 * get_BufferView_9() const { return ___BufferView_9; }
	inline BufferViewId_t4185270750 ** get_address_of_BufferView_9() { return &___BufferView_9; }
	inline void set_BufferView_9(BufferViewId_t4185270750 * value)
	{
		___BufferView_9 = value;
		Il2CppCodeGenWriteBarrier((&___BufferView_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T782620675_H
#ifndef KHR_MATERIALS_PBRSPECULARGLOSSINESSEXTENSION_T1217762009_H
#define KHR_MATERIALS_PBRSPECULARGLOSSINESSEXTENSION_T1217762009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.KHR_materials_pbrSpecularGlossinessExtension
struct  KHR_materials_pbrSpecularGlossinessExtension_t1217762009  : public RuntimeObject
{
public:
	// GLTF.Math.Color GLTF.Schema.KHR_materials_pbrSpecularGlossinessExtension::DiffuseFactor
	Color_t1637600301  ___DiffuseFactor_2;
	// GLTF.Schema.TextureInfo GLTF.Schema.KHR_materials_pbrSpecularGlossinessExtension::DiffuseTexture
	TextureInfo_t616718776 * ___DiffuseTexture_3;
	// GLTF.Math.Vector3 GLTF.Schema.KHR_materials_pbrSpecularGlossinessExtension::SpecularFactor
	Vector3_t4136528132  ___SpecularFactor_4;
	// System.Double GLTF.Schema.KHR_materials_pbrSpecularGlossinessExtension::GlossinessFactor
	double ___GlossinessFactor_5;
	// GLTF.Schema.TextureInfo GLTF.Schema.KHR_materials_pbrSpecularGlossinessExtension::SpecularGlossinessTexture
	TextureInfo_t616718776 * ___SpecularGlossinessTexture_6;

public:
	inline static int32_t get_offset_of_DiffuseFactor_2() { return static_cast<int32_t>(offsetof(KHR_materials_pbrSpecularGlossinessExtension_t1217762009, ___DiffuseFactor_2)); }
	inline Color_t1637600301  get_DiffuseFactor_2() const { return ___DiffuseFactor_2; }
	inline Color_t1637600301 * get_address_of_DiffuseFactor_2() { return &___DiffuseFactor_2; }
	inline void set_DiffuseFactor_2(Color_t1637600301  value)
	{
		___DiffuseFactor_2 = value;
	}

	inline static int32_t get_offset_of_DiffuseTexture_3() { return static_cast<int32_t>(offsetof(KHR_materials_pbrSpecularGlossinessExtension_t1217762009, ___DiffuseTexture_3)); }
	inline TextureInfo_t616718776 * get_DiffuseTexture_3() const { return ___DiffuseTexture_3; }
	inline TextureInfo_t616718776 ** get_address_of_DiffuseTexture_3() { return &___DiffuseTexture_3; }
	inline void set_DiffuseTexture_3(TextureInfo_t616718776 * value)
	{
		___DiffuseTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___DiffuseTexture_3), value);
	}

	inline static int32_t get_offset_of_SpecularFactor_4() { return static_cast<int32_t>(offsetof(KHR_materials_pbrSpecularGlossinessExtension_t1217762009, ___SpecularFactor_4)); }
	inline Vector3_t4136528132  get_SpecularFactor_4() const { return ___SpecularFactor_4; }
	inline Vector3_t4136528132 * get_address_of_SpecularFactor_4() { return &___SpecularFactor_4; }
	inline void set_SpecularFactor_4(Vector3_t4136528132  value)
	{
		___SpecularFactor_4 = value;
	}

	inline static int32_t get_offset_of_GlossinessFactor_5() { return static_cast<int32_t>(offsetof(KHR_materials_pbrSpecularGlossinessExtension_t1217762009, ___GlossinessFactor_5)); }
	inline double get_GlossinessFactor_5() const { return ___GlossinessFactor_5; }
	inline double* get_address_of_GlossinessFactor_5() { return &___GlossinessFactor_5; }
	inline void set_GlossinessFactor_5(double value)
	{
		___GlossinessFactor_5 = value;
	}

	inline static int32_t get_offset_of_SpecularGlossinessTexture_6() { return static_cast<int32_t>(offsetof(KHR_materials_pbrSpecularGlossinessExtension_t1217762009, ___SpecularGlossinessTexture_6)); }
	inline TextureInfo_t616718776 * get_SpecularGlossinessTexture_6() const { return ___SpecularGlossinessTexture_6; }
	inline TextureInfo_t616718776 ** get_address_of_SpecularGlossinessTexture_6() { return &___SpecularGlossinessTexture_6; }
	inline void set_SpecularGlossinessTexture_6(TextureInfo_t616718776 * value)
	{
		___SpecularGlossinessTexture_6 = value;
		Il2CppCodeGenWriteBarrier((&___SpecularGlossinessTexture_6), value);
	}
};

struct KHR_materials_pbrSpecularGlossinessExtension_t1217762009_StaticFields
{
public:
	// GLTF.Math.Vector3 GLTF.Schema.KHR_materials_pbrSpecularGlossinessExtension::SPEC_FACTOR_DEFAULT
	Vector3_t4136528132  ___SPEC_FACTOR_DEFAULT_0;
	// System.Double GLTF.Schema.KHR_materials_pbrSpecularGlossinessExtension::GLOSS_FACTOR_DEFAULT
	double ___GLOSS_FACTOR_DEFAULT_1;

public:
	inline static int32_t get_offset_of_SPEC_FACTOR_DEFAULT_0() { return static_cast<int32_t>(offsetof(KHR_materials_pbrSpecularGlossinessExtension_t1217762009_StaticFields, ___SPEC_FACTOR_DEFAULT_0)); }
	inline Vector3_t4136528132  get_SPEC_FACTOR_DEFAULT_0() const { return ___SPEC_FACTOR_DEFAULT_0; }
	inline Vector3_t4136528132 * get_address_of_SPEC_FACTOR_DEFAULT_0() { return &___SPEC_FACTOR_DEFAULT_0; }
	inline void set_SPEC_FACTOR_DEFAULT_0(Vector3_t4136528132  value)
	{
		___SPEC_FACTOR_DEFAULT_0 = value;
	}

	inline static int32_t get_offset_of_GLOSS_FACTOR_DEFAULT_1() { return static_cast<int32_t>(offsetof(KHR_materials_pbrSpecularGlossinessExtension_t1217762009_StaticFields, ___GLOSS_FACTOR_DEFAULT_1)); }
	inline double get_GLOSS_FACTOR_DEFAULT_1() const { return ___GLOSS_FACTOR_DEFAULT_1; }
	inline double* get_address_of_GLOSS_FACTOR_DEFAULT_1() { return &___GLOSS_FACTOR_DEFAULT_1; }
	inline void set_GLOSS_FACTOR_DEFAULT_1(double value)
	{
		___GLOSS_FACTOR_DEFAULT_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KHR_MATERIALS_PBRSPECULARGLOSSINESSEXTENSION_T1217762009_H
#ifndef MAGFILTERMODE_T3506592435_H
#define MAGFILTERMODE_T3506592435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.MagFilterMode
struct  MagFilterMode_t3506592435 
{
public:
	// System.Int32 GLTF.Schema.MagFilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MagFilterMode_t3506592435, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MAGFILTERMODE_T3506592435_H
#ifndef MATERIALCOMMONCONSTANT_T2574134879_H
#define MATERIALCOMMONCONSTANT_T2574134879_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.MaterialCommonConstant
struct  MaterialCommonConstant_t2574134879  : public GLTFProperty_t1589224293
{
public:
	// GLTF.Math.Color GLTF.Schema.MaterialCommonConstant::AmbientFactor
	Color_t1637600301  ___AmbientFactor_6;
	// GLTF.Schema.TextureInfo GLTF.Schema.MaterialCommonConstant::LightmapTexture
	TextureInfo_t616718776 * ___LightmapTexture_7;
	// GLTF.Math.Color GLTF.Schema.MaterialCommonConstant::LightmapFactor
	Color_t1637600301  ___LightmapFactor_8;

public:
	inline static int32_t get_offset_of_AmbientFactor_6() { return static_cast<int32_t>(offsetof(MaterialCommonConstant_t2574134879, ___AmbientFactor_6)); }
	inline Color_t1637600301  get_AmbientFactor_6() const { return ___AmbientFactor_6; }
	inline Color_t1637600301 * get_address_of_AmbientFactor_6() { return &___AmbientFactor_6; }
	inline void set_AmbientFactor_6(Color_t1637600301  value)
	{
		___AmbientFactor_6 = value;
	}

	inline static int32_t get_offset_of_LightmapTexture_7() { return static_cast<int32_t>(offsetof(MaterialCommonConstant_t2574134879, ___LightmapTexture_7)); }
	inline TextureInfo_t616718776 * get_LightmapTexture_7() const { return ___LightmapTexture_7; }
	inline TextureInfo_t616718776 ** get_address_of_LightmapTexture_7() { return &___LightmapTexture_7; }
	inline void set_LightmapTexture_7(TextureInfo_t616718776 * value)
	{
		___LightmapTexture_7 = value;
		Il2CppCodeGenWriteBarrier((&___LightmapTexture_7), value);
	}

	inline static int32_t get_offset_of_LightmapFactor_8() { return static_cast<int32_t>(offsetof(MaterialCommonConstant_t2574134879, ___LightmapFactor_8)); }
	inline Color_t1637600301  get_LightmapFactor_8() const { return ___LightmapFactor_8; }
	inline Color_t1637600301 * get_address_of_LightmapFactor_8() { return &___LightmapFactor_8; }
	inline void set_LightmapFactor_8(Color_t1637600301  value)
	{
		___LightmapFactor_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALCOMMONCONSTANT_T2574134879_H
#ifndef MESH_T2726263229_H
#define MESH_T2726263229_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.Mesh
struct  Mesh_t2726263229  : public GLTFChildOfRootProperty_t1666645821
{
public:
	// System.Collections.Generic.List`1<GLTF.Schema.MeshPrimitive> GLTF.Schema.Mesh::Primitives
	List_1_t87353362 * ___Primitives_7;
	// System.Collections.Generic.List`1<System.Double> GLTF.Schema.Mesh::Weights
	List_1_t2066740105 * ___Weights_8;

public:
	inline static int32_t get_offset_of_Primitives_7() { return static_cast<int32_t>(offsetof(Mesh_t2726263229, ___Primitives_7)); }
	inline List_1_t87353362 * get_Primitives_7() const { return ___Primitives_7; }
	inline List_1_t87353362 ** get_address_of_Primitives_7() { return &___Primitives_7; }
	inline void set_Primitives_7(List_1_t87353362 * value)
	{
		___Primitives_7 = value;
		Il2CppCodeGenWriteBarrier((&___Primitives_7), value);
	}

	inline static int32_t get_offset_of_Weights_8() { return static_cast<int32_t>(offsetof(Mesh_t2726263229, ___Weights_8)); }
	inline List_1_t2066740105 * get_Weights_8() const { return ___Weights_8; }
	inline List_1_t2066740105 ** get_address_of_Weights_8() { return &___Weights_8; }
	inline void set_Weights_8(List_1_t2066740105 * value)
	{
		___Weights_8 = value;
		Il2CppCodeGenWriteBarrier((&___Weights_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T2726263229_H
#ifndef MINFILTERMODE_T1888272385_H
#define MINFILTERMODE_T1888272385_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.MinFilterMode
struct  MinFilterMode_t1888272385 
{
public:
	// System.Int32 GLTF.Schema.MinFilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MinFilterMode_t1888272385, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MINFILTERMODE_T1888272385_H
#ifndef NODE_T3990671929_H
#define NODE_T3990671929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.Node
struct  Node_t3990671929  : public GLTFChildOfRootProperty_t1666645821
{
public:
	// System.Boolean GLTF.Schema.Node::UseTRS
	bool ___UseTRS_7;
	// GLTF.Schema.CameraId GLTF.Schema.Node::Camera
	CameraId_t1207636538 * ___Camera_8;
	// System.Collections.Generic.List`1<GLTF.Schema.NodeId> GLTF.Schema.Node::Children
	List_1_t1111139301 * ___Children_9;
	// GLTF.Schema.SkinId GLTF.Schema.Node::Skin
	SkinId_t3905368637 * ___Skin_10;
	// GLTF.Math.Matrix4x4 GLTF.Schema.Node::Matrix
	Matrix4x4_t3584866707 * ___Matrix_11;
	// GLTF.Schema.MeshId GLTF.Schema.Node::Mesh
	MeshId_t2690594789 * ___Mesh_12;
	// GLTF.Math.Quaternion GLTF.Schema.Node::Rotation
	Quaternion_t764299249  ___Rotation_13;
	// GLTF.Math.Vector3 GLTF.Schema.Node::Scale
	Vector3_t4136528132  ___Scale_14;
	// GLTF.Math.Vector3 GLTF.Schema.Node::Translation
	Vector3_t4136528132  ___Translation_15;
	// System.Collections.Generic.List`1<System.Double> GLTF.Schema.Node::Weights
	List_1_t2066740105 * ___Weights_16;

public:
	inline static int32_t get_offset_of_UseTRS_7() { return static_cast<int32_t>(offsetof(Node_t3990671929, ___UseTRS_7)); }
	inline bool get_UseTRS_7() const { return ___UseTRS_7; }
	inline bool* get_address_of_UseTRS_7() { return &___UseTRS_7; }
	inline void set_UseTRS_7(bool value)
	{
		___UseTRS_7 = value;
	}

	inline static int32_t get_offset_of_Camera_8() { return static_cast<int32_t>(offsetof(Node_t3990671929, ___Camera_8)); }
	inline CameraId_t1207636538 * get_Camera_8() const { return ___Camera_8; }
	inline CameraId_t1207636538 ** get_address_of_Camera_8() { return &___Camera_8; }
	inline void set_Camera_8(CameraId_t1207636538 * value)
	{
		___Camera_8 = value;
		Il2CppCodeGenWriteBarrier((&___Camera_8), value);
	}

	inline static int32_t get_offset_of_Children_9() { return static_cast<int32_t>(offsetof(Node_t3990671929, ___Children_9)); }
	inline List_1_t1111139301 * get_Children_9() const { return ___Children_9; }
	inline List_1_t1111139301 ** get_address_of_Children_9() { return &___Children_9; }
	inline void set_Children_9(List_1_t1111139301 * value)
	{
		___Children_9 = value;
		Il2CppCodeGenWriteBarrier((&___Children_9), value);
	}

	inline static int32_t get_offset_of_Skin_10() { return static_cast<int32_t>(offsetof(Node_t3990671929, ___Skin_10)); }
	inline SkinId_t3905368637 * get_Skin_10() const { return ___Skin_10; }
	inline SkinId_t3905368637 ** get_address_of_Skin_10() { return &___Skin_10; }
	inline void set_Skin_10(SkinId_t3905368637 * value)
	{
		___Skin_10 = value;
		Il2CppCodeGenWriteBarrier((&___Skin_10), value);
	}

	inline static int32_t get_offset_of_Matrix_11() { return static_cast<int32_t>(offsetof(Node_t3990671929, ___Matrix_11)); }
	inline Matrix4x4_t3584866707 * get_Matrix_11() const { return ___Matrix_11; }
	inline Matrix4x4_t3584866707 ** get_address_of_Matrix_11() { return &___Matrix_11; }
	inline void set_Matrix_11(Matrix4x4_t3584866707 * value)
	{
		___Matrix_11 = value;
		Il2CppCodeGenWriteBarrier((&___Matrix_11), value);
	}

	inline static int32_t get_offset_of_Mesh_12() { return static_cast<int32_t>(offsetof(Node_t3990671929, ___Mesh_12)); }
	inline MeshId_t2690594789 * get_Mesh_12() const { return ___Mesh_12; }
	inline MeshId_t2690594789 ** get_address_of_Mesh_12() { return &___Mesh_12; }
	inline void set_Mesh_12(MeshId_t2690594789 * value)
	{
		___Mesh_12 = value;
		Il2CppCodeGenWriteBarrier((&___Mesh_12), value);
	}

	inline static int32_t get_offset_of_Rotation_13() { return static_cast<int32_t>(offsetof(Node_t3990671929, ___Rotation_13)); }
	inline Quaternion_t764299249  get_Rotation_13() const { return ___Rotation_13; }
	inline Quaternion_t764299249 * get_address_of_Rotation_13() { return &___Rotation_13; }
	inline void set_Rotation_13(Quaternion_t764299249  value)
	{
		___Rotation_13 = value;
	}

	inline static int32_t get_offset_of_Scale_14() { return static_cast<int32_t>(offsetof(Node_t3990671929, ___Scale_14)); }
	inline Vector3_t4136528132  get_Scale_14() const { return ___Scale_14; }
	inline Vector3_t4136528132 * get_address_of_Scale_14() { return &___Scale_14; }
	inline void set_Scale_14(Vector3_t4136528132  value)
	{
		___Scale_14 = value;
	}

	inline static int32_t get_offset_of_Translation_15() { return static_cast<int32_t>(offsetof(Node_t3990671929, ___Translation_15)); }
	inline Vector3_t4136528132  get_Translation_15() const { return ___Translation_15; }
	inline Vector3_t4136528132 * get_address_of_Translation_15() { return &___Translation_15; }
	inline void set_Translation_15(Vector3_t4136528132  value)
	{
		___Translation_15 = value;
	}

	inline static int32_t get_offset_of_Weights_16() { return static_cast<int32_t>(offsetof(Node_t3990671929, ___Weights_16)); }
	inline List_1_t2066740105 * get_Weights_16() const { return ___Weights_16; }
	inline List_1_t2066740105 ** get_address_of_Weights_16() { return &___Weights_16; }
	inline void set_Weights_16(List_1_t2066740105 * value)
	{
		___Weights_16 = value;
		Il2CppCodeGenWriteBarrier((&___Weights_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODE_T3990671929_H
#ifndef NORMALTEXTUREINFO_T1344565953_H
#define NORMALTEXTUREINFO_T1344565953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.NormalTextureInfo
struct  NormalTextureInfo_t1344565953  : public TextureInfo_t616718776
{
public:
	// System.Double GLTF.Schema.NormalTextureInfo::Scale
	double ___Scale_8;

public:
	inline static int32_t get_offset_of_Scale_8() { return static_cast<int32_t>(offsetof(NormalTextureInfo_t1344565953, ___Scale_8)); }
	inline double get_Scale_8() const { return ___Scale_8; }
	inline double* get_address_of_Scale_8() { return &___Scale_8; }
	inline void set_Scale_8(double value)
	{
		___Scale_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NORMALTEXTUREINFO_T1344565953_H
#ifndef OCCLUSIONTEXTUREINFO_T1842066315_H
#define OCCLUSIONTEXTUREINFO_T1842066315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.OcclusionTextureInfo
struct  OcclusionTextureInfo_t1842066315  : public TextureInfo_t616718776
{
public:
	// System.Double GLTF.Schema.OcclusionTextureInfo::Strength
	double ___Strength_8;

public:
	inline static int32_t get_offset_of_Strength_8() { return static_cast<int32_t>(offsetof(OcclusionTextureInfo_t1842066315, ___Strength_8)); }
	inline double get_Strength_8() const { return ___Strength_8; }
	inline double* get_address_of_Strength_8() { return &___Strength_8; }
	inline void set_Strength_8(double value)
	{
		___Strength_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OCCLUSIONTEXTUREINFO_T1842066315_H
#ifndef PBRMETALLICROUGHNESS_T313043948_H
#define PBRMETALLICROUGHNESS_T313043948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.PbrMetallicRoughness
struct  PbrMetallicRoughness_t313043948  : public GLTFProperty_t1589224293
{
public:
	// GLTF.Math.Color GLTF.Schema.PbrMetallicRoughness::BaseColorFactor
	Color_t1637600301  ___BaseColorFactor_6;
	// GLTF.Schema.TextureInfo GLTF.Schema.PbrMetallicRoughness::BaseColorTexture
	TextureInfo_t616718776 * ___BaseColorTexture_7;
	// System.Double GLTF.Schema.PbrMetallicRoughness::MetallicFactor
	double ___MetallicFactor_8;
	// System.Double GLTF.Schema.PbrMetallicRoughness::RoughnessFactor
	double ___RoughnessFactor_9;
	// GLTF.Schema.TextureInfo GLTF.Schema.PbrMetallicRoughness::MetallicRoughnessTexture
	TextureInfo_t616718776 * ___MetallicRoughnessTexture_10;

public:
	inline static int32_t get_offset_of_BaseColorFactor_6() { return static_cast<int32_t>(offsetof(PbrMetallicRoughness_t313043948, ___BaseColorFactor_6)); }
	inline Color_t1637600301  get_BaseColorFactor_6() const { return ___BaseColorFactor_6; }
	inline Color_t1637600301 * get_address_of_BaseColorFactor_6() { return &___BaseColorFactor_6; }
	inline void set_BaseColorFactor_6(Color_t1637600301  value)
	{
		___BaseColorFactor_6 = value;
	}

	inline static int32_t get_offset_of_BaseColorTexture_7() { return static_cast<int32_t>(offsetof(PbrMetallicRoughness_t313043948, ___BaseColorTexture_7)); }
	inline TextureInfo_t616718776 * get_BaseColorTexture_7() const { return ___BaseColorTexture_7; }
	inline TextureInfo_t616718776 ** get_address_of_BaseColorTexture_7() { return &___BaseColorTexture_7; }
	inline void set_BaseColorTexture_7(TextureInfo_t616718776 * value)
	{
		___BaseColorTexture_7 = value;
		Il2CppCodeGenWriteBarrier((&___BaseColorTexture_7), value);
	}

	inline static int32_t get_offset_of_MetallicFactor_8() { return static_cast<int32_t>(offsetof(PbrMetallicRoughness_t313043948, ___MetallicFactor_8)); }
	inline double get_MetallicFactor_8() const { return ___MetallicFactor_8; }
	inline double* get_address_of_MetallicFactor_8() { return &___MetallicFactor_8; }
	inline void set_MetallicFactor_8(double value)
	{
		___MetallicFactor_8 = value;
	}

	inline static int32_t get_offset_of_RoughnessFactor_9() { return static_cast<int32_t>(offsetof(PbrMetallicRoughness_t313043948, ___RoughnessFactor_9)); }
	inline double get_RoughnessFactor_9() const { return ___RoughnessFactor_9; }
	inline double* get_address_of_RoughnessFactor_9() { return &___RoughnessFactor_9; }
	inline void set_RoughnessFactor_9(double value)
	{
		___RoughnessFactor_9 = value;
	}

	inline static int32_t get_offset_of_MetallicRoughnessTexture_10() { return static_cast<int32_t>(offsetof(PbrMetallicRoughness_t313043948, ___MetallicRoughnessTexture_10)); }
	inline TextureInfo_t616718776 * get_MetallicRoughnessTexture_10() const { return ___MetallicRoughnessTexture_10; }
	inline TextureInfo_t616718776 ** get_address_of_MetallicRoughnessTexture_10() { return &___MetallicRoughnessTexture_10; }
	inline void set_MetallicRoughnessTexture_10(TextureInfo_t616718776 * value)
	{
		___MetallicRoughnessTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&___MetallicRoughnessTexture_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PBRMETALLICROUGHNESS_T313043948_H
#ifndef SCENE_T1955661005_H
#define SCENE_T1955661005_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.Scene
struct  Scene_t1955661005  : public GLTFChildOfRootProperty_t1666645821
{
public:
	// System.Collections.Generic.List`1<GLTF.Schema.NodeId> GLTF.Schema.Scene::Nodes
	List_1_t1111139301 * ___Nodes_7;

public:
	inline static int32_t get_offset_of_Nodes_7() { return static_cast<int32_t>(offsetof(Scene_t1955661005, ___Nodes_7)); }
	inline List_1_t1111139301 * get_Nodes_7() const { return ___Nodes_7; }
	inline List_1_t1111139301 ** get_address_of_Nodes_7() { return &___Nodes_7; }
	inline void set_Nodes_7(List_1_t1111139301 * value)
	{
		___Nodes_7 = value;
		Il2CppCodeGenWriteBarrier((&___Nodes_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T1955661005_H
#ifndef TEXTURE_T812196831_H
#define TEXTURE_T812196831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.Texture
struct  Texture_t812196831  : public GLTFChildOfRootProperty_t1666645821
{
public:
	// GLTF.Schema.SamplerId GLTF.Schema.Texture::Sampler
	SamplerId_t2839447902 * ___Sampler_7;
	// GLTF.Schema.ImageId GLTF.Schema.Texture::Source
	ImageId_t3414506292 * ___Source_8;

public:
	inline static int32_t get_offset_of_Sampler_7() { return static_cast<int32_t>(offsetof(Texture_t812196831, ___Sampler_7)); }
	inline SamplerId_t2839447902 * get_Sampler_7() const { return ___Sampler_7; }
	inline SamplerId_t2839447902 ** get_address_of_Sampler_7() { return &___Sampler_7; }
	inline void set_Sampler_7(SamplerId_t2839447902 * value)
	{
		___Sampler_7 = value;
		Il2CppCodeGenWriteBarrier((&___Sampler_7), value);
	}

	inline static int32_t get_offset_of_Source_8() { return static_cast<int32_t>(offsetof(Texture_t812196831, ___Source_8)); }
	inline ImageId_t3414506292 * get_Source_8() const { return ___Source_8; }
	inline ImageId_t3414506292 ** get_address_of_Source_8() { return &___Source_8; }
	inline void set_Source_8(ImageId_t3414506292 * value)
	{
		___Source_8 = value;
		Il2CppCodeGenWriteBarrier((&___Source_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T812196831_H
#ifndef WRAPMODE_T1836202438_H
#define WRAPMODE_T1836202438_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.WrapMode
struct  WrapMode_t1836202438 
{
public:
	// System.Int32 GLTF.Schema.WrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WrapMode_t1836202438, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRAPMODE_T1836202438_H
#ifndef ENUMERATOR_T2086727927_H
#define ENUMERATOR_T2086727927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_t2086727927 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t132545152 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2530217319  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___dictionary_0)); }
	inline Dictionary_2_t132545152 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t132545152 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t132545152 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___current_3)); }
	inline KeyValuePair_2_t2530217319  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2530217319 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2530217319  value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t2086727927, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2086727927_H
#ifndef ENUMERATOR_T1836208795_H
#define ENUMERATOR_T1836208795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,GLTF.Schema.AccessorId>
struct  Enumerator_t1836208795 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t4176993316 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t2279698187  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t1836208795, ___dictionary_0)); }
	inline Dictionary_2_t4176993316 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t4176993316 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t4176993316 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t1836208795, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t1836208795, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t1836208795, ___current_3)); }
	inline KeyValuePair_2_t2279698187  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t2279698187 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t2279698187  value)
	{
		___current_3 = value;
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t1836208795, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T1836208795_H
#ifndef KEYNOTFOUNDEXCEPTION_T2292407383_H
#define KEYNOTFOUNDEXCEPTION_T2292407383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_t2292407383  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYNOTFOUNDEXCEPTION_T2292407383_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
#ifndef FILEACCESS_T1659085276_H
#define FILEACCESS_T1659085276_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileAccess
struct  FileAccess_t1659085276 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t1659085276, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEACCESS_T1659085276_H
#ifndef MEMORYSTREAM_T94973147_H
#define MEMORYSTREAM_T94973147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.MemoryStream
struct  MemoryStream_t94973147  : public Stream_t1273022909
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_t4116647657* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t61518632 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____buffer_4)); }
	inline ByteU5BU5D_t4116647657* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_t4116647657** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_t4116647657* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((&____buffer_4), value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t94973147, ____lastReadTask_13)); }
	inline Task_1_t61518632 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_t61518632 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_t61518632 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((&____lastReadTask_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMORYSTREAM_T94973147_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef MATCH_T3408321083_H
#define MATCH_T3408321083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Match
struct  Match_t3408321083  : public Group_t2468205786
{
public:
	// System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::_groupcoll
	GroupCollection_t69770484 * ____groupcoll_8;
	// System.Text.RegularExpressions.Regex System.Text.RegularExpressions.Match::_regex
	Regex_t3657309853 * ____regex_9;
	// System.Int32 System.Text.RegularExpressions.Match::_textbeg
	int32_t ____textbeg_10;
	// System.Int32 System.Text.RegularExpressions.Match::_textpos
	int32_t ____textpos_11;
	// System.Int32 System.Text.RegularExpressions.Match::_textend
	int32_t ____textend_12;
	// System.Int32 System.Text.RegularExpressions.Match::_textstart
	int32_t ____textstart_13;
	// System.Int32[][] System.Text.RegularExpressions.Match::_matches
	Int32U5BU5DU5BU5D_t3365920845* ____matches_14;
	// System.Int32[] System.Text.RegularExpressions.Match::_matchcount
	Int32U5BU5D_t385246372* ____matchcount_15;
	// System.Boolean System.Text.RegularExpressions.Match::_balancing
	bool ____balancing_16;

public:
	inline static int32_t get_offset_of__groupcoll_8() { return static_cast<int32_t>(offsetof(Match_t3408321083, ____groupcoll_8)); }
	inline GroupCollection_t69770484 * get__groupcoll_8() const { return ____groupcoll_8; }
	inline GroupCollection_t69770484 ** get_address_of__groupcoll_8() { return &____groupcoll_8; }
	inline void set__groupcoll_8(GroupCollection_t69770484 * value)
	{
		____groupcoll_8 = value;
		Il2CppCodeGenWriteBarrier((&____groupcoll_8), value);
	}

	inline static int32_t get_offset_of__regex_9() { return static_cast<int32_t>(offsetof(Match_t3408321083, ____regex_9)); }
	inline Regex_t3657309853 * get__regex_9() const { return ____regex_9; }
	inline Regex_t3657309853 ** get_address_of__regex_9() { return &____regex_9; }
	inline void set__regex_9(Regex_t3657309853 * value)
	{
		____regex_9 = value;
		Il2CppCodeGenWriteBarrier((&____regex_9), value);
	}

	inline static int32_t get_offset_of__textbeg_10() { return static_cast<int32_t>(offsetof(Match_t3408321083, ____textbeg_10)); }
	inline int32_t get__textbeg_10() const { return ____textbeg_10; }
	inline int32_t* get_address_of__textbeg_10() { return &____textbeg_10; }
	inline void set__textbeg_10(int32_t value)
	{
		____textbeg_10 = value;
	}

	inline static int32_t get_offset_of__textpos_11() { return static_cast<int32_t>(offsetof(Match_t3408321083, ____textpos_11)); }
	inline int32_t get__textpos_11() const { return ____textpos_11; }
	inline int32_t* get_address_of__textpos_11() { return &____textpos_11; }
	inline void set__textpos_11(int32_t value)
	{
		____textpos_11 = value;
	}

	inline static int32_t get_offset_of__textend_12() { return static_cast<int32_t>(offsetof(Match_t3408321083, ____textend_12)); }
	inline int32_t get__textend_12() const { return ____textend_12; }
	inline int32_t* get_address_of__textend_12() { return &____textend_12; }
	inline void set__textend_12(int32_t value)
	{
		____textend_12 = value;
	}

	inline static int32_t get_offset_of__textstart_13() { return static_cast<int32_t>(offsetof(Match_t3408321083, ____textstart_13)); }
	inline int32_t get__textstart_13() const { return ____textstart_13; }
	inline int32_t* get_address_of__textstart_13() { return &____textstart_13; }
	inline void set__textstart_13(int32_t value)
	{
		____textstart_13 = value;
	}

	inline static int32_t get_offset_of__matches_14() { return static_cast<int32_t>(offsetof(Match_t3408321083, ____matches_14)); }
	inline Int32U5BU5DU5BU5D_t3365920845* get__matches_14() const { return ____matches_14; }
	inline Int32U5BU5DU5BU5D_t3365920845** get_address_of__matches_14() { return &____matches_14; }
	inline void set__matches_14(Int32U5BU5DU5BU5D_t3365920845* value)
	{
		____matches_14 = value;
		Il2CppCodeGenWriteBarrier((&____matches_14), value);
	}

	inline static int32_t get_offset_of__matchcount_15() { return static_cast<int32_t>(offsetof(Match_t3408321083, ____matchcount_15)); }
	inline Int32U5BU5D_t385246372* get__matchcount_15() const { return ____matchcount_15; }
	inline Int32U5BU5D_t385246372** get_address_of__matchcount_15() { return &____matchcount_15; }
	inline void set__matchcount_15(Int32U5BU5D_t385246372* value)
	{
		____matchcount_15 = value;
		Il2CppCodeGenWriteBarrier((&____matchcount_15), value);
	}

	inline static int32_t get_offset_of__balancing_16() { return static_cast<int32_t>(offsetof(Match_t3408321083, ____balancing_16)); }
	inline bool get__balancing_16() const { return ____balancing_16; }
	inline bool* get_address_of__balancing_16() { return &____balancing_16; }
	inline void set__balancing_16(bool value)
	{
		____balancing_16 = value;
	}
};

struct Match_t3408321083_StaticFields
{
public:
	// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Match::_empty
	Match_t3408321083 * ____empty_7;

public:
	inline static int32_t get_offset_of__empty_7() { return static_cast<int32_t>(offsetof(Match_t3408321083_StaticFields, ____empty_7)); }
	inline Match_t3408321083 * get__empty_7() const { return ____empty_7; }
	inline Match_t3408321083 ** get_address_of__empty_7() { return &____empty_7; }
	inline void set__empty_7(Match_t3408321083 * value)
	{
		____empty_7 = value;
		Il2CppCodeGenWriteBarrier((&____empty_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATCH_T3408321083_H
#ifndef REGEXOPTIONS_T92845595_H
#define REGEXOPTIONS_T92845595_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t92845595 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t92845595, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEXOPTIONS_T92845595_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_19)); }
	inline TimeSpan_t881159249  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t881159249 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t881159249  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t881159249  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t881159249  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t881159249  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t881159249  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef FLAGS_T2372798318_H
#define FLAGS_T2372798318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/Flags
struct  Flags_t2372798318 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t2372798318, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGS_T2372798318_H
#ifndef URIIDNSCOPE_T1847433844_H
#define URIIDNSCOPE_T1847433844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriIdnScope
struct  UriIdnScope_t1847433844 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_t1847433844, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIIDNSCOPE_T1847433844_H
#ifndef ASYNCOPERATION_T1445031843_H
#define ASYNCOPERATION_T1445031843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AsyncOperation
struct  AsyncOperation_t1445031843  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_t1617499438 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t1445031843, ___m_completeCallback_1)); }
	inline Action_1_t1617499438 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_t1617499438 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_t1617499438 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_completeCallback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t1445031843_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
#endif // ASYNCOPERATION_T1445031843_H
#ifndef FILTERMODE_T3761284007_H
#define FILTERMODE_T3761284007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.FilterMode
struct  FilterMode_t3761284007 
{
public:
	// System.Int32 UnityEngine.FilterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FilterMode_t3761284007, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILTERMODE_T3761284007_H
#ifndef CERTIFICATEHANDLER_T2739891000_H
#define CERTIFICATEHANDLER_T2739891000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_t2739891000  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_t2739891000, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t2739891000_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // CERTIFICATEHANDLER_T2739891000_H
#ifndef DOWNLOADHANDLER_T2937767557_H
#define DOWNLOADHANDLER_T2937767557_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t2937767557  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t2937767557, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t2937767557_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // DOWNLOADHANDLER_T2937767557_H
#ifndef UPLOADHANDLER_T2993558019_H
#define UPLOADHANDLER_T2993558019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t2993558019  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t2993558019, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t2993558019_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // UPLOADHANDLER_T2993558019_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef TEXTUREWRAPMODE_T584250749_H
#define TEXTUREWRAPMODE_T584250749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureWrapMode
struct  TextureWrapMode_t584250749 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureWrapMode_t584250749, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREWRAPMODE_T584250749_H
#ifndef SCHEMAEXTENSIONS_T3846062055_H
#define SCHEMAEXTENSIONS_T3846062055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.Extensions.SchemaExtensions
struct  SchemaExtensions_t3846062055  : public RuntimeObject
{
public:

public:
};

struct SchemaExtensions_t3846062055_StaticFields
{
public:
	// GLTF.Math.Vector3 UnityGLTF.Extensions.SchemaExtensions::CoordinateSpaceConversionScale
	Vector3_t4136528132  ___CoordinateSpaceConversionScale_0;
	// GLTF.Math.Vector4 UnityGLTF.Extensions.SchemaExtensions::TangentSpaceConversionScale
	Vector4_t4136528135  ___TangentSpaceConversionScale_1;

public:
	inline static int32_t get_offset_of_CoordinateSpaceConversionScale_0() { return static_cast<int32_t>(offsetof(SchemaExtensions_t3846062055_StaticFields, ___CoordinateSpaceConversionScale_0)); }
	inline Vector3_t4136528132  get_CoordinateSpaceConversionScale_0() const { return ___CoordinateSpaceConversionScale_0; }
	inline Vector3_t4136528132 * get_address_of_CoordinateSpaceConversionScale_0() { return &___CoordinateSpaceConversionScale_0; }
	inline void set_CoordinateSpaceConversionScale_0(Vector3_t4136528132  value)
	{
		___CoordinateSpaceConversionScale_0 = value;
	}

	inline static int32_t get_offset_of_TangentSpaceConversionScale_1() { return static_cast<int32_t>(offsetof(SchemaExtensions_t3846062055_StaticFields, ___TangentSpaceConversionScale_1)); }
	inline Vector4_t4136528135  get_TangentSpaceConversionScale_1() const { return ___TangentSpaceConversionScale_1; }
	inline Vector4_t4136528135 * get_address_of_TangentSpaceConversionScale_1() { return &___TangentSpaceConversionScale_1; }
	inline void set_TangentSpaceConversionScale_1(Vector4_t4136528135  value)
	{
		___TangentSpaceConversionScale_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCHEMAEXTENSIONS_T3846062055_H
#ifndef LOADTYPE_T225521639_H
#define LOADTYPE_T225521639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter/LoadType
struct  LoadType_t225521639 
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter/LoadType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadType_t225521639, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOADTYPE_T225521639_H
#ifndef MATERIALTYPE_T597773032_H
#define MATERIALTYPE_T597773032_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter/MaterialType
struct  MaterialType_t597773032 
{
public:
	// System.Int32 UnityGLTF.GLTFSceneImporter/MaterialType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MaterialType_t597773032, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIALTYPE_T597773032_H
#ifndef ACCESSOR_T1661788513_H
#define ACCESSOR_T1661788513_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.Accessor
struct  Accessor_t1661788513  : public GLTFChildOfRootProperty_t1666645821
{
public:
	// GLTF.Schema.BufferViewId GLTF.Schema.Accessor::BufferView
	BufferViewId_t4185270750 * ___BufferView_7;
	// System.Int32 GLTF.Schema.Accessor::ByteOffset
	int32_t ___ByteOffset_8;
	// GLTF.Schema.GLTFComponentType GLTF.Schema.Accessor::ComponentType
	int32_t ___ComponentType_9;
	// System.Boolean GLTF.Schema.Accessor::Normalized
	bool ___Normalized_10;
	// System.Int32 GLTF.Schema.Accessor::Count
	int32_t ___Count_11;
	// GLTF.Schema.GLTFAccessorAttributeType GLTF.Schema.Accessor::Type
	int32_t ___Type_12;
	// System.Collections.Generic.List`1<System.Double> GLTF.Schema.Accessor::Max
	List_1_t2066740105 * ___Max_13;
	// System.Collections.Generic.List`1<System.Double> GLTF.Schema.Accessor::Min
	List_1_t2066740105 * ___Min_14;
	// GLTF.Schema.AccessorSparse GLTF.Schema.Accessor::Sparse
	AccessorSparse_t1447441109 * ___Sparse_15;

public:
	inline static int32_t get_offset_of_BufferView_7() { return static_cast<int32_t>(offsetof(Accessor_t1661788513, ___BufferView_7)); }
	inline BufferViewId_t4185270750 * get_BufferView_7() const { return ___BufferView_7; }
	inline BufferViewId_t4185270750 ** get_address_of_BufferView_7() { return &___BufferView_7; }
	inline void set_BufferView_7(BufferViewId_t4185270750 * value)
	{
		___BufferView_7 = value;
		Il2CppCodeGenWriteBarrier((&___BufferView_7), value);
	}

	inline static int32_t get_offset_of_ByteOffset_8() { return static_cast<int32_t>(offsetof(Accessor_t1661788513, ___ByteOffset_8)); }
	inline int32_t get_ByteOffset_8() const { return ___ByteOffset_8; }
	inline int32_t* get_address_of_ByteOffset_8() { return &___ByteOffset_8; }
	inline void set_ByteOffset_8(int32_t value)
	{
		___ByteOffset_8 = value;
	}

	inline static int32_t get_offset_of_ComponentType_9() { return static_cast<int32_t>(offsetof(Accessor_t1661788513, ___ComponentType_9)); }
	inline int32_t get_ComponentType_9() const { return ___ComponentType_9; }
	inline int32_t* get_address_of_ComponentType_9() { return &___ComponentType_9; }
	inline void set_ComponentType_9(int32_t value)
	{
		___ComponentType_9 = value;
	}

	inline static int32_t get_offset_of_Normalized_10() { return static_cast<int32_t>(offsetof(Accessor_t1661788513, ___Normalized_10)); }
	inline bool get_Normalized_10() const { return ___Normalized_10; }
	inline bool* get_address_of_Normalized_10() { return &___Normalized_10; }
	inline void set_Normalized_10(bool value)
	{
		___Normalized_10 = value;
	}

	inline static int32_t get_offset_of_Count_11() { return static_cast<int32_t>(offsetof(Accessor_t1661788513, ___Count_11)); }
	inline int32_t get_Count_11() const { return ___Count_11; }
	inline int32_t* get_address_of_Count_11() { return &___Count_11; }
	inline void set_Count_11(int32_t value)
	{
		___Count_11 = value;
	}

	inline static int32_t get_offset_of_Type_12() { return static_cast<int32_t>(offsetof(Accessor_t1661788513, ___Type_12)); }
	inline int32_t get_Type_12() const { return ___Type_12; }
	inline int32_t* get_address_of_Type_12() { return &___Type_12; }
	inline void set_Type_12(int32_t value)
	{
		___Type_12 = value;
	}

	inline static int32_t get_offset_of_Max_13() { return static_cast<int32_t>(offsetof(Accessor_t1661788513, ___Max_13)); }
	inline List_1_t2066740105 * get_Max_13() const { return ___Max_13; }
	inline List_1_t2066740105 ** get_address_of_Max_13() { return &___Max_13; }
	inline void set_Max_13(List_1_t2066740105 * value)
	{
		___Max_13 = value;
		Il2CppCodeGenWriteBarrier((&___Max_13), value);
	}

	inline static int32_t get_offset_of_Min_14() { return static_cast<int32_t>(offsetof(Accessor_t1661788513, ___Min_14)); }
	inline List_1_t2066740105 * get_Min_14() const { return ___Min_14; }
	inline List_1_t2066740105 ** get_address_of_Min_14() { return &___Min_14; }
	inline void set_Min_14(List_1_t2066740105 * value)
	{
		___Min_14 = value;
		Il2CppCodeGenWriteBarrier((&___Min_14), value);
	}

	inline static int32_t get_offset_of_Sparse_15() { return static_cast<int32_t>(offsetof(Accessor_t1661788513, ___Sparse_15)); }
	inline AccessorSparse_t1447441109 * get_Sparse_15() const { return ___Sparse_15; }
	inline AccessorSparse_t1447441109 ** get_address_of_Sparse_15() { return &___Sparse_15; }
	inline void set_Sparse_15(AccessorSparse_t1447441109 * value)
	{
		___Sparse_15 = value;
		Il2CppCodeGenWriteBarrier((&___Sparse_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACCESSOR_T1661788513_H
#ifndef BUFFERVIEW_T2650099126_H
#define BUFFERVIEW_T2650099126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.BufferView
struct  BufferView_t2650099126  : public GLTFChildOfRootProperty_t1666645821
{
public:
	// GLTF.Schema.BufferId GLTF.Schema.BufferView::Buffer
	BufferId_t2787902107 * ___Buffer_7;
	// System.Int32 GLTF.Schema.BufferView::ByteOffset
	int32_t ___ByteOffset_8;
	// System.Int32 GLTF.Schema.BufferView::ByteLength
	int32_t ___ByteLength_9;
	// System.Int32 GLTF.Schema.BufferView::ByteStride
	int32_t ___ByteStride_10;
	// GLTF.Schema.BufferViewTarget GLTF.Schema.BufferView::Target
	int32_t ___Target_11;

public:
	inline static int32_t get_offset_of_Buffer_7() { return static_cast<int32_t>(offsetof(BufferView_t2650099126, ___Buffer_7)); }
	inline BufferId_t2787902107 * get_Buffer_7() const { return ___Buffer_7; }
	inline BufferId_t2787902107 ** get_address_of_Buffer_7() { return &___Buffer_7; }
	inline void set_Buffer_7(BufferId_t2787902107 * value)
	{
		___Buffer_7 = value;
		Il2CppCodeGenWriteBarrier((&___Buffer_7), value);
	}

	inline static int32_t get_offset_of_ByteOffset_8() { return static_cast<int32_t>(offsetof(BufferView_t2650099126, ___ByteOffset_8)); }
	inline int32_t get_ByteOffset_8() const { return ___ByteOffset_8; }
	inline int32_t* get_address_of_ByteOffset_8() { return &___ByteOffset_8; }
	inline void set_ByteOffset_8(int32_t value)
	{
		___ByteOffset_8 = value;
	}

	inline static int32_t get_offset_of_ByteLength_9() { return static_cast<int32_t>(offsetof(BufferView_t2650099126, ___ByteLength_9)); }
	inline int32_t get_ByteLength_9() const { return ___ByteLength_9; }
	inline int32_t* get_address_of_ByteLength_9() { return &___ByteLength_9; }
	inline void set_ByteLength_9(int32_t value)
	{
		___ByteLength_9 = value;
	}

	inline static int32_t get_offset_of_ByteStride_10() { return static_cast<int32_t>(offsetof(BufferView_t2650099126, ___ByteStride_10)); }
	inline int32_t get_ByteStride_10() const { return ___ByteStride_10; }
	inline int32_t* get_address_of_ByteStride_10() { return &___ByteStride_10; }
	inline void set_ByteStride_10(int32_t value)
	{
		___ByteStride_10 = value;
	}

	inline static int32_t get_offset_of_Target_11() { return static_cast<int32_t>(offsetof(BufferView_t2650099126, ___Target_11)); }
	inline int32_t get_Target_11() const { return ___Target_11; }
	inline int32_t* get_address_of_Target_11() { return &___Target_11; }
	inline void set_Target_11(int32_t value)
	{
		___Target_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BUFFERVIEW_T2650099126_H
#ifndef MATERIAL_T2790518843_H
#define MATERIAL_T2790518843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.Material
struct  Material_t2790518843  : public GLTFChildOfRootProperty_t1666645821
{
public:
	// GLTF.Schema.PbrMetallicRoughness GLTF.Schema.Material::PbrMetallicRoughness
	PbrMetallicRoughness_t313043948 * ___PbrMetallicRoughness_7;
	// GLTF.Schema.MaterialCommonConstant GLTF.Schema.Material::CommonConstant
	MaterialCommonConstant_t2574134879 * ___CommonConstant_8;
	// GLTF.Schema.NormalTextureInfo GLTF.Schema.Material::NormalTexture
	NormalTextureInfo_t1344565953 * ___NormalTexture_9;
	// GLTF.Schema.OcclusionTextureInfo GLTF.Schema.Material::OcclusionTexture
	OcclusionTextureInfo_t1842066315 * ___OcclusionTexture_10;
	// GLTF.Schema.TextureInfo GLTF.Schema.Material::EmissiveTexture
	TextureInfo_t616718776 * ___EmissiveTexture_11;
	// GLTF.Math.Color GLTF.Schema.Material::EmissiveFactor
	Color_t1637600301  ___EmissiveFactor_12;
	// GLTF.Schema.AlphaMode GLTF.Schema.Material::AlphaMode
	int32_t ___AlphaMode_13;
	// System.Double GLTF.Schema.Material::AlphaCutoff
	double ___AlphaCutoff_14;
	// System.Boolean GLTF.Schema.Material::DoubleSided
	bool ___DoubleSided_15;

public:
	inline static int32_t get_offset_of_PbrMetallicRoughness_7() { return static_cast<int32_t>(offsetof(Material_t2790518843, ___PbrMetallicRoughness_7)); }
	inline PbrMetallicRoughness_t313043948 * get_PbrMetallicRoughness_7() const { return ___PbrMetallicRoughness_7; }
	inline PbrMetallicRoughness_t313043948 ** get_address_of_PbrMetallicRoughness_7() { return &___PbrMetallicRoughness_7; }
	inline void set_PbrMetallicRoughness_7(PbrMetallicRoughness_t313043948 * value)
	{
		___PbrMetallicRoughness_7 = value;
		Il2CppCodeGenWriteBarrier((&___PbrMetallicRoughness_7), value);
	}

	inline static int32_t get_offset_of_CommonConstant_8() { return static_cast<int32_t>(offsetof(Material_t2790518843, ___CommonConstant_8)); }
	inline MaterialCommonConstant_t2574134879 * get_CommonConstant_8() const { return ___CommonConstant_8; }
	inline MaterialCommonConstant_t2574134879 ** get_address_of_CommonConstant_8() { return &___CommonConstant_8; }
	inline void set_CommonConstant_8(MaterialCommonConstant_t2574134879 * value)
	{
		___CommonConstant_8 = value;
		Il2CppCodeGenWriteBarrier((&___CommonConstant_8), value);
	}

	inline static int32_t get_offset_of_NormalTexture_9() { return static_cast<int32_t>(offsetof(Material_t2790518843, ___NormalTexture_9)); }
	inline NormalTextureInfo_t1344565953 * get_NormalTexture_9() const { return ___NormalTexture_9; }
	inline NormalTextureInfo_t1344565953 ** get_address_of_NormalTexture_9() { return &___NormalTexture_9; }
	inline void set_NormalTexture_9(NormalTextureInfo_t1344565953 * value)
	{
		___NormalTexture_9 = value;
		Il2CppCodeGenWriteBarrier((&___NormalTexture_9), value);
	}

	inline static int32_t get_offset_of_OcclusionTexture_10() { return static_cast<int32_t>(offsetof(Material_t2790518843, ___OcclusionTexture_10)); }
	inline OcclusionTextureInfo_t1842066315 * get_OcclusionTexture_10() const { return ___OcclusionTexture_10; }
	inline OcclusionTextureInfo_t1842066315 ** get_address_of_OcclusionTexture_10() { return &___OcclusionTexture_10; }
	inline void set_OcclusionTexture_10(OcclusionTextureInfo_t1842066315 * value)
	{
		___OcclusionTexture_10 = value;
		Il2CppCodeGenWriteBarrier((&___OcclusionTexture_10), value);
	}

	inline static int32_t get_offset_of_EmissiveTexture_11() { return static_cast<int32_t>(offsetof(Material_t2790518843, ___EmissiveTexture_11)); }
	inline TextureInfo_t616718776 * get_EmissiveTexture_11() const { return ___EmissiveTexture_11; }
	inline TextureInfo_t616718776 ** get_address_of_EmissiveTexture_11() { return &___EmissiveTexture_11; }
	inline void set_EmissiveTexture_11(TextureInfo_t616718776 * value)
	{
		___EmissiveTexture_11 = value;
		Il2CppCodeGenWriteBarrier((&___EmissiveTexture_11), value);
	}

	inline static int32_t get_offset_of_EmissiveFactor_12() { return static_cast<int32_t>(offsetof(Material_t2790518843, ___EmissiveFactor_12)); }
	inline Color_t1637600301  get_EmissiveFactor_12() const { return ___EmissiveFactor_12; }
	inline Color_t1637600301 * get_address_of_EmissiveFactor_12() { return &___EmissiveFactor_12; }
	inline void set_EmissiveFactor_12(Color_t1637600301  value)
	{
		___EmissiveFactor_12 = value;
	}

	inline static int32_t get_offset_of_AlphaMode_13() { return static_cast<int32_t>(offsetof(Material_t2790518843, ___AlphaMode_13)); }
	inline int32_t get_AlphaMode_13() const { return ___AlphaMode_13; }
	inline int32_t* get_address_of_AlphaMode_13() { return &___AlphaMode_13; }
	inline void set_AlphaMode_13(int32_t value)
	{
		___AlphaMode_13 = value;
	}

	inline static int32_t get_offset_of_AlphaCutoff_14() { return static_cast<int32_t>(offsetof(Material_t2790518843, ___AlphaCutoff_14)); }
	inline double get_AlphaCutoff_14() const { return ___AlphaCutoff_14; }
	inline double* get_address_of_AlphaCutoff_14() { return &___AlphaCutoff_14; }
	inline void set_AlphaCutoff_14(double value)
	{
		___AlphaCutoff_14 = value;
	}

	inline static int32_t get_offset_of_DoubleSided_15() { return static_cast<int32_t>(offsetof(Material_t2790518843, ___DoubleSided_15)); }
	inline bool get_DoubleSided_15() const { return ___DoubleSided_15; }
	inline bool* get_address_of_DoubleSided_15() { return &___DoubleSided_15; }
	inline void set_DoubleSided_15(bool value)
	{
		___DoubleSided_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T2790518843_H
#ifndef MESHPRIMITIVE_T2910245916_H
#define MESHPRIMITIVE_T2910245916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.MeshPrimitive
struct  MeshPrimitive_t2910245916  : public GLTFProperty_t1589224293
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.AccessorId> GLTF.Schema.MeshPrimitive::Attributes
	Dictionary_2_t4176993316 * ___Attributes_6;
	// GLTF.Schema.AccessorId GLTF.Schema.MeshPrimitive::Indices
	AccessorId_t96769721 * ___Indices_7;
	// GLTF.Schema.MaterialId GLTF.Schema.MeshPrimitive::Material
	MaterialId_t1334539377 * ___Material_8;
	// GLTF.Schema.DrawMode GLTF.Schema.MeshPrimitive::Mode
	int32_t ___Mode_9;
	// System.Collections.Generic.List`1<System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.AccessorId>> GLTF.Schema.MeshPrimitive::Targets
	List_1_t1354100762 * ___Targets_10;

public:
	inline static int32_t get_offset_of_Attributes_6() { return static_cast<int32_t>(offsetof(MeshPrimitive_t2910245916, ___Attributes_6)); }
	inline Dictionary_2_t4176993316 * get_Attributes_6() const { return ___Attributes_6; }
	inline Dictionary_2_t4176993316 ** get_address_of_Attributes_6() { return &___Attributes_6; }
	inline void set_Attributes_6(Dictionary_2_t4176993316 * value)
	{
		___Attributes_6 = value;
		Il2CppCodeGenWriteBarrier((&___Attributes_6), value);
	}

	inline static int32_t get_offset_of_Indices_7() { return static_cast<int32_t>(offsetof(MeshPrimitive_t2910245916, ___Indices_7)); }
	inline AccessorId_t96769721 * get_Indices_7() const { return ___Indices_7; }
	inline AccessorId_t96769721 ** get_address_of_Indices_7() { return &___Indices_7; }
	inline void set_Indices_7(AccessorId_t96769721 * value)
	{
		___Indices_7 = value;
		Il2CppCodeGenWriteBarrier((&___Indices_7), value);
	}

	inline static int32_t get_offset_of_Material_8() { return static_cast<int32_t>(offsetof(MeshPrimitive_t2910245916, ___Material_8)); }
	inline MaterialId_t1334539377 * get_Material_8() const { return ___Material_8; }
	inline MaterialId_t1334539377 ** get_address_of_Material_8() { return &___Material_8; }
	inline void set_Material_8(MaterialId_t1334539377 * value)
	{
		___Material_8 = value;
		Il2CppCodeGenWriteBarrier((&___Material_8), value);
	}

	inline static int32_t get_offset_of_Mode_9() { return static_cast<int32_t>(offsetof(MeshPrimitive_t2910245916, ___Mode_9)); }
	inline int32_t get_Mode_9() const { return ___Mode_9; }
	inline int32_t* get_address_of_Mode_9() { return &___Mode_9; }
	inline void set_Mode_9(int32_t value)
	{
		___Mode_9 = value;
	}

	inline static int32_t get_offset_of_Targets_10() { return static_cast<int32_t>(offsetof(MeshPrimitive_t2910245916, ___Targets_10)); }
	inline List_1_t1354100762 * get_Targets_10() const { return ___Targets_10; }
	inline List_1_t1354100762 ** get_address_of_Targets_10() { return &___Targets_10; }
	inline void set_Targets_10(List_1_t1354100762 * value)
	{
		___Targets_10 = value;
		Il2CppCodeGenWriteBarrier((&___Targets_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHPRIMITIVE_T2910245916_H
#ifndef SAMPLER_T1479019907_H
#define SAMPLER_T1479019907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GLTF.Schema.Sampler
struct  Sampler_t1479019907  : public GLTFChildOfRootProperty_t1666645821
{
public:
	// GLTF.Schema.MagFilterMode GLTF.Schema.Sampler::MagFilter
	int32_t ___MagFilter_7;
	// GLTF.Schema.MinFilterMode GLTF.Schema.Sampler::MinFilter
	int32_t ___MinFilter_8;
	// GLTF.Schema.WrapMode GLTF.Schema.Sampler::WrapS
	int32_t ___WrapS_9;
	// GLTF.Schema.WrapMode GLTF.Schema.Sampler::WrapT
	int32_t ___WrapT_10;

public:
	inline static int32_t get_offset_of_MagFilter_7() { return static_cast<int32_t>(offsetof(Sampler_t1479019907, ___MagFilter_7)); }
	inline int32_t get_MagFilter_7() const { return ___MagFilter_7; }
	inline int32_t* get_address_of_MagFilter_7() { return &___MagFilter_7; }
	inline void set_MagFilter_7(int32_t value)
	{
		___MagFilter_7 = value;
	}

	inline static int32_t get_offset_of_MinFilter_8() { return static_cast<int32_t>(offsetof(Sampler_t1479019907, ___MinFilter_8)); }
	inline int32_t get_MinFilter_8() const { return ___MinFilter_8; }
	inline int32_t* get_address_of_MinFilter_8() { return &___MinFilter_8; }
	inline void set_MinFilter_8(int32_t value)
	{
		___MinFilter_8 = value;
	}

	inline static int32_t get_offset_of_WrapS_9() { return static_cast<int32_t>(offsetof(Sampler_t1479019907, ___WrapS_9)); }
	inline int32_t get_WrapS_9() const { return ___WrapS_9; }
	inline int32_t* get_address_of_WrapS_9() { return &___WrapS_9; }
	inline void set_WrapS_9(int32_t value)
	{
		___WrapS_9 = value;
	}

	inline static int32_t get_offset_of_WrapT_10() { return static_cast<int32_t>(offsetof(Sampler_t1479019907, ___WrapT_10)); }
	inline int32_t get_WrapT_10() const { return ___WrapT_10; }
	inline int32_t* get_address_of_WrapT_10() { return &___WrapT_10; }
	inline void set_WrapT_10(int32_t value)
	{
		___WrapT_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SAMPLER_T1479019907_H
#ifndef FILESTREAM_T4292183065_H
#define FILESTREAM_T4292183065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IO.FileStream
struct  FileStream_t4292183065  : public Stream_t1273022909
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_t4116647657* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t2755812594 * ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_6)); }
	inline ByteU5BU5D_t4116647657* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_t4116647657* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((&___buf_6), value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((&___name_7), value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___safeHandle_8)); }
	inline SafeFileHandle_t2755812594 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_t2755812594 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_t2755812594 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((&___safeHandle_8), value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t4292183065, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t4292183065_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_t4116647657* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t4292183065_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_t4116647657* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_t4116647657** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_t4116647657* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((&___buf_recycle_4), value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t4292183065_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___buf_recycle_lock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILESTREAM_T4292183065_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
#ifndef REGEX_T3657309853_H
#define REGEX_T3657309853_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Text.RegularExpressions.Regex
struct  Regex_t3657309853  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t51159052 * ___factory_1;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_2;
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t881159249  ___internalMatchTimeout_5;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_t1853889766 * ___caps_8;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_t1853889766 * ___capnames_9;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t1281789340* ___capslist_10;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_11;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::runnerref
	ExclusiveReference_t1927754563 * ___runnerref_12;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.Regex::replref
	SharedReference_t2916547576 * ___replref_13;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::code
	RegexCode_t4293407246 * ___code_14;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_15;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((&___pattern_0), value);
	}

	inline static int32_t get_offset_of_factory_1() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___factory_1)); }
	inline RegexRunnerFactory_t51159052 * get_factory_1() const { return ___factory_1; }
	inline RegexRunnerFactory_t51159052 ** get_address_of_factory_1() { return &___factory_1; }
	inline void set_factory_1(RegexRunnerFactory_t51159052 * value)
	{
		___factory_1 = value;
		Il2CppCodeGenWriteBarrier((&___factory_1), value);
	}

	inline static int32_t get_offset_of_roptions_2() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___roptions_2)); }
	inline int32_t get_roptions_2() const { return ___roptions_2; }
	inline int32_t* get_address_of_roptions_2() { return &___roptions_2; }
	inline void set_roptions_2(int32_t value)
	{
		___roptions_2 = value;
	}

	inline static int32_t get_offset_of_internalMatchTimeout_5() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___internalMatchTimeout_5)); }
	inline TimeSpan_t881159249  get_internalMatchTimeout_5() const { return ___internalMatchTimeout_5; }
	inline TimeSpan_t881159249 * get_address_of_internalMatchTimeout_5() { return &___internalMatchTimeout_5; }
	inline void set_internalMatchTimeout_5(TimeSpan_t881159249  value)
	{
		___internalMatchTimeout_5 = value;
	}

	inline static int32_t get_offset_of_caps_8() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___caps_8)); }
	inline Hashtable_t1853889766 * get_caps_8() const { return ___caps_8; }
	inline Hashtable_t1853889766 ** get_address_of_caps_8() { return &___caps_8; }
	inline void set_caps_8(Hashtable_t1853889766 * value)
	{
		___caps_8 = value;
		Il2CppCodeGenWriteBarrier((&___caps_8), value);
	}

	inline static int32_t get_offset_of_capnames_9() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___capnames_9)); }
	inline Hashtable_t1853889766 * get_capnames_9() const { return ___capnames_9; }
	inline Hashtable_t1853889766 ** get_address_of_capnames_9() { return &___capnames_9; }
	inline void set_capnames_9(Hashtable_t1853889766 * value)
	{
		___capnames_9 = value;
		Il2CppCodeGenWriteBarrier((&___capnames_9), value);
	}

	inline static int32_t get_offset_of_capslist_10() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___capslist_10)); }
	inline StringU5BU5D_t1281789340* get_capslist_10() const { return ___capslist_10; }
	inline StringU5BU5D_t1281789340** get_address_of_capslist_10() { return &___capslist_10; }
	inline void set_capslist_10(StringU5BU5D_t1281789340* value)
	{
		___capslist_10 = value;
		Il2CppCodeGenWriteBarrier((&___capslist_10), value);
	}

	inline static int32_t get_offset_of_capsize_11() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___capsize_11)); }
	inline int32_t get_capsize_11() const { return ___capsize_11; }
	inline int32_t* get_address_of_capsize_11() { return &___capsize_11; }
	inline void set_capsize_11(int32_t value)
	{
		___capsize_11 = value;
	}

	inline static int32_t get_offset_of_runnerref_12() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___runnerref_12)); }
	inline ExclusiveReference_t1927754563 * get_runnerref_12() const { return ___runnerref_12; }
	inline ExclusiveReference_t1927754563 ** get_address_of_runnerref_12() { return &___runnerref_12; }
	inline void set_runnerref_12(ExclusiveReference_t1927754563 * value)
	{
		___runnerref_12 = value;
		Il2CppCodeGenWriteBarrier((&___runnerref_12), value);
	}

	inline static int32_t get_offset_of_replref_13() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___replref_13)); }
	inline SharedReference_t2916547576 * get_replref_13() const { return ___replref_13; }
	inline SharedReference_t2916547576 ** get_address_of_replref_13() { return &___replref_13; }
	inline void set_replref_13(SharedReference_t2916547576 * value)
	{
		___replref_13 = value;
		Il2CppCodeGenWriteBarrier((&___replref_13), value);
	}

	inline static int32_t get_offset_of_code_14() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___code_14)); }
	inline RegexCode_t4293407246 * get_code_14() const { return ___code_14; }
	inline RegexCode_t4293407246 ** get_address_of_code_14() { return &___code_14; }
	inline void set_code_14(RegexCode_t4293407246 * value)
	{
		___code_14 = value;
		Il2CppCodeGenWriteBarrier((&___code_14), value);
	}

	inline static int32_t get_offset_of_refsInitialized_15() { return static_cast<int32_t>(offsetof(Regex_t3657309853, ___refsInitialized_15)); }
	inline bool get_refsInitialized_15() const { return ___refsInitialized_15; }
	inline bool* get_address_of_refsInitialized_15() { return &___refsInitialized_15; }
	inline void set_refsInitialized_15(bool value)
	{
		___refsInitialized_15 = value;
	}
};

struct Regex_t3657309853_StaticFields
{
public:
	// System.TimeSpan System.Text.RegularExpressions.Regex::MaximumMatchTimeout
	TimeSpan_t881159249  ___MaximumMatchTimeout_3;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t881159249  ___InfiniteMatchTimeout_4;
	// System.TimeSpan System.Text.RegularExpressions.Regex::FallbackDefaultMatchTimeout
	TimeSpan_t881159249  ___FallbackDefaultMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::DefaultMatchTimeout
	TimeSpan_t881159249  ___DefaultMatchTimeout_7;
	// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> System.Text.RegularExpressions.Regex::livecode
	LinkedList_1_t3068621835 * ___livecode_16;
	// System.Int32 System.Text.RegularExpressions.Regex::cacheSize
	int32_t ___cacheSize_17;

public:
	inline static int32_t get_offset_of_MaximumMatchTimeout_3() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___MaximumMatchTimeout_3)); }
	inline TimeSpan_t881159249  get_MaximumMatchTimeout_3() const { return ___MaximumMatchTimeout_3; }
	inline TimeSpan_t881159249 * get_address_of_MaximumMatchTimeout_3() { return &___MaximumMatchTimeout_3; }
	inline void set_MaximumMatchTimeout_3(TimeSpan_t881159249  value)
	{
		___MaximumMatchTimeout_3 = value;
	}

	inline static int32_t get_offset_of_InfiniteMatchTimeout_4() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___InfiniteMatchTimeout_4)); }
	inline TimeSpan_t881159249  get_InfiniteMatchTimeout_4() const { return ___InfiniteMatchTimeout_4; }
	inline TimeSpan_t881159249 * get_address_of_InfiniteMatchTimeout_4() { return &___InfiniteMatchTimeout_4; }
	inline void set_InfiniteMatchTimeout_4(TimeSpan_t881159249  value)
	{
		___InfiniteMatchTimeout_4 = value;
	}

	inline static int32_t get_offset_of_FallbackDefaultMatchTimeout_6() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___FallbackDefaultMatchTimeout_6)); }
	inline TimeSpan_t881159249  get_FallbackDefaultMatchTimeout_6() const { return ___FallbackDefaultMatchTimeout_6; }
	inline TimeSpan_t881159249 * get_address_of_FallbackDefaultMatchTimeout_6() { return &___FallbackDefaultMatchTimeout_6; }
	inline void set_FallbackDefaultMatchTimeout_6(TimeSpan_t881159249  value)
	{
		___FallbackDefaultMatchTimeout_6 = value;
	}

	inline static int32_t get_offset_of_DefaultMatchTimeout_7() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___DefaultMatchTimeout_7)); }
	inline TimeSpan_t881159249  get_DefaultMatchTimeout_7() const { return ___DefaultMatchTimeout_7; }
	inline TimeSpan_t881159249 * get_address_of_DefaultMatchTimeout_7() { return &___DefaultMatchTimeout_7; }
	inline void set_DefaultMatchTimeout_7(TimeSpan_t881159249  value)
	{
		___DefaultMatchTimeout_7 = value;
	}

	inline static int32_t get_offset_of_livecode_16() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___livecode_16)); }
	inline LinkedList_1_t3068621835 * get_livecode_16() const { return ___livecode_16; }
	inline LinkedList_1_t3068621835 ** get_address_of_livecode_16() { return &___livecode_16; }
	inline void set_livecode_16(LinkedList_1_t3068621835 * value)
	{
		___livecode_16 = value;
		Il2CppCodeGenWriteBarrier((&___livecode_16), value);
	}

	inline static int32_t get_offset_of_cacheSize_17() { return static_cast<int32_t>(offsetof(Regex_t3657309853_StaticFields, ___cacheSize_17)); }
	inline int32_t get_cacheSize_17() const { return ___cacheSize_17; }
	inline int32_t* get_address_of_cacheSize_17() { return &___cacheSize_17; }
	inline void set_cacheSize_17(int32_t value)
	{
		___cacheSize_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REGEX_T3657309853_H
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t3890150400 * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t1092684687 * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_String_13), value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_originalUnicodeString_14), value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_Syntax_15)); }
	inline UriParser_t3890150400 * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t3890150400 ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t3890150400 * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((&___m_Syntax_15), value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_DnsSafeHost_16), value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_Info_18)); }
	inline UriInfo_t1092684687 * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_t1092684687 ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_t1092684687 * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Info_18), value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t3528271667* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t3528271667* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_0), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_1), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_2), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_3), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_4), value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeWs_5), value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeWss_6), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_7), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_8), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_9), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_10), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_11), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_12), value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((&___s_initLock_26), value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t3528271667* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t3528271667** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t3528271667* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((&___HexLowerChars_27), value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t3528271667* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t3528271667** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t3528271667* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((&____WSchars_28), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef MATERIAL_T340375123_H
#define MATERIAL_T340375123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Material
struct  Material_t340375123  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATERIAL_T340375123_H
#ifndef MESH_T3648964284_H
#define MESH_T3648964284_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Mesh
struct  Mesh_t3648964284  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESH_T3648964284_H
#ifndef DOWNLOADHANDLERTEXTURE_T2149801800_H
#define DOWNLOADHANDLERTEXTURE_T2149801800_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.DownloadHandlerTexture
struct  DownloadHandlerTexture_t2149801800  : public DownloadHandler_t2937767557
{
public:
	// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::mTexture
	Texture2D_t3840446185 * ___mTexture_1;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mHasTexture
	bool ___mHasTexture_2;
	// System.Boolean UnityEngine.Networking.DownloadHandlerTexture::mNonReadable
	bool ___mNonReadable_3;

public:
	inline static int32_t get_offset_of_mTexture_1() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_t2149801800, ___mTexture_1)); }
	inline Texture2D_t3840446185 * get_mTexture_1() const { return ___mTexture_1; }
	inline Texture2D_t3840446185 ** get_address_of_mTexture_1() { return &___mTexture_1; }
	inline void set_mTexture_1(Texture2D_t3840446185 * value)
	{
		___mTexture_1 = value;
		Il2CppCodeGenWriteBarrier((&___mTexture_1), value);
	}

	inline static int32_t get_offset_of_mHasTexture_2() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_t2149801800, ___mHasTexture_2)); }
	inline bool get_mHasTexture_2() const { return ___mHasTexture_2; }
	inline bool* get_address_of_mHasTexture_2() { return &___mHasTexture_2; }
	inline void set_mHasTexture_2(bool value)
	{
		___mHasTexture_2 = value;
	}

	inline static int32_t get_offset_of_mNonReadable_3() { return static_cast<int32_t>(offsetof(DownloadHandlerTexture_t2149801800, ___mNonReadable_3)); }
	inline bool get_mNonReadable_3() const { return ___mNonReadable_3; }
	inline bool* get_address_of_mNonReadable_3() { return &___mNonReadable_3; }
	inline void set_mNonReadable_3(bool value)
	{
		___mNonReadable_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t2149801800_marshaled_pinvoke : public DownloadHandler_t2937767557_marshaled_pinvoke
{
	Texture2D_t3840446185 * ___mTexture_1;
	int32_t ___mHasTexture_2;
	int32_t ___mNonReadable_3;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerTexture
struct DownloadHandlerTexture_t2149801800_marshaled_com : public DownloadHandler_t2937767557_marshaled_com
{
	Texture2D_t3840446185 * ___mTexture_1;
	int32_t ___mHasTexture_2;
	int32_t ___mNonReadable_3;
};
#endif // DOWNLOADHANDLERTEXTURE_T2149801800_H
#ifndef UNITYWEBREQUEST_T463507806_H
#define UNITYWEBREQUEST_T463507806_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t463507806  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t2937767557 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t2993558019 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t2739891000 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t100236324 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t2937767557 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t2937767557 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t2937767557 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DownloadHandler_1), value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_UploadHandler_2)); }
	inline UploadHandler_t2993558019 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t2993558019 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t2993558019 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UploadHandler_2), value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_CertificateHandler_3)); }
	inline CertificateHandler_t2739891000 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_t2739891000 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_t2739891000 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CertificateHandler_3), value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___m_Uri_4)); }
	inline Uri_t100236324 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t100236324 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t100236324 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Uri_4), value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t463507806, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t2937767557_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t2993558019_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t2739891000_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t100236324 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t463507806_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t2937767557_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t2993558019_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t2739891000_marshaled_com* ___m_CertificateHandler_3;
	Uri_t100236324 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
#endif // UNITYWEBREQUEST_T463507806_H
#ifndef UNITYWEBREQUESTASYNCOPERATION_T3852015985_H
#define UNITYWEBREQUESTASYNCOPERATION_T3852015985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_t3852015985  : public AsyncOperation_t1445031843
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t463507806 * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_t3852015985, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_t463507806 * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_t463507806 ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_t463507806 * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CwebRequestU3Ek__BackingField_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t3852015985_marshaled_pinvoke : public AsyncOperation_t1445031843_marshaled_pinvoke
{
	UnityWebRequest_t463507806_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t3852015985_marshaled_com : public AsyncOperation_t1445031843_marshaled_com
{
	UnityWebRequest_t463507806_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};
#endif // UNITYWEBREQUESTASYNCOPERATION_T3852015985_H
#ifndef SHADER_T4151988712_H
#define SHADER_T4151988712_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Shader
struct  Shader_t4151988712  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHADER_T4151988712_H
#ifndef TEXTURE_T3661962703_H
#define TEXTURE_T3661962703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture
struct  Texture_t3661962703  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE_T3661962703_H
#ifndef GLTFSCENEIMPORTER_T274320441_H
#define GLTFSCENEIMPORTER_T274320441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFSceneImporter
struct  GLTFSceneImporter_t274320441  : public RuntimeObject
{
public:
	// UnityEngine.GameObject UnityGLTF.GLTFSceneImporter::_lastLoadedScene
	GameObject_t1113636619 * ____lastLoadedScene_0;
	// UnityEngine.Transform UnityGLTF.GLTFSceneImporter::_sceneParent
	Transform_t3600365921 * ____sceneParent_1;
	// System.Collections.Generic.Dictionary`2<UnityGLTF.GLTFSceneImporter/MaterialType,UnityEngine.Shader> UnityGLTF.GLTFSceneImporter::_shaderCache
	Dictionary_2_t2973298224 * ____shaderCache_2;
	// System.Int32 UnityGLTF.GLTFSceneImporter::MaximumLod
	int32_t ___MaximumLod_3;
	// GLTF.Schema.Material UnityGLTF.GLTFSceneImporter::DefaultMaterial
	Material_t2790518843 * ___DefaultMaterial_4;
	// System.String UnityGLTF.GLTFSceneImporter::_gltfUrl
	String_t* ____gltfUrl_5;
	// System.String UnityGLTF.GLTFSceneImporter::_gltfDirectoryPath
	String_t* ____gltfDirectoryPath_6;
	// UnityGLTF.GLTFSceneImporter/GLBStream UnityGLTF.GLTFSceneImporter::_gltfStream
	GLBStream_t3327861285  ____gltfStream_7;
	// GLTF.Schema.GLTFRoot UnityGLTF.GLTFSceneImporter::_root
	GLTFRoot_t676886847 * ____root_8;
	// UnityGLTF.Cache.AssetCache UnityGLTF.GLTFSceneImporter::_assetCache
	AssetCache_t783611398 * ____assetCache_9;
	// UnityGLTF.AsyncAction UnityGLTF.GLTFSceneImporter::_asyncAction
	AsyncAction_t3334821446 * ____asyncAction_10;
	// System.Boolean UnityGLTF.GLTFSceneImporter::_addColliders
	bool ____addColliders_11;
	// UnityGLTF.GLTFSceneImporter/LoadType UnityGLTF.GLTFSceneImporter::_loadType
	int32_t ____loadType_12;

public:
	inline static int32_t get_offset_of__lastLoadedScene_0() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____lastLoadedScene_0)); }
	inline GameObject_t1113636619 * get__lastLoadedScene_0() const { return ____lastLoadedScene_0; }
	inline GameObject_t1113636619 ** get_address_of__lastLoadedScene_0() { return &____lastLoadedScene_0; }
	inline void set__lastLoadedScene_0(GameObject_t1113636619 * value)
	{
		____lastLoadedScene_0 = value;
		Il2CppCodeGenWriteBarrier((&____lastLoadedScene_0), value);
	}

	inline static int32_t get_offset_of__sceneParent_1() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____sceneParent_1)); }
	inline Transform_t3600365921 * get__sceneParent_1() const { return ____sceneParent_1; }
	inline Transform_t3600365921 ** get_address_of__sceneParent_1() { return &____sceneParent_1; }
	inline void set__sceneParent_1(Transform_t3600365921 * value)
	{
		____sceneParent_1 = value;
		Il2CppCodeGenWriteBarrier((&____sceneParent_1), value);
	}

	inline static int32_t get_offset_of__shaderCache_2() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____shaderCache_2)); }
	inline Dictionary_2_t2973298224 * get__shaderCache_2() const { return ____shaderCache_2; }
	inline Dictionary_2_t2973298224 ** get_address_of__shaderCache_2() { return &____shaderCache_2; }
	inline void set__shaderCache_2(Dictionary_2_t2973298224 * value)
	{
		____shaderCache_2 = value;
		Il2CppCodeGenWriteBarrier((&____shaderCache_2), value);
	}

	inline static int32_t get_offset_of_MaximumLod_3() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ___MaximumLod_3)); }
	inline int32_t get_MaximumLod_3() const { return ___MaximumLod_3; }
	inline int32_t* get_address_of_MaximumLod_3() { return &___MaximumLod_3; }
	inline void set_MaximumLod_3(int32_t value)
	{
		___MaximumLod_3 = value;
	}

	inline static int32_t get_offset_of_DefaultMaterial_4() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ___DefaultMaterial_4)); }
	inline Material_t2790518843 * get_DefaultMaterial_4() const { return ___DefaultMaterial_4; }
	inline Material_t2790518843 ** get_address_of_DefaultMaterial_4() { return &___DefaultMaterial_4; }
	inline void set_DefaultMaterial_4(Material_t2790518843 * value)
	{
		___DefaultMaterial_4 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultMaterial_4), value);
	}

	inline static int32_t get_offset_of__gltfUrl_5() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____gltfUrl_5)); }
	inline String_t* get__gltfUrl_5() const { return ____gltfUrl_5; }
	inline String_t** get_address_of__gltfUrl_5() { return &____gltfUrl_5; }
	inline void set__gltfUrl_5(String_t* value)
	{
		____gltfUrl_5 = value;
		Il2CppCodeGenWriteBarrier((&____gltfUrl_5), value);
	}

	inline static int32_t get_offset_of__gltfDirectoryPath_6() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____gltfDirectoryPath_6)); }
	inline String_t* get__gltfDirectoryPath_6() const { return ____gltfDirectoryPath_6; }
	inline String_t** get_address_of__gltfDirectoryPath_6() { return &____gltfDirectoryPath_6; }
	inline void set__gltfDirectoryPath_6(String_t* value)
	{
		____gltfDirectoryPath_6 = value;
		Il2CppCodeGenWriteBarrier((&____gltfDirectoryPath_6), value);
	}

	inline static int32_t get_offset_of__gltfStream_7() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____gltfStream_7)); }
	inline GLBStream_t3327861285  get__gltfStream_7() const { return ____gltfStream_7; }
	inline GLBStream_t3327861285 * get_address_of__gltfStream_7() { return &____gltfStream_7; }
	inline void set__gltfStream_7(GLBStream_t3327861285  value)
	{
		____gltfStream_7 = value;
	}

	inline static int32_t get_offset_of__root_8() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____root_8)); }
	inline GLTFRoot_t676886847 * get__root_8() const { return ____root_8; }
	inline GLTFRoot_t676886847 ** get_address_of__root_8() { return &____root_8; }
	inline void set__root_8(GLTFRoot_t676886847 * value)
	{
		____root_8 = value;
		Il2CppCodeGenWriteBarrier((&____root_8), value);
	}

	inline static int32_t get_offset_of__assetCache_9() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____assetCache_9)); }
	inline AssetCache_t783611398 * get__assetCache_9() const { return ____assetCache_9; }
	inline AssetCache_t783611398 ** get_address_of__assetCache_9() { return &____assetCache_9; }
	inline void set__assetCache_9(AssetCache_t783611398 * value)
	{
		____assetCache_9 = value;
		Il2CppCodeGenWriteBarrier((&____assetCache_9), value);
	}

	inline static int32_t get_offset_of__asyncAction_10() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____asyncAction_10)); }
	inline AsyncAction_t3334821446 * get__asyncAction_10() const { return ____asyncAction_10; }
	inline AsyncAction_t3334821446 ** get_address_of__asyncAction_10() { return &____asyncAction_10; }
	inline void set__asyncAction_10(AsyncAction_t3334821446 * value)
	{
		____asyncAction_10 = value;
		Il2CppCodeGenWriteBarrier((&____asyncAction_10), value);
	}

	inline static int32_t get_offset_of__addColliders_11() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____addColliders_11)); }
	inline bool get__addColliders_11() const { return ____addColliders_11; }
	inline bool* get_address_of__addColliders_11() { return &____addColliders_11; }
	inline void set__addColliders_11(bool value)
	{
		____addColliders_11 = value;
	}

	inline static int32_t get_offset_of__loadType_12() { return static_cast<int32_t>(offsetof(GLTFSceneImporter_t274320441, ____loadType_12)); }
	inline int32_t get__loadType_12() const { return ____loadType_12; }
	inline int32_t* get_address_of__loadType_12() { return &____loadType_12; }
	inline void set__loadType_12(int32_t value)
	{
		____loadType_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFSCENEIMPORTER_T274320441_H
#ifndef ACTION_T1264377477_H
#define ACTION_T1264377477_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action
struct  Action_t1264377477  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_T1264377477_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef COLLIDER_T1773347010_H
#define COLLIDER_T1773347010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collider
struct  Collider_t1773347010  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLIDER_T1773347010_H
#ifndef MESHFILTER_T3523625662_H
#define MESHFILTER_T3523625662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshFilter
struct  MeshFilter_t3523625662  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHFILTER_T3523625662_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TEXTURE2D_T3840446185_H
#define TEXTURE2D_T3840446185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Texture2D
struct  Texture2D_t3840446185  : public Texture_t3661962703
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTURE2D_T3840446185_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef MESHCOLLIDER_T903564387_H
#define MESHCOLLIDER_T903564387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshCollider
struct  MeshCollider_t903564387  : public Collider_t1773347010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHCOLLIDER_T903564387_H
#ifndef MESHRENDERER_T587009260_H
#define MESHRENDERER_T587009260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MeshRenderer
struct  MeshRenderer_t587009260  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESHRENDERER_T587009260_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef GLTFCOMPONENT_T238219215_H
#define GLTFCOMPONENT_T238219215_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityGLTF.GLTFComponent
struct  GLTFComponent_t238219215  : public MonoBehaviour_t3962482529
{
public:
	// System.String UnityGLTF.GLTFComponent::Url
	String_t* ___Url_4;
	// System.Boolean UnityGLTF.GLTFComponent::Multithreaded
	bool ___Multithreaded_5;
	// System.Boolean UnityGLTF.GLTFComponent::UseStream
	bool ___UseStream_6;
	// System.Int32 UnityGLTF.GLTFComponent::MaximumLod
	int32_t ___MaximumLod_7;
	// UnityEngine.Shader UnityGLTF.GLTFComponent::GLTFStandard
	Shader_t4151988712 * ___GLTFStandard_8;
	// UnityEngine.Shader UnityGLTF.GLTFComponent::GLTFStandardSpecular
	Shader_t4151988712 * ___GLTFStandardSpecular_9;
	// UnityEngine.Shader UnityGLTF.GLTFComponent::GLTFConstant
	Shader_t4151988712 * ___GLTFConstant_10;
	// System.Boolean UnityGLTF.GLTFComponent::addColliders
	bool ___addColliders_11;

public:
	inline static int32_t get_offset_of_Url_4() { return static_cast<int32_t>(offsetof(GLTFComponent_t238219215, ___Url_4)); }
	inline String_t* get_Url_4() const { return ___Url_4; }
	inline String_t** get_address_of_Url_4() { return &___Url_4; }
	inline void set_Url_4(String_t* value)
	{
		___Url_4 = value;
		Il2CppCodeGenWriteBarrier((&___Url_4), value);
	}

	inline static int32_t get_offset_of_Multithreaded_5() { return static_cast<int32_t>(offsetof(GLTFComponent_t238219215, ___Multithreaded_5)); }
	inline bool get_Multithreaded_5() const { return ___Multithreaded_5; }
	inline bool* get_address_of_Multithreaded_5() { return &___Multithreaded_5; }
	inline void set_Multithreaded_5(bool value)
	{
		___Multithreaded_5 = value;
	}

	inline static int32_t get_offset_of_UseStream_6() { return static_cast<int32_t>(offsetof(GLTFComponent_t238219215, ___UseStream_6)); }
	inline bool get_UseStream_6() const { return ___UseStream_6; }
	inline bool* get_address_of_UseStream_6() { return &___UseStream_6; }
	inline void set_UseStream_6(bool value)
	{
		___UseStream_6 = value;
	}

	inline static int32_t get_offset_of_MaximumLod_7() { return static_cast<int32_t>(offsetof(GLTFComponent_t238219215, ___MaximumLod_7)); }
	inline int32_t get_MaximumLod_7() const { return ___MaximumLod_7; }
	inline int32_t* get_address_of_MaximumLod_7() { return &___MaximumLod_7; }
	inline void set_MaximumLod_7(int32_t value)
	{
		___MaximumLod_7 = value;
	}

	inline static int32_t get_offset_of_GLTFStandard_8() { return static_cast<int32_t>(offsetof(GLTFComponent_t238219215, ___GLTFStandard_8)); }
	inline Shader_t4151988712 * get_GLTFStandard_8() const { return ___GLTFStandard_8; }
	inline Shader_t4151988712 ** get_address_of_GLTFStandard_8() { return &___GLTFStandard_8; }
	inline void set_GLTFStandard_8(Shader_t4151988712 * value)
	{
		___GLTFStandard_8 = value;
		Il2CppCodeGenWriteBarrier((&___GLTFStandard_8), value);
	}

	inline static int32_t get_offset_of_GLTFStandardSpecular_9() { return static_cast<int32_t>(offsetof(GLTFComponent_t238219215, ___GLTFStandardSpecular_9)); }
	inline Shader_t4151988712 * get_GLTFStandardSpecular_9() const { return ___GLTFStandardSpecular_9; }
	inline Shader_t4151988712 ** get_address_of_GLTFStandardSpecular_9() { return &___GLTFStandardSpecular_9; }
	inline void set_GLTFStandardSpecular_9(Shader_t4151988712 * value)
	{
		___GLTFStandardSpecular_9 = value;
		Il2CppCodeGenWriteBarrier((&___GLTFStandardSpecular_9), value);
	}

	inline static int32_t get_offset_of_GLTFConstant_10() { return static_cast<int32_t>(offsetof(GLTFComponent_t238219215, ___GLTFConstant_10)); }
	inline Shader_t4151988712 * get_GLTFConstant_10() const { return ___GLTFConstant_10; }
	inline Shader_t4151988712 ** get_address_of_GLTFConstant_10() { return &___GLTFConstant_10; }
	inline void set_GLTFConstant_10(Shader_t4151988712 * value)
	{
		___GLTFConstant_10 = value;
		Il2CppCodeGenWriteBarrier((&___GLTFConstant_10), value);
	}

	inline static int32_t get_offset_of_addColliders_11() { return static_cast<int32_t>(offsetof(GLTFComponent_t238219215, ___addColliders_11)); }
	inline bool get_addColliders_11() const { return ___addColliders_11; }
	inline bool* get_address_of_addColliders_11() { return &___addColliders_11; }
	inline void set_addColliders_11(bool value)
	{
		___addColliders_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GLTFCOMPONENT_T238219215_H
// UnityGLTF.Cache.MeshCacheData[]
struct MeshCacheDataU5BU5D_t3518138719  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MeshCacheData_t1944180602 * m_Items[1];

public:
	inline MeshCacheData_t1944180602 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MeshCacheData_t1944180602 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MeshCacheData_t1944180602 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MeshCacheData_t1944180602 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MeshCacheData_t1944180602 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MeshCacheData_t1944180602 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// GLTF.Math.Vector3[]
struct Vector3U5BU5D_t137387629  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t4136528132  m_Items[1];

public:
	inline Vector3_t4136528132  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t4136528132 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t4136528132  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t4136528132  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t4136528132 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t4136528132  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t3722313464  m_Items[1];

public:
	inline Vector3_t3722313464  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t3722313464  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t3722313464 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t3722313464  value)
	{
		m_Items[index] = value;
	}
};
// GLTF.Math.Vector2[]
struct Vector2U5BU5D_t623575368  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_t4136528133  m_Items[1];

public:
	inline Vector2_t4136528133  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t4136528133 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t4136528133  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t4136528133  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t4136528133 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t4136528133  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_t2156229523  m_Items[1];

public:
	inline Vector2_t2156229523  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t2156229523  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t2156229523 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t2156229523  value)
	{
		m_Items[index] = value;
	}
};
// GLTF.Math.Color[]
struct ColorU5BU5D_t1735271552  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t1637600301  m_Items[1];

public:
	inline Color_t1637600301  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t1637600301 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t1637600301  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t1637600301  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t1637600301 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t1637600301  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t941916413  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_t2555686324  m_Items[1];

public:
	inline Color_t2555686324  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_t2555686324  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_t2555686324 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_t2555686324  value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t2770800703  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// GLTF.Math.Vector4[]
struct Vector4U5BU5D_t1595950846  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_t4136528135  m_Items[1];

public:
	inline Vector4_t4136528135  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t4136528135 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t4136528135  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t4136528135  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t4136528135 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t4136528135  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t934056436  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_t3319028937  m_Items[1];

public:
	inline Vector4_t3319028937  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t3319028937 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t3319028937  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t3319028937  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t3319028937 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t3319028937  value)
	{
		m_Items[index] = value;
	}
};
// UnityGLTF.Cache.MaterialCacheData[]
struct MaterialCacheDataU5BU5D_t484490365  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MaterialCacheData_t2754836532 * m_Items[1];

public:
	inline MaterialCacheData_t2754836532 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MaterialCacheData_t2754836532 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MaterialCacheData_t2754836532 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MaterialCacheData_t2754836532 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MaterialCacheData_t2754836532 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MaterialCacheData_t2754836532 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Texture[]
struct TextureU5BU5D_t908295702  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Texture_t3661962703 * m_Items[1];

public:
	inline Texture_t3661962703 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture_t3661962703 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture_t3661962703 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Texture_t3661962703 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture_t3661962703 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture_t3661962703 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t149664596  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Texture2D_t3840446185 * m_Items[1];

public:
	inline Texture2D_t3840446185 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Texture2D_t3840446185 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Texture2D_t3840446185 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Texture2D_t3840446185 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Texture2D_t3840446185 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Texture2D_t3840446185 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Byte[]
struct ByteU5BU5D_t4116647657  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.Dictionary`2<UnityGLTF.GLTFSceneImporter/MaterialType,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m1663883689_gshared (Dictionary_2_t1901415676 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityGLTF.GLTFSceneImporter/MaterialType,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_m696203693_gshared (Dictionary_2_t1901415676 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m1328026504_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
extern "C" IL2CPP_METHOD_ATTR void List_1_set_Item_m550276520_gshared (List_1_t257213610 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m3919933788_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2687535023_gshared (Dictionary_2_t132545152 * __this, int32_t p0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2086727927  Dictionary_2_GetEnumerator_m1937322960_gshared (Dictionary_2_t132545152 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t2530217319  Enumerator_get_Current_m2198442938_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m1132502692_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m193757924_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m4184817181_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m258553009_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m1107569389_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3885012575_gshared (Enumerator_t2086727927 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m3993293265_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m4278578609_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2146457487  List_1_GetEnumerator_m816315209_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m337713592_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m290381969_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
extern "C" IL2CPP_METHOD_ATTR bool List_1_Contains_m784383322_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<UnityGLTF.GLTFSceneImporter/MaterialType,System.Object>::get_Item(!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_m252595690_gshared (Dictionary_2_t1901415676 * __this, int32_t p0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m2446893047_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m1996088172_gshared (Dictionary_2_t132545152 * __this, RuntimeObject * p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2744859241_gshared (Dictionary_2_t1968819495 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);

// System.Void UnityGLTF.GLTFComponent/<Start>d__8::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__8__ctor_m962661000 (U3CStartU3Ed__8_t1918030142 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_streamingAssetsPath()
extern "C" IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_m1172141117 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_Combine_m3389272516 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.IO.FileStream System.IO.File::OpenRead(System.String)
extern "C" IL2CPP_METHOD_ATTR FileStream_t4292183065 * File_OpenRead_m2936789020 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter::.ctor(System.String,System.IO.Stream,UnityEngine.Transform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GLTFSceneImporter__ctor_m122975503 (GLTFSceneImporter_t274320441 * __this, String_t* ___rootPath0, Stream_t1273022909 * ___stream1, Transform_t3600365921 * ___parent2, bool ___addColliders3, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter::.ctor(System.String,UnityEngine.Transform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GLTFSceneImporter__ctor_m299105020 (GLTFSceneImporter_t274320441 * __this, String_t* ___gltfUrl0, Transform_t3600365921 * ___parent1, bool ___addColliders2, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityGLTF.GLTFSceneImporter::Load(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GLTFSceneImporter_Load_m915775585 (GLTFSceneImporter_t274320441 * __this, int32_t ___sceneIndex0, bool ___isMultithreaded1, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Stream_Dispose_m2589290611 (Stream_t1273022909 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityGLTF.GLTFSceneImporter/MaterialType,UnityEngine.Shader>::.ctor()
inline void Dictionary_2__ctor_m517788400 (Dictionary_2_t2973298224 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2973298224 *, const RuntimeMethod*))Dictionary_2__ctor_m1663883689_gshared)(__this, method);
}
// System.Void GLTF.Schema.Material::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m1321042060 (Material_t2790518843 * __this, const RuntimeMethod* method);
// System.String UnityGLTF.GLTFSceneImporter::AbsoluteUriPath(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* GLTFSceneImporter_AbsoluteUriPath_m3886472302 (RuntimeObject * __this /* static, unused */, String_t* ___gltfPath0, const RuntimeMethod* method);
// System.Void UnityGLTF.AsyncAction::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AsyncAction__ctor_m1571104454 (AsyncAction_t3334821446 * __this, const RuntimeMethod* method);
// System.String UnityGLTF.GLTFSceneImporter::AbsoluteFilePath(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* GLTFSceneImporter_AbsoluteFilePath_m2222415970 (RuntimeObject * __this /* static, unused */, String_t* ___gltfPath0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityGLTF.GLTFSceneImporter/MaterialType,UnityEngine.Shader>::Add(!0,!1)
inline void Dictionary_2_Add_m3713014608 (Dictionary_2_t2973298224 * __this, int32_t p0, Shader_t4151988712 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t2973298224 *, int32_t, Shader_t4151988712 *, const RuntimeMethod*))Dictionary_2_Add_m696203693_gshared)(__this, p0, p1, method);
}
// System.Void UnityGLTF.GLTFSceneImporter/<Load>d__21::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CLoadU3Ed__21__ctor_m4022723356 (U3CLoadU3Ed__21_t2072795234 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CImportSceneU3Ed__22__ctor_m2932397664 (U3CImportSceneU3Ed__22_t599600113 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<GLTF.Schema.Mesh>::get_Item(System.Int32)
inline Mesh_t2726263229 * List_1_get_Item_m2800780356 (List_1_t4198337971 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Mesh_t2726263229 * (*) (List_1_t4198337971 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Collections.Generic.List`1<UnityGLTF.Cache.MeshCacheData[]> UnityGLTF.Cache.AssetCache::get_MeshCache()
extern "C" IL2CPP_METHOD_ATTR List_1_t695246165 * AssetCache_get_MeshCache_m1480961495 (AssetCache_t783611398 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityGLTF.Cache.MeshCacheData[]>::get_Item(System.Int32)
inline MeshCacheDataU5BU5D_t3518138719* List_1_get_Item_m2536950298 (List_1_t695246165 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  MeshCacheDataU5BU5D_t3518138719* (*) (List_1_t695246165 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.MeshPrimitive>::get_Count()
inline int32_t List_1_get_Count_m3533462362 (List_1_t87353362 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t87353362 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityGLTF.Cache.MeshCacheData[]>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m3842666524 (List_1_t695246165 * __this, int32_t p0, MeshCacheDataU5BU5D_t3518138719* p1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t695246165 *, int32_t, MeshCacheDataU5BU5D_t3518138719*, const RuntimeMethod*))List_1_set_Item_m550276520_gshared)(__this, p0, p1, method);
}
// System.Void UnityGLTF.Cache.MeshCacheData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MeshCacheData__ctor_m4095164320 (MeshCacheData_t1944180602 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<GLTF.Schema.MeshPrimitive>::get_Item(System.Int32)
inline MeshPrimitive_t2910245916 * List_1_get_Item_m578470191 (List_1_t87353362 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  MeshPrimitive_t2910245916 * (*) (List_1_t87353362 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.Mesh>::get_Count()
inline int32_t List_1_get_Count_m2917776829 (List_1_t4198337971 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4198337971 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.String,GLTF.AttributeAccessor> UnityGLTF.Cache.MeshCacheData::get_MeshAttributes()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t691531204 * MeshCacheData_get_MeshAttributes_m1203834975 (MeshCacheData_t1944180602 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GLTF.AttributeAccessor>::get_Count()
inline int32_t Dictionary_2_get_Count_m1197856806 (Dictionary_2_t691531204 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t691531204 *, const RuntimeMethod*))Dictionary_2_get_Count_m3919933788_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.AccessorId>::get_Count()
inline int32_t Dictionary_2_get_Count_m2249658819 (Dictionary_2_t4176993316 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t4176993316 *, const RuntimeMethod*))Dictionary_2_get_Count_m3919933788_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,GLTF.AttributeAccessor>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m649114996 (Dictionary_2_t691531204 * __this, int32_t p0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t691531204 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m2687535023_gshared)(__this, p0, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.AccessorId>::GetEnumerator()
inline Enumerator_t1836208795  Dictionary_2_GetEnumerator_m3186304916 (Dictionary_2_t4176993316 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t1836208795  (*) (Dictionary_2_t4176993316 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_m1937322960_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,GLTF.Schema.AccessorId>::get_Current()
inline KeyValuePair_2_t2279698187  Enumerator_get_Current_m3853553557 (Enumerator_t1836208795 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t2279698187  (*) (Enumerator_t1836208795 *, const RuntimeMethod*))Enumerator_get_Current_m2198442938_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2<System.Int32,UnityGLTF.Cache.BufferCacheData> UnityGLTF.Cache.AssetCache::get_BufferCache()
extern "C" IL2CPP_METHOD_ATTR Dictionary_2_t3293772351 * AssetCache_get_BufferCache_m1575123264 (AssetCache_t783611398 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,GLTF.Schema.AccessorId>::get_Value()
inline AccessorId_t96769721 * KeyValuePair_2_get_Value_m270393519 (KeyValuePair_2_t2279698187 * __this, const RuntimeMethod* method)
{
	return ((  AccessorId_t96769721 * (*) (KeyValuePair_2_t2279698187 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1132502692_gshared)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,UnityGLTF.Cache.BufferCacheData>::get_Item(!0)
inline BufferCacheData_t110091724 * Dictionary_2_get_Item_m1259228363 (Dictionary_2_t3293772351 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  BufferCacheData_t110091724 * (*) (Dictionary_2_t3293772351 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m193757924_gshared)(__this, p0, method);
}
// System.Void GLTF.AttributeAccessor::.ctor()
extern "C" IL2CPP_METHOD_ATTR void AttributeAccessor__ctor_m3403250823 (AttributeAccessor_t906274905 * __this, const RuntimeMethod* method);
// System.Void GLTF.AttributeAccessor::set_AccessorId(GLTF.Schema.AccessorId)
extern "C" IL2CPP_METHOD_ATTR void AttributeAccessor_set_AccessorId_m1358141802 (AttributeAccessor_t906274905 * __this, AccessorId_t96769721 * p0, const RuntimeMethod* method);
// System.IO.Stream UnityGLTF.Cache.BufferCacheData::get_Stream()
extern "C" IL2CPP_METHOD_ATTR Stream_t1273022909 * BufferCacheData_get_Stream_m855137577 (BufferCacheData_t110091724 * __this, const RuntimeMethod* method);
// System.Void GLTF.AttributeAccessor::set_Stream(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void AttributeAccessor_set_Stream_m297403432 (AttributeAccessor_t906274905 * __this, Stream_t1273022909 * p0, const RuntimeMethod* method);
// System.Int64 UnityGLTF.Cache.BufferCacheData::get_ChunkOffset()
extern "C" IL2CPP_METHOD_ATTR int64_t BufferCacheData_get_ChunkOffset_m3509864196 (BufferCacheData_t110091724 * __this, const RuntimeMethod* method);
// System.Void GLTF.AttributeAccessor::set_Offset(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void AttributeAccessor_set_Offset_m2318530745 (AttributeAccessor_t906274905 * __this, int64_t p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.String,GLTF.Schema.AccessorId>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m1610083374 (KeyValuePair_2_t2279698187 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t2279698187 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4184817181_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,GLTF.AttributeAccessor>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m3918191617 (Dictionary_2_t691531204 * __this, String_t* p0, AttributeAccessor_t906274905 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t691531204 *, String_t*, AttributeAccessor_t906274905 *, const RuntimeMethod*))Dictionary_2_set_Item_m258553009_gshared)(__this, p0, p1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,GLTF.Schema.AccessorId>::MoveNext()
inline bool Enumerator_MoveNext_m1188984695 (Enumerator_t1836208795 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t1836208795 *, const RuntimeMethod*))Enumerator_MoveNext_m1107569389_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,GLTF.Schema.AccessorId>::Dispose()
inline void Enumerator_Dispose_m3666935078 (Enumerator_t1836208795 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1836208795 *, const RuntimeMethod*))Enumerator_Dispose_m3885012575_gshared)(__this, method);
}
// System.Void GLTF.GLTFHelpers::BuildMeshAttributes(System.Collections.Generic.Dictionary`2<System.String,GLTF.AttributeAccessor>&)
extern "C" IL2CPP_METHOD_ATTR void GLTFHelpers_BuildMeshAttributes_m3299399442 (RuntimeObject * __this /* static, unused */, Dictionary_2_t691531204 ** p0, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter::TransformAttributes(System.Collections.Generic.Dictionary`2<System.String,GLTF.AttributeAccessor>&)
extern "C" IL2CPP_METHOD_ATTR void GLTFSceneImporter_TransformAttributes_m3267586206 (GLTFSceneImporter_t274320441 * __this, Dictionary_2_t691531204 ** ___attributeAccessors0, const RuntimeMethod* method);
// System.Void UnityGLTF.Cache.MeshCacheData::set_MeshAttributes(System.Collections.Generic.Dictionary`2<System.String,GLTF.AttributeAccessor>)
extern "C" IL2CPP_METHOD_ATTR void MeshCacheData_set_MeshAttributes_m2155429004 (MeshCacheData_t1944180602 * __this, Dictionary_2_t691531204 * ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GLTF.AttributeAccessor>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m485820497 (Dictionary_2_t691531204 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t691531204 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m3993293265_gshared)(__this, p0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,GLTF.AttributeAccessor>::get_Item(!0)
inline AttributeAccessor_t906274905 * Dictionary_2_get_Item_m2155416867 (Dictionary_2_t691531204 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  AttributeAccessor_t906274905 * (*) (Dictionary_2_t691531204 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4278578609_gshared)(__this, p0, method);
}
// System.Void UnityGLTF.Extensions.SchemaExtensions::ConvertVector3CoordinateSpace(GLTF.AttributeAccessor&,GLTF.Math.Vector3)
extern "C" IL2CPP_METHOD_ATTR void SchemaExtensions_ConvertVector3CoordinateSpace_m2195011670 (RuntimeObject * __this /* static, unused */, AttributeAccessor_t906274905 ** ___attributeAccessor0, Vector3_t4136528132  ___coordinateSpaceCoordinateScale1, const RuntimeMethod* method);
// System.Void UnityGLTF.Extensions.SchemaExtensions::FlipFaces(GLTF.AttributeAccessor&)
extern "C" IL2CPP_METHOD_ATTR void SchemaExtensions_FlipFaces_m939712323 (RuntimeObject * __this /* static, unused */, AttributeAccessor_t906274905 ** ___attributeAccessor0, const RuntimeMethod* method);
// System.String GLTF.Schema.SemanticProperties::TexCoord(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* SemanticProperties_TexCoord_m417856718 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Void UnityGLTF.Extensions.SchemaExtensions::FlipTexCoordArrayV(GLTF.AttributeAccessor&)
extern "C" IL2CPP_METHOD_ATTR void SchemaExtensions_FlipTexCoordArrayV_m3761629237 (RuntimeObject * __this /* static, unused */, AttributeAccessor_t906274905 ** ___attributeAccessor0, const RuntimeMethod* method);
// System.Void UnityGLTF.Extensions.SchemaExtensions::ConvertVector4CoordinateSpace(GLTF.AttributeAccessor&,GLTF.Math.Vector4)
extern "C" IL2CPP_METHOD_ATTR void SchemaExtensions_ConvertVector4CoordinateSpace_m1493722793 (RuntimeObject * __this /* static, unused */, AttributeAccessor_t906274905 ** ___attributeAccessor0, Vector4_t4136528135  ___coordinateSpaceCoordinateScale1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void GameObject__ctor_m2093116449 (GameObject_t1113636619 * __this, String_t* p0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<GLTF.Schema.NodeId>::GetEnumerator()
inline Enumerator_t3000383178  List_1_GetEnumerator_m3308604002 (List_1_t1111139301 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3000383178  (*) (List_1_t1111139301 *, const RuntimeMethod*))List_1_GetEnumerator_m816315209_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<GLTF.Schema.NodeId>::get_Current()
inline NodeId_t3934031855 * Enumerator_get_Current_m3557287468 (Enumerator_t3000383178 * __this, const RuntimeMethod* method)
{
	return ((  NodeId_t3934031855 * (*) (Enumerator_t3000383178 *, const RuntimeMethod*))Enumerator_get_Current_m337713592_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Transform_SetParent_m273471670 (Transform_t3600365921 * __this, Transform_t3600365921 * p0, bool p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<GLTF.Schema.NodeId>::MoveNext()
inline bool Enumerator_MoveNext_m402865962 (Enumerator_t3000383178 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3000383178 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<GLTF.Schema.NodeId>::Dispose()
inline void Enumerator_Dispose_m4272534395 (Enumerator_t3000383178 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3000383178 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method);
}
// System.Void UnityGLTF.Extensions.SchemaExtensions::GetUnityTRSProperties(GLTF.Schema.Node,UnityEngine.Vector3&,UnityEngine.Quaternion&,UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void SchemaExtensions_GetUnityTRSProperties_m2833942333 (RuntimeObject * __this /* static, unused */, Node_t3990671929 * ___node0, Vector3_t3722313464 * ___position1, Quaternion_t2301928331 * ___rotation2, Vector3_t3722313464 * ___scale3, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localRotation_m19445462 (Transform_t3600365921 * __this, Quaternion_t2301928331  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshFilter>()
inline MeshFilter_t3523625662 * GameObject_AddComponent_TisMeshFilter_t3523625662_m262607486 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  MeshFilter_t3523625662 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m290381969_gshared)(__this, method);
}
// UnityEngine.Mesh UnityGLTF.Cache.MeshCacheData::get_LoadedMesh()
extern "C" IL2CPP_METHOD_ATTR Mesh_t3648964284 * MeshCacheData_get_LoadedMesh_m250630999 (MeshCacheData_t1944180602 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.AccessorId>::get_Item(!0)
inline AccessorId_t96769721 * Dictionary_2_get_Item_m1905243441 (Dictionary_2_t4176993316 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  AccessorId_t96769721 * (*) (Dictionary_2_t4176993316 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4278578609_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Mesh::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Mesh__ctor_m2533762929 (Mesh_t3648964284 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.AccessorId>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m1581467031 (Dictionary_2_t4176993316 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t4176993316 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m3993293265_gshared)(__this, p0, method);
}
// GLTF.Schema.NumericArray GLTF.AttributeAccessor::get_AccessorContent()
extern "C" IL2CPP_METHOD_ATTR NumericArray_t4287889340  AttributeAccessor_get_AccessorContent_m1998188366 (AttributeAccessor_t906274905 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3[] UnityGLTF.Extensions.SchemaExtensions::ToUnityVector3Raw(GLTF.Math.Vector3[])
extern "C" IL2CPP_METHOD_ATTR Vector3U5BU5D_t1718750761* SchemaExtensions_ToUnityVector3Raw_m3009470550 (RuntimeObject * __this /* static, unused */, Vector3U5BU5D_t137387629* ___inVecArr0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_vertices_m2084450642 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_normals_m332514528 (Mesh_t3648964284 * __this, Vector3U5BU5D_t1718750761* p0, const RuntimeMethod* method);
// UnityEngine.Vector2[] UnityGLTF.Extensions.SchemaExtensions::ToUnityVector2Raw(GLTF.Math.Vector2[])
extern "C" IL2CPP_METHOD_ATTR Vector2U5BU5D_t1457185986* SchemaExtensions_ToUnityVector2Raw_m1290081553 (RuntimeObject * __this /* static, unused */, Vector2U5BU5D_t623575368* ___inVecArr0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_uv_m1258646872 (Mesh_t3648964284 * __this, Vector2U5BU5D_t1457185986* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv2(UnityEngine.Vector2[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_uv2_m2840654016 (Mesh_t3648964284 * __this, Vector2U5BU5D_t1457185986* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv3(UnityEngine.Vector2[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_uv3_m2941819926 (Mesh_t3648964284 * __this, Vector2U5BU5D_t1457185986* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_uv4(UnityEngine.Vector2[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_uv4_m2767199985 (Mesh_t3648964284 * __this, Vector2U5BU5D_t1457185986* p0, const RuntimeMethod* method);
// System.String GLTF.Schema.SemanticProperties::Color(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* SemanticProperties_Color_m3715285094 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// UnityEngine.Color[] UnityGLTF.Extensions.SchemaExtensions::ToUnityColorRaw(GLTF.Math.Color[])
extern "C" IL2CPP_METHOD_ATTR ColorU5BU5D_t941916413* SchemaExtensions_ToUnityColorRaw_m4073729368 (RuntimeObject * __this /* static, unused */, ColorU5BU5D_t1735271552* ___inColorArr0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_colors(UnityEngine.Color[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_colors_m2218481242 (Mesh_t3648964284 * __this, ColorU5BU5D_t941916413* p0, const RuntimeMethod* method);
// System.Int32[] GLTF.Schema.MeshPrimitive::GenerateTriangles(System.Int32)
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* MeshPrimitive_GenerateTriangles_m3082211372 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method);
// System.Int32[] UnityGLTF.Extensions.SchemaExtensions::ToIntArrayRaw(System.UInt32[])
extern "C" IL2CPP_METHOD_ATTR Int32U5BU5D_t385246372* SchemaExtensions_ToIntArrayRaw_m716946908 (RuntimeObject * __this /* static, unused */, UInt32U5BU5D_t2770800703* ___uintArr0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_triangles_m255556250 (Mesh_t3648964284 * __this, Int32U5BU5D_t385246372* p0, const RuntimeMethod* method);
// UnityEngine.Vector4[] UnityGLTF.Extensions.SchemaExtensions::ToUnityVector4Raw(GLTF.Math.Vector4[])
extern "C" IL2CPP_METHOD_ATTR Vector4U5BU5D_t934056436* SchemaExtensions_ToUnityVector4Raw_m779192436 (RuntimeObject * __this /* static, unused */, Vector4U5BU5D_t1595950846* ___inVecArr0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_tangents(UnityEngine.Vector4[])
extern "C" IL2CPP_METHOD_ATTR void Mesh_set_tangents_m1592250690 (Mesh_t3648964284 * __this, Vector4U5BU5D_t934056436* p0, const RuntimeMethod* method);
// System.Void UnityGLTF.Cache.MeshCacheData::set_LoadedMesh(UnityEngine.Mesh)
extern "C" IL2CPP_METHOD_ATTR void MeshCacheData_set_LoadedMesh_m2762216928 (MeshCacheData_t1944180602 * __this, Mesh_t3648964284 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MeshFilter::set_sharedMesh(UnityEngine.Mesh)
extern "C" IL2CPP_METHOD_ATTR void MeshFilter_set_sharedMesh_m2173122548 (MeshFilter_t3523625662 * __this, Mesh_t3648964284 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t587009260 * GameObject_AddComponent_TisMeshRenderer_t587009260_m2704270113 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t587009260 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m290381969_gshared)(__this, method);
}
// UnityEngine.Material UnityGLTF.Cache.MaterialCacheData::GetContents(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * MaterialCacheData_GetContents_m3411919865 (MaterialCacheData_t2754836532 * __this, bool ___useVertexColors0, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Renderer_set_material_m1157964140 (Renderer_t2627027031 * __this, Material_t340375123 * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.MeshCollider>()
inline MeshCollider_t903564387 * GameObject_AddComponent_TisMeshCollider_t903564387_m1821887173 (GameObject_t1113636619 * __this, const RuntimeMethod* method)
{
	return ((  MeshCollider_t903564387 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m290381969_gshared)(__this, method);
}
// UnityEngine.Mesh UnityEngine.MeshFilter::get_mesh()
extern "C" IL2CPP_METHOD_ATTR Mesh_t3648964284 * MeshFilter_get_mesh_m3346355278 (MeshFilter_t3523625662 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MeshCollider::set_sharedMesh(UnityEngine.Mesh)
extern "C" IL2CPP_METHOD_ATTR void MeshCollider_set_sharedMesh_m1986498669 (MeshCollider_t903564387 * __this, Mesh_t3648964284 * p0, const RuntimeMethod* method);
// UnityGLTF.Cache.MaterialCacheData[] UnityGLTF.Cache.AssetCache::get_MaterialCache()
extern "C" IL2CPP_METHOD_ATTR MaterialCacheDataU5BU5D_t484490365* AssetCache_get_MaterialCache_m160752798 (AssetCache_t783611398 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0)
inline bool List_1_Contains_m195709148 (List_1_t3319525431 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t3319525431 *, String_t*, const RuntimeMethod*))List_1_Contains_m784383322_gshared)(__this, p0, method);
}
// !1 System.Collections.Generic.Dictionary`2<UnityGLTF.GLTFSceneImporter/MaterialType,UnityEngine.Shader>::get_Item(!0)
inline Shader_t4151988712 * Dictionary_2_get_Item_m2671063389 (Dictionary_2_t2973298224 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Shader_t4151988712 * (*) (Dictionary_2_t2973298224 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_m252595690_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m2535776735 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C" IL2CPP_METHOD_ATTR Shader_t4151988712 * Shader_Find_m2092206247 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Shader::set_maximumLOD(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Shader_set_maximumLOD_m3495846676 (Shader_t4151988712 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m1662457592 (Material_t340375123 * __this, Shader_t4151988712 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetOverrideTag(System.String,System.String)
extern "C" IL2CPP_METHOD_ATTR void Material_SetOverrideTag_m806530364 (Material_t340375123 * __this, String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Material_SetInt_m1783799378 (Material_t340375123 * __this, String_t* p0, int32_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::EnableKeyword(System.String)
extern "C" IL2CPP_METHOD_ATTR void Material_EnableKeyword_m329692301 (Material_t340375123 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::DisableKeyword(System.String)
extern "C" IL2CPP_METHOD_ATTR void Material_DisableKeyword_m1245091008 (Material_t340375123 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_renderQueue(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Material_set_renderQueue_m2897975967 (Material_t340375123 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Material_SetFloat_m3226510453 (Material_t340375123 * __this, String_t* p0, float p1, const RuntimeMethod* method);
// UnityEngine.Color UnityGLTF.Extensions.SchemaExtensions::ToUnityColorRaw(GLTF.Math.Color)
extern "C" IL2CPP_METHOD_ATTR Color_t2555686324  SchemaExtensions_ToUnityColorRaw_m3701965783 (RuntimeObject * __this /* static, unused */, Color_t1637600301  ___color0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C" IL2CPP_METHOD_ATTR void Material_SetColor_m2020215303 (Material_t340375123 * __this, String_t* p0, Color_t2555686324  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C" IL2CPP_METHOD_ATTR void Material_SetTexture_m1829349465 (Material_t340375123 * __this, String_t* p0, Texture_t3661962703 * p1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.IExtension>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m2046315356 (Dictionary_2_t395211613 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t395211613 *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m3993293265_gshared)(__this, p0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.IExtension>::get_Item(!0)
inline RuntimeObject* Dictionary_2_get_Item_m1477117687 (Dictionary_2_t395211613 * __this, String_t* p0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_t395211613 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4278578609_gshared)(__this, p0, method);
}
// UnityEngine.Vector3 UnityGLTF.Extensions.SchemaExtensions::ToUnityVector3Raw(GLTF.Math.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_t3722313464  SchemaExtensions_ToUnityVector3Raw_m7592615 (RuntimeObject * __this /* static, unused */, Vector3_t4136528132  ___vec30, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector4_t3319028937  Vector4_op_Implicit_m2966035112 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
extern "C" IL2CPP_METHOD_ATTR void Material_SetVector_m4214217286 (Material_t340375123 * __this, String_t* p0, Vector4_t3319028937  p1, const RuntimeMethod* method);
// System.Void UnityGLTF.Cache.MaterialCacheData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void MaterialCacheData__ctor_m2869483896 (MaterialCacheData_t2754836532 * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.Cache.MaterialCacheData::set_UnityMaterial(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void MaterialCacheData_set_UnityMaterial_m53177533 (MaterialCacheData_t2754836532 * __this, Material_t340375123 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void Material__ctor_m249231841 (Material_t340375123 * __this, Material_t340375123 * p0, const RuntimeMethod* method);
// System.Void UnityGLTF.Cache.MaterialCacheData::set_UnityMaterialWithVertexColor(UnityEngine.Material)
extern "C" IL2CPP_METHOD_ATTR void MaterialCacheData_set_UnityMaterialWithVertexColor_m697296969 (MaterialCacheData_t2754836532 * __this, Material_t340375123 * ___value0, const RuntimeMethod* method);
// System.Void UnityGLTF.Cache.MaterialCacheData::set_GLTFMaterial(GLTF.Schema.Material)
extern "C" IL2CPP_METHOD_ATTR void MaterialCacheData_set_GLTFMaterial_m3448004832 (MaterialCacheData_t2754836532 * __this, Material_t2790518843 * ___value0, const RuntimeMethod* method);
// UnityEngine.Material UnityGLTF.Cache.MaterialCacheData::get_UnityMaterialWithVertexColor()
extern "C" IL2CPP_METHOD_ATTR Material_t340375123 * MaterialCacheData_get_UnityMaterialWithVertexColor_m170899589 (MaterialCacheData_t2754836532 * __this, const RuntimeMethod* method);
// UnityEngine.Texture[] UnityGLTF.Cache.AssetCache::get_TextureCache()
extern "C" IL2CPP_METHOD_ATTR TextureU5BU5D_t908295702* AssetCache_get_TextureCache_m4292385098 (AssetCache_t783611398 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D[] UnityGLTF.Cache.AssetCache::get_ImageCache()
extern "C" IL2CPP_METHOD_ATTR Texture2DU5BU5D_t149664596* AssetCache_get_ImageCache_m3334297062 (AssetCache_t783611398 * __this, const RuntimeMethod* method);
// UnityEngine.FilterMode UnityEngine.Texture::get_filterMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Texture_get_filterMode_m3474837873 (Texture_t3661962703 * __this, const RuntimeMethod* method);
// UnityEngine.TextureWrapMode UnityEngine.Texture::get_wrapMode()
extern "C" IL2CPP_METHOD_ATTR int32_t Texture_get_wrapMode_m2187367613 (Texture_t3661962703 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.Texture2D>(!!0)
inline Texture2D_t3840446185 * Object_Instantiate_TisTexture2D_t3840446185_m2566223136 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * p0, const RuntimeMethod* method)
{
	return ((  Texture2D_t3840446185 * (*) (RuntimeObject * /* static, unused */, Texture2D_t3840446185 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2446893047_gshared)(__this /* static, unused */, p0, method);
}
// System.Void UnityEngine.Texture::set_filterMode(UnityEngine.FilterMode)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_filterMode_m3078068058 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
extern "C" IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m587872754 (Texture_t3661962703 * __this, int32_t p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,GLTF.Schema.IExtension>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m2569376538 (Dictionary_2_t395211613 * __this, String_t* p0, RuntimeObject** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t395211613 *, String_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_m1996088172_gshared)(__this, p0, p1, method);
}
// UnityEngine.Vector2 UnityGLTF.Extensions.SchemaExtensions::ToUnityVector2Raw(GLTF.Math.Vector2)
extern "C" IL2CPP_METHOD_ATTR Vector2_t2156229523  SchemaExtensions_ToUnityVector2Raw_m3238630761 (RuntimeObject * __this /* static, unused */, Vector2_t4136528133  ___vec20, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Material_SetTextureOffset_m2380336123 (Material_t340375123 * __this, String_t* p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTextureScale(System.String,UnityEngine.Vector2)
extern "C" IL2CPP_METHOD_ATTR void Material_SetTextureScale_m1562018726 (Material_t340375123 * __this, String_t* p0, Vector2_t2156229523  p1, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__34__ctor_m3433464278 (U3CLoadImageU3Ed__34_t347840408 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CLoadBufferU3Ed__35__ctor_m4225273805 (U3CLoadBufferU3Ed__35_t2608884095 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Uri__ctor_m800430703 (Uri_t100236324 * __this, String_t* p0, const RuntimeMethod* method);
// System.String System.Uri::get_AbsoluteUri()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_AbsoluteUri_m2582056986 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method);
// System.String System.Uri::get_Query()
extern "C" IL2CPP_METHOD_ATTR String_t* Uri_get_Query_m2772518875 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.String[] System.Uri::get_Segments()
extern "C" IL2CPP_METHOD_ATTR StringU5BU5D_t1281789340* Uri_get_Segments_m1268025026 (Uri_t100236324 * __this, const RuntimeMethod* method);
// System.String System.String::Remove(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Remove_m1524948975 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.String System.IO.Path::GetFileName(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* Path_GetFileName_m1354558116 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.String::IndexOf(System.String)
extern "C" IL2CPP_METHOD_ATTR int32_t String_IndexOf_m1977622757 (String_t* __this, String_t* p0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.Scene>::get_Count()
inline int32_t List_1_get_Count_m3096908490 (List_1_t3427735747 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t3427735747 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<GLTF.Schema.Scene>::get_Item(System.Int32)
inline Scene_t1955661005 * List_1_get_Item_m2012599669 (List_1_t3427735747 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Scene_t1955661005 * (*) (List_1_t3427735747 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// GLTF.Schema.Scene GLTF.Schema.GLTFRoot::GetDefaultScene()
extern "C" IL2CPP_METHOD_ATTR Scene_t1955661005 * GLTFRoot_GetDefaultScene_m366375611 (GLTFRoot_t676886847 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1152696503 (Exception_t * __this, String_t* p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.Image>::get_Count()
inline int32_t List_1_get_Count_m2233704377 (List_1_t2254695417 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2254695417 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.Texture>::get_Count()
inline int32_t List_1_get_Count_m1059274901 (List_1_t2284271573 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2284271573 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.Material>::get_Count()
inline int32_t List_1_get_Count_m430863746 (List_1_t4262593585 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4262593585 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<GLTF.Schema.Buffer>::get_Count()
inline int32_t List_1_get_Count_m4192079870 (List_1_t2341780519 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2341780519 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method);
}
// System.Void UnityGLTF.Cache.AssetCache::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void AssetCache__ctor_m3878621961 (AssetCache_t783611398 * __this, int32_t ___imageCacheSize0, int32_t ___textureCacheSize1, int32_t ___materialCacheSize2, int32_t ___bufferCacheSize3, int32_t ___meshCacheSize4, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<GLTF.Schema.Buffer>::get_Item(System.Int32)
inline Buffer_t869705777 * List_1_get_Item_m3831054255 (List_1_t2341780519 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Buffer_t869705777 * (*) (List_1_t2341780519 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Void GLTF.GLTFParser::SeekToBinaryChunk(System.IO.Stream,System.Int32,System.Int64)
extern "C" IL2CPP_METHOD_ATTR void GLTFParser_SeekToBinaryChunk_m1369199918 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * p0, int32_t p1, int64_t p2, const RuntimeMethod* method);
// System.Void UnityGLTF.Cache.BufferCacheData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void BufferCacheData__ctor_m753061382 (BufferCacheData_t110091724 * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.Cache.BufferCacheData::set_ChunkOffset(System.Int64)
extern "C" IL2CPP_METHOD_ATTR void BufferCacheData_set_ChunkOffset_m2432482419 (BufferCacheData_t110091724 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void UnityGLTF.Cache.BufferCacheData::set_Stream(System.IO.Stream)
extern "C" IL2CPP_METHOD_ATTR void BufferCacheData_set_Stream_m2562676033 (BufferCacheData_t110091724 * __this, Stream_t1273022909 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityGLTF.Cache.BufferCacheData>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m329187123 (Dictionary_2_t3293772351 * __this, int32_t p0, BufferCacheData_t110091724 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3293772351 *, int32_t, BufferCacheData_t110091724 *, const RuntimeMethod*))Dictionary_2_set_Item_m2744859241_gshared)(__this, p0, p1, method);
}
// !0 System.Collections.Generic.List`1<GLTF.Schema.Image>::get_Item(System.Int32)
inline Image_t782620675 * List_1_get_Item_m4240667468 (List_1_t2254695417 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  Image_t782620675 * (*) (List_1_t2254695417 *, int32_t, const RuntimeMethod*))List_1_get_Item_m1328026504_gshared)(__this, p0, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void Action__ctor_m75143462 (Action_t1264377477 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityGLTF.AsyncAction::RunOnWorkerThread(System.Action)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* AsyncAction_RunOnWorkerThread_m958225134 (AsyncAction_t3334821446 * __this, Action_t1264377477 * ___action0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
extern "C" IL2CPP_METHOD_ATTR UnityWebRequest_t463507806 * UnityWebRequest_Get_m996521828 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
extern "C" IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t3852015985 * UnityWebRequest_SendWebRequest_m489860187 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
extern "C" IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m1090830473 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void UnityGLTF.WebRequestException::.ctor(UnityEngine.Networking.UnityWebRequest)
extern "C" IL2CPP_METHOD_ATTR void WebRequestException__ctor_m376355303 (WebRequestException_t1410780468 * __this, UnityWebRequest_t463507806 * ___www0, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
extern "C" IL2CPP_METHOD_ATTR DownloadHandler_t2937767557 * UnityWebRequest_get_downloadHandler_m534911913 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Byte[] UnityEngine.Networking.DownloadHandler::get_data()
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* DownloadHandler_get_data_m1669096410 (DownloadHandler_t2937767557 * __this, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor(System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void MemoryStream__ctor_m2399756175 (MemoryStream_t94973147 * __this, ByteU5BU5D_t4116647657* p0, int32_t p1, int32_t p2, bool p3, bool p4, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Concat_m904156431 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method);
// GLTF.Schema.GLTFRoot GLTF.GLTFParser::ParseJson(System.IO.Stream,System.Int64)
extern "C" IL2CPP_METHOD_ATTR GLTFRoot_t676886847 * GLTFParser_ParseJson_m1570455109 (RuntimeObject * __this /* static, unused */, Stream_t1273022909 * p0, int64_t p1, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityGLTF.GLTFSceneImporter::ImportScene(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GLTFSceneImporter_ImportScene_m2136484356 (GLTFSceneImporter_t274320441 * __this, int32_t ___sceneIndex0, bool ___isMultithreaded1, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void Regex__ctor_m3948448025 (Regex_t3657309853 * __this, String_t* p0, const RuntimeMethod* method);
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String)
extern "C" IL2CPP_METHOD_ATTR Match_t3408321083 * Regex_Match_m2255756165 (Regex_t3657309853 * __this, String_t* p0, const RuntimeMethod* method);
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
extern "C" IL2CPP_METHOD_ATTR bool Group_get_Success_m3823591889 (Group_t2468205786 * __this, const RuntimeMethod* method);
// System.Int32 System.Text.RegularExpressions.Capture::get_Length()
extern "C" IL2CPP_METHOD_ATTR int32_t Capture_get_Length_m4245536461 (Capture_t2232016050 * __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Substring_m2848979100 (String_t* __this, int32_t p0, const RuntimeMethod* method);
// System.Byte[] System.Convert::FromBase64String(System.String)
extern "C" IL2CPP_METHOD_ATTR ByteU5BU5D_t4116647657* Convert_FromBase64String_m3685135396 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m373113269 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.Boolean UnityEngine.ImageConversion::LoadImage(UnityEngine.Texture2D,System.Byte[])
extern "C" IL2CPP_METHOD_ATTR bool ImageConversion_LoadImage_m2182108104 (RuntimeObject * __this /* static, unused */, Texture2D_t3840446185 * p0, ByteU5BU5D_t4116647657* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.DownloadHandlerTexture::.ctor()
extern "C" IL2CPP_METHOD_ATTR void DownloadHandlerTexture__ctor_m1255013425 (DownloadHandlerTexture_t2149801800 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
extern "C" IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m970510352 (UnityWebRequest_t463507806 * __this, DownloadHandler_t2937767557 * p0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Networking.DownloadHandlerTexture::GetContent(UnityEngine.Networking.UnityWebRequest)
extern "C" IL2CPP_METHOD_ATTR Texture2D_t3840446185 * DownloadHandlerTexture_GetContent_m4103989158 (RuntimeObject * __this /* static, unused */, UnityWebRequest_t463507806 * p0, const RuntimeMethod* method);
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
extern "C" IL2CPP_METHOD_ATTR int32_t Texture2D_get_format_m2371899271 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D__ctor_m2862217990 (Texture2D_t3840446185 * __this, int32_t p0, int32_t p1, int32_t p2, bool p3, const RuntimeMethod* method);
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
extern "C" IL2CPP_METHOD_ATTR ColorU5BU5D_t941916413* Texture2D_GetPixels_m2081641574 (Texture2D_t3840446185 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
extern "C" IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m3008871897 (Texture2D_t3840446185 * __this, ColorU5BU5D_t941916413* p0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void Texture2D_Apply_m1848181995 (Texture2D_t3840446185 * __this, bool p0, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_url()
extern "C" IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_url_m2568598920 (UnityWebRequest_t463507806 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
extern "C" IL2CPP_METHOD_ATTR void Debug_LogFormat_m309087137 (RuntimeObject * __this /* static, unused */, String_t* p0, ObjectU5BU5D_t2843939325* p1, const RuntimeMethod* method);
// System.Void System.Exception::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m213470898 (Exception_t * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void Exception__ctor_m1406832249 (Exception_t * __this, String_t* p0, Exception_t * p1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
extern "C" IL2CPP_METHOD_ATTR String_t* String_Format_m2556382932 (RuntimeObject * __this /* static, unused */, String_t* p0, RuntimeObject * p1, RuntimeObject * p2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerator UnityGLTF.GLTFComponent::Start()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GLTFComponent_Start_m815783551 (GLTFComponent_t238219215 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFComponent_Start_m815783551_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__8_t1918030142 * L_0 = (U3CStartU3Ed__8_t1918030142 *)il2cpp_codegen_object_new(U3CStartU3Ed__8_t1918030142_il2cpp_TypeInfo_var);
		U3CStartU3Ed__8__ctor_m962661000(L_0, 0, /*hidden argument*/NULL);
		U3CStartU3Ed__8_t1918030142 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void UnityGLTF.GLTFComponent::.ctor()
extern "C" IL2CPP_METHOD_ATTR void GLTFComponent__ctor_m494052798 (GLTFComponent_t238219215 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFComponent__ctor_m494052798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string Url = "";
		__this->set_Url_4(_stringLiteral757602046);
		// public bool Multithreaded = true;
		__this->set_Multithreaded_5((bool)1);
		// public int MaximumLod = 300;
		__this->set_MaximumLod_7(((int32_t)300));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFComponent/<Start>d__8::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__8__ctor_m962661000 (U3CStartU3Ed__8_t1918030142 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityGLTF.GLTFComponent/<Start>d__8::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__8_System_IDisposable_Dispose_m4187147521 (U3CStartU3Ed__8_t1918030142 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityGLTF.GLTFComponent/<Start>d__8::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartU3Ed__8_MoveNext_m532355330 (U3CStartU3Ed__8_t1918030142 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__8_MoveNext_m532355330_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFComponent_t238219215 * V_1 = NULL;
	GLTFSceneImporter_t274320441 * V_2 = NULL;
	String_t* V_3 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFComponent_t238219215 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00db;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// GLTFSceneImporter loader = null;
		V_2 = (GLTFSceneImporter_t274320441 *)NULL;
		// FileStream gltfStream = null;
		__this->set_U3CgltfStreamU3E5__2_3((FileStream_t4292183065 *)NULL);
		// if (UseStream)
		GLTFComponent_t238219215 * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_UseStream_6();
		if (!L_5)
		{
			goto IL_006f;
		}
	}
	{
		// var fullPath = Path.Combine(Application.streamingAssetsPath, Url);
		String_t* L_6 = Application_get_streamingAssetsPath_m1172141117(NULL /*static, unused*/, /*hidden argument*/NULL);
		GLTFComponent_t238219215 * L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = L_7->get_Url_4();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_9 = Path_Combine_m3389272516(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		// gltfStream = File.OpenRead(fullPath);
		String_t* L_10 = V_3;
		FileStream_t4292183065 * L_11 = File_OpenRead_m2936789020(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		__this->set_U3CgltfStreamU3E5__2_3(L_11);
		// loader = new GLTFSceneImporter(
		//     fullPath,
		//     gltfStream,
		//     gameObject.transform,
		//     addColliders
		//     );
		String_t* L_12 = V_3;
		FileStream_t4292183065 * L_13 = __this->get_U3CgltfStreamU3E5__2_3();
		GLTFComponent_t238219215 * L_14 = V_1;
		NullCheck(L_14);
		GameObject_t1113636619 * L_15 = Component_get_gameObject_m442555142(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_t3600365921 * L_16 = GameObject_get_transform_m1369836730(L_15, /*hidden argument*/NULL);
		GLTFComponent_t238219215 * L_17 = V_1;
		NullCheck(L_17);
		bool L_18 = L_17->get_addColliders_11();
		GLTFSceneImporter_t274320441 * L_19 = (GLTFSceneImporter_t274320441 *)il2cpp_codegen_object_new(GLTFSceneImporter_t274320441_il2cpp_TypeInfo_var);
		GLTFSceneImporter__ctor_m122975503(L_19, L_12, L_13, L_16, L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		// }
		goto IL_008c;
	}

IL_006f:
	{
		// loader = new GLTFSceneImporter(
		//     Url,
		//     gameObject.transform,
		//     addColliders
		//     );
		GLTFComponent_t238219215 * L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21 = L_20->get_Url_4();
		GLTFComponent_t238219215 * L_22 = V_1;
		NullCheck(L_22);
		GameObject_t1113636619 * L_23 = Component_get_gameObject_m442555142(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Transform_t3600365921 * L_24 = GameObject_get_transform_m1369836730(L_23, /*hidden argument*/NULL);
		GLTFComponent_t238219215 * L_25 = V_1;
		NullCheck(L_25);
		bool L_26 = L_25->get_addColliders_11();
		GLTFSceneImporter_t274320441 * L_27 = (GLTFSceneImporter_t274320441 *)il2cpp_codegen_object_new(GLTFSceneImporter_t274320441_il2cpp_TypeInfo_var);
		GLTFSceneImporter__ctor_m299105020(L_27, L_21, L_24, L_26, /*hidden argument*/NULL);
		V_2 = L_27;
	}

IL_008c:
	{
		// loader.SetShaderForMaterialType(GLTFSceneImporter.MaterialType.PbrMetallicRoughness, GLTFStandard);
		GLTFSceneImporter_t274320441 * L_28 = V_2;
		GLTFComponent_t238219215 * L_29 = V_1;
		NullCheck(L_29);
		Shader_t4151988712 * L_30 = L_29->get_GLTFStandard_8();
		NullCheck(L_28);
		VirtActionInvoker2< int32_t, Shader_t4151988712 * >::Invoke(4 /* System.Void UnityGLTF.GLTFSceneImporter::SetShaderForMaterialType(UnityGLTF.GLTFSceneImporter/MaterialType,UnityEngine.Shader) */, L_28, 0, L_30);
		// loader.SetShaderForMaterialType(GLTFSceneImporter.MaterialType.KHR_materials_pbrSpecularGlossiness, GLTFStandardSpecular);
		GLTFSceneImporter_t274320441 * L_31 = V_2;
		GLTFComponent_t238219215 * L_32 = V_1;
		NullCheck(L_32);
		Shader_t4151988712 * L_33 = L_32->get_GLTFStandardSpecular_9();
		NullCheck(L_31);
		VirtActionInvoker2< int32_t, Shader_t4151988712 * >::Invoke(4 /* System.Void UnityGLTF.GLTFSceneImporter::SetShaderForMaterialType(UnityGLTF.GLTFSceneImporter/MaterialType,UnityEngine.Shader) */, L_31, 1, L_33);
		// loader.SetShaderForMaterialType(GLTFSceneImporter.MaterialType.CommonConstant, GLTFConstant);
		GLTFSceneImporter_t274320441 * L_34 = V_2;
		GLTFComponent_t238219215 * L_35 = V_1;
		NullCheck(L_35);
		Shader_t4151988712 * L_36 = L_35->get_GLTFConstant_10();
		NullCheck(L_34);
		VirtActionInvoker2< int32_t, Shader_t4151988712 * >::Invoke(4 /* System.Void UnityGLTF.GLTFSceneImporter::SetShaderForMaterialType(UnityGLTF.GLTFSceneImporter/MaterialType,UnityEngine.Shader) */, L_34, 2, L_36);
		// loader.MaximumLod = MaximumLod;
		GLTFSceneImporter_t274320441 * L_37 = V_2;
		GLTFComponent_t238219215 * L_38 = V_1;
		NullCheck(L_38);
		int32_t L_39 = L_38->get_MaximumLod_7();
		NullCheck(L_37);
		L_37->set_MaximumLod_3(L_39);
		// yield return loader.Load(-1, Multithreaded);
		GLTFSceneImporter_t274320441 * L_40 = V_2;
		GLTFComponent_t238219215 * L_41 = V_1;
		NullCheck(L_41);
		bool L_42 = L_41->get_Multithreaded_5();
		NullCheck(L_40);
		RuntimeObject* L_43 = GLTFSceneImporter_Load_m915775585(L_40, (-1), L_42, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_43);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00db:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (gltfStream != null)
		FileStream_t4292183065 * L_44 = __this->get_U3CgltfStreamU3E5__2_3();
		if (!L_44)
		{
			goto IL_00f5;
		}
	}
	{
		// gltfStream.Dispose();
		FileStream_t4292183065 * L_45 = __this->get_U3CgltfStreamU3E5__2_3();
		NullCheck(L_45);
		Stream_Dispose_m2589290611(L_45, /*hidden argument*/NULL);
	}

IL_00f5:
	{
		// }
		return (bool)0;
	}
}
// System.Object UnityGLTF.GLTFComponent/<Start>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m88329895 (U3CStartU3Ed__8_t1918030142 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityGLTF.GLTFComponent/<Start>d__8::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_m616509203 (U3CStartU3Ed__8_t1918030142 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_m616509203_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ed__8_System_Collections_IEnumerator_Reset_m616509203_RuntimeMethod_var);
	}
}
// System.Object UnityGLTF.GLTFComponent/<Start>d__8::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__8_System_Collections_IEnumerator_get_Current_m216118485 (U3CStartU3Ed__8_t1918030142 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter::.ctor(System.String,UnityEngine.Transform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GLTFSceneImporter__ctor_m299105020 (GLTFSceneImporter_t274320441 * __this, String_t* ___gltfUrl0, Transform_t3600365921 * ___parent1, bool ___addColliders2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter__ctor_m299105020_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected readonly Dictionary<MaterialType, Shader> _shaderCache = new Dictionary<MaterialType, Shader>();
		Dictionary_2_t2973298224 * L_0 = (Dictionary_2_t2973298224 *)il2cpp_codegen_object_new(Dictionary_2_t2973298224_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m517788400(L_0, /*hidden argument*/Dictionary_2__ctor_m517788400_RuntimeMethod_var);
		__this->set__shaderCache_2(L_0);
		// public int MaximumLod = 300;
		__this->set_MaximumLod_3(((int32_t)300));
		// protected readonly GLTF.Schema.Material DefaultMaterial = new GLTF.Schema.Material();
		Material_t2790518843 * L_1 = (Material_t2790518843 *)il2cpp_codegen_object_new(Material_t2790518843_il2cpp_TypeInfo_var);
		Material__ctor_m1321042060(L_1, /*hidden argument*/NULL);
		__this->set_DefaultMaterial_4(L_1);
		// public GLTFSceneImporter(string gltfUrl, Transform parent = null, bool addColliders = false)
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// _gltfUrl = gltfUrl;
		String_t* L_2 = ___gltfUrl0;
		__this->set__gltfUrl_5(L_2);
		// _gltfDirectoryPath = AbsoluteUriPath(gltfUrl);
		String_t* L_3 = ___gltfUrl0;
		String_t* L_4 = GLTFSceneImporter_AbsoluteUriPath_m3886472302(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->set__gltfDirectoryPath_6(L_4);
		// _sceneParent = parent;
		Transform_t3600365921 * L_5 = ___parent1;
		__this->set__sceneParent_1(L_5);
		// _asyncAction = new AsyncAction();
		AsyncAction_t3334821446 * L_6 = (AsyncAction_t3334821446 *)il2cpp_codegen_object_new(AsyncAction_t3334821446_il2cpp_TypeInfo_var);
		AsyncAction__ctor_m1571104454(L_6, /*hidden argument*/NULL);
		__this->set__asyncAction_10(L_6);
		// _loadType = LoadType.Uri;
		__this->set__loadType_12(0);
		// _addColliders = addColliders;
		bool L_7 = ___addColliders2;
		__this->set__addColliders_11(L_7);
		// }
		return;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter::.ctor(System.String,System.IO.Stream,UnityEngine.Transform,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR void GLTFSceneImporter__ctor_m122975503 (GLTFSceneImporter_t274320441 * __this, String_t* ___rootPath0, Stream_t1273022909 * ___stream1, Transform_t3600365921 * ___parent2, bool ___addColliders3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter__ctor_m122975503_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GLBStream_t3327861285  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		// protected readonly Dictionary<MaterialType, Shader> _shaderCache = new Dictionary<MaterialType, Shader>();
		Dictionary_2_t2973298224 * L_0 = (Dictionary_2_t2973298224 *)il2cpp_codegen_object_new(Dictionary_2_t2973298224_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m517788400(L_0, /*hidden argument*/Dictionary_2__ctor_m517788400_RuntimeMethod_var);
		__this->set__shaderCache_2(L_0);
		// public int MaximumLod = 300;
		__this->set_MaximumLod_3(((int32_t)300));
		// protected readonly GLTF.Schema.Material DefaultMaterial = new GLTF.Schema.Material();
		Material_t2790518843 * L_1 = (Material_t2790518843 *)il2cpp_codegen_object_new(Material_t2790518843_il2cpp_TypeInfo_var);
		Material__ctor_m1321042060(L_1, /*hidden argument*/NULL);
		__this->set_DefaultMaterial_4(L_1);
		// public GLTFSceneImporter(string rootPath, Stream stream, Transform parent = null, bool addColliders = false)
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		// _gltfUrl = rootPath;
		String_t* L_2 = ___rootPath0;
		__this->set__gltfUrl_5(L_2);
		// _gltfDirectoryPath = AbsoluteFilePath(rootPath);
		String_t* L_3 = ___rootPath0;
		String_t* L_4 = GLTFSceneImporter_AbsoluteFilePath_m2222415970(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		__this->set__gltfDirectoryPath_6(L_4);
		// _gltfStream = new GLBStream { Stream = stream, StartPosition = stream.Position };
		il2cpp_codegen_initobj((&V_0), sizeof(GLBStream_t3327861285 ));
		Stream_t1273022909 * L_5 = ___stream1;
		(&V_0)->set_Stream_0(L_5);
		Stream_t1273022909 * L_6 = ___stream1;
		NullCheck(L_6);
		int64_t L_7 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_6);
		(&V_0)->set_StartPosition_1(L_7);
		GLBStream_t3327861285  L_8 = V_0;
		__this->set__gltfStream_7(L_8);
		// _sceneParent = parent;
		Transform_t3600365921 * L_9 = ___parent2;
		__this->set__sceneParent_1(L_9);
		// _asyncAction = new AsyncAction();
		AsyncAction_t3334821446 * L_10 = (AsyncAction_t3334821446 *)il2cpp_codegen_object_new(AsyncAction_t3334821446_il2cpp_TypeInfo_var);
		AsyncAction__ctor_m1571104454(L_10, /*hidden argument*/NULL);
		__this->set__asyncAction_10(L_10);
		// _loadType = LoadType.Stream;
		__this->set__loadType_12(1);
		// _addColliders = addColliders;
		bool L_11 = ___addColliders3;
		__this->set__addColliders_11(L_11);
		// }
		return;
	}
}
// UnityEngine.GameObject UnityGLTF.GLTFSceneImporter::get_LastLoadedScene()
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GLTFSceneImporter_get_LastLoadedScene_m2108175511 (GLTFSceneImporter_t274320441 * __this, const RuntimeMethod* method)
{
	{
		// get { return _lastLoadedScene; }
		GameObject_t1113636619 * L_0 = __this->get__lastLoadedScene_0();
		return L_0;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter::SetShaderForMaterialType(UnityGLTF.GLTFSceneImporter/MaterialType,UnityEngine.Shader)
extern "C" IL2CPP_METHOD_ATTR void GLTFSceneImporter_SetShaderForMaterialType_m2318134295 (GLTFSceneImporter_t274320441 * __this, int32_t ___type0, Shader_t4151988712 * ___shader1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter_SetShaderForMaterialType_m2318134295_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _shaderCache.Add(type, shader);
		Dictionary_2_t2973298224 * L_0 = __this->get__shaderCache_2();
		int32_t L_1 = ___type0;
		Shader_t4151988712 * L_2 = ___shader1;
		NullCheck(L_0);
		Dictionary_2_Add_m3713014608(L_0, L_1, L_2, /*hidden argument*/Dictionary_2_Add_m3713014608_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Collections.IEnumerator UnityGLTF.GLTFSceneImporter::Load(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GLTFSceneImporter_Load_m915775585 (GLTFSceneImporter_t274320441 * __this, int32_t ___sceneIndex0, bool ___isMultithreaded1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter_Load_m915775585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadU3Ed__21_t2072795234 * L_0 = (U3CLoadU3Ed__21_t2072795234 *)il2cpp_codegen_object_new(U3CLoadU3Ed__21_t2072795234_il2cpp_TypeInfo_var);
		U3CLoadU3Ed__21__ctor_m4022723356(L_0, 0, /*hidden argument*/NULL);
		U3CLoadU3Ed__21_t2072795234 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CLoadU3Ed__21_t2072795234 * L_2 = L_1;
		int32_t L_3 = ___sceneIndex0;
		NullCheck(L_2);
		L_2->set_sceneIndex_3(L_3);
		U3CLoadU3Ed__21_t2072795234 * L_4 = L_2;
		bool L_5 = ___isMultithreaded1;
		NullCheck(L_4);
		L_4->set_isMultithreaded_4(L_5);
		return L_4;
	}
}
// System.Collections.IEnumerator UnityGLTF.GLTFSceneImporter::ImportScene(System.Int32,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GLTFSceneImporter_ImportScene_m2136484356 (GLTFSceneImporter_t274320441 * __this, int32_t ___sceneIndex0, bool ___isMultithreaded1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter_ImportScene_m2136484356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CImportSceneU3Ed__22_t599600113 * L_0 = (U3CImportSceneU3Ed__22_t599600113 *)il2cpp_codegen_object_new(U3CImportSceneU3Ed__22_t599600113_il2cpp_TypeInfo_var);
		U3CImportSceneU3Ed__22__ctor_m2932397664(L_0, 0, /*hidden argument*/NULL);
		U3CImportSceneU3Ed__22_t599600113 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CImportSceneU3Ed__22_t599600113 * L_2 = L_1;
		int32_t L_3 = ___sceneIndex0;
		NullCheck(L_2);
		L_2->set_sceneIndex_2(L_3);
		U3CImportSceneU3Ed__22_t599600113 * L_4 = L_2;
		bool L_5 = ___isMultithreaded1;
		NullCheck(L_4);
		L_4->set_isMultithreaded_4(L_5);
		return L_4;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter::BuildAttributesForMeshes()
extern "C" IL2CPP_METHOD_ATTR void GLTFSceneImporter_BuildAttributesForMeshes_m3432206748 (GLTFSceneImporter_t274320441 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter_BuildAttributesForMeshes_m3432206748_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Mesh_t2726263229 * V_1 = NULL;
	int32_t V_2 = 0;
	MeshPrimitive_t2910245916 * V_3 = NULL;
	{
		// for (int i = 0; i < _root.Meshes.Count; ++i)
		V_0 = 0;
		goto IL_0095;
	}

IL_0007:
	{
		// GLTF.Schema.Mesh mesh = _root.Meshes[i];
		GLTFRoot_t676886847 * L_0 = __this->get__root_8();
		NullCheck(L_0);
		List_1_t4198337971 * L_1 = L_0->get_Meshes_16();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		Mesh_t2726263229 * L_3 = List_1_get_Item_m2800780356(L_1, L_2, /*hidden argument*/List_1_get_Item_m2800780356_RuntimeMethod_var);
		V_1 = L_3;
		// if (_assetCache.MeshCache[i] == null)
		AssetCache_t783611398 * L_4 = __this->get__assetCache_9();
		NullCheck(L_4);
		List_1_t695246165 * L_5 = AssetCache_get_MeshCache_m1480961495(L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		NullCheck(L_5);
		MeshCacheDataU5BU5D_t3518138719* L_7 = List_1_get_Item_m2536950298(L_5, L_6, /*hidden argument*/List_1_get_Item_m2536950298_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_004d;
		}
	}
	{
		// _assetCache.MeshCache[i] = new MeshCacheData[mesh.Primitives.Count];
		AssetCache_t783611398 * L_8 = __this->get__assetCache_9();
		NullCheck(L_8);
		List_1_t695246165 * L_9 = AssetCache_get_MeshCache_m1480961495(L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		Mesh_t2726263229 * L_11 = V_1;
		NullCheck(L_11);
		List_1_t87353362 * L_12 = L_11->get_Primitives_7();
		NullCheck(L_12);
		int32_t L_13 = List_1_get_Count_m3533462362(L_12, /*hidden argument*/List_1_get_Count_m3533462362_RuntimeMethod_var);
		MeshCacheDataU5BU5D_t3518138719* L_14 = (MeshCacheDataU5BU5D_t3518138719*)SZArrayNew(MeshCacheDataU5BU5D_t3518138719_il2cpp_TypeInfo_var, (uint32_t)L_13);
		NullCheck(L_9);
		List_1_set_Item_m3842666524(L_9, L_10, L_14, /*hidden argument*/List_1_set_Item_m3842666524_RuntimeMethod_var);
	}

IL_004d:
	{
		// for (int j = 0; j < mesh.Primitives.Count; ++j)
		V_2 = 0;
		goto IL_0083;
	}

IL_0051:
	{
		// _assetCache.MeshCache[i][j] = new MeshCacheData();
		AssetCache_t783611398 * L_15 = __this->get__assetCache_9();
		NullCheck(L_15);
		List_1_t695246165 * L_16 = AssetCache_get_MeshCache_m1480961495(L_15, /*hidden argument*/NULL);
		int32_t L_17 = V_0;
		NullCheck(L_16);
		MeshCacheDataU5BU5D_t3518138719* L_18 = List_1_get_Item_m2536950298(L_16, L_17, /*hidden argument*/List_1_get_Item_m2536950298_RuntimeMethod_var);
		int32_t L_19 = V_2;
		MeshCacheData_t1944180602 * L_20 = (MeshCacheData_t1944180602 *)il2cpp_codegen_object_new(MeshCacheData_t1944180602_il2cpp_TypeInfo_var);
		MeshCacheData__ctor_m4095164320(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (MeshCacheData_t1944180602 *)L_20);
		// var primitive = mesh.Primitives[j];
		Mesh_t2726263229 * L_21 = V_1;
		NullCheck(L_21);
		List_1_t87353362 * L_22 = L_21->get_Primitives_7();
		int32_t L_23 = V_2;
		NullCheck(L_22);
		MeshPrimitive_t2910245916 * L_24 = List_1_get_Item_m578470191(L_22, L_23, /*hidden argument*/List_1_get_Item_m578470191_RuntimeMethod_var);
		V_3 = L_24;
		// BuildMeshAttributes(primitive, i, j);
		MeshPrimitive_t2910245916 * L_25 = V_3;
		int32_t L_26 = V_0;
		int32_t L_27 = V_2;
		VirtActionInvoker3< MeshPrimitive_t2910245916 *, int32_t, int32_t >::Invoke(6 /* System.Void UnityGLTF.GLTFSceneImporter::BuildMeshAttributes(GLTF.Schema.MeshPrimitive,System.Int32,System.Int32) */, __this, L_25, L_26, L_27);
		// for (int j = 0; j < mesh.Primitives.Count; ++j)
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0083:
	{
		// for (int j = 0; j < mesh.Primitives.Count; ++j)
		int32_t L_29 = V_2;
		Mesh_t2726263229 * L_30 = V_1;
		NullCheck(L_30);
		List_1_t87353362 * L_31 = L_30->get_Primitives_7();
		NullCheck(L_31);
		int32_t L_32 = List_1_get_Count_m3533462362(L_31, /*hidden argument*/List_1_get_Count_m3533462362_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)L_32)))
		{
			goto IL_0051;
		}
	}
	{
		// for (int i = 0; i < _root.Meshes.Count; ++i)
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_33, (int32_t)1));
	}

IL_0095:
	{
		// for (int i = 0; i < _root.Meshes.Count; ++i)
		int32_t L_34 = V_0;
		GLTFRoot_t676886847 * L_35 = __this->get__root_8();
		NullCheck(L_35);
		List_1_t4198337971 * L_36 = L_35->get_Meshes_16();
		NullCheck(L_36);
		int32_t L_37 = List_1_get_Count_m2917776829(L_36, /*hidden argument*/List_1_get_Count_m2917776829_RuntimeMethod_var);
		if ((((int32_t)L_34) < ((int32_t)L_37)))
		{
			goto IL_0007;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter::BuildMeshAttributes(GLTF.Schema.MeshPrimitive,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GLTFSceneImporter_BuildMeshAttributes_m204857246 (GLTFSceneImporter_t274320441 * __this, MeshPrimitive_t2910245916 * ___primitive0, int32_t ___meshID1, int32_t ___primitiveIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter_BuildMeshAttributes_m204857246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t691531204 * V_0 = NULL;
	Enumerator_t1836208795  V_1;
	memset(&V_1, 0, sizeof(V_1));
	KeyValuePair_2_t2279698187  V_2;
	memset(&V_2, 0, sizeof(V_2));
	BufferCacheData_t110091724 * V_3 = NULL;
	AttributeAccessor_t906274905 * V_4 = NULL;
	BufferCacheData_t110091724 * V_5 = NULL;
	AttributeAccessor_t906274905 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// if (_assetCache.MeshCache[meshID][primitiveIndex].MeshAttributes.Count == 0)
		AssetCache_t783611398 * L_0 = __this->get__assetCache_9();
		NullCheck(L_0);
		List_1_t695246165 * L_1 = AssetCache_get_MeshCache_m1480961495(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___meshID1;
		NullCheck(L_1);
		MeshCacheDataU5BU5D_t3518138719* L_3 = List_1_get_Item_m2536950298(L_1, L_2, /*hidden argument*/List_1_get_Item_m2536950298_RuntimeMethod_var);
		int32_t L_4 = ___primitiveIndex2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		MeshCacheData_t1944180602 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Dictionary_2_t691531204 * L_7 = MeshCacheData_get_MeshAttributes_m1203834975(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = Dictionary_2_get_Count_m1197856806(L_7, /*hidden argument*/Dictionary_2_get_Count_m1197856806_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_016b;
		}
	}
	{
		// Dictionary<string, AttributeAccessor> attributeAccessors = new Dictionary<string, AttributeAccessor>(primitive.Attributes.Count + 1);
		MeshPrimitive_t2910245916 * L_9 = ___primitive0;
		NullCheck(L_9);
		Dictionary_2_t4176993316 * L_10 = L_9->get_Attributes_6();
		NullCheck(L_10);
		int32_t L_11 = Dictionary_2_get_Count_m2249658819(L_10, /*hidden argument*/Dictionary_2_get_Count_m2249658819_RuntimeMethod_var);
		Dictionary_2_t691531204 * L_12 = (Dictionary_2_t691531204 *)il2cpp_codegen_object_new(Dictionary_2_t691531204_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m649114996(L_12, ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)), /*hidden argument*/Dictionary_2__ctor_m649114996_RuntimeMethod_var);
		V_0 = L_12;
		// foreach (var attributePair in primitive.Attributes)
		MeshPrimitive_t2910245916 * L_13 = ___primitive0;
		NullCheck(L_13);
		Dictionary_2_t4176993316 * L_14 = L_13->get_Attributes_6();
		NullCheck(L_14);
		Enumerator_t1836208795  L_15 = Dictionary_2_GetEnumerator_m3186304916(L_14, /*hidden argument*/Dictionary_2_GetEnumerator_m3186304916_RuntimeMethod_var);
		V_1 = L_15;
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00b7;
		}

IL_0043:
		{
			// foreach (var attributePair in primitive.Attributes)
			KeyValuePair_2_t2279698187  L_16 = Enumerator_get_Current_m3853553557((Enumerator_t1836208795 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3853553557_RuntimeMethod_var);
			V_2 = L_16;
			// BufferCacheData bufferCacheData = _assetCache.BufferCache[attributePair.Value.Value.BufferView.Value.Buffer.Id];
			AssetCache_t783611398 * L_17 = __this->get__assetCache_9();
			NullCheck(L_17);
			Dictionary_2_t3293772351 * L_18 = AssetCache_get_BufferCache_m1575123264(L_17, /*hidden argument*/NULL);
			AccessorId_t96769721 * L_19 = KeyValuePair_2_get_Value_m270393519((KeyValuePair_2_t2279698187 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m270393519_RuntimeMethod_var);
			NullCheck(L_19);
			Accessor_t1661788513 * L_20 = VirtFuncInvoker0< Accessor_t1661788513 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.Accessor>::get_Value() */, L_19);
			NullCheck(L_20);
			BufferViewId_t4185270750 * L_21 = L_20->get_BufferView_7();
			NullCheck(L_21);
			BufferView_t2650099126 * L_22 = VirtFuncInvoker0< BufferView_t2650099126 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.BufferView>::get_Value() */, L_21);
			NullCheck(L_22);
			BufferId_t2787902107 * L_23 = L_22->get_Buffer_7();
			NullCheck(L_23);
			int32_t L_24 = ((GLTFId_1_t1070037637 *)L_23)->get_Id_0();
			NullCheck(L_18);
			BufferCacheData_t110091724 * L_25 = Dictionary_2_get_Item_m1259228363(L_18, L_24, /*hidden argument*/Dictionary_2_get_Item_m1259228363_RuntimeMethod_var);
			V_3 = L_25;
			// AttributeAccessor AttributeAccessor = new AttributeAccessor()
			// {
			//     AccessorId = attributePair.Value,
			//     Stream = bufferCacheData.Stream,
			//     Offset = bufferCacheData.ChunkOffset
			// };
			AttributeAccessor_t906274905 * L_26 = (AttributeAccessor_t906274905 *)il2cpp_codegen_object_new(AttributeAccessor_t906274905_il2cpp_TypeInfo_var);
			AttributeAccessor__ctor_m3403250823(L_26, /*hidden argument*/NULL);
			AttributeAccessor_t906274905 * L_27 = L_26;
			AccessorId_t96769721 * L_28 = KeyValuePair_2_get_Value_m270393519((KeyValuePair_2_t2279698187 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Value_m270393519_RuntimeMethod_var);
			NullCheck(L_27);
			AttributeAccessor_set_AccessorId_m1358141802(L_27, L_28, /*hidden argument*/NULL);
			AttributeAccessor_t906274905 * L_29 = L_27;
			BufferCacheData_t110091724 * L_30 = V_3;
			NullCheck(L_30);
			Stream_t1273022909 * L_31 = BufferCacheData_get_Stream_m855137577(L_30, /*hidden argument*/NULL);
			NullCheck(L_29);
			AttributeAccessor_set_Stream_m297403432(L_29, L_31, /*hidden argument*/NULL);
			AttributeAccessor_t906274905 * L_32 = L_29;
			BufferCacheData_t110091724 * L_33 = V_3;
			NullCheck(L_33);
			int64_t L_34 = BufferCacheData_get_ChunkOffset_m3509864196(L_33, /*hidden argument*/NULL);
			NullCheck(L_32);
			AttributeAccessor_set_Offset_m2318530745(L_32, L_34, /*hidden argument*/NULL);
			V_4 = L_32;
			// attributeAccessors[attributePair.Key] = AttributeAccessor;
			Dictionary_2_t691531204 * L_35 = V_0;
			String_t* L_36 = KeyValuePair_2_get_Key_m1610083374((KeyValuePair_2_t2279698187 *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m1610083374_RuntimeMethod_var);
			AttributeAccessor_t906274905 * L_37 = V_4;
			NullCheck(L_35);
			Dictionary_2_set_Item_m3918191617(L_35, L_36, L_37, /*hidden argument*/Dictionary_2_set_Item_m3918191617_RuntimeMethod_var);
		}

IL_00b7:
		{
			// foreach (var attributePair in primitive.Attributes)
			bool L_38 = Enumerator_MoveNext_m1188984695((Enumerator_t1836208795 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m1188984695_RuntimeMethod_var);
			if (L_38)
			{
				goto IL_0043;
			}
		}

IL_00c0:
		{
			IL2CPP_LEAVE(0xD0, FINALLY_00c2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c2;
	}

FINALLY_00c2:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m3666935078((Enumerator_t1836208795 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m3666935078_RuntimeMethod_var);
		IL2CPP_END_FINALLY(194)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(194)
	{
		IL2CPP_JUMP_TBL(0xD0, IL_00d0)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00d0:
	{
		// if (primitive.Indices != null)
		MeshPrimitive_t2910245916 * L_39 = ___primitive0;
		NullCheck(L_39);
		AccessorId_t96769721 * L_40 = L_39->get_Indices_7();
		if (!L_40)
		{
			goto IL_0143;
		}
	}
	{
		// BufferCacheData bufferCacheData = _assetCache.BufferCache[primitive.Indices.Value.BufferView.Value.Buffer.Id];
		AssetCache_t783611398 * L_41 = __this->get__assetCache_9();
		NullCheck(L_41);
		Dictionary_2_t3293772351 * L_42 = AssetCache_get_BufferCache_m1575123264(L_41, /*hidden argument*/NULL);
		MeshPrimitive_t2910245916 * L_43 = ___primitive0;
		NullCheck(L_43);
		AccessorId_t96769721 * L_44 = L_43->get_Indices_7();
		NullCheck(L_44);
		Accessor_t1661788513 * L_45 = VirtFuncInvoker0< Accessor_t1661788513 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.Accessor>::get_Value() */, L_44);
		NullCheck(L_45);
		BufferViewId_t4185270750 * L_46 = L_45->get_BufferView_7();
		NullCheck(L_46);
		BufferView_t2650099126 * L_47 = VirtFuncInvoker0< BufferView_t2650099126 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.BufferView>::get_Value() */, L_46);
		NullCheck(L_47);
		BufferId_t2787902107 * L_48 = L_47->get_Buffer_7();
		NullCheck(L_48);
		int32_t L_49 = ((GLTFId_1_t1070037637 *)L_48)->get_Id_0();
		NullCheck(L_42);
		BufferCacheData_t110091724 * L_50 = Dictionary_2_get_Item_m1259228363(L_42, L_49, /*hidden argument*/Dictionary_2_get_Item_m1259228363_RuntimeMethod_var);
		V_5 = L_50;
		// AttributeAccessor indexBuilder = new AttributeAccessor()
		// {
		//     AccessorId = primitive.Indices,
		//     Stream = bufferCacheData.Stream,
		//     Offset = bufferCacheData.ChunkOffset
		// };
		AttributeAccessor_t906274905 * L_51 = (AttributeAccessor_t906274905 *)il2cpp_codegen_object_new(AttributeAccessor_t906274905_il2cpp_TypeInfo_var);
		AttributeAccessor__ctor_m3403250823(L_51, /*hidden argument*/NULL);
		AttributeAccessor_t906274905 * L_52 = L_51;
		MeshPrimitive_t2910245916 * L_53 = ___primitive0;
		NullCheck(L_53);
		AccessorId_t96769721 * L_54 = L_53->get_Indices_7();
		NullCheck(L_52);
		AttributeAccessor_set_AccessorId_m1358141802(L_52, L_54, /*hidden argument*/NULL);
		AttributeAccessor_t906274905 * L_55 = L_52;
		BufferCacheData_t110091724 * L_56 = V_5;
		NullCheck(L_56);
		Stream_t1273022909 * L_57 = BufferCacheData_get_Stream_m855137577(L_56, /*hidden argument*/NULL);
		NullCheck(L_55);
		AttributeAccessor_set_Stream_m297403432(L_55, L_57, /*hidden argument*/NULL);
		AttributeAccessor_t906274905 * L_58 = L_55;
		BufferCacheData_t110091724 * L_59 = V_5;
		NullCheck(L_59);
		int64_t L_60 = BufferCacheData_get_ChunkOffset_m3509864196(L_59, /*hidden argument*/NULL);
		NullCheck(L_58);
		AttributeAccessor_set_Offset_m2318530745(L_58, L_60, /*hidden argument*/NULL);
		V_6 = L_58;
		// attributeAccessors[SemanticProperties.INDICES] = indexBuilder;
		Dictionary_2_t691531204 * L_61 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_62 = ((SemanticProperties_t862543966_StaticFields*)il2cpp_codegen_static_fields_for(SemanticProperties_t862543966_il2cpp_TypeInfo_var))->get_INDICES_5();
		AttributeAccessor_t906274905 * L_63 = V_6;
		NullCheck(L_61);
		Dictionary_2_set_Item_m3918191617(L_61, L_62, L_63, /*hidden argument*/Dictionary_2_set_Item_m3918191617_RuntimeMethod_var);
	}

IL_0143:
	{
		// GLTFHelpers.BuildMeshAttributes(ref attributeAccessors);
		GLTFHelpers_BuildMeshAttributes_m3299399442(NULL /*static, unused*/, (Dictionary_2_t691531204 **)(&V_0), /*hidden argument*/NULL);
		// TransformAttributes(ref attributeAccessors);
		GLTFSceneImporter_TransformAttributes_m3267586206(__this, (Dictionary_2_t691531204 **)(&V_0), /*hidden argument*/NULL);
		// _assetCache.MeshCache[meshID][primitiveIndex].MeshAttributes = attributeAccessors;
		AssetCache_t783611398 * L_64 = __this->get__assetCache_9();
		NullCheck(L_64);
		List_1_t695246165 * L_65 = AssetCache_get_MeshCache_m1480961495(L_64, /*hidden argument*/NULL);
		int32_t L_66 = ___meshID1;
		NullCheck(L_65);
		MeshCacheDataU5BU5D_t3518138719* L_67 = List_1_get_Item_m2536950298(L_65, L_66, /*hidden argument*/List_1_get_Item_m2536950298_RuntimeMethod_var);
		int32_t L_68 = ___primitiveIndex2;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		MeshCacheData_t1944180602 * L_70 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		Dictionary_2_t691531204 * L_71 = V_0;
		NullCheck(L_70);
		MeshCacheData_set_MeshAttributes_m2155429004(L_70, L_71, /*hidden argument*/NULL);
	}

IL_016b:
	{
		// }
		return;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter::TransformAttributes(System.Collections.Generic.Dictionary`2<System.String,GLTF.AttributeAccessor>&)
extern "C" IL2CPP_METHOD_ATTR void GLTFSceneImporter_TransformAttributes_m3267586206 (GLTFSceneImporter_t274320441 * __this, Dictionary_2_t691531204 ** ___attributeAccessors0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter_TransformAttributes_m3267586206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	AttributeAccessor_t906274905 * V_0 = NULL;
	AttributeAccessor_t906274905 * V_1 = NULL;
	AttributeAccessor_t906274905 * V_2 = NULL;
	int32_t V_3 = 0;
	AttributeAccessor_t906274905 * V_4 = NULL;
	AttributeAccessor_t906274905 * V_5 = NULL;
	{
		// if (attributeAccessors.ContainsKey(SemanticProperties.POSITION))
		Dictionary_2_t691531204 ** L_0 = ___attributeAccessors0;
		Dictionary_2_t691531204 * L_1 = *((Dictionary_2_t691531204 **)L_0);
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_2 = ((SemanticProperties_t862543966_StaticFields*)il2cpp_codegen_static_fields_for(SemanticProperties_t862543966_il2cpp_TypeInfo_var))->get_POSITION_0();
		NullCheck(L_1);
		bool L_3 = Dictionary_2_ContainsKey_m485820497(L_1, L_2, /*hidden argument*/Dictionary_2_ContainsKey_m485820497_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// AttributeAccessor attributeAccessor = attributeAccessors[SemanticProperties.POSITION];
		Dictionary_2_t691531204 ** L_4 = ___attributeAccessors0;
		Dictionary_2_t691531204 * L_5 = *((Dictionary_2_t691531204 **)L_4);
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_6 = ((SemanticProperties_t862543966_StaticFields*)il2cpp_codegen_static_fields_for(SemanticProperties_t862543966_il2cpp_TypeInfo_var))->get_POSITION_0();
		NullCheck(L_5);
		AttributeAccessor_t906274905 * L_7 = Dictionary_2_get_Item_m2155416867(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m2155416867_RuntimeMethod_var);
		V_0 = L_7;
		// SchemaExtensions.ConvertVector3CoordinateSpace(ref attributeAccessor, SchemaExtensions.CoordinateSpaceConversionScale);
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		Vector3_t4136528132  L_8 = ((SchemaExtensions_t3846062055_StaticFields*)il2cpp_codegen_static_fields_for(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var))->get_CoordinateSpaceConversionScale_0();
		SchemaExtensions_ConvertVector3CoordinateSpace_m2195011670(NULL /*static, unused*/, (AttributeAccessor_t906274905 **)(&V_0), L_8, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// if (attributeAccessors.ContainsKey(SemanticProperties.INDICES))
		Dictionary_2_t691531204 ** L_9 = ___attributeAccessors0;
		Dictionary_2_t691531204 * L_10 = *((Dictionary_2_t691531204 **)L_9);
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_11 = ((SemanticProperties_t862543966_StaticFields*)il2cpp_codegen_static_fields_for(SemanticProperties_t862543966_il2cpp_TypeInfo_var))->get_INDICES_5();
		NullCheck(L_10);
		bool L_12 = Dictionary_2_ContainsKey_m485820497(L_10, L_11, /*hidden argument*/Dictionary_2_ContainsKey_m485820497_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_0049;
		}
	}
	{
		// AttributeAccessor attributeAccessor = attributeAccessors[SemanticProperties.INDICES];
		Dictionary_2_t691531204 ** L_13 = ___attributeAccessors0;
		Dictionary_2_t691531204 * L_14 = *((Dictionary_2_t691531204 **)L_13);
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_15 = ((SemanticProperties_t862543966_StaticFields*)il2cpp_codegen_static_fields_for(SemanticProperties_t862543966_il2cpp_TypeInfo_var))->get_INDICES_5();
		NullCheck(L_14);
		AttributeAccessor_t906274905 * L_16 = Dictionary_2_get_Item_m2155416867(L_14, L_15, /*hidden argument*/Dictionary_2_get_Item_m2155416867_RuntimeMethod_var);
		V_1 = L_16;
		// SchemaExtensions.FlipFaces(ref attributeAccessor);
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		SchemaExtensions_FlipFaces_m939712323(NULL /*static, unused*/, (AttributeAccessor_t906274905 **)(&V_1), /*hidden argument*/NULL);
	}

IL_0049:
	{
		// if (attributeAccessors.ContainsKey(SemanticProperties.NORMAL))
		Dictionary_2_t691531204 ** L_17 = ___attributeAccessors0;
		Dictionary_2_t691531204 * L_18 = *((Dictionary_2_t691531204 **)L_17);
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_19 = ((SemanticProperties_t862543966_StaticFields*)il2cpp_codegen_static_fields_for(SemanticProperties_t862543966_il2cpp_TypeInfo_var))->get_NORMAL_1();
		NullCheck(L_18);
		bool L_20 = Dictionary_2_ContainsKey_m485820497(L_18, L_19, /*hidden argument*/Dictionary_2_ContainsKey_m485820497_RuntimeMethod_var);
		if (!L_20)
		{
			goto IL_0070;
		}
	}
	{
		// AttributeAccessor attributeAccessor = attributeAccessors[SemanticProperties.NORMAL];
		Dictionary_2_t691531204 ** L_21 = ___attributeAccessors0;
		Dictionary_2_t691531204 * L_22 = *((Dictionary_2_t691531204 **)L_21);
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_23 = ((SemanticProperties_t862543966_StaticFields*)il2cpp_codegen_static_fields_for(SemanticProperties_t862543966_il2cpp_TypeInfo_var))->get_NORMAL_1();
		NullCheck(L_22);
		AttributeAccessor_t906274905 * L_24 = Dictionary_2_get_Item_m2155416867(L_22, L_23, /*hidden argument*/Dictionary_2_get_Item_m2155416867_RuntimeMethod_var);
		V_2 = L_24;
		// SchemaExtensions.ConvertVector3CoordinateSpace(ref attributeAccessor, SchemaExtensions.CoordinateSpaceConversionScale);
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		Vector3_t4136528132  L_25 = ((SchemaExtensions_t3846062055_StaticFields*)il2cpp_codegen_static_fields_for(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var))->get_CoordinateSpaceConversionScale_0();
		SchemaExtensions_ConvertVector3CoordinateSpace_m2195011670(NULL /*static, unused*/, (AttributeAccessor_t906274905 **)(&V_2), L_25, /*hidden argument*/NULL);
	}

IL_0070:
	{
		// for (int i = 0; i < 4; i++)
		V_3 = 0;
		goto IL_009d;
	}

IL_0074:
	{
		// if (attributeAccessors.ContainsKey(SemanticProperties.TexCoord(i)))
		Dictionary_2_t691531204 ** L_26 = ___attributeAccessors0;
		Dictionary_2_t691531204 * L_27 = *((Dictionary_2_t691531204 **)L_26);
		int32_t L_28 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_29 = SemanticProperties_TexCoord_m417856718(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		NullCheck(L_27);
		bool L_30 = Dictionary_2_ContainsKey_m485820497(L_27, L_29, /*hidden argument*/Dictionary_2_ContainsKey_m485820497_RuntimeMethod_var);
		if (!L_30)
		{
			goto IL_0099;
		}
	}
	{
		// AttributeAccessor attributeAccessor = attributeAccessors[SemanticProperties.TexCoord(i)];
		Dictionary_2_t691531204 ** L_31 = ___attributeAccessors0;
		Dictionary_2_t691531204 * L_32 = *((Dictionary_2_t691531204 **)L_31);
		int32_t L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_34 = SemanticProperties_TexCoord_m417856718(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		NullCheck(L_32);
		AttributeAccessor_t906274905 * L_35 = Dictionary_2_get_Item_m2155416867(L_32, L_34, /*hidden argument*/Dictionary_2_get_Item_m2155416867_RuntimeMethod_var);
		V_4 = L_35;
		// SchemaExtensions.FlipTexCoordArrayV(ref attributeAccessor);
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		SchemaExtensions_FlipTexCoordArrayV_m3761629237(NULL /*static, unused*/, (AttributeAccessor_t906274905 **)(&V_4), /*hidden argument*/NULL);
	}

IL_0099:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_36, (int32_t)1));
	}

IL_009d:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_37 = V_3;
		if ((((int32_t)L_37) < ((int32_t)4)))
		{
			goto IL_0074;
		}
	}
	{
		// if (attributeAccessors.ContainsKey(SemanticProperties.TANGENT))
		Dictionary_2_t691531204 ** L_38 = ___attributeAccessors0;
		Dictionary_2_t691531204 * L_39 = *((Dictionary_2_t691531204 **)L_38);
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_40 = ((SemanticProperties_t862543966_StaticFields*)il2cpp_codegen_static_fields_for(SemanticProperties_t862543966_il2cpp_TypeInfo_var))->get_TANGENT_4();
		NullCheck(L_39);
		bool L_41 = Dictionary_2_ContainsKey_m485820497(L_39, L_40, /*hidden argument*/Dictionary_2_ContainsKey_m485820497_RuntimeMethod_var);
		if (!L_41)
		{
			goto IL_00c9;
		}
	}
	{
		// AttributeAccessor attributeAccessor = attributeAccessors[SemanticProperties.TANGENT];
		Dictionary_2_t691531204 ** L_42 = ___attributeAccessors0;
		Dictionary_2_t691531204 * L_43 = *((Dictionary_2_t691531204 **)L_42);
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_44 = ((SemanticProperties_t862543966_StaticFields*)il2cpp_codegen_static_fields_for(SemanticProperties_t862543966_il2cpp_TypeInfo_var))->get_TANGENT_4();
		NullCheck(L_43);
		AttributeAccessor_t906274905 * L_45 = Dictionary_2_get_Item_m2155416867(L_43, L_44, /*hidden argument*/Dictionary_2_get_Item_m2155416867_RuntimeMethod_var);
		V_5 = L_45;
		// SchemaExtensions.ConvertVector4CoordinateSpace(ref attributeAccessor, SchemaExtensions.TangentSpaceConversionScale);
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		Vector4_t4136528135  L_46 = ((SchemaExtensions_t3846062055_StaticFields*)il2cpp_codegen_static_fields_for(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var))->get_TangentSpaceConversionScale_1();
		SchemaExtensions_ConvertVector4CoordinateSpace_m1493722793(NULL /*static, unused*/, (AttributeAccessor_t906274905 **)(&V_5), L_46, /*hidden argument*/NULL);
	}

IL_00c9:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject UnityGLTF.GLTFSceneImporter::CreateScene(GLTF.Schema.Scene)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GLTFSceneImporter_CreateScene_m1370845587 (GLTFSceneImporter_t274320441 * __this, Scene_t1955661005 * ___scene0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter_CreateScene_m1370845587_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Enumerator_t3000383178  V_1;
	memset(&V_1, 0, sizeof(V_1));
	NodeId_t3934031855 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		// var sceneObj = new GameObject(scene.Name ?? "GLTFScene");
		Scene_t1955661005 * L_0 = ___scene0;
		NullCheck(L_0);
		String_t* L_1 = ((GLTFChildOfRootProperty_t1666645821 *)L_0)->get_Name_6();
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000f;
		}
	}
	{
		G_B2_0 = _stringLiteral941579186;
	}

IL_000f:
	{
		GameObject_t1113636619 * L_3 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_3, G_B2_0, /*hidden argument*/NULL);
		V_0 = L_3;
		// foreach (var node in scene.Nodes)
		Scene_t1955661005 * L_4 = ___scene0;
		NullCheck(L_4);
		List_1_t1111139301 * L_5 = L_4->get_Nodes_7();
		NullCheck(L_5);
		Enumerator_t3000383178  L_6 = List_1_GetEnumerator_m3308604002(L_5, /*hidden argument*/List_1_GetEnumerator_m3308604002_RuntimeMethod_var);
		V_1 = L_6;
	}

IL_0021:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0048;
		}

IL_0023:
		{
			// foreach (var node in scene.Nodes)
			NodeId_t3934031855 * L_7 = Enumerator_get_Current_m3557287468((Enumerator_t3000383178 *)(&V_1), /*hidden argument*/Enumerator_get_Current_m3557287468_RuntimeMethod_var);
			V_2 = L_7;
			// var nodeObj = CreateNode(node.Value);
			NodeId_t3934031855 * L_8 = V_2;
			NullCheck(L_8);
			Node_t3990671929 * L_9 = VirtFuncInvoker0< Node_t3990671929 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.Node>::get_Value() */, L_8);
			GameObject_t1113636619 * L_10 = VirtFuncInvoker1< GameObject_t1113636619 *, Node_t3990671929 * >::Invoke(8 /* UnityEngine.GameObject UnityGLTF.GLTFSceneImporter::CreateNode(GLTF.Schema.Node) */, __this, L_9);
			// nodeObj.transform.SetParent(sceneObj.transform, false);
			NullCheck(L_10);
			Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
			GameObject_t1113636619 * L_12 = V_0;
			NullCheck(L_12);
			Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			Transform_SetParent_m273471670(L_11, L_13, (bool)0, /*hidden argument*/NULL);
		}

IL_0048:
		{
			// foreach (var node in scene.Nodes)
			bool L_14 = Enumerator_MoveNext_m402865962((Enumerator_t3000383178 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m402865962_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0023;
			}
		}

IL_0051:
		{
			IL2CPP_LEAVE(0x61, FINALLY_0053);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0053;
	}

FINALLY_0053:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4272534395((Enumerator_t3000383178 *)(&V_1), /*hidden argument*/Enumerator_Dispose_m4272534395_RuntimeMethod_var);
		IL2CPP_END_FINALLY(83)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(83)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0061:
	{
		// return sceneObj;
		GameObject_t1113636619 * L_15 = V_0;
		return L_15;
	}
}
// UnityEngine.GameObject UnityGLTF.GLTFSceneImporter::CreateNode(GLTF.Schema.Node)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GLTFSceneImporter_CreateNode_m3930028413 (GLTFSceneImporter_t274320441 * __this, Node_t3990671929 * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter_CreateNode_m3930028413_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Quaternion_t2301928331  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Enumerator_t3000383178  V_4;
	memset(&V_4, 0, sizeof(V_4));
	NodeId_t3934031855 * V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		// var nodeObj = new GameObject(node.Name ?? "GLTFNode");
		Node_t3990671929 * L_0 = ___node0;
		NullCheck(L_0);
		String_t* L_1 = ((GLTFChildOfRootProperty_t1666645821 *)L_0)->get_Name_6();
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_000f;
		}
	}
	{
		G_B2_0 = _stringLiteral85505625;
	}

IL_000f:
	{
		GameObject_t1113636619 * L_3 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_3, G_B2_0, /*hidden argument*/NULL);
		V_0 = L_3;
		// node.GetUnityTRSProperties(out position, out rotation, out scale);
		Node_t3990671929 * L_4 = ___node0;
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		SchemaExtensions_GetUnityTRSProperties_m2833942333(NULL /*static, unused*/, L_4, (Vector3_t3722313464 *)(&V_1), (Quaternion_t2301928331 *)(&V_2), (Vector3_t3722313464 *)(&V_3), /*hidden argument*/NULL);
		// nodeObj.transform.localPosition = position;
		GameObject_t1113636619 * L_5 = V_0;
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		Vector3_t3722313464  L_7 = V_1;
		NullCheck(L_6);
		Transform_set_localPosition_m4128471975(L_6, L_7, /*hidden argument*/NULL);
		// nodeObj.transform.localRotation = rotation;
		GameObject_t1113636619 * L_8 = V_0;
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		Quaternion_t2301928331  L_10 = V_2;
		NullCheck(L_9);
		Transform_set_localRotation_m19445462(L_9, L_10, /*hidden argument*/NULL);
		// nodeObj.transform.localScale = scale;
		GameObject_t1113636619 * L_11 = V_0;
		NullCheck(L_11);
		Transform_t3600365921 * L_12 = GameObject_get_transform_m1369836730(L_11, /*hidden argument*/NULL);
		Vector3_t3722313464  L_13 = V_3;
		NullCheck(L_12);
		Transform_set_localScale_m3053443106(L_12, L_13, /*hidden argument*/NULL);
		// if (node.Mesh != null)
		Node_t3990671929 * L_14 = ___node0;
		NullCheck(L_14);
		MeshId_t2690594789 * L_15 = L_14->get_Mesh_12();
		if (!L_15)
		{
			goto IL_006f;
		}
	}
	{
		// CreateMeshObject(node.Mesh.Value, nodeObj.transform, node.Mesh.Id);
		Node_t3990671929 * L_16 = ___node0;
		NullCheck(L_16);
		MeshId_t2690594789 * L_17 = L_16->get_Mesh_12();
		NullCheck(L_17);
		Mesh_t2726263229 * L_18 = VirtFuncInvoker0< Mesh_t2726263229 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.Mesh>::get_Value() */, L_17);
		GameObject_t1113636619 * L_19 = V_0;
		NullCheck(L_19);
		Transform_t3600365921 * L_20 = GameObject_get_transform_m1369836730(L_19, /*hidden argument*/NULL);
		Node_t3990671929 * L_21 = ___node0;
		NullCheck(L_21);
		MeshId_t2690594789 * L_22 = L_21->get_Mesh_12();
		NullCheck(L_22);
		int32_t L_23 = ((GLTFId_1_t2926595089 *)L_22)->get_Id_0();
		VirtActionInvoker3< Mesh_t2726263229 *, Transform_t3600365921 *, int32_t >::Invoke(9 /* System.Void UnityGLTF.GLTFSceneImporter::CreateMeshObject(GLTF.Schema.Mesh,UnityEngine.Transform,System.Int32) */, __this, L_18, L_20, L_23);
	}

IL_006f:
	{
		// if (node.Children != null)
		Node_t3990671929 * L_24 = ___node0;
		NullCheck(L_24);
		List_1_t1111139301 * L_25 = L_24->get_Children_9();
		if (!L_25)
		{
			goto IL_00c6;
		}
	}
	{
		// foreach (var child in node.Children)
		Node_t3990671929 * L_26 = ___node0;
		NullCheck(L_26);
		List_1_t1111139301 * L_27 = L_26->get_Children_9();
		NullCheck(L_27);
		Enumerator_t3000383178  L_28 = List_1_GetEnumerator_m3308604002(L_27, /*hidden argument*/List_1_GetEnumerator_m3308604002_RuntimeMethod_var);
		V_4 = L_28;
	}

IL_0084:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00ad;
		}

IL_0086:
		{
			// foreach (var child in node.Children)
			NodeId_t3934031855 * L_29 = Enumerator_get_Current_m3557287468((Enumerator_t3000383178 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m3557287468_RuntimeMethod_var);
			V_5 = L_29;
			// var childObj = CreateNode(child.Value);
			NodeId_t3934031855 * L_30 = V_5;
			NullCheck(L_30);
			Node_t3990671929 * L_31 = VirtFuncInvoker0< Node_t3990671929 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.Node>::get_Value() */, L_30);
			GameObject_t1113636619 * L_32 = VirtFuncInvoker1< GameObject_t1113636619 *, Node_t3990671929 * >::Invoke(8 /* UnityEngine.GameObject UnityGLTF.GLTFSceneImporter::CreateNode(GLTF.Schema.Node) */, __this, L_31);
			// childObj.transform.SetParent(nodeObj.transform, false);
			NullCheck(L_32);
			Transform_t3600365921 * L_33 = GameObject_get_transform_m1369836730(L_32, /*hidden argument*/NULL);
			GameObject_t1113636619 * L_34 = V_0;
			NullCheck(L_34);
			Transform_t3600365921 * L_35 = GameObject_get_transform_m1369836730(L_34, /*hidden argument*/NULL);
			NullCheck(L_33);
			Transform_SetParent_m273471670(L_33, L_35, (bool)0, /*hidden argument*/NULL);
		}

IL_00ad:
		{
			// foreach (var child in node.Children)
			bool L_36 = Enumerator_MoveNext_m402865962((Enumerator_t3000383178 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m402865962_RuntimeMethod_var);
			if (L_36)
			{
				goto IL_0086;
			}
		}

IL_00b6:
		{
			IL2CPP_LEAVE(0xC6, FINALLY_00b8);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00b8;
	}

FINALLY_00b8:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4272534395((Enumerator_t3000383178 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m4272534395_RuntimeMethod_var);
		IL2CPP_END_FINALLY(184)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(184)
	{
		IL2CPP_JUMP_TBL(0xC6, IL_00c6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00c6:
	{
		// return nodeObj;
		GameObject_t1113636619 * L_37 = V_0;
		return L_37;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter::CreateMeshObject(GLTF.Schema.Mesh,UnityEngine.Transform,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void GLTFSceneImporter_CreateMeshObject_m1035315303 (GLTFSceneImporter_t274320441 * __this, Mesh_t2726263229 * ___mesh0, Transform_t3600365921 * ___parent1, int32_t ___meshId2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter_CreateMeshObject_m1035315303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MeshPrimitive_t2910245916 * V_1 = NULL;
	{
		// if (_assetCache.MeshCache[meshId] == null)
		AssetCache_t783611398 * L_0 = __this->get__assetCache_9();
		NullCheck(L_0);
		List_1_t695246165 * L_1 = AssetCache_get_MeshCache_m1480961495(L_0, /*hidden argument*/NULL);
		int32_t L_2 = ___meshId2;
		NullCheck(L_1);
		MeshCacheDataU5BU5D_t3518138719* L_3 = List_1_get_Item_m2536950298(L_1, L_2, /*hidden argument*/List_1_get_Item_m2536950298_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_0034;
		}
	}
	{
		// _assetCache.MeshCache[meshId] = new MeshCacheData[mesh.Primitives.Count];
		AssetCache_t783611398 * L_4 = __this->get__assetCache_9();
		NullCheck(L_4);
		List_1_t695246165 * L_5 = AssetCache_get_MeshCache_m1480961495(L_4, /*hidden argument*/NULL);
		int32_t L_6 = ___meshId2;
		Mesh_t2726263229 * L_7 = ___mesh0;
		NullCheck(L_7);
		List_1_t87353362 * L_8 = L_7->get_Primitives_7();
		NullCheck(L_8);
		int32_t L_9 = List_1_get_Count_m3533462362(L_8, /*hidden argument*/List_1_get_Count_m3533462362_RuntimeMethod_var);
		MeshCacheDataU5BU5D_t3518138719* L_10 = (MeshCacheDataU5BU5D_t3518138719*)SZArrayNew(MeshCacheDataU5BU5D_t3518138719_il2cpp_TypeInfo_var, (uint32_t)L_9);
		NullCheck(L_5);
		List_1_set_Item_m3842666524(L_5, L_6, L_10, /*hidden argument*/List_1_set_Item_m3842666524_RuntimeMethod_var);
	}

IL_0034:
	{
		// for (int i = 0; i < mesh.Primitives.Count; ++i)
		V_0 = 0;
		goto IL_0065;
	}

IL_0038:
	{
		// var primitive = mesh.Primitives[i];
		Mesh_t2726263229 * L_11 = ___mesh0;
		NullCheck(L_11);
		List_1_t87353362 * L_12 = L_11->get_Primitives_7();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		MeshPrimitive_t2910245916 * L_14 = List_1_get_Item_m578470191(L_12, L_13, /*hidden argument*/List_1_get_Item_m578470191_RuntimeMethod_var);
		V_1 = L_14;
		// var primitiveObj = CreateMeshPrimitive(primitive, meshId, i);
		MeshPrimitive_t2910245916 * L_15 = V_1;
		int32_t L_16 = ___meshId2;
		int32_t L_17 = V_0;
		GameObject_t1113636619 * L_18 = VirtFuncInvoker3< GameObject_t1113636619 *, MeshPrimitive_t2910245916 *, int32_t, int32_t >::Invoke(10 /* UnityEngine.GameObject UnityGLTF.GLTFSceneImporter::CreateMeshPrimitive(GLTF.Schema.MeshPrimitive,System.Int32,System.Int32) */, __this, L_15, L_16, L_17);
		// primitiveObj.transform.SetParent(parent, false);
		GameObject_t1113636619 * L_19 = L_18;
		NullCheck(L_19);
		Transform_t3600365921 * L_20 = GameObject_get_transform_m1369836730(L_19, /*hidden argument*/NULL);
		Transform_t3600365921 * L_21 = ___parent1;
		NullCheck(L_20);
		Transform_SetParent_m273471670(L_20, L_21, (bool)0, /*hidden argument*/NULL);
		// primitiveObj.SetActive(true);
		NullCheck(L_19);
		GameObject_SetActive_m796801857(L_19, (bool)1, /*hidden argument*/NULL);
		// for (int i = 0; i < mesh.Primitives.Count; ++i)
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0065:
	{
		// for (int i = 0; i < mesh.Primitives.Count; ++i)
		int32_t L_23 = V_0;
		Mesh_t2726263229 * L_24 = ___mesh0;
		NullCheck(L_24);
		List_1_t87353362 * L_25 = L_24->get_Primitives_7();
		NullCheck(L_25);
		int32_t L_26 = List_1_get_Count_m3533462362(L_25, /*hidden argument*/List_1_get_Count_m3533462362_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_26)))
		{
			goto IL_0038;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject UnityGLTF.GLTFSceneImporter::CreateMeshPrimitive(GLTF.Schema.MeshPrimitive,System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR GameObject_t1113636619 * GLTFSceneImporter_CreateMeshPrimitive_m3733527890 (GLTFSceneImporter_t274320441 * __this, MeshPrimitive_t2910245916 * ___primitive0, int32_t ___meshID1, int32_t ___primitiveIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter_CreateMeshPrimitive_m3733527890_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t1113636619 * V_0 = NULL;
	MeshFilter_t3523625662 * V_1 = NULL;
	MaterialCacheData_t2754836532 * V_2 = NULL;
	Dictionary_2_t691531204 * V_3 = NULL;
	int32_t V_4 = 0;
	Mesh_t3648964284 * V_5 = NULL;
	Mesh_t3648964284 * G_B7_0 = NULL;
	Mesh_t3648964284 * G_B7_1 = NULL;
	Mesh_t3648964284 * G_B6_0 = NULL;
	Mesh_t3648964284 * G_B6_1 = NULL;
	Vector3U5BU5D_t1718750761* G_B8_0 = NULL;
	Mesh_t3648964284 * G_B8_1 = NULL;
	Mesh_t3648964284 * G_B8_2 = NULL;
	Mesh_t3648964284 * G_B10_0 = NULL;
	Mesh_t3648964284 * G_B10_1 = NULL;
	Mesh_t3648964284 * G_B9_0 = NULL;
	Mesh_t3648964284 * G_B9_1 = NULL;
	Vector3U5BU5D_t1718750761* G_B11_0 = NULL;
	Mesh_t3648964284 * G_B11_1 = NULL;
	Mesh_t3648964284 * G_B11_2 = NULL;
	Mesh_t3648964284 * G_B13_0 = NULL;
	Mesh_t3648964284 * G_B13_1 = NULL;
	Mesh_t3648964284 * G_B12_0 = NULL;
	Mesh_t3648964284 * G_B12_1 = NULL;
	Vector2U5BU5D_t1457185986* G_B14_0 = NULL;
	Mesh_t3648964284 * G_B14_1 = NULL;
	Mesh_t3648964284 * G_B14_2 = NULL;
	Mesh_t3648964284 * G_B16_0 = NULL;
	Mesh_t3648964284 * G_B16_1 = NULL;
	Mesh_t3648964284 * G_B15_0 = NULL;
	Mesh_t3648964284 * G_B15_1 = NULL;
	Vector2U5BU5D_t1457185986* G_B17_0 = NULL;
	Mesh_t3648964284 * G_B17_1 = NULL;
	Mesh_t3648964284 * G_B17_2 = NULL;
	Mesh_t3648964284 * G_B19_0 = NULL;
	Mesh_t3648964284 * G_B19_1 = NULL;
	Mesh_t3648964284 * G_B18_0 = NULL;
	Mesh_t3648964284 * G_B18_1 = NULL;
	Vector2U5BU5D_t1457185986* G_B20_0 = NULL;
	Mesh_t3648964284 * G_B20_1 = NULL;
	Mesh_t3648964284 * G_B20_2 = NULL;
	Mesh_t3648964284 * G_B22_0 = NULL;
	Mesh_t3648964284 * G_B22_1 = NULL;
	Mesh_t3648964284 * G_B21_0 = NULL;
	Mesh_t3648964284 * G_B21_1 = NULL;
	Vector2U5BU5D_t1457185986* G_B23_0 = NULL;
	Mesh_t3648964284 * G_B23_1 = NULL;
	Mesh_t3648964284 * G_B23_2 = NULL;
	Mesh_t3648964284 * G_B25_0 = NULL;
	Mesh_t3648964284 * G_B25_1 = NULL;
	Mesh_t3648964284 * G_B24_0 = NULL;
	Mesh_t3648964284 * G_B24_1 = NULL;
	ColorU5BU5D_t941916413* G_B26_0 = NULL;
	Mesh_t3648964284 * G_B26_1 = NULL;
	Mesh_t3648964284 * G_B26_2 = NULL;
	Mesh_t3648964284 * G_B28_0 = NULL;
	Mesh_t3648964284 * G_B28_1 = NULL;
	Mesh_t3648964284 * G_B27_0 = NULL;
	Mesh_t3648964284 * G_B27_1 = NULL;
	Int32U5BU5D_t385246372* G_B29_0 = NULL;
	Mesh_t3648964284 * G_B29_1 = NULL;
	Mesh_t3648964284 * G_B29_2 = NULL;
	Mesh_t3648964284 * G_B31_0 = NULL;
	Mesh_t3648964284 * G_B31_1 = NULL;
	Mesh_t3648964284 * G_B30_0 = NULL;
	Mesh_t3648964284 * G_B30_1 = NULL;
	Vector4U5BU5D_t934056436* G_B32_0 = NULL;
	Mesh_t3648964284 * G_B32_1 = NULL;
	Mesh_t3648964284 * G_B32_2 = NULL;
	GLTFSceneImporter_t274320441 * G_B35_0 = NULL;
	GLTFSceneImporter_t274320441 * G_B34_0 = NULL;
	Material_t2790518843 * G_B36_0 = NULL;
	GLTFSceneImporter_t274320441 * G_B36_1 = NULL;
	Material_t2790518843 * G_B38_0 = NULL;
	GLTFSceneImporter_t274320441 * G_B38_1 = NULL;
	Material_t2790518843 * G_B37_0 = NULL;
	GLTFSceneImporter_t274320441 * G_B37_1 = NULL;
	int32_t G_B39_0 = 0;
	Material_t2790518843 * G_B39_1 = NULL;
	GLTFSceneImporter_t274320441 * G_B39_2 = NULL;
	{
		// var primitiveObj = new GameObject("Primitive");
		GameObject_t1113636619 * L_0 = (GameObject_t1113636619 *)il2cpp_codegen_object_new(GameObject_t1113636619_il2cpp_TypeInfo_var);
		GameObject__ctor_m2093116449(L_0, _stringLiteral2311315672, /*hidden argument*/NULL);
		V_0 = L_0;
		// var meshFilter = primitiveObj.AddComponent<MeshFilter>();
		GameObject_t1113636619 * L_1 = V_0;
		NullCheck(L_1);
		MeshFilter_t3523625662 * L_2 = GameObject_AddComponent_TisMeshFilter_t3523625662_m262607486(L_1, /*hidden argument*/GameObject_AddComponent_TisMeshFilter_t3523625662_m262607486_RuntimeMethod_var);
		V_1 = L_2;
		// if (_assetCache.MeshCache[meshID][primitiveIndex] == null)
		AssetCache_t783611398 * L_3 = __this->get__assetCache_9();
		NullCheck(L_3);
		List_1_t695246165 * L_4 = AssetCache_get_MeshCache_m1480961495(L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___meshID1;
		NullCheck(L_4);
		MeshCacheDataU5BU5D_t3518138719* L_6 = List_1_get_Item_m2536950298(L_4, L_5, /*hidden argument*/List_1_get_Item_m2536950298_RuntimeMethod_var);
		int32_t L_7 = ___primitiveIndex2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		MeshCacheData_t1944180602 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if (L_9)
		{
			goto IL_003f;
		}
	}
	{
		// _assetCache.MeshCache[meshID][primitiveIndex] = new MeshCacheData();
		AssetCache_t783611398 * L_10 = __this->get__assetCache_9();
		NullCheck(L_10);
		List_1_t695246165 * L_11 = AssetCache_get_MeshCache_m1480961495(L_10, /*hidden argument*/NULL);
		int32_t L_12 = ___meshID1;
		NullCheck(L_11);
		MeshCacheDataU5BU5D_t3518138719* L_13 = List_1_get_Item_m2536950298(L_11, L_12, /*hidden argument*/List_1_get_Item_m2536950298_RuntimeMethod_var);
		int32_t L_14 = ___primitiveIndex2;
		MeshCacheData_t1944180602 * L_15 = (MeshCacheData_t1944180602 *)il2cpp_codegen_object_new(MeshCacheData_t1944180602_il2cpp_TypeInfo_var);
		MeshCacheData__ctor_m4095164320(L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (MeshCacheData_t1944180602 *)L_15);
	}

IL_003f:
	{
		// if (_assetCache.MeshCache[meshID][primitiveIndex].LoadedMesh == null)
		AssetCache_t783611398 * L_16 = __this->get__assetCache_9();
		NullCheck(L_16);
		List_1_t695246165 * L_17 = AssetCache_get_MeshCache_m1480961495(L_16, /*hidden argument*/NULL);
		int32_t L_18 = ___meshID1;
		NullCheck(L_17);
		MeshCacheDataU5BU5D_t3518138719* L_19 = List_1_get_Item_m2536950298(L_17, L_18, /*hidden argument*/List_1_get_Item_m2536950298_RuntimeMethod_var);
		int32_t L_20 = ___primitiveIndex2;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		MeshCacheData_t1944180602 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Mesh_t3648964284 * L_23 = MeshCacheData_get_LoadedMesh_m250630999(L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_24 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_23, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_02c3;
		}
	}
	{
		// if (_assetCache.MeshCache[meshID][primitiveIndex].MeshAttributes.Count == 0)
		AssetCache_t783611398 * L_25 = __this->get__assetCache_9();
		NullCheck(L_25);
		List_1_t695246165 * L_26 = AssetCache_get_MeshCache_m1480961495(L_25, /*hidden argument*/NULL);
		int32_t L_27 = ___meshID1;
		NullCheck(L_26);
		MeshCacheDataU5BU5D_t3518138719* L_28 = List_1_get_Item_m2536950298(L_26, L_27, /*hidden argument*/List_1_get_Item_m2536950298_RuntimeMethod_var);
		int32_t L_29 = ___primitiveIndex2;
		NullCheck(L_28);
		int32_t L_30 = L_29;
		MeshCacheData_t1944180602 * L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		Dictionary_2_t691531204 * L_32 = MeshCacheData_get_MeshAttributes_m1203834975(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		int32_t L_33 = Dictionary_2_get_Count_m1197856806(L_32, /*hidden argument*/Dictionary_2_get_Count_m1197856806_RuntimeMethod_var);
		if (L_33)
		{
			goto IL_008a;
		}
	}
	{
		// BuildMeshAttributes(primitive, meshID, primitiveIndex);
		MeshPrimitive_t2910245916 * L_34 = ___primitive0;
		int32_t L_35 = ___meshID1;
		int32_t L_36 = ___primitiveIndex2;
		VirtActionInvoker3< MeshPrimitive_t2910245916 *, int32_t, int32_t >::Invoke(6 /* System.Void UnityGLTF.GLTFSceneImporter::BuildMeshAttributes(GLTF.Schema.MeshPrimitive,System.Int32,System.Int32) */, __this, L_34, L_35, L_36);
	}

IL_008a:
	{
		// var meshAttributes = _assetCache.MeshCache[meshID][primitiveIndex].MeshAttributes;
		AssetCache_t783611398 * L_37 = __this->get__assetCache_9();
		NullCheck(L_37);
		List_1_t695246165 * L_38 = AssetCache_get_MeshCache_m1480961495(L_37, /*hidden argument*/NULL);
		int32_t L_39 = ___meshID1;
		NullCheck(L_38);
		MeshCacheDataU5BU5D_t3518138719* L_40 = List_1_get_Item_m2536950298(L_38, L_39, /*hidden argument*/List_1_get_Item_m2536950298_RuntimeMethod_var);
		int32_t L_41 = ___primitiveIndex2;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		MeshCacheData_t1944180602 * L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		Dictionary_2_t691531204 * L_44 = MeshCacheData_get_MeshAttributes_m1203834975(L_43, /*hidden argument*/NULL);
		V_3 = L_44;
		// var vertexCount = primitive.Attributes[SemanticProperties.POSITION].Value.Count;
		MeshPrimitive_t2910245916 * L_45 = ___primitive0;
		NullCheck(L_45);
		Dictionary_2_t4176993316 * L_46 = L_45->get_Attributes_6();
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_47 = ((SemanticProperties_t862543966_StaticFields*)il2cpp_codegen_static_fields_for(SemanticProperties_t862543966_il2cpp_TypeInfo_var))->get_POSITION_0();
		NullCheck(L_46);
		AccessorId_t96769721 * L_48 = Dictionary_2_get_Item_m1905243441(L_46, L_47, /*hidden argument*/Dictionary_2_get_Item_m1905243441_RuntimeMethod_var);
		NullCheck(L_48);
		Accessor_t1661788513 * L_49 = VirtFuncInvoker0< Accessor_t1661788513 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.Accessor>::get_Value() */, L_48);
		NullCheck(L_49);
		int32_t L_50 = L_49->get_Count_11();
		V_4 = L_50;
		// UnityEngine.Mesh mesh = new UnityEngine.Mesh
		// {
		//     vertices = primitive.Attributes.ContainsKey(SemanticProperties.POSITION)
		//         ? meshAttributes[SemanticProperties.POSITION].AccessorContent.AsVertices.ToUnityVector3Raw()
		//         : null,
		//     normals = primitive.Attributes.ContainsKey(SemanticProperties.NORMAL)
		//         ? meshAttributes[SemanticProperties.NORMAL].AccessorContent.AsNormals.ToUnityVector3Raw()
		//         : null,
		// 
		//     uv = primitive.Attributes.ContainsKey(SemanticProperties.TexCoord(0))
		//         ? meshAttributes[SemanticProperties.TexCoord(0)].AccessorContent.AsTexcoords.ToUnityVector2Raw()
		//         : null,
		// 
		//     uv2 = primitive.Attributes.ContainsKey(SemanticProperties.TexCoord(1))
		//         ? meshAttributes[SemanticProperties.TexCoord(1)].AccessorContent.AsTexcoords.ToUnityVector2Raw()
		//         : null,
		// 
		//     uv3 = primitive.Attributes.ContainsKey(SemanticProperties.TexCoord(2))
		//         ? meshAttributes[SemanticProperties.TexCoord(2)].AccessorContent.AsTexcoords.ToUnityVector2Raw()
		//         : null,
		// 
		//     uv4 = primitive.Attributes.ContainsKey(SemanticProperties.TexCoord(3))
		//         ? meshAttributes[SemanticProperties.TexCoord(3)].AccessorContent.AsTexcoords.ToUnityVector2Raw()
		//         : null,
		// 
		//     colors = primitive.Attributes.ContainsKey(SemanticProperties.Color(0))
		//         ? meshAttributes[SemanticProperties.Color(0)].AccessorContent.AsColors.ToUnityColorRaw()
		//         : null,
		// 
		//     triangles = primitive.Indices != null
		//         ? meshAttributes[SemanticProperties.INDICES].AccessorContent.AsTriangles.ToIntArrayRaw()
		//         : MeshPrimitive.GenerateTriangles(vertexCount),
		// 
		//     tangents = primitive.Attributes.ContainsKey(SemanticProperties.TANGENT)
		//         ? meshAttributes[SemanticProperties.TANGENT].AccessorContent.AsTangents.ToUnityVector4Raw()
		//         : null
		// };
		Mesh_t3648964284 * L_51 = (Mesh_t3648964284 *)il2cpp_codegen_object_new(Mesh_t3648964284_il2cpp_TypeInfo_var);
		Mesh__ctor_m2533762929(L_51, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_52 = L_51;
		MeshPrimitive_t2910245916 * L_53 = ___primitive0;
		NullCheck(L_53);
		Dictionary_2_t4176993316 * L_54 = L_53->get_Attributes_6();
		String_t* L_55 = ((SemanticProperties_t862543966_StaticFields*)il2cpp_codegen_static_fields_for(SemanticProperties_t862543966_il2cpp_TypeInfo_var))->get_POSITION_0();
		NullCheck(L_54);
		bool L_56 = Dictionary_2_ContainsKey_m1581467031(L_54, L_55, /*hidden argument*/Dictionary_2_ContainsKey_m1581467031_RuntimeMethod_var);
		G_B6_0 = L_52;
		G_B6_1 = L_52;
		if (L_56)
		{
			G_B7_0 = L_52;
			G_B7_1 = L_52;
			goto IL_00da;
		}
	}
	{
		G_B8_0 = ((Vector3U5BU5D_t1718750761*)(NULL));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		goto IL_00f4;
	}

IL_00da:
	{
		Dictionary_2_t691531204 * L_57 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_58 = ((SemanticProperties_t862543966_StaticFields*)il2cpp_codegen_static_fields_for(SemanticProperties_t862543966_il2cpp_TypeInfo_var))->get_POSITION_0();
		NullCheck(L_57);
		AttributeAccessor_t906274905 * L_59 = Dictionary_2_get_Item_m2155416867(L_57, L_58, /*hidden argument*/Dictionary_2_get_Item_m2155416867_RuntimeMethod_var);
		NullCheck(L_59);
		NumericArray_t4287889340  L_60 = AttributeAccessor_get_AccessorContent_m1998188366(L_59, /*hidden argument*/NULL);
		Vector3U5BU5D_t137387629* L_61 = L_60.get_AsVertices_6();
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		Vector3U5BU5D_t1718750761* L_62 = SchemaExtensions_ToUnityVector3Raw_m3009470550(NULL /*static, unused*/, L_61, /*hidden argument*/NULL);
		G_B8_0 = L_62;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
	}

IL_00f4:
	{
		NullCheck(G_B8_1);
		Mesh_set_vertices_m2084450642(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_63 = G_B8_2;
		MeshPrimitive_t2910245916 * L_64 = ___primitive0;
		NullCheck(L_64);
		Dictionary_2_t4176993316 * L_65 = L_64->get_Attributes_6();
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_66 = ((SemanticProperties_t862543966_StaticFields*)il2cpp_codegen_static_fields_for(SemanticProperties_t862543966_il2cpp_TypeInfo_var))->get_NORMAL_1();
		NullCheck(L_65);
		bool L_67 = Dictionary_2_ContainsKey_m1581467031(L_65, L_66, /*hidden argument*/Dictionary_2_ContainsKey_m1581467031_RuntimeMethod_var);
		G_B9_0 = L_63;
		G_B9_1 = L_63;
		if (L_67)
		{
			G_B10_0 = L_63;
			G_B10_1 = L_63;
			goto IL_010f;
		}
	}
	{
		G_B11_0 = ((Vector3U5BU5D_t1718750761*)(NULL));
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_0129;
	}

IL_010f:
	{
		Dictionary_2_t691531204 * L_68 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_69 = ((SemanticProperties_t862543966_StaticFields*)il2cpp_codegen_static_fields_for(SemanticProperties_t862543966_il2cpp_TypeInfo_var))->get_NORMAL_1();
		NullCheck(L_68);
		AttributeAccessor_t906274905 * L_70 = Dictionary_2_get_Item_m2155416867(L_68, L_69, /*hidden argument*/Dictionary_2_get_Item_m2155416867_RuntimeMethod_var);
		NullCheck(L_70);
		NumericArray_t4287889340  L_71 = AttributeAccessor_get_AccessorContent_m1998188366(L_70, /*hidden argument*/NULL);
		Vector3U5BU5D_t137387629* L_72 = L_71.get_AsNormals_7();
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		Vector3U5BU5D_t1718750761* L_73 = SchemaExtensions_ToUnityVector3Raw_m3009470550(NULL /*static, unused*/, L_72, /*hidden argument*/NULL);
		G_B11_0 = L_73;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_0129:
	{
		NullCheck(G_B11_1);
		Mesh_set_normals_m332514528(G_B11_1, G_B11_0, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_74 = G_B11_2;
		MeshPrimitive_t2910245916 * L_75 = ___primitive0;
		NullCheck(L_75);
		Dictionary_2_t4176993316 * L_76 = L_75->get_Attributes_6();
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_77 = SemanticProperties_TexCoord_m417856718(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		NullCheck(L_76);
		bool L_78 = Dictionary_2_ContainsKey_m1581467031(L_76, L_77, /*hidden argument*/Dictionary_2_ContainsKey_m1581467031_RuntimeMethod_var);
		G_B12_0 = L_74;
		G_B12_1 = L_74;
		if (L_78)
		{
			G_B13_0 = L_74;
			G_B13_1 = L_74;
			goto IL_0145;
		}
	}
	{
		G_B14_0 = ((Vector2U5BU5D_t1457185986*)(NULL));
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_0160;
	}

IL_0145:
	{
		Dictionary_2_t691531204 * L_79 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_80 = SemanticProperties_TexCoord_m417856718(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		NullCheck(L_79);
		AttributeAccessor_t906274905 * L_81 = Dictionary_2_get_Item_m2155416867(L_79, L_80, /*hidden argument*/Dictionary_2_get_Item_m2155416867_RuntimeMethod_var);
		NullCheck(L_81);
		NumericArray_t4287889340  L_82 = AttributeAccessor_get_AccessorContent_m1998188366(L_81, /*hidden argument*/NULL);
		Vector2U5BU5D_t623575368* L_83 = L_82.get_AsTexcoords_5();
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		Vector2U5BU5D_t1457185986* L_84 = SchemaExtensions_ToUnityVector2Raw_m1290081553(NULL /*static, unused*/, L_83, /*hidden argument*/NULL);
		G_B14_0 = L_84;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_0160:
	{
		NullCheck(G_B14_1);
		Mesh_set_uv_m1258646872(G_B14_1, G_B14_0, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_85 = G_B14_2;
		MeshPrimitive_t2910245916 * L_86 = ___primitive0;
		NullCheck(L_86);
		Dictionary_2_t4176993316 * L_87 = L_86->get_Attributes_6();
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_88 = SemanticProperties_TexCoord_m417856718(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		NullCheck(L_87);
		bool L_89 = Dictionary_2_ContainsKey_m1581467031(L_87, L_88, /*hidden argument*/Dictionary_2_ContainsKey_m1581467031_RuntimeMethod_var);
		G_B15_0 = L_85;
		G_B15_1 = L_85;
		if (L_89)
		{
			G_B16_0 = L_85;
			G_B16_1 = L_85;
			goto IL_017c;
		}
	}
	{
		G_B17_0 = ((Vector2U5BU5D_t1457185986*)(NULL));
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		goto IL_0197;
	}

IL_017c:
	{
		Dictionary_2_t691531204 * L_90 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_91 = SemanticProperties_TexCoord_m417856718(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		NullCheck(L_90);
		AttributeAccessor_t906274905 * L_92 = Dictionary_2_get_Item_m2155416867(L_90, L_91, /*hidden argument*/Dictionary_2_get_Item_m2155416867_RuntimeMethod_var);
		NullCheck(L_92);
		NumericArray_t4287889340  L_93 = AttributeAccessor_get_AccessorContent_m1998188366(L_92, /*hidden argument*/NULL);
		Vector2U5BU5D_t623575368* L_94 = L_93.get_AsTexcoords_5();
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		Vector2U5BU5D_t1457185986* L_95 = SchemaExtensions_ToUnityVector2Raw_m1290081553(NULL /*static, unused*/, L_94, /*hidden argument*/NULL);
		G_B17_0 = L_95;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
	}

IL_0197:
	{
		NullCheck(G_B17_1);
		Mesh_set_uv2_m2840654016(G_B17_1, G_B17_0, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_96 = G_B17_2;
		MeshPrimitive_t2910245916 * L_97 = ___primitive0;
		NullCheck(L_97);
		Dictionary_2_t4176993316 * L_98 = L_97->get_Attributes_6();
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_99 = SemanticProperties_TexCoord_m417856718(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		NullCheck(L_98);
		bool L_100 = Dictionary_2_ContainsKey_m1581467031(L_98, L_99, /*hidden argument*/Dictionary_2_ContainsKey_m1581467031_RuntimeMethod_var);
		G_B18_0 = L_96;
		G_B18_1 = L_96;
		if (L_100)
		{
			G_B19_0 = L_96;
			G_B19_1 = L_96;
			goto IL_01b3;
		}
	}
	{
		G_B20_0 = ((Vector2U5BU5D_t1457185986*)(NULL));
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		goto IL_01ce;
	}

IL_01b3:
	{
		Dictionary_2_t691531204 * L_101 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_102 = SemanticProperties_TexCoord_m417856718(NULL /*static, unused*/, 2, /*hidden argument*/NULL);
		NullCheck(L_101);
		AttributeAccessor_t906274905 * L_103 = Dictionary_2_get_Item_m2155416867(L_101, L_102, /*hidden argument*/Dictionary_2_get_Item_m2155416867_RuntimeMethod_var);
		NullCheck(L_103);
		NumericArray_t4287889340  L_104 = AttributeAccessor_get_AccessorContent_m1998188366(L_103, /*hidden argument*/NULL);
		Vector2U5BU5D_t623575368* L_105 = L_104.get_AsTexcoords_5();
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		Vector2U5BU5D_t1457185986* L_106 = SchemaExtensions_ToUnityVector2Raw_m1290081553(NULL /*static, unused*/, L_105, /*hidden argument*/NULL);
		G_B20_0 = L_106;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
	}

IL_01ce:
	{
		NullCheck(G_B20_1);
		Mesh_set_uv3_m2941819926(G_B20_1, G_B20_0, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_107 = G_B20_2;
		MeshPrimitive_t2910245916 * L_108 = ___primitive0;
		NullCheck(L_108);
		Dictionary_2_t4176993316 * L_109 = L_108->get_Attributes_6();
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_110 = SemanticProperties_TexCoord_m417856718(NULL /*static, unused*/, 3, /*hidden argument*/NULL);
		NullCheck(L_109);
		bool L_111 = Dictionary_2_ContainsKey_m1581467031(L_109, L_110, /*hidden argument*/Dictionary_2_ContainsKey_m1581467031_RuntimeMethod_var);
		G_B21_0 = L_107;
		G_B21_1 = L_107;
		if (L_111)
		{
			G_B22_0 = L_107;
			G_B22_1 = L_107;
			goto IL_01ea;
		}
	}
	{
		G_B23_0 = ((Vector2U5BU5D_t1457185986*)(NULL));
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		goto IL_0205;
	}

IL_01ea:
	{
		Dictionary_2_t691531204 * L_112 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_113 = SemanticProperties_TexCoord_m417856718(NULL /*static, unused*/, 3, /*hidden argument*/NULL);
		NullCheck(L_112);
		AttributeAccessor_t906274905 * L_114 = Dictionary_2_get_Item_m2155416867(L_112, L_113, /*hidden argument*/Dictionary_2_get_Item_m2155416867_RuntimeMethod_var);
		NullCheck(L_114);
		NumericArray_t4287889340  L_115 = AttributeAccessor_get_AccessorContent_m1998188366(L_114, /*hidden argument*/NULL);
		Vector2U5BU5D_t623575368* L_116 = L_115.get_AsTexcoords_5();
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		Vector2U5BU5D_t1457185986* L_117 = SchemaExtensions_ToUnityVector2Raw_m1290081553(NULL /*static, unused*/, L_116, /*hidden argument*/NULL);
		G_B23_0 = L_117;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
	}

IL_0205:
	{
		NullCheck(G_B23_1);
		Mesh_set_uv4_m2767199985(G_B23_1, G_B23_0, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_118 = G_B23_2;
		MeshPrimitive_t2910245916 * L_119 = ___primitive0;
		NullCheck(L_119);
		Dictionary_2_t4176993316 * L_120 = L_119->get_Attributes_6();
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_121 = SemanticProperties_Color_m3715285094(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		NullCheck(L_120);
		bool L_122 = Dictionary_2_ContainsKey_m1581467031(L_120, L_121, /*hidden argument*/Dictionary_2_ContainsKey_m1581467031_RuntimeMethod_var);
		G_B24_0 = L_118;
		G_B24_1 = L_118;
		if (L_122)
		{
			G_B25_0 = L_118;
			G_B25_1 = L_118;
			goto IL_0221;
		}
	}
	{
		G_B26_0 = ((ColorU5BU5D_t941916413*)(NULL));
		G_B26_1 = G_B24_0;
		G_B26_2 = G_B24_1;
		goto IL_023c;
	}

IL_0221:
	{
		Dictionary_2_t691531204 * L_123 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_124 = SemanticProperties_Color_m3715285094(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		NullCheck(L_123);
		AttributeAccessor_t906274905 * L_125 = Dictionary_2_get_Item_m2155416867(L_123, L_124, /*hidden argument*/Dictionary_2_get_Item_m2155416867_RuntimeMethod_var);
		NullCheck(L_125);
		NumericArray_t4287889340  L_126 = AttributeAccessor_get_AccessorContent_m1998188366(L_125, /*hidden argument*/NULL);
		ColorU5BU5D_t1735271552* L_127 = L_126.get_AsColors_4();
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		ColorU5BU5D_t941916413* L_128 = SchemaExtensions_ToUnityColorRaw_m4073729368(NULL /*static, unused*/, L_127, /*hidden argument*/NULL);
		G_B26_0 = L_128;
		G_B26_1 = G_B25_0;
		G_B26_2 = G_B25_1;
	}

IL_023c:
	{
		NullCheck(G_B26_1);
		Mesh_set_colors_m2218481242(G_B26_1, G_B26_0, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_129 = G_B26_2;
		MeshPrimitive_t2910245916 * L_130 = ___primitive0;
		NullCheck(L_130);
		AccessorId_t96769721 * L_131 = L_130->get_Indices_7();
		G_B27_0 = L_129;
		G_B27_1 = L_129;
		if (L_131)
		{
			G_B28_0 = L_129;
			G_B28_1 = L_129;
			goto IL_0253;
		}
	}
	{
		int32_t L_132 = V_4;
		Int32U5BU5D_t385246372* L_133 = MeshPrimitive_GenerateTriangles_m3082211372(NULL /*static, unused*/, L_132, /*hidden argument*/NULL);
		G_B29_0 = L_133;
		G_B29_1 = G_B27_0;
		G_B29_2 = G_B27_1;
		goto IL_026d;
	}

IL_0253:
	{
		Dictionary_2_t691531204 * L_134 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_135 = ((SemanticProperties_t862543966_StaticFields*)il2cpp_codegen_static_fields_for(SemanticProperties_t862543966_il2cpp_TypeInfo_var))->get_INDICES_5();
		NullCheck(L_134);
		AttributeAccessor_t906274905 * L_136 = Dictionary_2_get_Item_m2155416867(L_134, L_135, /*hidden argument*/Dictionary_2_get_Item_m2155416867_RuntimeMethod_var);
		NullCheck(L_136);
		NumericArray_t4287889340  L_137 = AttributeAccessor_get_AccessorContent_m1998188366(L_136, /*hidden argument*/NULL);
		UInt32U5BU5D_t2770800703* L_138 = L_137.get_AsTriangles_9();
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		Int32U5BU5D_t385246372* L_139 = SchemaExtensions_ToIntArrayRaw_m716946908(NULL /*static, unused*/, L_138, /*hidden argument*/NULL);
		G_B29_0 = L_139;
		G_B29_1 = G_B28_0;
		G_B29_2 = G_B28_1;
	}

IL_026d:
	{
		NullCheck(G_B29_1);
		Mesh_set_triangles_m255556250(G_B29_1, G_B29_0, /*hidden argument*/NULL);
		Mesh_t3648964284 * L_140 = G_B29_2;
		MeshPrimitive_t2910245916 * L_141 = ___primitive0;
		NullCheck(L_141);
		Dictionary_2_t4176993316 * L_142 = L_141->get_Attributes_6();
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_143 = ((SemanticProperties_t862543966_StaticFields*)il2cpp_codegen_static_fields_for(SemanticProperties_t862543966_il2cpp_TypeInfo_var))->get_TANGENT_4();
		NullCheck(L_142);
		bool L_144 = Dictionary_2_ContainsKey_m1581467031(L_142, L_143, /*hidden argument*/Dictionary_2_ContainsKey_m1581467031_RuntimeMethod_var);
		G_B30_0 = L_140;
		G_B30_1 = L_140;
		if (L_144)
		{
			G_B31_0 = L_140;
			G_B31_1 = L_140;
			goto IL_0288;
		}
	}
	{
		G_B32_0 = ((Vector4U5BU5D_t934056436*)(NULL));
		G_B32_1 = G_B30_0;
		G_B32_2 = G_B30_1;
		goto IL_02a2;
	}

IL_0288:
	{
		Dictionary_2_t691531204 * L_145 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_146 = ((SemanticProperties_t862543966_StaticFields*)il2cpp_codegen_static_fields_for(SemanticProperties_t862543966_il2cpp_TypeInfo_var))->get_TANGENT_4();
		NullCheck(L_145);
		AttributeAccessor_t906274905 * L_147 = Dictionary_2_get_Item_m2155416867(L_145, L_146, /*hidden argument*/Dictionary_2_get_Item_m2155416867_RuntimeMethod_var);
		NullCheck(L_147);
		NumericArray_t4287889340  L_148 = AttributeAccessor_get_AccessorContent_m1998188366(L_147, /*hidden argument*/NULL);
		Vector4U5BU5D_t1595950846* L_149 = L_148.get_AsTangents_8();
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		Vector4U5BU5D_t934056436* L_150 = SchemaExtensions_ToUnityVector4Raw_m779192436(NULL /*static, unused*/, L_149, /*hidden argument*/NULL);
		G_B32_0 = L_150;
		G_B32_1 = G_B31_0;
		G_B32_2 = G_B31_1;
	}

IL_02a2:
	{
		NullCheck(G_B32_1);
		Mesh_set_tangents_m1592250690(G_B32_1, G_B32_0, /*hidden argument*/NULL);
		V_5 = G_B32_2;
		// _assetCache.MeshCache[meshID][primitiveIndex].LoadedMesh = mesh;
		AssetCache_t783611398 * L_151 = __this->get__assetCache_9();
		NullCheck(L_151);
		List_1_t695246165 * L_152 = AssetCache_get_MeshCache_m1480961495(L_151, /*hidden argument*/NULL);
		int32_t L_153 = ___meshID1;
		NullCheck(L_152);
		MeshCacheDataU5BU5D_t3518138719* L_154 = List_1_get_Item_m2536950298(L_152, L_153, /*hidden argument*/List_1_get_Item_m2536950298_RuntimeMethod_var);
		int32_t L_155 = ___primitiveIndex2;
		NullCheck(L_154);
		int32_t L_156 = L_155;
		MeshCacheData_t1944180602 * L_157 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		Mesh_t3648964284 * L_158 = V_5;
		NullCheck(L_157);
		MeshCacheData_set_LoadedMesh_m2762216928(L_157, L_158, /*hidden argument*/NULL);
	}

IL_02c3:
	{
		// meshFilter.sharedMesh = _assetCache.MeshCache[meshID][primitiveIndex].LoadedMesh;
		MeshFilter_t3523625662 * L_159 = V_1;
		AssetCache_t783611398 * L_160 = __this->get__assetCache_9();
		NullCheck(L_160);
		List_1_t695246165 * L_161 = AssetCache_get_MeshCache_m1480961495(L_160, /*hidden argument*/NULL);
		int32_t L_162 = ___meshID1;
		NullCheck(L_161);
		MeshCacheDataU5BU5D_t3518138719* L_163 = List_1_get_Item_m2536950298(L_161, L_162, /*hidden argument*/List_1_get_Item_m2536950298_RuntimeMethod_var);
		int32_t L_164 = ___primitiveIndex2;
		NullCheck(L_163);
		int32_t L_165 = L_164;
		MeshCacheData_t1944180602 * L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		NullCheck(L_166);
		Mesh_t3648964284 * L_167 = MeshCacheData_get_LoadedMesh_m250630999(L_166, /*hidden argument*/NULL);
		NullCheck(L_159);
		MeshFilter_set_sharedMesh_m2173122548(L_159, L_167, /*hidden argument*/NULL);
		// var materialWrapper = CreateMaterial(
		//     primitive.Material != null ? primitive.Material.Value : DefaultMaterial,
		//     primitive.Material != null ? primitive.Material.Id : -1
		// );
		MeshPrimitive_t2910245916 * L_168 = ___primitive0;
		NullCheck(L_168);
		MaterialId_t1334539377 * L_169 = L_168->get_Material_8();
		G_B34_0 = __this;
		if (L_169)
		{
			G_B35_0 = __this;
			goto IL_02f2;
		}
	}
	{
		Material_t2790518843 * L_170 = __this->get_DefaultMaterial_4();
		G_B36_0 = L_170;
		G_B36_1 = G_B34_0;
		goto IL_02fd;
	}

IL_02f2:
	{
		MeshPrimitive_t2910245916 * L_171 = ___primitive0;
		NullCheck(L_171);
		MaterialId_t1334539377 * L_172 = L_171->get_Material_8();
		NullCheck(L_172);
		Material_t2790518843 * L_173 = VirtFuncInvoker0< Material_t2790518843 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.Material>::get_Value() */, L_172);
		G_B36_0 = L_173;
		G_B36_1 = G_B35_0;
	}

IL_02fd:
	{
		MeshPrimitive_t2910245916 * L_174 = ___primitive0;
		NullCheck(L_174);
		MaterialId_t1334539377 * L_175 = L_174->get_Material_8();
		G_B37_0 = G_B36_0;
		G_B37_1 = G_B36_1;
		if (L_175)
		{
			G_B38_0 = G_B36_0;
			G_B38_1 = G_B36_1;
			goto IL_0308;
		}
	}
	{
		G_B39_0 = (-1);
		G_B39_1 = G_B37_0;
		G_B39_2 = G_B37_1;
		goto IL_0313;
	}

IL_0308:
	{
		MeshPrimitive_t2910245916 * L_176 = ___primitive0;
		NullCheck(L_176);
		MaterialId_t1334539377 * L_177 = L_176->get_Material_8();
		NullCheck(L_177);
		int32_t L_178 = ((GLTFId_1_t2990850703 *)L_177)->get_Id_0();
		G_B39_0 = L_178;
		G_B39_1 = G_B38_0;
		G_B39_2 = G_B38_1;
	}

IL_0313:
	{
		NullCheck(G_B39_2);
		MaterialCacheData_t2754836532 * L_179 = VirtFuncInvoker2< MaterialCacheData_t2754836532 *, Material_t2790518843 *, int32_t >::Invoke(11 /* UnityGLTF.Cache.MaterialCacheData UnityGLTF.GLTFSceneImporter::CreateMaterial(GLTF.Schema.Material,System.Int32) */, G_B39_2, G_B39_1, G_B39_0);
		V_2 = L_179;
		// var meshRenderer = primitiveObj.AddComponent<MeshRenderer>();
		GameObject_t1113636619 * L_180 = V_0;
		NullCheck(L_180);
		MeshRenderer_t587009260 * L_181 = GameObject_AddComponent_TisMeshRenderer_t587009260_m2704270113(L_180, /*hidden argument*/GameObject_AddComponent_TisMeshRenderer_t587009260_m2704270113_RuntimeMethod_var);
		// meshRenderer.material = materialWrapper.GetContents(primitive.Attributes.ContainsKey(SemanticProperties.Color(0)));
		MaterialCacheData_t2754836532 * L_182 = V_2;
		MeshPrimitive_t2910245916 * L_183 = ___primitive0;
		NullCheck(L_183);
		Dictionary_2_t4176993316 * L_184 = L_183->get_Attributes_6();
		IL2CPP_RUNTIME_CLASS_INIT(SemanticProperties_t862543966_il2cpp_TypeInfo_var);
		String_t* L_185 = SemanticProperties_Color_m3715285094(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		NullCheck(L_184);
		bool L_186 = Dictionary_2_ContainsKey_m1581467031(L_184, L_185, /*hidden argument*/Dictionary_2_ContainsKey_m1581467031_RuntimeMethod_var);
		NullCheck(L_182);
		Material_t340375123 * L_187 = MaterialCacheData_GetContents_m3411919865(L_182, L_186, /*hidden argument*/NULL);
		NullCheck(L_181);
		Renderer_set_material_m1157964140(L_181, L_187, /*hidden argument*/NULL);
		// if (_addColliders)
		bool L_188 = __this->get__addColliders_11();
		if (!L_188)
		{
			goto IL_0354;
		}
	}
	{
		// var meshCollider = primitiveObj.AddComponent<MeshCollider>();
		GameObject_t1113636619 * L_189 = V_0;
		NullCheck(L_189);
		MeshCollider_t903564387 * L_190 = GameObject_AddComponent_TisMeshCollider_t903564387_m1821887173(L_189, /*hidden argument*/GameObject_AddComponent_TisMeshCollider_t903564387_m1821887173_RuntimeMethod_var);
		// meshCollider.sharedMesh = meshFilter.mesh;
		MeshFilter_t3523625662 * L_191 = V_1;
		NullCheck(L_191);
		Mesh_t3648964284 * L_192 = MeshFilter_get_mesh_m3346355278(L_191, /*hidden argument*/NULL);
		NullCheck(L_190);
		MeshCollider_set_sharedMesh_m1986498669(L_190, L_192, /*hidden argument*/NULL);
	}

IL_0354:
	{
		// return primitiveObj;
		GameObject_t1113636619 * L_193 = V_0;
		return L_193;
	}
}
// UnityGLTF.Cache.MaterialCacheData UnityGLTF.GLTFSceneImporter::CreateMaterial(GLTF.Schema.Material,System.Int32)
extern "C" IL2CPP_METHOD_ATTR MaterialCacheData_t2754836532 * GLTFSceneImporter_CreateMaterial_m2608357372 (GLTFSceneImporter_t274320441 * __this, Material_t2790518843 * ___def0, int32_t ___materialIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter_CreateMaterial_m2608357372_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MaterialCacheData_t2754836532 * V_0 = NULL;
	Shader_t4151988712 * V_1 = NULL;
	Material_t340375123 * V_2 = NULL;
	PbrMetallicRoughness_t313043948 * V_3 = NULL;
	Texture_t812196831 * V_4 = NULL;
	Texture_t812196831 * V_5 = NULL;
	KHR_materials_pbrSpecularGlossinessExtension_t1217762009 * V_6 = NULL;
	Texture_t812196831 * V_7 = NULL;
	Texture_t812196831 * V_8 = NULL;
	Texture_t812196831 * V_9 = NULL;
	Texture_t812196831 * V_10 = NULL;
	TextureId_t2497679170 * V_11 = NULL;
	Texture_t812196831 * V_12 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		// MaterialCacheData materialWrapper = null;
		V_0 = (MaterialCacheData_t2754836532 *)NULL;
		// if (materialIndex < 0 || _assetCache.MaterialCache[materialIndex] == null)
		int32_t L_0 = ___materialIndex1;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		AssetCache_t783611398 * L_1 = __this->get__assetCache_9();
		NullCheck(L_1);
		MaterialCacheDataU5BU5D_t484490365* L_2 = AssetCache_get_MaterialCache_m160752798(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___materialIndex1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		MaterialCacheData_t2754836532 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if (L_5)
		{
			goto IL_069d;
		}
	}

IL_0018:
	{
	}

IL_0019:
	try
	{ // begin try (depth: 1)
		{
			// if (_root.ExtensionsUsed != null && _root.ExtensionsUsed.Contains("KHR_materials_pbrSpecularGlossiness"))
			GLTFRoot_t676886847 * L_6 = __this->get__root_8();
			NullCheck(L_6);
			List_1_t3319525431 * L_7 = L_6->get_ExtensionsUsed_6();
			if (!L_7)
			{
				goto IL_004c;
			}
		}

IL_0026:
		{
			GLTFRoot_t676886847 * L_8 = __this->get__root_8();
			NullCheck(L_8);
			List_1_t3319525431 * L_9 = L_8->get_ExtensionsUsed_6();
			NullCheck(L_9);
			bool L_10 = List_1_Contains_m195709148(L_9, _stringLiteral3452630243, /*hidden argument*/List_1_Contains_m195709148_RuntimeMethod_var);
			if (!L_10)
			{
				goto IL_004c;
			}
		}

IL_003d:
		{
			// shader = _shaderCache[MaterialType.KHR_materials_pbrSpecularGlossiness];
			Dictionary_2_t2973298224 * L_11 = __this->get__shaderCache_2();
			NullCheck(L_11);
			Shader_t4151988712 * L_12 = Dictionary_2_get_Item_m2671063389(L_11, 1, /*hidden argument*/Dictionary_2_get_Item_m2671063389_RuntimeMethod_var);
			V_1 = L_12;
			goto IL_00ab;
		}

IL_004c:
		{
			// else if (def.PbrMetallicRoughness != null)
			Material_t2790518843 * L_13 = ___def0;
			NullCheck(L_13);
			PbrMetallicRoughness_t313043948 * L_14 = L_13->get_PbrMetallicRoughness_7();
			if (!L_14)
			{
				goto IL_0063;
			}
		}

IL_0054:
		{
			// shader = _shaderCache[MaterialType.PbrMetallicRoughness];
			Dictionary_2_t2973298224 * L_15 = __this->get__shaderCache_2();
			NullCheck(L_15);
			Shader_t4151988712 * L_16 = Dictionary_2_get_Item_m2671063389(L_15, 0, /*hidden argument*/Dictionary_2_get_Item_m2671063389_RuntimeMethod_var);
			V_1 = L_16;
			goto IL_00ab;
		}

IL_0063:
		{
			// else if (_root.ExtensionsUsed != null && _root.ExtensionsUsed.Contains("KHR_materials_common")
			//          && def.CommonConstant != null)
			GLTFRoot_t676886847 * L_17 = __this->get__root_8();
			NullCheck(L_17);
			List_1_t3319525431 * L_18 = L_17->get_ExtensionsUsed_6();
			if (!L_18)
			{
				goto IL_009e;
			}
		}

IL_0070:
		{
			GLTFRoot_t676886847 * L_19 = __this->get__root_8();
			NullCheck(L_19);
			List_1_t3319525431 * L_20 = L_19->get_ExtensionsUsed_6();
			NullCheck(L_20);
			bool L_21 = List_1_Contains_m195709148(L_20, _stringLiteral150320106, /*hidden argument*/List_1_Contains_m195709148_RuntimeMethod_var);
			if (!L_21)
			{
				goto IL_009e;
			}
		}

IL_0087:
		{
			Material_t2790518843 * L_22 = ___def0;
			NullCheck(L_22);
			MaterialCommonConstant_t2574134879 * L_23 = L_22->get_CommonConstant_8();
			if (!L_23)
			{
				goto IL_009e;
			}
		}

IL_008f:
		{
			// shader = _shaderCache[MaterialType.CommonConstant];
			Dictionary_2_t2973298224 * L_24 = __this->get__shaderCache_2();
			NullCheck(L_24);
			Shader_t4151988712 * L_25 = Dictionary_2_get_Item_m2671063389(L_24, 2, /*hidden argument*/Dictionary_2_get_Item_m2671063389_RuntimeMethod_var);
			V_1 = L_25;
			goto IL_00ab;
		}

IL_009e:
		{
			// shader = _shaderCache[MaterialType.PbrMetallicRoughness];
			Dictionary_2_t2973298224 * L_26 = __this->get__shaderCache_2();
			NullCheck(L_26);
			Shader_t4151988712 * L_27 = Dictionary_2_get_Item_m2671063389(L_26, 0, /*hidden argument*/Dictionary_2_get_Item_m2671063389_RuntimeMethod_var);
			V_1 = L_27;
		}

IL_00ab:
		{
			// }
			goto IL_00d4;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00ad;
		throw e;
	}

CATCH_00ad:
	{ // begin catch(System.Collections.Generic.KeyNotFoundException)
		// catch (KeyNotFoundException)
		// Debug.LogWarningFormat("No shader supplied for type of glTF material {0}, using Standard fallback", def.Name);
		ObjectU5BU5D_t2843939325* L_28 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t2843939325* L_29 = L_28;
		Material_t2790518843 * L_30 = ___def0;
		NullCheck(L_30);
		String_t* L_31 = ((GLTFChildOfRootProperty_t1666645821 *)L_30)->get_Name_6();
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_31);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_31);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m2535776735(NULL /*static, unused*/, _stringLiteral1366107322, L_29, /*hidden argument*/NULL);
		// shader = Shader.Find("Standard");
		Shader_t4151988712 * L_32 = Shader_Find_m2092206247(NULL /*static, unused*/, _stringLiteral3579607444, /*hidden argument*/NULL);
		V_1 = L_32;
		// }
		goto IL_00d4;
	} // end catch (depth: 1)

IL_00d4:
	{
		// shader.maximumLOD = MaximumLod;
		Shader_t4151988712 * L_33 = V_1;
		int32_t L_34 = __this->get_MaximumLod_3();
		NullCheck(L_33);
		Shader_set_maximumLOD_m3495846676(L_33, L_34, /*hidden argument*/NULL);
		// var material = new UnityEngine.Material(shader);
		Shader_t4151988712 * L_35 = V_1;
		Material_t340375123 * L_36 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m1662457592(L_36, L_35, /*hidden argument*/NULL);
		V_2 = L_36;
		// if (def.AlphaMode == AlphaMode.MASK)
		Material_t2790518843 * L_37 = ___def0;
		NullCheck(L_37);
		int32_t L_38 = L_37->get_AlphaMode_13();
		if ((!(((uint32_t)L_38) == ((uint32_t)1))))
		{
			goto IL_0167;
		}
	}
	{
		// material.SetOverrideTag("RenderType", "TransparentCutout");
		Material_t340375123 * L_39 = V_2;
		NullCheck(L_39);
		Material_SetOverrideTag_m806530364(L_39, _stringLiteral3626444962, _stringLiteral2906997769, /*hidden argument*/NULL);
		// material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		Material_t340375123 * L_40 = V_2;
		NullCheck(L_40);
		Material_SetInt_m1783799378(L_40, _stringLiteral731044324, 1, /*hidden argument*/NULL);
		// material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
		Material_t340375123 * L_41 = V_2;
		NullCheck(L_41);
		Material_SetInt_m1783799378(L_41, _stringLiteral1668731369, 0, /*hidden argument*/NULL);
		// material.SetInt("_ZWrite", 1);
		Material_t340375123 * L_42 = V_2;
		NullCheck(L_42);
		Material_SetInt_m1783799378(L_42, _stringLiteral1810507830, 1, /*hidden argument*/NULL);
		// material.EnableKeyword("_ALPHATEST_ON");
		Material_t340375123 * L_43 = V_2;
		NullCheck(L_43);
		Material_EnableKeyword_m329692301(L_43, _stringLiteral2191403227, /*hidden argument*/NULL);
		// material.DisableKeyword("_ALPHABLEND_ON");
		Material_t340375123 * L_44 = V_2;
		NullCheck(L_44);
		Material_DisableKeyword_m1245091008(L_44, _stringLiteral3949742573, /*hidden argument*/NULL);
		// material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
		Material_t340375123 * L_45 = V_2;
		NullCheck(L_45);
		Material_DisableKeyword_m1245091008(L_45, _stringLiteral2875383692, /*hidden argument*/NULL);
		// material.renderQueue = (int)UnityEngine.Rendering.RenderQueue.AlphaTest;
		Material_t340375123 * L_46 = V_2;
		NullCheck(L_46);
		Material_set_renderQueue_m2897975967(L_46, ((int32_t)2450), /*hidden argument*/NULL);
		// material.SetFloat("_Cutoff", (float)def.AlphaCutoff);
		Material_t340375123 * L_47 = V_2;
		Material_t2790518843 * L_48 = ___def0;
		NullCheck(L_48);
		double L_49 = L_48->get_AlphaCutoff_14();
		NullCheck(L_47);
		Material_SetFloat_m3226510453(L_47, _stringLiteral3327625703, (((float)((float)L_49))), /*hidden argument*/NULL);
		// }
		goto IL_022f;
	}

IL_0167:
	{
		// else if (def.AlphaMode == AlphaMode.BLEND)
		Material_t2790518843 * L_50 = ___def0;
		NullCheck(L_50);
		int32_t L_51 = L_50->get_AlphaMode_13();
		if ((!(((uint32_t)L_51) == ((uint32_t)2))))
		{
			goto IL_01d3;
		}
	}
	{
		// material.SetOverrideTag("RenderType", "Transparent");
		Material_t340375123 * L_52 = V_2;
		NullCheck(L_52);
		Material_SetOverrideTag_m806530364(L_52, _stringLiteral3626444962, _stringLiteral134923747, /*hidden argument*/NULL);
		// material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
		Material_t340375123 * L_53 = V_2;
		NullCheck(L_53);
		Material_SetInt_m1783799378(L_53, _stringLiteral731044324, 5, /*hidden argument*/NULL);
		// material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
		Material_t340375123 * L_54 = V_2;
		NullCheck(L_54);
		Material_SetInt_m1783799378(L_54, _stringLiteral1668731369, ((int32_t)10), /*hidden argument*/NULL);
		// material.SetInt("_ZWrite", 0);
		Material_t340375123 * L_55 = V_2;
		NullCheck(L_55);
		Material_SetInt_m1783799378(L_55, _stringLiteral1810507830, 0, /*hidden argument*/NULL);
		// material.DisableKeyword("_ALPHATEST_ON");
		Material_t340375123 * L_56 = V_2;
		NullCheck(L_56);
		Material_DisableKeyword_m1245091008(L_56, _stringLiteral2191403227, /*hidden argument*/NULL);
		// material.EnableKeyword("_ALPHABLEND_ON");
		Material_t340375123 * L_57 = V_2;
		NullCheck(L_57);
		Material_EnableKeyword_m329692301(L_57, _stringLiteral3949742573, /*hidden argument*/NULL);
		// material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
		Material_t340375123 * L_58 = V_2;
		NullCheck(L_58);
		Material_DisableKeyword_m1245091008(L_58, _stringLiteral2875383692, /*hidden argument*/NULL);
		// material.renderQueue = (int)UnityEngine.Rendering.RenderQueue.Transparent;
		Material_t340375123 * L_59 = V_2;
		NullCheck(L_59);
		Material_set_renderQueue_m2897975967(L_59, ((int32_t)3000), /*hidden argument*/NULL);
		// }
		goto IL_022f;
	}

IL_01d3:
	{
		// material.SetOverrideTag("RenderType", "Opaque");
		Material_t340375123 * L_60 = V_2;
		NullCheck(L_60);
		Material_SetOverrideTag_m806530364(L_60, _stringLiteral3626444962, _stringLiteral757312457, /*hidden argument*/NULL);
		// material.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.One);
		Material_t340375123 * L_61 = V_2;
		NullCheck(L_61);
		Material_SetInt_m1783799378(L_61, _stringLiteral731044324, 1, /*hidden argument*/NULL);
		// material.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.Zero);
		Material_t340375123 * L_62 = V_2;
		NullCheck(L_62);
		Material_SetInt_m1783799378(L_62, _stringLiteral1668731369, 0, /*hidden argument*/NULL);
		// material.SetInt("_ZWrite", 1);
		Material_t340375123 * L_63 = V_2;
		NullCheck(L_63);
		Material_SetInt_m1783799378(L_63, _stringLiteral1810507830, 1, /*hidden argument*/NULL);
		// material.DisableKeyword("_ALPHATEST_ON");
		Material_t340375123 * L_64 = V_2;
		NullCheck(L_64);
		Material_DisableKeyword_m1245091008(L_64, _stringLiteral2191403227, /*hidden argument*/NULL);
		// material.DisableKeyword("_ALPHABLEND_ON");
		Material_t340375123 * L_65 = V_2;
		NullCheck(L_65);
		Material_DisableKeyword_m1245091008(L_65, _stringLiteral3949742573, /*hidden argument*/NULL);
		// material.DisableKeyword("_ALPHAPREMULTIPLY_ON");
		Material_t340375123 * L_66 = V_2;
		NullCheck(L_66);
		Material_DisableKeyword_m1245091008(L_66, _stringLiteral2875383692, /*hidden argument*/NULL);
		// material.renderQueue = -1;
		Material_t340375123 * L_67 = V_2;
		NullCheck(L_67);
		Material_set_renderQueue_m2897975967(L_67, (-1), /*hidden argument*/NULL);
	}

IL_022f:
	{
		// if (def.DoubleSided)
		Material_t2790518843 * L_68 = ___def0;
		NullCheck(L_68);
		bool L_69 = L_68->get_DoubleSided_15();
		if (!L_69)
		{
			goto IL_0245;
		}
	}
	{
		// material.SetInt("_Cull", (int)CullMode.Off);
		Material_t340375123 * L_70 = V_2;
		NullCheck(L_70);
		Material_SetInt_m1783799378(L_70, _stringLiteral2445489756, 0, /*hidden argument*/NULL);
		// }
		goto IL_0251;
	}

IL_0245:
	{
		// material.SetInt("_Cull", (int)CullMode.Back);
		Material_t340375123 * L_71 = V_2;
		NullCheck(L_71);
		Material_SetInt_m1783799378(L_71, _stringLiteral2445489756, 2, /*hidden argument*/NULL);
	}

IL_0251:
	{
		// if (def.PbrMetallicRoughness != null)
		Material_t2790518843 * L_72 = ___def0;
		NullCheck(L_72);
		PbrMetallicRoughness_t313043948 * L_73 = L_72->get_PbrMetallicRoughness_7();
		if (!L_73)
		{
			goto IL_031b;
		}
	}
	{
		// var pbr = def.PbrMetallicRoughness;
		Material_t2790518843 * L_74 = ___def0;
		NullCheck(L_74);
		PbrMetallicRoughness_t313043948 * L_75 = L_74->get_PbrMetallicRoughness_7();
		V_3 = L_75;
		// material.SetColor("_Color", pbr.BaseColorFactor.ToUnityColorRaw());
		Material_t340375123 * L_76 = V_2;
		PbrMetallicRoughness_t313043948 * L_77 = V_3;
		NullCheck(L_77);
		Color_t1637600301  L_78 = L_77->get_BaseColorFactor_6();
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		Color_t2555686324  L_79 = SchemaExtensions_ToUnityColorRaw_m3701965783(NULL /*static, unused*/, L_78, /*hidden argument*/NULL);
		NullCheck(L_76);
		Material_SetColor_m2020215303(L_76, _stringLiteral3957048425, L_79, /*hidden argument*/NULL);
		// if (pbr.BaseColorTexture != null)
		PbrMetallicRoughness_t313043948 * L_80 = V_3;
		NullCheck(L_80);
		TextureInfo_t616718776 * L_81 = L_80->get_BaseColorTexture_7();
		if (!L_81)
		{
			goto IL_02b8;
		}
	}
	{
		// var textureDef = pbr.BaseColorTexture.Index.Value;
		PbrMetallicRoughness_t313043948 * L_82 = V_3;
		NullCheck(L_82);
		TextureInfo_t616718776 * L_83 = L_82->get_BaseColorTexture_7();
		NullCheck(L_83);
		TextureId_t2497679170 * L_84 = L_83->get_Index_6();
		NullCheck(L_84);
		Texture_t812196831 * L_85 = VirtFuncInvoker0< Texture_t812196831 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.Texture>::get_Value() */, L_84);
		V_4 = L_85;
		// material.SetTexture("_MainTex", CreateTexture(textureDef));
		Material_t340375123 * L_86 = V_2;
		Texture_t812196831 * L_87 = V_4;
		Texture_t3661962703 * L_88 = VirtFuncInvoker1< Texture_t3661962703 *, Texture_t812196831 * >::Invoke(12 /* UnityEngine.Texture UnityGLTF.GLTFSceneImporter::CreateTexture(GLTF.Schema.Texture) */, __this, L_87);
		NullCheck(L_86);
		Material_SetTexture_m1829349465(L_86, _stringLiteral3184621405, L_88, /*hidden argument*/NULL);
		// ApplyTextureTransform(pbr.BaseColorTexture, material, "_MainTex");
		PbrMetallicRoughness_t313043948 * L_89 = V_3;
		NullCheck(L_89);
		TextureInfo_t616718776 * L_90 = L_89->get_BaseColorTexture_7();
		Material_t340375123 * L_91 = V_2;
		VirtActionInvoker3< TextureInfo_t616718776 *, Material_t340375123 *, String_t* >::Invoke(13 /* System.Void UnityGLTF.GLTFSceneImporter::ApplyTextureTransform(GLTF.Schema.TextureInfo,UnityEngine.Material,System.String) */, __this, L_90, L_91, _stringLiteral3184621405);
	}

IL_02b8:
	{
		// material.SetFloat("_Metallic", (float)pbr.MetallicFactor);
		Material_t340375123 * L_92 = V_2;
		PbrMetallicRoughness_t313043948 * L_93 = V_3;
		NullCheck(L_93);
		double L_94 = L_93->get_MetallicFactor_8();
		NullCheck(L_92);
		Material_SetFloat_m3226510453(L_92, _stringLiteral3258293634, (((float)((float)L_94))), /*hidden argument*/NULL);
		// if (pbr.MetallicRoughnessTexture != null)
		PbrMetallicRoughness_t313043948 * L_95 = V_3;
		NullCheck(L_95);
		TextureInfo_t616718776 * L_96 = L_95->get_MetallicRoughnessTexture_10();
		if (!L_96)
		{
			goto IL_0309;
		}
	}
	{
		// var texture = pbr.MetallicRoughnessTexture.Index.Value;
		PbrMetallicRoughness_t313043948 * L_97 = V_3;
		NullCheck(L_97);
		TextureInfo_t616718776 * L_98 = L_97->get_MetallicRoughnessTexture_10();
		NullCheck(L_98);
		TextureId_t2497679170 * L_99 = L_98->get_Index_6();
		NullCheck(L_99);
		Texture_t812196831 * L_100 = VirtFuncInvoker0< Texture_t812196831 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.Texture>::get_Value() */, L_99);
		V_5 = L_100;
		// material.SetTexture("_MetallicRoughnessMap", CreateTexture(texture));
		Material_t340375123 * L_101 = V_2;
		Texture_t812196831 * L_102 = V_5;
		Texture_t3661962703 * L_103 = VirtFuncInvoker1< Texture_t3661962703 *, Texture_t812196831 * >::Invoke(12 /* UnityEngine.Texture UnityGLTF.GLTFSceneImporter::CreateTexture(GLTF.Schema.Texture) */, __this, L_102);
		NullCheck(L_101);
		Material_SetTexture_m1829349465(L_101, _stringLiteral173857951, L_103, /*hidden argument*/NULL);
		// ApplyTextureTransform(pbr.MetallicRoughnessTexture, material, "_MetallicRoughnessMap");
		PbrMetallicRoughness_t313043948 * L_104 = V_3;
		NullCheck(L_104);
		TextureInfo_t616718776 * L_105 = L_104->get_MetallicRoughnessTexture_10();
		Material_t340375123 * L_106 = V_2;
		VirtActionInvoker3< TextureInfo_t616718776 *, Material_t340375123 *, String_t* >::Invoke(13 /* System.Void UnityGLTF.GLTFSceneImporter::ApplyTextureTransform(GLTF.Schema.TextureInfo,UnityEngine.Material,System.String) */, __this, L_105, L_106, _stringLiteral173857951);
	}

IL_0309:
	{
		// material.SetFloat("_Roughness", (float)pbr.RoughnessFactor);
		Material_t340375123 * L_107 = V_2;
		PbrMetallicRoughness_t313043948 * L_108 = V_3;
		NullCheck(L_108);
		double L_109 = L_108->get_RoughnessFactor_9();
		NullCheck(L_107);
		Material_SetFloat_m3226510453(L_107, _stringLiteral2196942292, (((float)((float)L_109))), /*hidden argument*/NULL);
	}

IL_031b:
	{
		// if (def.Extensions != null && def.Extensions.ContainsKey(KHR_materials_pbrSpecularGlossinessExtensionFactory.EXTENSION_NAME))
		Material_t2790518843 * L_110 = ___def0;
		NullCheck(L_110);
		Dictionary_2_t395211613 * L_111 = ((GLTFProperty_t1589224293 *)L_110)->get_Extensions_4();
		if (!L_111)
		{
			goto IL_042b;
		}
	}
	{
		Material_t2790518843 * L_112 = ___def0;
		NullCheck(L_112);
		Dictionary_2_t395211613 * L_113 = ((GLTFProperty_t1589224293 *)L_112)->get_Extensions_4();
		NullCheck(L_113);
		bool L_114 = Dictionary_2_ContainsKey_m2046315356(L_113, _stringLiteral3452630243, /*hidden argument*/Dictionary_2_ContainsKey_m2046315356_RuntimeMethod_var);
		if (!L_114)
		{
			goto IL_042b;
		}
	}
	{
		// KHR_materials_pbrSpecularGlossinessExtension specGloss = def.Extensions[KHR_materials_pbrSpecularGlossinessExtensionFactory.EXTENSION_NAME] as KHR_materials_pbrSpecularGlossinessExtension;
		Material_t2790518843 * L_115 = ___def0;
		NullCheck(L_115);
		Dictionary_2_t395211613 * L_116 = ((GLTFProperty_t1589224293 *)L_115)->get_Extensions_4();
		NullCheck(L_116);
		RuntimeObject* L_117 = Dictionary_2_get_Item_m1477117687(L_116, _stringLiteral3452630243, /*hidden argument*/Dictionary_2_get_Item_m1477117687_RuntimeMethod_var);
		V_6 = ((KHR_materials_pbrSpecularGlossinessExtension_t1217762009 *)IsInstClass((RuntimeObject*)L_117, KHR_materials_pbrSpecularGlossinessExtension_t1217762009_il2cpp_TypeInfo_var));
		// if (specGloss.DiffuseTexture != null)
		KHR_materials_pbrSpecularGlossinessExtension_t1217762009 * L_118 = V_6;
		NullCheck(L_118);
		TextureInfo_t616718776 * L_119 = L_118->get_DiffuseTexture_3();
		if (!L_119)
		{
			goto IL_0396;
		}
	}
	{
		// var texture = specGloss.DiffuseTexture.Index.Value;
		KHR_materials_pbrSpecularGlossinessExtension_t1217762009 * L_120 = V_6;
		NullCheck(L_120);
		TextureInfo_t616718776 * L_121 = L_120->get_DiffuseTexture_3();
		NullCheck(L_121);
		TextureId_t2497679170 * L_122 = L_121->get_Index_6();
		NullCheck(L_122);
		Texture_t812196831 * L_123 = VirtFuncInvoker0< Texture_t812196831 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.Texture>::get_Value() */, L_122);
		V_7 = L_123;
		// material.SetTexture("_MainTex", CreateTexture(texture));
		Material_t340375123 * L_124 = V_2;
		Texture_t812196831 * L_125 = V_7;
		Texture_t3661962703 * L_126 = VirtFuncInvoker1< Texture_t3661962703 *, Texture_t812196831 * >::Invoke(12 /* UnityEngine.Texture UnityGLTF.GLTFSceneImporter::CreateTexture(GLTF.Schema.Texture) */, __this, L_125);
		NullCheck(L_124);
		Material_SetTexture_m1829349465(L_124, _stringLiteral3184621405, L_126, /*hidden argument*/NULL);
		// ApplyTextureTransform(specGloss.DiffuseTexture, material, "_MainTex");
		KHR_materials_pbrSpecularGlossinessExtension_t1217762009 * L_127 = V_6;
		NullCheck(L_127);
		TextureInfo_t616718776 * L_128 = L_127->get_DiffuseTexture_3();
		Material_t340375123 * L_129 = V_2;
		VirtActionInvoker3< TextureInfo_t616718776 *, Material_t340375123 *, String_t* >::Invoke(13 /* System.Void UnityGLTF.GLTFSceneImporter::ApplyTextureTransform(GLTF.Schema.TextureInfo,UnityEngine.Material,System.String) */, __this, L_128, L_129, _stringLiteral3184621405);
		// }
		goto IL_03ad;
	}

IL_0396:
	{
		// material.SetColor("_Color", specGloss.DiffuseFactor.ToUnityColorRaw());
		Material_t340375123 * L_130 = V_2;
		KHR_materials_pbrSpecularGlossinessExtension_t1217762009 * L_131 = V_6;
		NullCheck(L_131);
		Color_t1637600301  L_132 = L_131->get_DiffuseFactor_2();
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		Color_t2555686324  L_133 = SchemaExtensions_ToUnityColorRaw_m3701965783(NULL /*static, unused*/, L_132, /*hidden argument*/NULL);
		NullCheck(L_130);
		Material_SetColor_m2020215303(L_130, _stringLiteral3957048425, L_133, /*hidden argument*/NULL);
	}

IL_03ad:
	{
		// if (specGloss.SpecularGlossinessTexture != null)
		KHR_materials_pbrSpecularGlossinessExtension_t1217762009 * L_134 = V_6;
		NullCheck(L_134);
		TextureInfo_t616718776 * L_135 = L_134->get_SpecularGlossinessTexture_6();
		if (!L_135)
		{
			goto IL_03fc;
		}
	}
	{
		// var texture = specGloss.SpecularGlossinessTexture.Index.Value;
		KHR_materials_pbrSpecularGlossinessExtension_t1217762009 * L_136 = V_6;
		NullCheck(L_136);
		TextureInfo_t616718776 * L_137 = L_136->get_SpecularGlossinessTexture_6();
		NullCheck(L_137);
		TextureId_t2497679170 * L_138 = L_137->get_Index_6();
		NullCheck(L_138);
		Texture_t812196831 * L_139 = VirtFuncInvoker0< Texture_t812196831 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.Texture>::get_Value() */, L_138);
		V_8 = L_139;
		// material.SetTexture("_SpecGlossMap", CreateTexture(texture));
		Material_t340375123 * L_140 = V_2;
		Texture_t812196831 * L_141 = V_8;
		Texture_t3661962703 * L_142 = VirtFuncInvoker1< Texture_t3661962703 *, Texture_t812196831 * >::Invoke(12 /* UnityEngine.Texture UnityGLTF.GLTFSceneImporter::CreateTexture(GLTF.Schema.Texture) */, __this, L_141);
		NullCheck(L_140);
		Material_SetTexture_m1829349465(L_140, _stringLiteral2200975496, L_142, /*hidden argument*/NULL);
		// material.EnableKeyword("_SPECGLOSSMAP");
		Material_t340375123 * L_143 = V_2;
		NullCheck(L_143);
		Material_EnableKeyword_m329692301(L_143, _stringLiteral3958763139, /*hidden argument*/NULL);
		// ApplyTextureTransform(specGloss.SpecularGlossinessTexture, material, "_SpecGlossMap");
		KHR_materials_pbrSpecularGlossinessExtension_t1217762009 * L_144 = V_6;
		NullCheck(L_144);
		TextureInfo_t616718776 * L_145 = L_144->get_SpecularGlossinessTexture_6();
		Material_t340375123 * L_146 = V_2;
		VirtActionInvoker3< TextureInfo_t616718776 *, Material_t340375123 *, String_t* >::Invoke(13 /* System.Void UnityGLTF.GLTFSceneImporter::ApplyTextureTransform(GLTF.Schema.TextureInfo,UnityEngine.Material,System.String) */, __this, L_145, L_146, _stringLiteral2200975496);
		// }
		goto IL_042b;
	}

IL_03fc:
	{
		// material.SetVector("_SpecColor", specGloss.SpecularFactor.ToUnityVector3Raw());
		Material_t340375123 * L_147 = V_2;
		KHR_materials_pbrSpecularGlossinessExtension_t1217762009 * L_148 = V_6;
		NullCheck(L_148);
		Vector3_t4136528132  L_149 = L_148->get_SpecularFactor_4();
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_150 = SchemaExtensions_ToUnityVector3Raw_m7592615(NULL /*static, unused*/, L_149, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector4_t3319028937_il2cpp_TypeInfo_var);
		Vector4_t3319028937  L_151 = Vector4_op_Implicit_m2966035112(NULL /*static, unused*/, L_150, /*hidden argument*/NULL);
		NullCheck(L_147);
		Material_SetVector_m4214217286(L_147, _stringLiteral2732841182, L_151, /*hidden argument*/NULL);
		// material.SetFloat("_Glossiness", (float)specGloss.GlossinessFactor);
		Material_t340375123 * L_152 = V_2;
		KHR_materials_pbrSpecularGlossinessExtension_t1217762009 * L_153 = V_6;
		NullCheck(L_153);
		double L_154 = L_153->get_GlossinessFactor_5();
		NullCheck(L_152);
		Material_SetFloat_m3226510453(L_152, _stringLiteral778727724, (((float)((float)L_154))), /*hidden argument*/NULL);
	}

IL_042b:
	{
		// if (def.CommonConstant != null)
		Material_t2790518843 * L_155 = ___def0;
		NullCheck(L_155);
		MaterialCommonConstant_t2574134879 * L_156 = L_155->get_CommonConstant_8();
		if (!L_156)
		{
			goto IL_04e0;
		}
	}
	{
		// material.SetColor("_AmbientFactor", def.CommonConstant.AmbientFactor.ToUnityColorRaw());
		Material_t340375123 * L_157 = V_2;
		Material_t2790518843 * L_158 = ___def0;
		NullCheck(L_158);
		MaterialCommonConstant_t2574134879 * L_159 = L_158->get_CommonConstant_8();
		NullCheck(L_159);
		Color_t1637600301  L_160 = L_159->get_AmbientFactor_6();
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		Color_t2555686324  L_161 = SchemaExtensions_ToUnityColorRaw_m3701965783(NULL /*static, unused*/, L_160, /*hidden argument*/NULL);
		NullCheck(L_157);
		Material_SetColor_m2020215303(L_157, _stringLiteral2800895899, L_161, /*hidden argument*/NULL);
		// if (def.CommonConstant.LightmapTexture != null)
		Material_t2790518843 * L_162 = ___def0;
		NullCheck(L_162);
		MaterialCommonConstant_t2574134879 * L_163 = L_162->get_CommonConstant_8();
		NullCheck(L_163);
		TextureInfo_t616718776 * L_164 = L_163->get_LightmapTexture_7();
		if (!L_164)
		{
			goto IL_04c5;
		}
	}
	{
		// material.EnableKeyword("LIGHTMAP_ON");
		Material_t340375123 * L_165 = V_2;
		NullCheck(L_165);
		Material_EnableKeyword_m329692301(L_165, _stringLiteral3580957363, /*hidden argument*/NULL);
		// var texture = def.CommonConstant.LightmapTexture.Index.Value;
		Material_t2790518843 * L_166 = ___def0;
		NullCheck(L_166);
		MaterialCommonConstant_t2574134879 * L_167 = L_166->get_CommonConstant_8();
		NullCheck(L_167);
		TextureInfo_t616718776 * L_168 = L_167->get_LightmapTexture_7();
		NullCheck(L_168);
		TextureId_t2497679170 * L_169 = L_168->get_Index_6();
		NullCheck(L_169);
		Texture_t812196831 * L_170 = VirtFuncInvoker0< Texture_t812196831 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.Texture>::get_Value() */, L_169);
		V_9 = L_170;
		// material.SetTexture("_LightMap", CreateTexture(texture));
		Material_t340375123 * L_171 = V_2;
		Texture_t812196831 * L_172 = V_9;
		Texture_t3661962703 * L_173 = VirtFuncInvoker1< Texture_t3661962703 *, Texture_t812196831 * >::Invoke(12 /* UnityEngine.Texture UnityGLTF.GLTFSceneImporter::CreateTexture(GLTF.Schema.Texture) */, __this, L_172);
		NullCheck(L_171);
		Material_SetTexture_m1829349465(L_171, _stringLiteral2678669937, L_173, /*hidden argument*/NULL);
		// material.SetInt("_LightUV", def.CommonConstant.LightmapTexture.TexCoord);
		Material_t340375123 * L_174 = V_2;
		Material_t2790518843 * L_175 = ___def0;
		NullCheck(L_175);
		MaterialCommonConstant_t2574134879 * L_176 = L_175->get_CommonConstant_8();
		NullCheck(L_176);
		TextureInfo_t616718776 * L_177 = L_176->get_LightmapTexture_7();
		NullCheck(L_177);
		int32_t L_178 = L_177->get_TexCoord_7();
		NullCheck(L_174);
		Material_SetInt_m1783799378(L_174, _stringLiteral1270222075, L_178, /*hidden argument*/NULL);
		// ApplyTextureTransform(def.CommonConstant.LightmapTexture, material, "_LightMap");
		Material_t2790518843 * L_179 = ___def0;
		NullCheck(L_179);
		MaterialCommonConstant_t2574134879 * L_180 = L_179->get_CommonConstant_8();
		NullCheck(L_180);
		TextureInfo_t616718776 * L_181 = L_180->get_LightmapTexture_7();
		Material_t340375123 * L_182 = V_2;
		VirtActionInvoker3< TextureInfo_t616718776 *, Material_t340375123 *, String_t* >::Invoke(13 /* System.Void UnityGLTF.GLTFSceneImporter::ApplyTextureTransform(GLTF.Schema.TextureInfo,UnityEngine.Material,System.String) */, __this, L_181, L_182, _stringLiteral2678669937);
	}

IL_04c5:
	{
		// material.SetColor("_LightFactor", def.CommonConstant.LightmapFactor.ToUnityColorRaw());
		Material_t340375123 * L_183 = V_2;
		Material_t2790518843 * L_184 = ___def0;
		NullCheck(L_184);
		MaterialCommonConstant_t2574134879 * L_185 = L_184->get_CommonConstant_8();
		NullCheck(L_185);
		Color_t1637600301  L_186 = L_185->get_LightmapFactor_8();
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		Color_t2555686324  L_187 = SchemaExtensions_ToUnityColorRaw_m3701965783(NULL /*static, unused*/, L_186, /*hidden argument*/NULL);
		NullCheck(L_183);
		Material_SetColor_m2020215303(L_183, _stringLiteral4134818583, L_187, /*hidden argument*/NULL);
	}

IL_04e0:
	{
		// if (def.NormalTexture != null)
		Material_t2790518843 * L_188 = ___def0;
		NullCheck(L_188);
		NormalTextureInfo_t1344565953 * L_189 = L_188->get_NormalTexture_9();
		if (!L_189)
		{
			goto IL_0541;
		}
	}
	{
		// var texture = def.NormalTexture.Index.Value;
		Material_t2790518843 * L_190 = ___def0;
		NullCheck(L_190);
		NormalTextureInfo_t1344565953 * L_191 = L_190->get_NormalTexture_9();
		NullCheck(L_191);
		TextureId_t2497679170 * L_192 = ((TextureInfo_t616718776 *)L_191)->get_Index_6();
		NullCheck(L_192);
		Texture_t812196831 * L_193 = VirtFuncInvoker0< Texture_t812196831 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.Texture>::get_Value() */, L_192);
		V_10 = L_193;
		// material.SetTexture("_BumpMap", CreateTexture(texture));
		Material_t340375123 * L_194 = V_2;
		Texture_t812196831 * L_195 = V_10;
		Texture_t3661962703 * L_196 = VirtFuncInvoker1< Texture_t3661962703 *, Texture_t812196831 * >::Invoke(12 /* UnityEngine.Texture UnityGLTF.GLTFSceneImporter::CreateTexture(GLTF.Schema.Texture) */, __this, L_195);
		NullCheck(L_194);
		Material_SetTexture_m1829349465(L_194, _stringLiteral1595134219, L_196, /*hidden argument*/NULL);
		// material.SetFloat("_BumpScale", (float)def.NormalTexture.Scale);
		Material_t340375123 * L_197 = V_2;
		Material_t2790518843 * L_198 = ___def0;
		NullCheck(L_198);
		NormalTextureInfo_t1344565953 * L_199 = L_198->get_NormalTexture_9();
		NullCheck(L_199);
		double L_200 = L_199->get_Scale_8();
		NullCheck(L_197);
		Material_SetFloat_m3226510453(L_197, _stringLiteral840530743, (((float)((float)L_200))), /*hidden argument*/NULL);
		// material.EnableKeyword("_NORMALMAP");
		Material_t340375123 * L_201 = V_2;
		NullCheck(L_201);
		Material_EnableKeyword_m329692301(L_201, _stringLiteral3524756202, /*hidden argument*/NULL);
		// ApplyTextureTransform(def.NormalTexture, material, "_BumpMap");
		Material_t2790518843 * L_202 = ___def0;
		NullCheck(L_202);
		NormalTextureInfo_t1344565953 * L_203 = L_202->get_NormalTexture_9();
		Material_t340375123 * L_204 = V_2;
		VirtActionInvoker3< TextureInfo_t616718776 *, Material_t340375123 *, String_t* >::Invoke(13 /* System.Void UnityGLTF.GLTFSceneImporter::ApplyTextureTransform(GLTF.Schema.TextureInfo,UnityEngine.Material,System.String) */, __this, L_203, L_204, _stringLiteral1595134219);
	}

IL_0541:
	{
		// if (def.OcclusionTexture != null)
		Material_t2790518843 * L_205 = ___def0;
		NullCheck(L_205);
		OcclusionTextureInfo_t1842066315 * L_206 = L_205->get_OcclusionTexture_10();
		if (!L_206)
		{
			goto IL_05da;
		}
	}
	{
		// var texture = def.OcclusionTexture.Index;
		Material_t2790518843 * L_207 = ___def0;
		NullCheck(L_207);
		OcclusionTextureInfo_t1842066315 * L_208 = L_207->get_OcclusionTexture_10();
		NullCheck(L_208);
		TextureId_t2497679170 * L_209 = ((TextureInfo_t616718776 *)L_208)->get_Index_6();
		V_11 = L_209;
		// material.SetFloat("_OcclusionStrength", (float)def.OcclusionTexture.Strength);
		Material_t340375123 * L_210 = V_2;
		Material_t2790518843 * L_211 = ___def0;
		NullCheck(L_211);
		OcclusionTextureInfo_t1842066315 * L_212 = L_211->get_OcclusionTexture_10();
		NullCheck(L_212);
		double L_213 = L_212->get_Strength_8();
		NullCheck(L_210);
		Material_SetFloat_m3226510453(L_210, _stringLiteral2550118673, (((float)((float)L_213))), /*hidden argument*/NULL);
		// if (def.PbrMetallicRoughness != null
		//     && def.PbrMetallicRoughness.MetallicRoughnessTexture != null
		//     && def.PbrMetallicRoughness.MetallicRoughnessTexture.Index.Id == texture.Id)
		Material_t2790518843 * L_214 = ___def0;
		NullCheck(L_214);
		PbrMetallicRoughness_t313043948 * L_215 = L_214->get_PbrMetallicRoughness_7();
		if (!L_215)
		{
			goto IL_05b0;
		}
	}
	{
		Material_t2790518843 * L_216 = ___def0;
		NullCheck(L_216);
		PbrMetallicRoughness_t313043948 * L_217 = L_216->get_PbrMetallicRoughness_7();
		NullCheck(L_217);
		TextureInfo_t616718776 * L_218 = L_217->get_MetallicRoughnessTexture_10();
		if (!L_218)
		{
			goto IL_05b0;
		}
	}
	{
		Material_t2790518843 * L_219 = ___def0;
		NullCheck(L_219);
		PbrMetallicRoughness_t313043948 * L_220 = L_219->get_PbrMetallicRoughness_7();
		NullCheck(L_220);
		TextureInfo_t616718776 * L_221 = L_220->get_MetallicRoughnessTexture_10();
		NullCheck(L_221);
		TextureId_t2497679170 * L_222 = L_221->get_Index_6();
		NullCheck(L_222);
		int32_t L_223 = ((GLTFId_1_t1012528691 *)L_222)->get_Id_0();
		TextureId_t2497679170 * L_224 = V_11;
		NullCheck(L_224);
		int32_t L_225 = ((GLTFId_1_t1012528691 *)L_224)->get_Id_0();
		if ((!(((uint32_t)L_223) == ((uint32_t)L_225))))
		{
			goto IL_05b0;
		}
	}
	{
		// material.EnableKeyword("OCC_METAL_ROUGH_ON");
		Material_t340375123 * L_226 = V_2;
		NullCheck(L_226);
		Material_EnableKeyword_m329692301(L_226, _stringLiteral776698491, /*hidden argument*/NULL);
		// }
		goto IL_05da;
	}

IL_05b0:
	{
		// material.SetTexture("_OcclusionMap", CreateTexture(texture.Value));
		Material_t340375123 * L_227 = V_2;
		TextureId_t2497679170 * L_228 = V_11;
		NullCheck(L_228);
		Texture_t812196831 * L_229 = VirtFuncInvoker0< Texture_t812196831 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.Texture>::get_Value() */, L_228);
		Texture_t3661962703 * L_230 = VirtFuncInvoker1< Texture_t3661962703 *, Texture_t812196831 * >::Invoke(12 /* UnityEngine.Texture UnityGLTF.GLTFSceneImporter::CreateTexture(GLTF.Schema.Texture) */, __this, L_229);
		NullCheck(L_227);
		Material_SetTexture_m1829349465(L_227, _stringLiteral3417796654, L_230, /*hidden argument*/NULL);
		// ApplyTextureTransform(def.OcclusionTexture, material, "_OcclusionMap");
		Material_t2790518843 * L_231 = ___def0;
		NullCheck(L_231);
		OcclusionTextureInfo_t1842066315 * L_232 = L_231->get_OcclusionTexture_10();
		Material_t340375123 * L_233 = V_2;
		VirtActionInvoker3< TextureInfo_t616718776 *, Material_t340375123 *, String_t* >::Invoke(13 /* System.Void UnityGLTF.GLTFSceneImporter::ApplyTextureTransform(GLTF.Schema.TextureInfo,UnityEngine.Material,System.String) */, __this, L_232, L_233, _stringLiteral3417796654);
	}

IL_05da:
	{
		// if (def.EmissiveTexture != null)
		Material_t2790518843 * L_234 = ___def0;
		NullCheck(L_234);
		TextureInfo_t616718776 * L_235 = L_234->get_EmissiveTexture_11();
		if (!L_235)
		{
			goto IL_0645;
		}
	}
	{
		// var texture = def.EmissiveTexture.Index.Value;
		Material_t2790518843 * L_236 = ___def0;
		NullCheck(L_236);
		TextureInfo_t616718776 * L_237 = L_236->get_EmissiveTexture_11();
		NullCheck(L_237);
		TextureId_t2497679170 * L_238 = L_237->get_Index_6();
		NullCheck(L_238);
		Texture_t812196831 * L_239 = VirtFuncInvoker0< Texture_t812196831 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.Texture>::get_Value() */, L_238);
		V_12 = L_239;
		// material.EnableKeyword("EMISSION_MAP_ON");
		Material_t340375123 * L_240 = V_2;
		NullCheck(L_240);
		Material_EnableKeyword_m329692301(L_240, _stringLiteral243366994, /*hidden argument*/NULL);
		// material.EnableKeyword("_EMISSION");
		Material_t340375123 * L_241 = V_2;
		NullCheck(L_241);
		Material_EnableKeyword_m329692301(L_241, _stringLiteral1394251666, /*hidden argument*/NULL);
		// material.SetTexture("_EmissionMap", CreateTexture(texture));
		Material_t340375123 * L_242 = V_2;
		Texture_t812196831 * L_243 = V_12;
		Texture_t3661962703 * L_244 = VirtFuncInvoker1< Texture_t3661962703 *, Texture_t812196831 * >::Invoke(12 /* UnityEngine.Texture UnityGLTF.GLTFSceneImporter::CreateTexture(GLTF.Schema.Texture) */, __this, L_243);
		NullCheck(L_242);
		Material_SetTexture_m1829349465(L_242, _stringLiteral2892157592, L_244, /*hidden argument*/NULL);
		// material.SetInt("_EmissionUV", def.EmissiveTexture.TexCoord);
		Material_t340375123 * L_245 = V_2;
		Material_t2790518843 * L_246 = ___def0;
		NullCheck(L_246);
		TextureInfo_t616718776 * L_247 = L_246->get_EmissiveTexture_11();
		NullCheck(L_247);
		int32_t L_248 = L_247->get_TexCoord_7();
		NullCheck(L_245);
		Material_SetInt_m1783799378(L_245, _stringLiteral247783397, L_248, /*hidden argument*/NULL);
		// ApplyTextureTransform(def.EmissiveTexture, material, "_EmissionMap");
		Material_t2790518843 * L_249 = ___def0;
		NullCheck(L_249);
		TextureInfo_t616718776 * L_250 = L_249->get_EmissiveTexture_11();
		Material_t340375123 * L_251 = V_2;
		VirtActionInvoker3< TextureInfo_t616718776 *, Material_t340375123 *, String_t* >::Invoke(13 /* System.Void UnityGLTF.GLTFSceneImporter::ApplyTextureTransform(GLTF.Schema.TextureInfo,UnityEngine.Material,System.String) */, __this, L_250, L_251, _stringLiteral2892157592);
	}

IL_0645:
	{
		// material.SetColor("_EmissionColor", def.EmissiveFactor.ToUnityColorRaw());
		Material_t340375123 * L_252 = V_2;
		Material_t2790518843 * L_253 = ___def0;
		NullCheck(L_253);
		Color_t1637600301  L_254 = L_253->get_EmissiveFactor_12();
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		Color_t2555686324  L_255 = SchemaExtensions_ToUnityColorRaw_m3701965783(NULL /*static, unused*/, L_254, /*hidden argument*/NULL);
		NullCheck(L_252);
		Material_SetColor_m2020215303(L_252, _stringLiteral1801776656, L_255, /*hidden argument*/NULL);
		// materialWrapper = new MaterialCacheData
		// {
		//     UnityMaterial = material,
		//     UnityMaterialWithVertexColor = new UnityEngine.Material(material),
		//     GLTFMaterial = def
		// };
		MaterialCacheData_t2754836532 * L_256 = (MaterialCacheData_t2754836532 *)il2cpp_codegen_object_new(MaterialCacheData_t2754836532_il2cpp_TypeInfo_var);
		MaterialCacheData__ctor_m2869483896(L_256, /*hidden argument*/NULL);
		MaterialCacheData_t2754836532 * L_257 = L_256;
		Material_t340375123 * L_258 = V_2;
		NullCheck(L_257);
		MaterialCacheData_set_UnityMaterial_m53177533(L_257, L_258, /*hidden argument*/NULL);
		MaterialCacheData_t2754836532 * L_259 = L_257;
		Material_t340375123 * L_260 = V_2;
		Material_t340375123 * L_261 = (Material_t340375123 *)il2cpp_codegen_object_new(Material_t340375123_il2cpp_TypeInfo_var);
		Material__ctor_m249231841(L_261, L_260, /*hidden argument*/NULL);
		NullCheck(L_259);
		MaterialCacheData_set_UnityMaterialWithVertexColor_m697296969(L_259, L_261, /*hidden argument*/NULL);
		MaterialCacheData_t2754836532 * L_262 = L_259;
		Material_t2790518843 * L_263 = ___def0;
		NullCheck(L_262);
		MaterialCacheData_set_GLTFMaterial_m3448004832(L_262, L_263, /*hidden argument*/NULL);
		V_0 = L_262;
		// materialWrapper.UnityMaterialWithVertexColor.EnableKeyword("VERTEX_COLOR_ON");
		MaterialCacheData_t2754836532 * L_264 = V_0;
		NullCheck(L_264);
		Material_t340375123 * L_265 = MaterialCacheData_get_UnityMaterialWithVertexColor_m170899589(L_264, /*hidden argument*/NULL);
		NullCheck(L_265);
		Material_EnableKeyword_m329692301(L_265, _stringLiteral2071373363, /*hidden argument*/NULL);
		// if (materialIndex > 0)
		int32_t L_266 = ___materialIndex1;
		if ((((int32_t)L_266) <= ((int32_t)0)))
		{
			goto IL_069d;
		}
	}
	{
		// _assetCache.MaterialCache[materialIndex] = materialWrapper;
		AssetCache_t783611398 * L_267 = __this->get__assetCache_9();
		NullCheck(L_267);
		MaterialCacheDataU5BU5D_t484490365* L_268 = AssetCache_get_MaterialCache_m160752798(L_267, /*hidden argument*/NULL);
		int32_t L_269 = ___materialIndex1;
		MaterialCacheData_t2754836532 * L_270 = V_0;
		NullCheck(L_268);
		ArrayElementTypeCheck (L_268, L_270);
		(L_268)->SetAt(static_cast<il2cpp_array_size_t>(L_269), (MaterialCacheData_t2754836532 *)L_270);
	}

IL_069d:
	{
		// return materialIndex > 0 ? _assetCache.MaterialCache[materialIndex] : materialWrapper;
		int32_t L_271 = ___materialIndex1;
		if ((((int32_t)L_271) > ((int32_t)0)))
		{
			goto IL_06a3;
		}
	}
	{
		MaterialCacheData_t2754836532 * L_272 = V_0;
		return L_272;
	}

IL_06a3:
	{
		AssetCache_t783611398 * L_273 = __this->get__assetCache_9();
		NullCheck(L_273);
		MaterialCacheDataU5BU5D_t484490365* L_274 = AssetCache_get_MaterialCache_m160752798(L_273, /*hidden argument*/NULL);
		int32_t L_275 = ___materialIndex1;
		NullCheck(L_274);
		int32_t L_276 = L_275;
		MaterialCacheData_t2754836532 * L_277 = (L_274)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		return L_277;
	}
}
// UnityEngine.Texture UnityGLTF.GLTFSceneImporter::CreateTexture(GLTF.Schema.Texture)
extern "C" IL2CPP_METHOD_ATTR Texture_t3661962703 * GLTFSceneImporter_CreateTexture_m847048103 (GLTFSceneImporter_t274320441 * __this, Texture_t812196831 * ___texture0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter_CreateTexture_m847048103_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t3840446185 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Sampler_t1479019907 * V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Texture2D_t3840446185 * V_6 = NULL;
	{
		// if (_assetCache.TextureCache[texture.Source.Id] == null)
		AssetCache_t783611398 * L_0 = __this->get__assetCache_9();
		NullCheck(L_0);
		TextureU5BU5D_t908295702* L_1 = AssetCache_get_TextureCache_m4292385098(L_0, /*hidden argument*/NULL);
		Texture_t812196831 * L_2 = ___texture0;
		NullCheck(L_2);
		ImageId_t3414506292 * L_3 = L_2->get_Source_8();
		NullCheck(L_3);
		int32_t L_4 = ((GLTFId_1_t982952535 *)L_3)->get_Id_0();
		NullCheck(L_1);
		int32_t L_5 = L_4;
		Texture_t3661962703 * L_6 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00f1;
		}
	}
	{
		// var source = _assetCache.ImageCache[texture.Source.Id];
		AssetCache_t783611398 * L_8 = __this->get__assetCache_9();
		NullCheck(L_8);
		Texture2DU5BU5D_t149664596* L_9 = AssetCache_get_ImageCache_m3334297062(L_8, /*hidden argument*/NULL);
		Texture_t812196831 * L_10 = ___texture0;
		NullCheck(L_10);
		ImageId_t3414506292 * L_11 = L_10->get_Source_8();
		NullCheck(L_11);
		int32_t L_12 = ((GLTFId_1_t982952535 *)L_11)->get_Id_0();
		NullCheck(L_9);
		int32_t L_13 = L_12;
		Texture2D_t3840446185 * L_14 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_0 = L_14;
		// var desiredFilterMode = FilterMode.Bilinear;
		V_1 = 1;
		// var desiredWrapMode = UnityEngine.TextureWrapMode.Repeat;
		V_2 = 0;
		// if (texture.Sampler != null)
		Texture_t812196831 * L_15 = ___texture0;
		NullCheck(L_15);
		SamplerId_t2839447902 * L_16 = L_15->get_Sampler_7();
		if (!L_16)
		{
			goto IL_0094;
		}
	}
	{
		// var sampler = texture.Sampler.Value;
		Texture_t812196831 * L_17 = ___texture0;
		NullCheck(L_17);
		SamplerId_t2839447902 * L_18 = L_17->get_Sampler_7();
		NullCheck(L_18);
		Sampler_t1479019907 * L_19 = VirtFuncInvoker0< Sampler_t1479019907 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.Sampler>::get_Value() */, L_18);
		V_3 = L_19;
		// switch (sampler.MinFilter)
		Sampler_t1479019907 * L_20 = V_3;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_MinFilter_8();
		V_4 = L_21;
		int32_t L_22 = V_4;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)9728))))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_23 = V_4;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)9729))))
		{
			goto IL_0072;
		}
	}
	{
		goto IL_0072;
	}

IL_006e:
	{
		// desiredFilterMode = FilterMode.Point;
		V_1 = 0;
		// break;
		goto IL_0074;
	}

IL_0072:
	{
		// desiredFilterMode = FilterMode.Bilinear;
		V_1 = 1;
	}

IL_0074:
	{
		// switch (sampler.WrapS)
		Sampler_t1479019907 * L_24 = V_3;
		NullCheck(L_24);
		int32_t L_25 = L_24->get_WrapS_9();
		V_5 = L_25;
		int32_t L_26 = V_5;
		if ((((int32_t)L_26) == ((int32_t)((int32_t)10497))))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_27 = V_5;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)33071)))))
		{
			goto IL_0092;
		}
	}
	{
		// desiredWrapMode = UnityEngine.TextureWrapMode.Clamp;
		V_2 = 1;
		// break;
		goto IL_0094;
	}

IL_0092:
	{
		// desiredWrapMode = UnityEngine.TextureWrapMode.Repeat;
		V_2 = 0;
	}

IL_0094:
	{
		// if (source.filterMode == desiredFilterMode && source.wrapMode == desiredWrapMode)
		Texture2D_t3840446185 * L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = Texture_get_filterMode_m3474837873(L_28, /*hidden argument*/NULL);
		int32_t L_30 = V_1;
		if ((!(((uint32_t)L_29) == ((uint32_t)L_30))))
		{
			goto IL_00c0;
		}
	}
	{
		Texture2D_t3840446185 * L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32 = Texture_get_wrapMode_m2187367613(L_31, /*hidden argument*/NULL);
		int32_t L_33 = V_2;
		if ((!(((uint32_t)L_32) == ((uint32_t)L_33))))
		{
			goto IL_00c0;
		}
	}
	{
		// _assetCache.TextureCache[texture.Source.Id] = source;
		AssetCache_t783611398 * L_34 = __this->get__assetCache_9();
		NullCheck(L_34);
		TextureU5BU5D_t908295702* L_35 = AssetCache_get_TextureCache_m4292385098(L_34, /*hidden argument*/NULL);
		Texture_t812196831 * L_36 = ___texture0;
		NullCheck(L_36);
		ImageId_t3414506292 * L_37 = L_36->get_Source_8();
		NullCheck(L_37);
		int32_t L_38 = ((GLTFId_1_t982952535 *)L_37)->get_Id_0();
		Texture2D_t3840446185 * L_39 = V_0;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_39);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (Texture_t3661962703 *)L_39);
		// }
		goto IL_00f1;
	}

IL_00c0:
	{
		// var unityTexture = UnityEngine.Object.Instantiate(source);
		Texture2D_t3840446185 * L_40 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Texture2D_t3840446185 * L_41 = Object_Instantiate_TisTexture2D_t3840446185_m2566223136(NULL /*static, unused*/, L_40, /*hidden argument*/Object_Instantiate_TisTexture2D_t3840446185_m2566223136_RuntimeMethod_var);
		V_6 = L_41;
		// unityTexture.filterMode = desiredFilterMode;
		Texture2D_t3840446185 * L_42 = V_6;
		int32_t L_43 = V_1;
		NullCheck(L_42);
		Texture_set_filterMode_m3078068058(L_42, L_43, /*hidden argument*/NULL);
		// unityTexture.wrapMode = desiredWrapMode;
		Texture2D_t3840446185 * L_44 = V_6;
		int32_t L_45 = V_2;
		NullCheck(L_44);
		Texture_set_wrapMode_m587872754(L_44, L_45, /*hidden argument*/NULL);
		// _assetCache.TextureCache[texture.Source.Id] = unityTexture;
		AssetCache_t783611398 * L_46 = __this->get__assetCache_9();
		NullCheck(L_46);
		TextureU5BU5D_t908295702* L_47 = AssetCache_get_TextureCache_m4292385098(L_46, /*hidden argument*/NULL);
		Texture_t812196831 * L_48 = ___texture0;
		NullCheck(L_48);
		ImageId_t3414506292 * L_49 = L_48->get_Source_8();
		NullCheck(L_49);
		int32_t L_50 = ((GLTFId_1_t982952535 *)L_49)->get_Id_0();
		Texture2D_t3840446185 * L_51 = V_6;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_51);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (Texture_t3661962703 *)L_51);
	}

IL_00f1:
	{
		// return _assetCache.TextureCache[texture.Source.Id];
		AssetCache_t783611398 * L_52 = __this->get__assetCache_9();
		NullCheck(L_52);
		TextureU5BU5D_t908295702* L_53 = AssetCache_get_TextureCache_m4292385098(L_52, /*hidden argument*/NULL);
		Texture_t812196831 * L_54 = ___texture0;
		NullCheck(L_54);
		ImageId_t3414506292 * L_55 = L_54->get_Source_8();
		NullCheck(L_55);
		int32_t L_56 = ((GLTFId_1_t982952535 *)L_55)->get_Id_0();
		NullCheck(L_53);
		int32_t L_57 = L_56;
		Texture_t3661962703 * L_58 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		return L_58;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter::ApplyTextureTransform(GLTF.Schema.TextureInfo,UnityEngine.Material,System.String)
extern "C" IL2CPP_METHOD_ATTR void GLTFSceneImporter_ApplyTextureTransform_m3840624985 (GLTFSceneImporter_t274320441 * __this, TextureInfo_t616718776 * ___def0, Material_t340375123 * ___mat1, String_t* ___texName2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter_ApplyTextureTransform_m3840624985_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	ExtTextureTransformExtension_t1454646850 * V_1 = NULL;
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		// if (_root.ExtensionsUsed != null &&
		//     _root.ExtensionsUsed.Contains(ExtTextureTransformExtensionFactory.EXTENSION_NAME) &&
		//     def.Extensions != null &&
		//     def.Extensions.TryGetValue(ExtTextureTransformExtensionFactory.EXTENSION_NAME, out extension))
		GLTFRoot_t676886847 * L_0 = __this->get__root_8();
		NullCheck(L_0);
		List_1_t3319525431 * L_1 = L_0->get_ExtensionsUsed_6();
		if (!L_1)
		{
			goto IL_0081;
		}
	}
	{
		GLTFRoot_t676886847 * L_2 = __this->get__root_8();
		NullCheck(L_2);
		List_1_t3319525431 * L_3 = L_2->get_ExtensionsUsed_6();
		NullCheck(L_3);
		bool L_4 = List_1_Contains_m195709148(L_3, _stringLiteral4181509080, /*hidden argument*/List_1_Contains_m195709148_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0081;
		}
	}
	{
		TextureInfo_t616718776 * L_5 = ___def0;
		NullCheck(L_5);
		Dictionary_2_t395211613 * L_6 = ((GLTFProperty_t1589224293 *)L_5)->get_Extensions_4();
		if (!L_6)
		{
			goto IL_0081;
		}
	}
	{
		TextureInfo_t616718776 * L_7 = ___def0;
		NullCheck(L_7);
		Dictionary_2_t395211613 * L_8 = ((GLTFProperty_t1589224293 *)L_7)->get_Extensions_4();
		NullCheck(L_8);
		bool L_9 = Dictionary_2_TryGetValue_m2569376538(L_8, _stringLiteral4181509080, (RuntimeObject**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m2569376538_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0081;
		}
	}
	{
		// ExtTextureTransformExtension ext = (ExtTextureTransformExtension)extension;
		RuntimeObject* L_10 = V_0;
		V_1 = ((ExtTextureTransformExtension_t1454646850 *)CastclassClass((RuntimeObject*)L_10, ExtTextureTransformExtension_t1454646850_il2cpp_TypeInfo_var));
		// Vector2 temp = ext.Offset.ToUnityVector2Raw();
		ExtTextureTransformExtension_t1454646850 * L_11 = V_1;
		NullCheck(L_11);
		Vector2_t4136528133  L_12 = L_11->get_Offset_0();
		IL2CPP_RUNTIME_CLASS_INIT(SchemaExtensions_t3846062055_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_13 = SchemaExtensions_ToUnityVector2Raw_m3238630761(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		// temp = new Vector2(temp.x, -temp.y);
		Vector2_t2156229523  L_14 = V_2;
		float L_15 = L_14.get_x_0();
		Vector2_t2156229523  L_16 = V_2;
		float L_17 = L_16.get_y_1();
		Vector2__ctor_m3970636864((Vector2_t2156229523 *)(&V_2), L_15, ((-L_17)), /*hidden argument*/NULL);
		// mat.SetTextureOffset(texName, temp);
		Material_t340375123 * L_18 = ___mat1;
		String_t* L_19 = ___texName2;
		Vector2_t2156229523  L_20 = V_2;
		NullCheck(L_18);
		Material_SetTextureOffset_m2380336123(L_18, L_19, L_20, /*hidden argument*/NULL);
		// mat.SetTextureScale(texName, ext.Scale.ToUnityVector2Raw());
		Material_t340375123 * L_21 = ___mat1;
		String_t* L_22 = ___texName2;
		ExtTextureTransformExtension_t1454646850 * L_23 = V_1;
		NullCheck(L_23);
		Vector2_t4136528133  L_24 = L_23->get_Scale_2();
		Vector2_t2156229523  L_25 = SchemaExtensions_ToUnityVector2Raw_m3238630761(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_21);
		Material_SetTextureScale_m1562018726(L_21, L_22, L_25, /*hidden argument*/NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator UnityGLTF.GLTFSceneImporter::LoadImage(System.String,GLTF.Schema.Image,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GLTFSceneImporter_LoadImage_m653685946 (GLTFSceneImporter_t274320441 * __this, String_t* ___rootPath0, Image_t782620675 * ___image1, int32_t ___imageID2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter_LoadImage_m653685946_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadImageU3Ed__34_t347840408 * L_0 = (U3CLoadImageU3Ed__34_t347840408 *)il2cpp_codegen_object_new(U3CLoadImageU3Ed__34_t347840408_il2cpp_TypeInfo_var);
		U3CLoadImageU3Ed__34__ctor_m3433464278(L_0, 0, /*hidden argument*/NULL);
		U3CLoadImageU3Ed__34_t347840408 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CLoadImageU3Ed__34_t347840408 * L_2 = L_1;
		String_t* L_3 = ___rootPath0;
		NullCheck(L_2);
		L_2->set_rootPath_5(L_3);
		U3CLoadImageU3Ed__34_t347840408 * L_4 = L_2;
		Image_t782620675 * L_5 = ___image1;
		NullCheck(L_4);
		L_4->set_image_4(L_5);
		U3CLoadImageU3Ed__34_t347840408 * L_6 = L_4;
		int32_t L_7 = ___imageID2;
		NullCheck(L_6);
		L_6->set_imageID_3(L_7);
		return L_6;
	}
}
// System.Collections.IEnumerator UnityGLTF.GLTFSceneImporter::LoadBuffer(System.String,GLTF.Schema.Buffer,System.Int32)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* GLTFSceneImporter_LoadBuffer_m2914567583 (GLTFSceneImporter_t274320441 * __this, String_t* ___sourceUri0, Buffer_t869705777 * ___buffer1, int32_t ___bufferIndex2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter_LoadBuffer_m2914567583_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadBufferU3Ed__35_t2608884095 * L_0 = (U3CLoadBufferU3Ed__35_t2608884095 *)il2cpp_codegen_object_new(U3CLoadBufferU3Ed__35_t2608884095_il2cpp_TypeInfo_var);
		U3CLoadBufferU3Ed__35__ctor_m4225273805(L_0, 0, /*hidden argument*/NULL);
		U3CLoadBufferU3Ed__35_t2608884095 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_3(__this);
		U3CLoadBufferU3Ed__35_t2608884095 * L_2 = L_1;
		String_t* L_3 = ___sourceUri0;
		NullCheck(L_2);
		L_2->set_sourceUri_4(L_3);
		U3CLoadBufferU3Ed__35_t2608884095 * L_4 = L_2;
		Buffer_t869705777 * L_5 = ___buffer1;
		NullCheck(L_4);
		L_4->set_buffer_2(L_5);
		U3CLoadBufferU3Ed__35_t2608884095 * L_6 = L_4;
		int32_t L_7 = ___bufferIndex2;
		NullCheck(L_6);
		L_6->set_bufferIndex_5(L_7);
		return L_6;
	}
}
// System.String UnityGLTF.GLTFSceneImporter::AbsoluteUriPath(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* GLTFSceneImporter_AbsoluteUriPath_m3886472302 (RuntimeObject * __this /* static, unused */, String_t* ___gltfPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter_AbsoluteUriPath_m3886472302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t100236324 * V_0 = NULL;
	{
		// var uri = new Uri(gltfPath);
		String_t* L_0 = ___gltfPath0;
		Uri_t100236324 * L_1 = (Uri_t100236324 *)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m800430703(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var partialPath = uri.AbsoluteUri.Remove(uri.AbsoluteUri.Length - uri.Query.Length - uri.Segments[uri.Segments.Length - 1].Length);
		Uri_t100236324 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = Uri_get_AbsoluteUri_m2582056986(L_2, /*hidden argument*/NULL);
		Uri_t100236324 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = Uri_get_AbsoluteUri_m2582056986(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = String_get_Length_m3847582255(L_5, /*hidden argument*/NULL);
		Uri_t100236324 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8 = Uri_get_Query_m2772518875(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m3847582255(L_8, /*hidden argument*/NULL);
		Uri_t100236324 * L_10 = V_0;
		NullCheck(L_10);
		StringU5BU5D_t1281789340* L_11 = Uri_get_Segments_m1268025026(L_10, /*hidden argument*/NULL);
		Uri_t100236324 * L_12 = V_0;
		NullCheck(L_12);
		StringU5BU5D_t1281789340* L_13 = Uri_get_Segments_m1268025026(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))), (int32_t)1));
		String_t* L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		int32_t L_16 = String_get_Length_m3847582255(L_15, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_17 = String_Remove_m1524948975(L_3, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_9)), (int32_t)L_16)), /*hidden argument*/NULL);
		// return partialPath;
		return L_17;
	}
}
// System.String UnityGLTF.GLTFSceneImporter::AbsoluteFilePath(System.String)
extern "C" IL2CPP_METHOD_ATTR String_t* GLTFSceneImporter_AbsoluteFilePath_m2222415970 (RuntimeObject * __this /* static, unused */, String_t* ___gltfPath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GLTFSceneImporter_AbsoluteFilePath_m2222415970_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var fileName = Path.GetFileName(gltfPath);
		String_t* L_0 = ___gltfPath0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_1 = Path_GetFileName_m1354558116(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var lastIndex = gltfPath.IndexOf(fileName);
		String_t* L_2 = ___gltfPath0;
		String_t* L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = String_IndexOf_m1977622757(L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// var partialPath = gltfPath.Substring(0, lastIndex);
		String_t* L_5 = ___gltfPath0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7 = String_Substring_m1610150815(L_5, 0, L_6, /*hidden argument*/NULL);
		// return partialPath;
		return L_7;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter::<ImportScene>b__22_0()
extern "C" IL2CPP_METHOD_ATTR void GLTFSceneImporter_U3CImportSceneU3Eb__22_0_m1839693015 (GLTFSceneImporter_t274320441 * __this, const RuntimeMethod* method)
{
	{
		// yield return _asyncAction.RunOnWorkerThread(() => BuildAttributesForMeshes());
		VirtActionInvoker0::Invoke(5 /* System.Void UnityGLTF.GLTFSceneImporter::BuildAttributesForMeshes() */, __this);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CImportSceneU3Ed__22__ctor_m2932397664 (U3CImportSceneU3Ed__22_t599600113 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CImportSceneU3Ed__22_System_IDisposable_Dispose_m1970460421 (U3CImportSceneU3Ed__22_t599600113 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CImportSceneU3Ed__22_MoveNext_m4284647012 (U3CImportSceneU3Ed__22_t599600113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CImportSceneU3Ed__22_MoveNext_m4284647012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_t274320441 * V_1 = NULL;
	GameObject_t1113636619 * V_2 = NULL;
	Buffer_t869705777 * V_3 = NULL;
	int32_t V_4 = 0;
	Image_t782620675 * V_5 = NULL;
	GLTFSceneImporter_t274320441 * G_B10_0 = NULL;
	GLTFSceneImporter_t274320441 * G_B9_0 = NULL;
	int32_t G_B11_0 = 0;
	GLTFSceneImporter_t274320441 * G_B11_1 = NULL;
	int32_t G_B13_0 = 0;
	GLTFSceneImporter_t274320441 * G_B13_1 = NULL;
	int32_t G_B12_0 = 0;
	GLTFSceneImporter_t274320441 * G_B12_1 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	GLTFSceneImporter_t274320441 * G_B14_2 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	GLTFSceneImporter_t274320441 * G_B16_2 = NULL;
	int32_t G_B15_0 = 0;
	int32_t G_B15_1 = 0;
	GLTFSceneImporter_t274320441 * G_B15_2 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	GLTFSceneImporter_t274320441 * G_B17_3 = NULL;
	int32_t G_B19_0 = 0;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	GLTFSceneImporter_t274320441 * G_B19_3 = NULL;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	GLTFSceneImporter_t274320441 * G_B18_3 = NULL;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	GLTFSceneImporter_t274320441 * G_B20_4 = NULL;
	int32_t G_B22_0 = 0;
	int32_t G_B22_1 = 0;
	int32_t G_B22_2 = 0;
	int32_t G_B22_3 = 0;
	GLTFSceneImporter_t274320441 * G_B22_4 = NULL;
	int32_t G_B21_0 = 0;
	int32_t G_B21_1 = 0;
	int32_t G_B21_2 = 0;
	int32_t G_B21_3 = 0;
	GLTFSceneImporter_t274320441 * G_B21_4 = NULL;
	int32_t G_B23_0 = 0;
	int32_t G_B23_1 = 0;
	int32_t G_B23_2 = 0;
	int32_t G_B23_3 = 0;
	int32_t G_B23_4 = 0;
	GLTFSceneImporter_t274320441 * G_B23_5 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_t274320441 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_01a9;
			}
			case 2:
			{
				goto IL_0293;
			}
			case 3:
			{
				goto IL_02f2;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (sceneIndex >= 0 && sceneIndex < _root.Scenes.Count)
		int32_t L_3 = __this->get_sceneIndex_2();
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_4 = __this->get_sceneIndex_2();
		GLTFSceneImporter_t274320441 * L_5 = V_1;
		NullCheck(L_5);
		GLTFRoot_t676886847 * L_6 = L_5->get__root_8();
		NullCheck(L_6);
		List_1_t3427735747 * L_7 = L_6->get_Scenes_20();
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_m3096908490(L_7, /*hidden argument*/List_1_get_Count_m3096908490_RuntimeMethod_var);
		if ((((int32_t)L_4) >= ((int32_t)L_8)))
		{
			goto IL_006c;
		}
	}
	{
		// scene = _root.Scenes[sceneIndex];
		GLTFSceneImporter_t274320441 * L_9 = V_1;
		NullCheck(L_9);
		GLTFRoot_t676886847 * L_10 = L_9->get__root_8();
		NullCheck(L_10);
		List_1_t3427735747 * L_11 = L_10->get_Scenes_20();
		int32_t L_12 = __this->get_sceneIndex_2();
		NullCheck(L_11);
		Scene_t1955661005 * L_13 = List_1_get_Item_m2012599669(L_11, L_12, /*hidden argument*/List_1_get_Item_m2012599669_RuntimeMethod_var);
		__this->set_U3CsceneU3E5__2_5(L_13);
		// }
		goto IL_007d;
	}

IL_006c:
	{
		// scene = _root.GetDefaultScene();
		GLTFSceneImporter_t274320441 * L_14 = V_1;
		NullCheck(L_14);
		GLTFRoot_t676886847 * L_15 = L_14->get__root_8();
		NullCheck(L_15);
		Scene_t1955661005 * L_16 = GLTFRoot_GetDefaultScene_m366375611(L_15, /*hidden argument*/NULL);
		__this->set_U3CsceneU3E5__2_5(L_16);
	}

IL_007d:
	{
		// if (scene == null)
		Scene_t1955661005 * L_17 = __this->get_U3CsceneU3E5__2_5();
		if (L_17)
		{
			goto IL_0090;
		}
	}
	{
		// throw new Exception("No default scene in gltf file.");
		Exception_t * L_18 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_18, _stringLiteral218779911, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, NULL, U3CImportSceneU3Ed__22_MoveNext_m4284647012_RuntimeMethod_var);
	}

IL_0090:
	{
		// _assetCache = new AssetCache(
		//     _root.Images != null ? _root.Images.Count : 0,
		//     _root.Textures != null ? _root.Textures.Count : 0,
		//     _root.Materials != null ? _root.Materials.Count : 0,
		//     _root.Buffers != null ? _root.Buffers.Count : 0,
		//     _root.Meshes != null ? _root.Meshes.Count : 0
		// );
		GLTFSceneImporter_t274320441 * L_19 = V_1;
		GLTFSceneImporter_t274320441 * L_20 = V_1;
		NullCheck(L_20);
		GLTFRoot_t676886847 * L_21 = L_20->get__root_8();
		NullCheck(L_21);
		List_1_t2254695417 * L_22 = L_21->get_Images_14();
		G_B9_0 = L_19;
		if (L_22)
		{
			G_B10_0 = L_19;
			goto IL_00a1;
		}
	}
	{
		G_B11_0 = 0;
		G_B11_1 = G_B9_0;
		goto IL_00b1;
	}

IL_00a1:
	{
		GLTFSceneImporter_t274320441 * L_23 = V_1;
		NullCheck(L_23);
		GLTFRoot_t676886847 * L_24 = L_23->get__root_8();
		NullCheck(L_24);
		List_1_t2254695417 * L_25 = L_24->get_Images_14();
		NullCheck(L_25);
		int32_t L_26 = List_1_get_Count_m2233704377(L_25, /*hidden argument*/List_1_get_Count_m2233704377_RuntimeMethod_var);
		G_B11_0 = L_26;
		G_B11_1 = G_B10_0;
	}

IL_00b1:
	{
		GLTFSceneImporter_t274320441 * L_27 = V_1;
		NullCheck(L_27);
		GLTFRoot_t676886847 * L_28 = L_27->get__root_8();
		NullCheck(L_28);
		List_1_t2284271573 * L_29 = L_28->get_Textures_22();
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
		if (L_29)
		{
			G_B13_0 = G_B11_0;
			G_B13_1 = G_B11_1;
			goto IL_00c1;
		}
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_00d1;
	}

IL_00c1:
	{
		GLTFSceneImporter_t274320441 * L_30 = V_1;
		NullCheck(L_30);
		GLTFRoot_t676886847 * L_31 = L_30->get__root_8();
		NullCheck(L_31);
		List_1_t2284271573 * L_32 = L_31->get_Textures_22();
		NullCheck(L_32);
		int32_t L_33 = List_1_get_Count_m1059274901(L_32, /*hidden argument*/List_1_get_Count_m1059274901_RuntimeMethod_var);
		G_B14_0 = L_33;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_00d1:
	{
		GLTFSceneImporter_t274320441 * L_34 = V_1;
		NullCheck(L_34);
		GLTFRoot_t676886847 * L_35 = L_34->get__root_8();
		NullCheck(L_35);
		List_1_t4262593585 * L_36 = L_35->get_Materials_15();
		G_B15_0 = G_B14_0;
		G_B15_1 = G_B14_1;
		G_B15_2 = G_B14_2;
		if (L_36)
		{
			G_B16_0 = G_B14_0;
			G_B16_1 = G_B14_1;
			G_B16_2 = G_B14_2;
			goto IL_00e1;
		}
	}
	{
		G_B17_0 = 0;
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		G_B17_3 = G_B15_2;
		goto IL_00f1;
	}

IL_00e1:
	{
		GLTFSceneImporter_t274320441 * L_37 = V_1;
		NullCheck(L_37);
		GLTFRoot_t676886847 * L_38 = L_37->get__root_8();
		NullCheck(L_38);
		List_1_t4262593585 * L_39 = L_38->get_Materials_15();
		NullCheck(L_39);
		int32_t L_40 = List_1_get_Count_m430863746(L_39, /*hidden argument*/List_1_get_Count_m430863746_RuntimeMethod_var);
		G_B17_0 = L_40;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
	}

IL_00f1:
	{
		GLTFSceneImporter_t274320441 * L_41 = V_1;
		NullCheck(L_41);
		GLTFRoot_t676886847 * L_42 = L_41->get__root_8();
		NullCheck(L_42);
		List_1_t2341780519 * L_43 = L_42->get_Buffers_11();
		G_B18_0 = G_B17_0;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		if (L_43)
		{
			G_B19_0 = G_B17_0;
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_0101;
		}
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_0;
		G_B20_2 = G_B18_1;
		G_B20_3 = G_B18_2;
		G_B20_4 = G_B18_3;
		goto IL_0111;
	}

IL_0101:
	{
		GLTFSceneImporter_t274320441 * L_44 = V_1;
		NullCheck(L_44);
		GLTFRoot_t676886847 * L_45 = L_44->get__root_8();
		NullCheck(L_45);
		List_1_t2341780519 * L_46 = L_45->get_Buffers_11();
		NullCheck(L_46);
		int32_t L_47 = List_1_get_Count_m4192079870(L_46, /*hidden argument*/List_1_get_Count_m4192079870_RuntimeMethod_var);
		G_B20_0 = L_47;
		G_B20_1 = G_B19_0;
		G_B20_2 = G_B19_1;
		G_B20_3 = G_B19_2;
		G_B20_4 = G_B19_3;
	}

IL_0111:
	{
		GLTFSceneImporter_t274320441 * L_48 = V_1;
		NullCheck(L_48);
		GLTFRoot_t676886847 * L_49 = L_48->get__root_8();
		NullCheck(L_49);
		List_1_t4198337971 * L_50 = L_49->get_Meshes_16();
		G_B21_0 = G_B20_0;
		G_B21_1 = G_B20_1;
		G_B21_2 = G_B20_2;
		G_B21_3 = G_B20_3;
		G_B21_4 = G_B20_4;
		if (L_50)
		{
			G_B22_0 = G_B20_0;
			G_B22_1 = G_B20_1;
			G_B22_2 = G_B20_2;
			G_B22_3 = G_B20_3;
			G_B22_4 = G_B20_4;
			goto IL_0121;
		}
	}
	{
		G_B23_0 = 0;
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		G_B23_3 = G_B21_2;
		G_B23_4 = G_B21_3;
		G_B23_5 = G_B21_4;
		goto IL_0131;
	}

IL_0121:
	{
		GLTFSceneImporter_t274320441 * L_51 = V_1;
		NullCheck(L_51);
		GLTFRoot_t676886847 * L_52 = L_51->get__root_8();
		NullCheck(L_52);
		List_1_t4198337971 * L_53 = L_52->get_Meshes_16();
		NullCheck(L_53);
		int32_t L_54 = List_1_get_Count_m2917776829(L_53, /*hidden argument*/List_1_get_Count_m2917776829_RuntimeMethod_var);
		G_B23_0 = L_54;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
		G_B23_3 = G_B22_2;
		G_B23_4 = G_B22_3;
		G_B23_5 = G_B22_4;
	}

IL_0131:
	{
		AssetCache_t783611398 * L_55 = (AssetCache_t783611398 *)il2cpp_codegen_object_new(AssetCache_t783611398_il2cpp_TypeInfo_var);
		AssetCache__ctor_m3878621961(L_55, G_B23_4, G_B23_3, G_B23_2, G_B23_1, G_B23_0, /*hidden argument*/NULL);
		NullCheck(G_B23_5);
		G_B23_5->set__assetCache_9(L_55);
		// if (_lastLoadedScene == null)
		GLTFSceneImporter_t274320441 * L_56 = V_1;
		NullCheck(L_56);
		GameObject_t1113636619 * L_57 = L_56->get__lastLoadedScene_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_58 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_57, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_58)
		{
			goto IL_02f9;
		}
	}
	{
		// if (_root.Buffers != null)
		GLTFSceneImporter_t274320441 * L_59 = V_1;
		NullCheck(L_59);
		GLTFRoot_t676886847 * L_60 = L_59->get__root_8();
		NullCheck(L_60);
		List_1_t2341780519 * L_61 = L_60->get_Buffers_11();
		if (!L_61)
		{
			goto IL_0242;
		}
	}
	{
		// for (int i = 0; i < _root.Buffers.Count; ++i)
		__this->set_U3CiU3E5__3_6(0);
		goto IL_0227;
	}

IL_0168:
	{
		// GLTF.Schema.Buffer buffer = _root.Buffers[i];
		GLTFSceneImporter_t274320441 * L_62 = V_1;
		NullCheck(L_62);
		GLTFRoot_t676886847 * L_63 = L_62->get__root_8();
		NullCheck(L_63);
		List_1_t2341780519 * L_64 = L_63->get_Buffers_11();
		int32_t L_65 = __this->get_U3CiU3E5__3_6();
		NullCheck(L_64);
		Buffer_t869705777 * L_66 = List_1_get_Item_m3831054255(L_64, L_65, /*hidden argument*/List_1_get_Item_m3831054255_RuntimeMethod_var);
		V_3 = L_66;
		// if (buffer.Uri != null)
		Buffer_t869705777 * L_67 = V_3;
		NullCheck(L_67);
		String_t* L_68 = L_67->get_Uri_7();
		if (!L_68)
		{
			goto IL_01b2;
		}
	}
	{
		// yield return LoadBuffer(_gltfDirectoryPath, buffer, i);
		GLTFSceneImporter_t274320441 * L_69 = V_1;
		GLTFSceneImporter_t274320441 * L_70 = V_1;
		NullCheck(L_70);
		String_t* L_71 = L_70->get__gltfDirectoryPath_6();
		Buffer_t869705777 * L_72 = V_3;
		int32_t L_73 = __this->get_U3CiU3E5__3_6();
		NullCheck(L_69);
		RuntimeObject* L_74 = VirtFuncInvoker3< RuntimeObject*, String_t*, Buffer_t869705777 *, int32_t >::Invoke(15 /* System.Collections.IEnumerator UnityGLTF.GLTFSceneImporter::LoadBuffer(System.String,GLTF.Schema.Buffer,System.Int32) */, L_69, L_71, L_72, L_73);
		__this->set_U3CU3E2__current_1(L_74);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_01a9:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		goto IL_0215;
	}

IL_01b2:
	{
		// GLTFParser.SeekToBinaryChunk(_gltfStream.Stream, i, _gltfStream.StartPosition);
		GLTFSceneImporter_t274320441 * L_75 = V_1;
		NullCheck(L_75);
		GLBStream_t3327861285 * L_76 = L_75->get_address_of__gltfStream_7();
		Stream_t1273022909 * L_77 = L_76->get_Stream_0();
		int32_t L_78 = __this->get_U3CiU3E5__3_6();
		GLTFSceneImporter_t274320441 * L_79 = V_1;
		NullCheck(L_79);
		GLBStream_t3327861285 * L_80 = L_79->get_address_of__gltfStream_7();
		int64_t L_81 = L_80->get_StartPosition_1();
		GLTFParser_SeekToBinaryChunk_m1369199918(NULL /*static, unused*/, L_77, L_78, L_81, /*hidden argument*/NULL);
		// _assetCache.BufferCache[i] = new BufferCacheData()
		// {
		//     ChunkOffset = _gltfStream.Stream.Position,
		//     Stream = _gltfStream.Stream
		// };
		GLTFSceneImporter_t274320441 * L_82 = V_1;
		NullCheck(L_82);
		AssetCache_t783611398 * L_83 = L_82->get__assetCache_9();
		NullCheck(L_83);
		Dictionary_2_t3293772351 * L_84 = AssetCache_get_BufferCache_m1575123264(L_83, /*hidden argument*/NULL);
		int32_t L_85 = __this->get_U3CiU3E5__3_6();
		BufferCacheData_t110091724 * L_86 = (BufferCacheData_t110091724 *)il2cpp_codegen_object_new(BufferCacheData_t110091724_il2cpp_TypeInfo_var);
		BufferCacheData__ctor_m753061382(L_86, /*hidden argument*/NULL);
		BufferCacheData_t110091724 * L_87 = L_86;
		GLTFSceneImporter_t274320441 * L_88 = V_1;
		NullCheck(L_88);
		GLBStream_t3327861285 * L_89 = L_88->get_address_of__gltfStream_7();
		Stream_t1273022909 * L_90 = L_89->get_Stream_0();
		NullCheck(L_90);
		int64_t L_91 = VirtFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Position() */, L_90);
		NullCheck(L_87);
		BufferCacheData_set_ChunkOffset_m2432482419(L_87, L_91, /*hidden argument*/NULL);
		BufferCacheData_t110091724 * L_92 = L_87;
		GLTFSceneImporter_t274320441 * L_93 = V_1;
		NullCheck(L_93);
		GLBStream_t3327861285 * L_94 = L_93->get_address_of__gltfStream_7();
		Stream_t1273022909 * L_95 = L_94->get_Stream_0();
		NullCheck(L_92);
		BufferCacheData_set_Stream_m2562676033(L_92, L_95, /*hidden argument*/NULL);
		NullCheck(L_84);
		Dictionary_2_set_Item_m329187123(L_84, L_85, L_92, /*hidden argument*/Dictionary_2_set_Item_m329187123_RuntimeMethod_var);
	}

IL_0215:
	{
		// for (int i = 0; i < _root.Buffers.Count; ++i)
		int32_t L_96 = __this->get_U3CiU3E5__3_6();
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_96, (int32_t)1));
		int32_t L_97 = V_4;
		__this->set_U3CiU3E5__3_6(L_97);
	}

IL_0227:
	{
		// for (int i = 0; i < _root.Buffers.Count; ++i)
		int32_t L_98 = __this->get_U3CiU3E5__3_6();
		GLTFSceneImporter_t274320441 * L_99 = V_1;
		NullCheck(L_99);
		GLTFRoot_t676886847 * L_100 = L_99->get__root_8();
		NullCheck(L_100);
		List_1_t2341780519 * L_101 = L_100->get_Buffers_11();
		NullCheck(L_101);
		int32_t L_102 = List_1_get_Count_m4192079870(L_101, /*hidden argument*/List_1_get_Count_m4192079870_RuntimeMethod_var);
		if ((((int32_t)L_98) < ((int32_t)L_102)))
		{
			goto IL_0168;
		}
	}

IL_0242:
	{
		// if (_root.Images != null)
		GLTFSceneImporter_t274320441 * L_103 = V_1;
		NullCheck(L_103);
		GLTFRoot_t676886847 * L_104 = L_103->get__root_8();
		NullCheck(L_104);
		List_1_t2254695417 * L_105 = L_104->get_Images_14();
		if (!L_105)
		{
			goto IL_02c4;
		}
	}
	{
		// for (int i = 0; i < _root.Images.Count; ++i)
		__this->set_U3CiU3E5__3_6(0);
		goto IL_02ac;
	}

IL_0258:
	{
		// Image image = _root.Images[i];
		GLTFSceneImporter_t274320441 * L_106 = V_1;
		NullCheck(L_106);
		GLTFRoot_t676886847 * L_107 = L_106->get__root_8();
		NullCheck(L_107);
		List_1_t2254695417 * L_108 = L_107->get_Images_14();
		int32_t L_109 = __this->get_U3CiU3E5__3_6();
		NullCheck(L_108);
		Image_t782620675 * L_110 = List_1_get_Item_m4240667468(L_108, L_109, /*hidden argument*/List_1_get_Item_m4240667468_RuntimeMethod_var);
		V_5 = L_110;
		// yield return LoadImage(_gltfDirectoryPath, image, i);
		GLTFSceneImporter_t274320441 * L_111 = V_1;
		GLTFSceneImporter_t274320441 * L_112 = V_1;
		NullCheck(L_112);
		String_t* L_113 = L_112->get__gltfDirectoryPath_6();
		Image_t782620675 * L_114 = V_5;
		int32_t L_115 = __this->get_U3CiU3E5__3_6();
		NullCheck(L_111);
		RuntimeObject* L_116 = VirtFuncInvoker3< RuntimeObject*, String_t*, Image_t782620675 *, int32_t >::Invoke(14 /* System.Collections.IEnumerator UnityGLTF.GLTFSceneImporter::LoadImage(System.String,GLTF.Schema.Image,System.Int32) */, L_111, L_113, L_114, L_115);
		__this->set_U3CU3E2__current_1(L_116);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0293:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (int i = 0; i < _root.Images.Count; ++i)
		int32_t L_117 = __this->get_U3CiU3E5__3_6();
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)1));
		int32_t L_118 = V_4;
		__this->set_U3CiU3E5__3_6(L_118);
	}

IL_02ac:
	{
		// for (int i = 0; i < _root.Images.Count; ++i)
		int32_t L_119 = __this->get_U3CiU3E5__3_6();
		GLTFSceneImporter_t274320441 * L_120 = V_1;
		NullCheck(L_120);
		GLTFRoot_t676886847 * L_121 = L_120->get__root_8();
		NullCheck(L_121);
		List_1_t2254695417 * L_122 = L_121->get_Images_14();
		NullCheck(L_122);
		int32_t L_123 = List_1_get_Count_m2233704377(L_122, /*hidden argument*/List_1_get_Count_m2233704377_RuntimeMethod_var);
		if ((((int32_t)L_119) < ((int32_t)L_123)))
		{
			goto IL_0258;
		}
	}

IL_02c4:
	{
		// if (isMultithreaded)
		bool L_124 = __this->get_isMultithreaded_4();
		if (!L_124)
		{
			goto IL_02f9;
		}
	}
	{
		// yield return _asyncAction.RunOnWorkerThread(() => BuildAttributesForMeshes());
		GLTFSceneImporter_t274320441 * L_125 = V_1;
		NullCheck(L_125);
		AsyncAction_t3334821446 * L_126 = L_125->get__asyncAction_10();
		GLTFSceneImporter_t274320441 * L_127 = V_1;
		intptr_t L_128 = (intptr_t)GLTFSceneImporter_U3CImportSceneU3Eb__22_0_m1839693015_RuntimeMethod_var;
		Action_t1264377477 * L_129 = (Action_t1264377477 *)il2cpp_codegen_object_new(Action_t1264377477_il2cpp_TypeInfo_var);
		Action__ctor_m75143462(L_129, L_127, (intptr_t)L_128, /*hidden argument*/NULL);
		NullCheck(L_126);
		RuntimeObject* L_130 = AsyncAction_RunOnWorkerThread_m958225134(L_126, L_129, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_130);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_02f2:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_02f9:
	{
		// var sceneObj = CreateScene(scene);
		GLTFSceneImporter_t274320441 * L_131 = V_1;
		Scene_t1955661005 * L_132 = __this->get_U3CsceneU3E5__2_5();
		NullCheck(L_131);
		GameObject_t1113636619 * L_133 = VirtFuncInvoker1< GameObject_t1113636619 *, Scene_t1955661005 * >::Invoke(7 /* UnityEngine.GameObject UnityGLTF.GLTFSceneImporter::CreateScene(GLTF.Schema.Scene) */, L_131, L_132);
		V_2 = L_133;
		// if (_sceneParent != null)
		GLTFSceneImporter_t274320441 * L_134 = V_1;
		NullCheck(L_134);
		Transform_t3600365921 * L_135 = L_134->get__sceneParent_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_136 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_135, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_136)
		{
			goto IL_0326;
		}
	}
	{
		// sceneObj.transform.SetParent(_sceneParent, false);
		GameObject_t1113636619 * L_137 = V_2;
		NullCheck(L_137);
		Transform_t3600365921 * L_138 = GameObject_get_transform_m1369836730(L_137, /*hidden argument*/NULL);
		GLTFSceneImporter_t274320441 * L_139 = V_1;
		NullCheck(L_139);
		Transform_t3600365921 * L_140 = L_139->get__sceneParent_1();
		NullCheck(L_138);
		Transform_SetParent_m273471670(L_138, L_140, (bool)0, /*hidden argument*/NULL);
	}

IL_0326:
	{
		// _lastLoadedScene = sceneObj;
		GLTFSceneImporter_t274320441 * L_141 = V_1;
		GameObject_t1113636619 * L_142 = V_2;
		NullCheck(L_141);
		L_141->set__lastLoadedScene_0(L_142);
		// }
		return (bool)0;
	}
}
// System.Object UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CImportSceneU3Ed__22_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1294374346 (U3CImportSceneU3Ed__22_t599600113 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CImportSceneU3Ed__22_System_Collections_IEnumerator_Reset_m1384092205 (U3CImportSceneU3Ed__22_t599600113 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CImportSceneU3Ed__22_System_Collections_IEnumerator_Reset_m1384092205_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CImportSceneU3Ed__22_System_Collections_IEnumerator_Reset_m1384092205_RuntimeMethod_var);
	}
}
// System.Object UnityGLTF.GLTFSceneImporter/<ImportScene>d__22::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CImportSceneU3Ed__22_System_Collections_IEnumerator_get_Current_m3450915259 (U3CImportSceneU3Ed__22_t599600113 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter/<Load>d__21::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CLoadU3Ed__21__ctor_m4022723356 (U3CLoadU3Ed__21_t2072795234 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter/<Load>d__21::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadU3Ed__21_System_IDisposable_Dispose_m2265447899 (U3CLoadU3Ed__21_t2072795234 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityGLTF.GLTFSceneImporter/<Load>d__21::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CLoadU3Ed__21_MoveNext_m1636262611 (U3CLoadU3Ed__21_t2072795234 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadU3Ed__21_MoveNext_m1636262611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_t274320441 * V_1 = NULL;
	ByteU5BU5D_t4116647657* V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_t274320441 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_0129;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (_loadType == LoadType.Uri)
		GLTFSceneImporter_t274320441 * L_3 = V_1;
		NullCheck(L_3);
		int32_t L_4 = L_3->get__loadType_12();
		if (L_4)
		{
			goto IL_00c3;
		}
	}
	{
		// var www = UnityWebRequest.Get(_gltfUrl);
		GLTFSceneImporter_t274320441 * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6 = L_5->get__gltfUrl_5();
		UnityWebRequest_t463507806 * L_7 = UnityWebRequest_Get_m996521828(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__2_5(L_7);
		// yield return www.SendWebRequest();
		UnityWebRequest_t463507806 * L_8 = __this->get_U3CwwwU3E5__2_5();
		NullCheck(L_8);
		UnityWebRequestAsyncOperation_t3852015985 * L_9 = UnityWebRequest_SendWebRequest_m489860187(L_8, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (www.responseCode >= 400 || www.responseCode == 0)
		UnityWebRequest_t463507806 * L_10 = __this->get_U3CwwwU3E5__2_5();
		NullCheck(L_10);
		int64_t L_11 = UnityWebRequest_get_responseCode_m1090830473(L_10, /*hidden argument*/NULL);
		if ((((int64_t)L_11) >= ((int64_t)(((int64_t)((int64_t)((int32_t)400)))))))
		{
			goto IL_0086;
		}
	}
	{
		UnityWebRequest_t463507806 * L_12 = __this->get_U3CwwwU3E5__2_5();
		NullCheck(L_12);
		int64_t L_13 = UnityWebRequest_get_responseCode_m1090830473(L_12, /*hidden argument*/NULL);
		if (L_13)
		{
			goto IL_0092;
		}
	}

IL_0086:
	{
		// throw new WebRequestException(www);
		UnityWebRequest_t463507806 * L_14 = __this->get_U3CwwwU3E5__2_5();
		WebRequestException_t1410780468 * L_15 = (WebRequestException_t1410780468 *)il2cpp_codegen_object_new(WebRequestException_t1410780468_il2cpp_TypeInfo_var);
		WebRequestException__ctor_m376355303(L_15, L_14, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, NULL, U3CLoadU3Ed__21_MoveNext_m1636262611_RuntimeMethod_var);
	}

IL_0092:
	{
		// byte[] gltfData = www.downloadHandler.data;
		UnityWebRequest_t463507806 * L_16 = __this->get_U3CwwwU3E5__2_5();
		NullCheck(L_16);
		DownloadHandler_t2937767557 * L_17 = UnityWebRequest_get_downloadHandler_m534911913(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		ByteU5BU5D_t4116647657* L_18 = DownloadHandler_get_data_m1669096410(L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		// _gltfStream.Stream = new MemoryStream(gltfData, 0, gltfData.Length, false, true);
		GLTFSceneImporter_t274320441 * L_19 = V_1;
		NullCheck(L_19);
		GLBStream_t3327861285 * L_20 = L_19->get_address_of__gltfStream_7();
		ByteU5BU5D_t4116647657* L_21 = V_2;
		ByteU5BU5D_t4116647657* L_22 = V_2;
		NullCheck(L_22);
		MemoryStream_t94973147 * L_23 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2399756175(L_23, L_21, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_22)->max_length)))), (bool)0, (bool)1, /*hidden argument*/NULL);
		L_20->set_Stream_0(L_23);
		// }
		__this->set_U3CwwwU3E5__2_5((UnityWebRequest_t463507806 *)NULL);
		goto IL_00e7;
	}

IL_00c3:
	{
		// else if (_loadType == LoadType.Stream)
		GLTFSceneImporter_t274320441 * L_24 = V_1;
		NullCheck(L_24);
		int32_t L_25 = L_24->get__loadType_12();
		if ((((int32_t)L_25) == ((int32_t)1)))
		{
			goto IL_00e7;
		}
	}
	{
		// throw new Exception("Invalid load type specified: " + _loadType);
		GLTFSceneImporter_t274320441 * L_26 = V_1;
		NullCheck(L_26);
		int32_t L_27 = L_26->get__loadType_12();
		int32_t L_28 = L_27;
		RuntimeObject * L_29 = Box(LoadType_t225521639_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30 = String_Concat_m904156431(NULL /*static, unused*/, _stringLiteral4142678977, L_29, /*hidden argument*/NULL);
		Exception_t * L_31 = (Exception_t *)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(L_31, L_30, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, NULL, U3CLoadU3Ed__21_MoveNext_m1636262611_RuntimeMethod_var);
	}

IL_00e7:
	{
		// _root = GLTFParser.ParseJson(_gltfStream.Stream, _gltfStream.StartPosition);
		GLTFSceneImporter_t274320441 * L_32 = V_1;
		GLTFSceneImporter_t274320441 * L_33 = V_1;
		NullCheck(L_33);
		GLBStream_t3327861285 * L_34 = L_33->get_address_of__gltfStream_7();
		Stream_t1273022909 * L_35 = L_34->get_Stream_0();
		GLTFSceneImporter_t274320441 * L_36 = V_1;
		NullCheck(L_36);
		GLBStream_t3327861285 * L_37 = L_36->get_address_of__gltfStream_7();
		int64_t L_38 = L_37->get_StartPosition_1();
		GLTFRoot_t676886847 * L_39 = GLTFParser_ParseJson_m1570455109(NULL /*static, unused*/, L_35, L_38, /*hidden argument*/NULL);
		NullCheck(L_32);
		L_32->set__root_8(L_39);
		// yield return ImportScene(sceneIndex, isMultithreaded);
		GLTFSceneImporter_t274320441 * L_40 = V_1;
		int32_t L_41 = __this->get_sceneIndex_3();
		bool L_42 = __this->get_isMultithreaded_4();
		NullCheck(L_40);
		RuntimeObject* L_43 = GLTFSceneImporter_ImportScene_m2136484356(L_40, L_41, L_42, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_43);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0129:
	{
		__this->set_U3CU3E1__state_0((-1));
		// }
		return (bool)0;
	}
}
// System.Object UnityGLTF.GLTFSceneImporter/<Load>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m440031946 (U3CLoadU3Ed__21_t2072795234 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter/<Load>d__21::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadU3Ed__21_System_Collections_IEnumerator_Reset_m2257599618 (U3CLoadU3Ed__21_t2072795234 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadU3Ed__21_System_Collections_IEnumerator_Reset_m2257599618_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CLoadU3Ed__21_System_Collections_IEnumerator_Reset_m2257599618_RuntimeMethod_var);
	}
}
// System.Object UnityGLTF.GLTFSceneImporter/<Load>d__21::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadU3Ed__21_System_Collections_IEnumerator_get_Current_m2175357321 (U3CLoadU3Ed__21_t2072795234 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CLoadBufferU3Ed__35__ctor_m4225273805 (U3CLoadBufferU3Ed__35_t2608884095 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadBufferU3Ed__35_System_IDisposable_Dispose_m2170182291 (U3CLoadBufferU3Ed__35_t2608884095 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CLoadBufferU3Ed__35_MoveNext_m1135036225 (U3CLoadBufferU3Ed__35_t2608884095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadBufferU3Ed__35_MoveNext_m1135036225_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_t274320441 * V_1 = NULL;
	Stream_t1273022909 * V_2 = NULL;
	Match_t3408321083 * V_3 = NULL;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_t274320441 * L_1 = __this->get_U3CU3E4__this_3();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00cc;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (buffer.Uri != null)
		Buffer_t869705777 * L_4 = __this->get_buffer_2();
		NullCheck(L_4);
		String_t* L_5 = L_4->get_Uri_7();
		if (!L_5)
		{
			goto IL_0150;
		}
	}
	{
		// Stream bufferStream = null;
		V_2 = (Stream_t1273022909 *)NULL;
		// var uri = buffer.Uri;
		Buffer_t869705777 * L_6 = __this->get_buffer_2();
		NullCheck(L_6);
		String_t* L_7 = L_6->get_Uri_7();
		__this->set_U3CuriU3E5__2_6(L_7);
		// Regex regex = new Regex(Base64StringInitializer);
		Regex_t3657309853 * L_8 = (Regex_t3657309853 *)il2cpp_codegen_object_new(Regex_t3657309853_il2cpp_TypeInfo_var);
		Regex__ctor_m3948448025(L_8, _stringLiteral2758179804, /*hidden argument*/NULL);
		// Match match = regex.Match(uri);
		String_t* L_9 = __this->get_U3CuriU3E5__2_6();
		NullCheck(L_8);
		Match_t3408321083 * L_10 = Regex_Match_m2255756165(L_8, L_9, /*hidden argument*/NULL);
		V_3 = L_10;
		// if (match.Success)
		Match_t3408321083 * L_11 = V_3;
		NullCheck(L_11);
		bool L_12 = Group_get_Success_m3823591889(L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_008e;
		}
	}
	{
		// string base64String = uri.Substring(match.Length);
		String_t* L_13 = __this->get_U3CuriU3E5__2_6();
		Match_t3408321083 * L_14 = V_3;
		NullCheck(L_14);
		int32_t L_15 = Capture_get_Length_m4245536461(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		String_t* L_16 = String_Substring_m2848979100(L_13, L_15, /*hidden argument*/NULL);
		// byte[] base64ByteData = Convert.FromBase64String(base64String);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_17 = Convert_FromBase64String_m3685135396(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		V_4 = L_17;
		// bufferStream = new MemoryStream(base64ByteData, 0, base64ByteData.Length, false, true);
		ByteU5BU5D_t4116647657* L_18 = V_4;
		ByteU5BU5D_t4116647657* L_19 = V_4;
		NullCheck(L_19);
		MemoryStream_t94973147 * L_20 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2399756175(L_20, L_18, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))), (bool)0, (bool)1, /*hidden argument*/NULL);
		V_2 = L_20;
		// }
		goto IL_0127;
	}

IL_008e:
	{
		// else if (_loadType == LoadType.Uri)
		GLTFSceneImporter_t274320441 * L_21 = V_1;
		NullCheck(L_21);
		int32_t L_22 = L_21->get__loadType_12();
		if (L_22)
		{
			goto IL_0107;
		}
	}
	{
		// var www = UnityWebRequest.Get(Path.Combine(sourceUri, uri));
		String_t* L_23 = __this->get_sourceUri_4();
		String_t* L_24 = __this->get_U3CuriU3E5__2_6();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_25 = Path_Combine_m3389272516(NULL /*static, unused*/, L_23, L_24, /*hidden argument*/NULL);
		UnityWebRequest_t463507806 * L_26 = UnityWebRequest_Get_m996521828(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__3_7(L_26);
		// yield return www.SendWebRequest();
		UnityWebRequest_t463507806 * L_27 = __this->get_U3CwwwU3E5__3_7();
		NullCheck(L_27);
		UnityWebRequestAsyncOperation_t3852015985 * L_28 = UnityWebRequest_SendWebRequest_m489860187(L_27, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_28);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00cc:
	{
		__this->set_U3CU3E1__state_0((-1));
		// bufferStream = new MemoryStream(www.downloadHandler.data, 0, www.downloadHandler.data.Length, false, true);
		UnityWebRequest_t463507806 * L_29 = __this->get_U3CwwwU3E5__3_7();
		NullCheck(L_29);
		DownloadHandler_t2937767557 * L_30 = UnityWebRequest_get_downloadHandler_m534911913(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		ByteU5BU5D_t4116647657* L_31 = DownloadHandler_get_data_m1669096410(L_30, /*hidden argument*/NULL);
		UnityWebRequest_t463507806 * L_32 = __this->get_U3CwwwU3E5__3_7();
		NullCheck(L_32);
		DownloadHandler_t2937767557 * L_33 = UnityWebRequest_get_downloadHandler_m534911913(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		ByteU5BU5D_t4116647657* L_34 = DownloadHandler_get_data_m1669096410(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		MemoryStream_t94973147 * L_35 = (MemoryStream_t94973147 *)il2cpp_codegen_object_new(MemoryStream_t94973147_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m2399756175(L_35, L_31, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length)))), (bool)0, (bool)1, /*hidden argument*/NULL);
		V_2 = L_35;
		// }
		__this->set_U3CwwwU3E5__3_7((UnityWebRequest_t463507806 *)NULL);
		goto IL_0127;
	}

IL_0107:
	{
		// else if (_loadType == LoadType.Stream)
		GLTFSceneImporter_t274320441 * L_36 = V_1;
		NullCheck(L_36);
		int32_t L_37 = L_36->get__loadType_12();
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_0127;
		}
	}
	{
		// var pathToLoad = Path.Combine(sourceUri, uri);
		String_t* L_38 = __this->get_sourceUri_4();
		String_t* L_39 = __this->get_U3CuriU3E5__2_6();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_40 = Path_Combine_m3389272516(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		// bufferStream = File.OpenRead(pathToLoad);
		FileStream_t4292183065 * L_41 = File_OpenRead_m2936789020(NULL /*static, unused*/, L_40, /*hidden argument*/NULL);
		V_2 = L_41;
	}

IL_0127:
	{
		// _assetCache.BufferCache[bufferIndex] = new BufferCacheData()
		// {
		//     Stream = bufferStream
		// };
		GLTFSceneImporter_t274320441 * L_42 = V_1;
		NullCheck(L_42);
		AssetCache_t783611398 * L_43 = L_42->get__assetCache_9();
		NullCheck(L_43);
		Dictionary_2_t3293772351 * L_44 = AssetCache_get_BufferCache_m1575123264(L_43, /*hidden argument*/NULL);
		int32_t L_45 = __this->get_bufferIndex_5();
		BufferCacheData_t110091724 * L_46 = (BufferCacheData_t110091724 *)il2cpp_codegen_object_new(BufferCacheData_t110091724_il2cpp_TypeInfo_var);
		BufferCacheData__ctor_m753061382(L_46, /*hidden argument*/NULL);
		BufferCacheData_t110091724 * L_47 = L_46;
		Stream_t1273022909 * L_48 = V_2;
		NullCheck(L_47);
		BufferCacheData_set_Stream_m2562676033(L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_44);
		Dictionary_2_set_Item_m329187123(L_44, L_45, L_47, /*hidden argument*/Dictionary_2_set_Item_m329187123_RuntimeMethod_var);
		// }
		__this->set_U3CuriU3E5__2_6((String_t*)NULL);
	}

IL_0150:
	{
		// }
		return (bool)0;
	}
}
// System.Object UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadBufferU3Ed__35_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1061952852 (U3CLoadBufferU3Ed__35_t2608884095 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadBufferU3Ed__35_System_Collections_IEnumerator_Reset_m956519408 (U3CLoadBufferU3Ed__35_t2608884095 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadBufferU3Ed__35_System_Collections_IEnumerator_Reset_m956519408_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CLoadBufferU3Ed__35_System_Collections_IEnumerator_Reset_m956519408_RuntimeMethod_var);
	}
}
// System.Object UnityGLTF.GLTFSceneImporter/<LoadBuffer>d__35::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadBufferU3Ed__35_System_Collections_IEnumerator_get_Current_m3481175457 (U3CLoadBufferU3Ed__35_t2608884095 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::.ctor(System.Int32)
extern "C" IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__34__ctor_m3433464278 (U3CLoadImageU3Ed__34_t347840408 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::System.IDisposable.Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__34_System_IDisposable_Dispose_m2761331438 (U3CLoadImageU3Ed__34_t347840408 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CLoadImageU3Ed__34_MoveNext_m3821244950 (U3CLoadImageU3Ed__34_t347840408 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadImageU3Ed__34_MoveNext_m3821244950_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GLTFSceneImporter_t274320441 * V_1 = NULL;
	Texture2D_t3840446185 * V_2 = NULL;
	Match_t3408321083 * V_3 = NULL;
	ByteU5BU5D_t4116647657* V_4 = NULL;
	Texture2D_t3840446185 * V_5 = NULL;
	FileStream_t4292183065 * V_6 = NULL;
	ByteU5BU5D_t4116647657* V_7 = NULL;
	BufferView_t2650099126 * V_8 = NULL;
	ByteU5BU5D_t4116647657* V_9 = NULL;
	BufferCacheData_t110091724 * V_10 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GLTFSceneImporter_t274320441 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00fe;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (_assetCache.ImageCache[imageID] == null)
		GLTFSceneImporter_t274320441 * L_4 = V_1;
		NullCheck(L_4);
		AssetCache_t783611398 * L_5 = L_4->get__assetCache_9();
		NullCheck(L_5);
		Texture2DU5BU5D_t149664596* L_6 = AssetCache_get_ImageCache_m3334297062(L_5, /*hidden argument*/NULL);
		int32_t L_7 = __this->get_imageID_3();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Texture2D_t3840446185 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_9, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0288;
		}
	}
	{
		// Texture2D texture = null;
		V_2 = (Texture2D_t3840446185 *)NULL;
		// if (image.Uri != null)
		Image_t782620675 * L_11 = __this->get_image_4();
		NullCheck(L_11);
		String_t* L_12 = L_11->get_Uri_7();
		if (!L_12)
		{
			goto IL_01f6;
		}
	}
	{
		// var uri = image.Uri;
		Image_t782620675 * L_13 = __this->get_image_4();
		NullCheck(L_13);
		String_t* L_14 = L_13->get_Uri_7();
		__this->set_U3CuriU3E5__2_6(L_14);
		// Regex regex = new Regex(Base64StringInitializer);
		Regex_t3657309853 * L_15 = (Regex_t3657309853 *)il2cpp_codegen_object_new(Regex_t3657309853_il2cpp_TypeInfo_var);
		Regex__ctor_m3948448025(L_15, _stringLiteral2758179804, /*hidden argument*/NULL);
		// Match match = regex.Match(uri);
		String_t* L_16 = __this->get_U3CuriU3E5__2_6();
		NullCheck(L_15);
		Match_t3408321083 * L_17 = Regex_Match_m2255756165(L_15, L_16, /*hidden argument*/NULL);
		V_3 = L_17;
		// if (match.Success)
		Match_t3408321083 * L_18 = V_3;
		NullCheck(L_18);
		bool L_19 = Group_get_Success_m3823591889(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00ad;
		}
	}
	{
		// var base64Data = uri.Substring(match.Length);
		String_t* L_20 = __this->get_U3CuriU3E5__2_6();
		Match_t3408321083 * L_21 = V_3;
		NullCheck(L_21);
		int32_t L_22 = Capture_get_Length_m4245536461(L_21, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_23 = String_Substring_m2848979100(L_20, L_22, /*hidden argument*/NULL);
		// var textureData = Convert.FromBase64String(base64Data);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t2465617642_il2cpp_TypeInfo_var);
		ByteU5BU5D_t4116647657* L_24 = Convert_FromBase64String_m3685135396(NULL /*static, unused*/, L_23, /*hidden argument*/NULL);
		V_4 = L_24;
		// texture = new Texture2D(0, 0);
		Texture2D_t3840446185 * L_25 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_25, 0, 0, /*hidden argument*/NULL);
		V_2 = L_25;
		// texture.LoadImage(textureData);
		Texture2D_t3840446185 * L_26 = V_2;
		ByteU5BU5D_t4116647657* L_27 = V_4;
		ImageConversion_LoadImage_m2182108104(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		// }
		goto IL_01ed;
	}

IL_00ad:
	{
		// else if (_loadType == LoadType.Uri)
		GLTFSceneImporter_t274320441 * L_28 = V_1;
		NullCheck(L_28);
		int32_t L_29 = L_28->get__loadType_12();
		if (L_29)
		{
			goto IL_0192;
		}
	}
	{
		// var www = UnityWebRequest.Get(Path.Combine(rootPath, uri));
		String_t* L_30 = __this->get_rootPath_5();
		String_t* L_31 = __this->get_U3CuriU3E5__2_6();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_32 = Path_Combine_m3389272516(NULL /*static, unused*/, L_30, L_31, /*hidden argument*/NULL);
		UnityWebRequest_t463507806 * L_33 = UnityWebRequest_Get_m996521828(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		__this->set_U3CwwwU3E5__3_7(L_33);
		// www.downloadHandler = new DownloadHandlerTexture();
		UnityWebRequest_t463507806 * L_34 = __this->get_U3CwwwU3E5__3_7();
		DownloadHandlerTexture_t2149801800 * L_35 = (DownloadHandlerTexture_t2149801800 *)il2cpp_codegen_object_new(DownloadHandlerTexture_t2149801800_il2cpp_TypeInfo_var);
		DownloadHandlerTexture__ctor_m1255013425(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		UnityWebRequest_set_downloadHandler_m970510352(L_34, L_35, /*hidden argument*/NULL);
		// yield return www.SendWebRequest();
		UnityWebRequest_t463507806 * L_36 = __this->get_U3CwwwU3E5__3_7();
		NullCheck(L_36);
		UnityWebRequestAsyncOperation_t3852015985 * L_37 = UnityWebRequest_SendWebRequest_m489860187(L_36, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_37);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00fe:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var tempTexture = DownloadHandlerTexture.GetContent(www);
		UnityWebRequest_t463507806 * L_38 = __this->get_U3CwwwU3E5__3_7();
		Texture2D_t3840446185 * L_39 = DownloadHandlerTexture_GetContent_m4103989158(NULL /*static, unused*/, L_38, /*hidden argument*/NULL);
		V_5 = L_39;
		// if (tempTexture != null)
		Texture2D_t3840446185 * L_40 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_41 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_40, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_014e;
		}
	}
	{
		// texture = new Texture2D(tempTexture.width, tempTexture.height, tempTexture.format, true);
		Texture2D_t3840446185 * L_42 = V_5;
		NullCheck(L_42);
		int32_t L_43 = VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_42);
		Texture2D_t3840446185 * L_44 = V_5;
		NullCheck(L_44);
		int32_t L_45 = VirtFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_44);
		Texture2D_t3840446185 * L_46 = V_5;
		NullCheck(L_46);
		int32_t L_47 = Texture2D_get_format_m2371899271(L_46, /*hidden argument*/NULL);
		Texture2D_t3840446185 * L_48 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m2862217990(L_48, L_43, L_45, L_47, (bool)1, /*hidden argument*/NULL);
		V_2 = L_48;
		// texture.SetPixels(tempTexture.GetPixels());
		Texture2D_t3840446185 * L_49 = V_2;
		Texture2D_t3840446185 * L_50 = V_5;
		NullCheck(L_50);
		ColorU5BU5D_t941916413* L_51 = Texture2D_GetPixels_m2081641574(L_50, /*hidden argument*/NULL);
		NullCheck(L_49);
		Texture2D_SetPixels_m3008871897(L_49, L_51, /*hidden argument*/NULL);
		// texture.Apply(true);
		Texture2D_t3840446185 * L_52 = V_2;
		NullCheck(L_52);
		Texture2D_Apply_m1848181995(L_52, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0189;
	}

IL_014e:
	{
		// Debug.LogFormat("{0} {1}", www.responseCode, www.url);
		ObjectU5BU5D_t2843939325* L_53 = (ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t2843939325* L_54 = L_53;
		UnityWebRequest_t463507806 * L_55 = __this->get_U3CwwwU3E5__3_7();
		NullCheck(L_55);
		int64_t L_56 = UnityWebRequest_get_responseCode_m1090830473(L_55, /*hidden argument*/NULL);
		int64_t L_57 = L_56;
		RuntimeObject * L_58 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_57);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_58);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_58);
		ObjectU5BU5D_t2843939325* L_59 = L_54;
		UnityWebRequest_t463507806 * L_60 = __this->get_U3CwwwU3E5__3_7();
		NullCheck(L_60);
		String_t* L_61 = UnityWebRequest_get_url_m2568598920(L_60, /*hidden argument*/NULL);
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_61);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_61);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_LogFormat_m309087137(NULL /*static, unused*/, _stringLiteral380657706, L_59, /*hidden argument*/NULL);
		// texture = new Texture2D(16, 16);
		Texture2D_t3840446185 * L_62 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_62, ((int32_t)16), ((int32_t)16), /*hidden argument*/NULL);
		V_2 = L_62;
	}

IL_0189:
	{
		// }
		__this->set_U3CwwwU3E5__3_7((UnityWebRequest_t463507806 *)NULL);
		goto IL_01ed;
	}

IL_0192:
	{
		// else if (_loadType == LoadType.Stream)
		GLTFSceneImporter_t274320441 * L_63 = V_1;
		NullCheck(L_63);
		int32_t L_64 = L_63->get__loadType_12();
		if ((!(((uint32_t)L_64) == ((uint32_t)1))))
		{
			goto IL_01ed;
		}
	}
	{
		// var pathToLoad = Path.Combine(rootPath, uri);
		String_t* L_65 = __this->get_rootPath_5();
		String_t* L_66 = __this->get_U3CuriU3E5__2_6();
		IL2CPP_RUNTIME_CLASS_INIT(Path_t1605229823_il2cpp_TypeInfo_var);
		String_t* L_67 = Path_Combine_m3389272516(NULL /*static, unused*/, L_65, L_66, /*hidden argument*/NULL);
		// var file = File.OpenRead(pathToLoad);
		FileStream_t4292183065 * L_68 = File_OpenRead_m2936789020(NULL /*static, unused*/, L_67, /*hidden argument*/NULL);
		V_6 = L_68;
		// byte[] bufferData = new byte[file.Length];
		FileStream_t4292183065 * L_69 = V_6;
		NullCheck(L_69);
		int64_t L_70 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_69);
		if ((int64_t)(L_70) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, U3CLoadImageU3Ed__34_MoveNext_m3821244950_RuntimeMethod_var);
		ByteU5BU5D_t4116647657* L_71 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)(((intptr_t)L_70)));
		V_7 = L_71;
		// file.Read(bufferData, 0, (int)file.Length);
		FileStream_t4292183065 * L_72 = V_6;
		ByteU5BU5D_t4116647657* L_73 = V_7;
		FileStream_t4292183065 * L_74 = V_6;
		NullCheck(L_74);
		int64_t L_75 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_74);
		NullCheck(L_72);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_72, L_73, 0, (((int32_t)((int32_t)L_75))));
		// file.Dispose();
		FileStream_t4292183065 * L_76 = V_6;
		NullCheck(L_76);
		Stream_Dispose_m2589290611(L_76, /*hidden argument*/NULL);
		// texture = new Texture2D(0, 0);
		Texture2D_t3840446185 * L_77 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_77, 0, 0, /*hidden argument*/NULL);
		V_2 = L_77;
		// texture.LoadImage(bufferData);
		Texture2D_t3840446185 * L_78 = V_2;
		ByteU5BU5D_t4116647657* L_79 = V_7;
		ImageConversion_LoadImage_m2182108104(NULL /*static, unused*/, L_78, L_79, /*hidden argument*/NULL);
	}

IL_01ed:
	{
		// }
		__this->set_U3CuriU3E5__2_6((String_t*)NULL);
		goto IL_0275;
	}

IL_01f6:
	{
		// texture = new Texture2D(0, 0);
		Texture2D_t3840446185 * L_80 = (Texture2D_t3840446185 *)il2cpp_codegen_object_new(Texture2D_t3840446185_il2cpp_TypeInfo_var);
		Texture2D__ctor_m373113269(L_80, 0, 0, /*hidden argument*/NULL);
		V_2 = L_80;
		// var bufferView = image.BufferView.Value;
		Image_t782620675 * L_81 = __this->get_image_4();
		NullCheck(L_81);
		BufferViewId_t4185270750 * L_82 = L_81->get_BufferView_9();
		NullCheck(L_82);
		BufferView_t2650099126 * L_83 = VirtFuncInvoker0< BufferView_t2650099126 * >::Invoke(4 /* !0 GLTF.Schema.GLTFId`1<GLTF.Schema.BufferView>::get_Value() */, L_82);
		V_8 = L_83;
		// var data = new byte[bufferView.ByteLength];
		BufferView_t2650099126 * L_84 = V_8;
		NullCheck(L_84);
		int32_t L_85 = L_84->get_ByteLength_9();
		ByteU5BU5D_t4116647657* L_86 = (ByteU5BU5D_t4116647657*)SZArrayNew(ByteU5BU5D_t4116647657_il2cpp_TypeInfo_var, (uint32_t)L_85);
		V_9 = L_86;
		// var bufferContents = _assetCache.BufferCache[bufferView.Buffer.Id];
		GLTFSceneImporter_t274320441 * L_87 = V_1;
		NullCheck(L_87);
		AssetCache_t783611398 * L_88 = L_87->get__assetCache_9();
		NullCheck(L_88);
		Dictionary_2_t3293772351 * L_89 = AssetCache_get_BufferCache_m1575123264(L_88, /*hidden argument*/NULL);
		BufferView_t2650099126 * L_90 = V_8;
		NullCheck(L_90);
		BufferId_t2787902107 * L_91 = L_90->get_Buffer_7();
		NullCheck(L_91);
		int32_t L_92 = ((GLTFId_1_t1070037637 *)L_91)->get_Id_0();
		NullCheck(L_89);
		BufferCacheData_t110091724 * L_93 = Dictionary_2_get_Item_m1259228363(L_89, L_92, /*hidden argument*/Dictionary_2_get_Item_m1259228363_RuntimeMethod_var);
		V_10 = L_93;
		// bufferContents.Stream.Position = bufferView.ByteOffset + bufferContents.ChunkOffset;
		BufferCacheData_t110091724 * L_94 = V_10;
		NullCheck(L_94);
		Stream_t1273022909 * L_95 = BufferCacheData_get_Stream_m855137577(L_94, /*hidden argument*/NULL);
		BufferView_t2650099126 * L_96 = V_8;
		NullCheck(L_96);
		int32_t L_97 = L_96->get_ByteOffset_8();
		BufferCacheData_t110091724 * L_98 = V_10;
		NullCheck(L_98);
		int64_t L_99 = BufferCacheData_get_ChunkOffset_m3509864196(L_98, /*hidden argument*/NULL);
		NullCheck(L_95);
		VirtActionInvoker1< int64_t >::Invoke(12 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_95, ((int64_t)il2cpp_codegen_add((int64_t)(((int64_t)((int64_t)L_97))), (int64_t)L_99)));
		// bufferContents.Stream.Read(data, 0, data.Length);
		BufferCacheData_t110091724 * L_100 = V_10;
		NullCheck(L_100);
		Stream_t1273022909 * L_101 = BufferCacheData_get_Stream_m855137577(L_100, /*hidden argument*/NULL);
		ByteU5BU5D_t4116647657* L_102 = V_9;
		ByteU5BU5D_t4116647657* L_103 = V_9;
		NullCheck(L_103);
		NullCheck(L_101);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_t4116647657*, int32_t, int32_t >::Invoke(27 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_101, L_102, 0, (((int32_t)((int32_t)(((RuntimeArray *)L_103)->max_length)))));
		// texture.LoadImage(data);
		Texture2D_t3840446185 * L_104 = V_2;
		ByteU5BU5D_t4116647657* L_105 = V_9;
		ImageConversion_LoadImage_m2182108104(NULL /*static, unused*/, L_104, L_105, /*hidden argument*/NULL);
	}

IL_0275:
	{
		// _assetCache.ImageCache[imageID] = texture;
		GLTFSceneImporter_t274320441 * L_106 = V_1;
		NullCheck(L_106);
		AssetCache_t783611398 * L_107 = L_106->get__assetCache_9();
		NullCheck(L_107);
		Texture2DU5BU5D_t149664596* L_108 = AssetCache_get_ImageCache_m3334297062(L_107, /*hidden argument*/NULL);
		int32_t L_109 = __this->get_imageID_3();
		Texture2D_t3840446185 * L_110 = V_2;
		NullCheck(L_108);
		ArrayElementTypeCheck (L_108, L_110);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(L_109), (Texture2D_t3840446185 *)L_110);
	}

IL_0288:
	{
		// }
		return (bool)0;
	}
}
// System.Object UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadImageU3Ed__34_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3667090637 (U3CLoadImageU3Ed__34_t347840408 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::System.Collections.IEnumerator.Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CLoadImageU3Ed__34_System_Collections_IEnumerator_Reset_m319494151 (U3CLoadImageU3Ed__34_t347840408 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLoadImageU3Ed__34_System_Collections_IEnumerator_Reset_m319494151_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CLoadImageU3Ed__34_System_Collections_IEnumerator_Reset_m319494151_RuntimeMethod_var);
	}
}
// System.Object UnityGLTF.GLTFSceneImporter/<LoadImage>d__34::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadImageU3Ed__34_System_Collections_IEnumerator_get_Current_m619836261 (U3CLoadImageU3Ed__34_t347840408 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityGLTF.GLTFSceneImporter/GLBStream
extern "C" void GLBStream_t3327861285_marshal_pinvoke(const GLBStream_t3327861285& unmarshaled, GLBStream_t3327861285_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Stream_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Stream' of type 'GLBStream': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Stream_0Exception, NULL, NULL);
}
extern "C" void GLBStream_t3327861285_marshal_pinvoke_back(const GLBStream_t3327861285_marshaled_pinvoke& marshaled, GLBStream_t3327861285& unmarshaled)
{
	Exception_t* ___Stream_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Stream' of type 'GLBStream': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Stream_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityGLTF.GLTFSceneImporter/GLBStream
extern "C" void GLBStream_t3327861285_marshal_pinvoke_cleanup(GLBStream_t3327861285_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityGLTF.GLTFSceneImporter/GLBStream
extern "C" void GLBStream_t3327861285_marshal_com(const GLBStream_t3327861285& unmarshaled, GLBStream_t3327861285_marshaled_com& marshaled)
{
	Exception_t* ___Stream_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Stream' of type 'GLBStream': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Stream_0Exception, NULL, NULL);
}
extern "C" void GLBStream_t3327861285_marshal_com_back(const GLBStream_t3327861285_marshaled_com& marshaled, GLBStream_t3327861285& unmarshaled)
{
	Exception_t* ___Stream_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Stream' of type 'GLBStream': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Stream_0Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityGLTF.GLTFSceneImporter/GLBStream
extern "C" void GLBStream_t3327861285_marshal_com_cleanup(GLBStream_t3327861285_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityGLTF.WebRequestException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void WebRequestException__ctor_m1100128511 (WebRequestException_t1410780468 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestException__ctor_m1100128511_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebRequestException() : base() { }
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m213470898(__this, /*hidden argument*/NULL);
		// public WebRequestException() : base() { }
		return;
	}
}
// System.Void UnityGLTF.WebRequestException::.ctor(System.String)
extern "C" IL2CPP_METHOD_ATTR void WebRequestException__ctor_m613315964 (WebRequestException_t1410780468 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestException__ctor_m613315964_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebRequestException(string message) : base(message) { }
		String_t* L_0 = ___message0;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(__this, L_0, /*hidden argument*/NULL);
		// public WebRequestException(string message) : base(message) { }
		return;
	}
}
// System.Void UnityGLTF.WebRequestException::.ctor(System.String,System.Exception)
extern "C" IL2CPP_METHOD_ATTR void WebRequestException__ctor_m2991602755 (WebRequestException_t1410780468 * __this, String_t* ___message0, Exception_t * ___inner1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestException__ctor_m2991602755_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebRequestException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___message0;
		Exception_t * L_1 = ___inner1;
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1406832249(__this, L_0, L_1, /*hidden argument*/NULL);
		// public WebRequestException(string message, Exception inner) : base(message, inner) { }
		return;
	}
}
// System.Void UnityGLTF.WebRequestException::.ctor(UnityEngine.Networking.UnityWebRequest)
extern "C" IL2CPP_METHOD_ATTR void WebRequestException__ctor_m376355303 (WebRequestException_t1410780468 * __this, UnityWebRequest_t463507806 * ___www0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WebRequestException__ctor_m376355303_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebRequestException(UnityWebRequest www) : base(string.Format("Error: {0} when requesting: {1}", www.responseCode, www.url)) { }
		UnityWebRequest_t463507806 * L_0 = ___www0;
		NullCheck(L_0);
		int64_t L_1 = UnityWebRequest_get_responseCode_m1090830473(L_0, /*hidden argument*/NULL);
		int64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int64_t3736567304_il2cpp_TypeInfo_var, &L_2);
		UnityWebRequest_t463507806 * L_4 = ___www0;
		NullCheck(L_4);
		String_t* L_5 = UnityWebRequest_get_url_m2568598920(L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m2556382932(NULL /*static, unused*/, _stringLiteral3155662446, L_3, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m1152696503(__this, L_6, /*hidden argument*/NULL);
		// public WebRequestException(UnityWebRequest www) : base(string.Format("Error: {0} when requesting: {1}", www.responseCode, www.url)) { }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
