#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885;
// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<Data>
struct List_1_tD69A8C09C35C518FDC8117C468527838EB937ABD;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// Data[]
struct DataU5BU5D_tC301F1D28EB105F51B2B6319A42DE3F694913E08;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// ButtonControl
struct ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Data
struct Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14;
// DetectColider
struct DetectColider_t5175106E96CE21174E46BE33CB290F817E4715ED;
// FeedBackControl
struct FeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// Fuel
struct Fuel_tEFC1BA77A2E72363161B01C3D32E3B63234C2E63;
// FuelCollider
struct FuelCollider_tE8C9954D1E487A32032B366F438408E60709854A;
// FuelText
struct FuelText_t8FBC0C607614047F0EE83F4A25B06BF34B5E204D;
// GameControl
struct GameControl_t8DAFC60E5E51F6D61D77F480B91691765270D43A;
// GameData
struct GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// GetData
struct GetData_tB0CA14A8FBC7A6CA58EC8AE7496ECCC8977FE1E8;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t32463C505981FAA3FE78829467992AC7309CD9CA;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// IncrementItemsUnlock
struct IncrementItemsUnlock_tB29E37E4C2EE02F00B74D6596E78957B3836EC4E;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// MenuControl
struct MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MoveBG
struct MoveBG_t0207AF35FF4935008877858F1DB5405B92A24C76;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// SaveIndex
struct SaveIndex_t4CDE4A8C7E9E266DB00D44DBF9EB7D0E6F73DF95;
// Scenary
struct Scenary_tE44B449A3DB988D449CB65231127C22462D1BCD0;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// ValueControl
struct ValueControl_tF26AFCFD049806DB48FB04B12B8A1268263FBA00;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Wall
struct Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;

IL2CPP_EXTERN_C RuntimeClass* BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05199CC28F77BC569DB3D963DDC9950A1A71AF54;
IL2CPP_EXTERN_C String_t* _stringLiteral0EAD9AF6E093DA8D539878BCCC66CAF71C839CB6;
IL2CPP_EXTERN_C String_t* _stringLiteral1B1340CD5A7B722CBA512201F52BB1E5DFCCF7A2;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral2F8D6579B86B02A4D595138A226B58163F5D38AA;
IL2CPP_EXTERN_C String_t* _stringLiteral4054E330452FFC0D5C706F1AC4425C943D002646;
IL2CPP_EXTERN_C String_t* _stringLiteral492BACD1E91F0FBEB87836335BDCDDB4563A051F;
IL2CPP_EXTERN_C String_t* _stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741;
IL2CPP_EXTERN_C String_t* _stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE;
IL2CPP_EXTERN_C String_t* _stringLiteralDB92E9C9B67762C98DED905A759A745857ACFC6F;
IL2CPP_EXTERN_C String_t* _stringLiteralDDEE68247CDB4A643D3E7074D3A8F060CE657AE6;
IL2CPP_EXTERN_C String_t* _stringLiteralEA6674409F7C6B9292B05AE11ED77B34E89BF184;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisFeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009_m1D574410DB351F1661DB925B8075215F9D85BF13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisGetData_tB0CA14A8FBC7A6CA58EC8AE7496ECCC8977FE1E8_m6295D5E38989D2A9CAAB73A746EFE85B843FF6FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7388ED22F744DCAA22CAB71B36BFA7BEED8AF4DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m3CAE7179B3FA6FD24CA1F0D12C0043AE34660491_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.UI.Button>
struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____items_1)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get__items_1() const { return ____items_1; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E_StaticFields, ____emptyArray_5)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Data>
struct List_1_tD69A8C09C35C518FDC8117C468527838EB937ABD  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DataU5BU5D_tC301F1D28EB105F51B2B6319A42DE3F694913E08* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD69A8C09C35C518FDC8117C468527838EB937ABD, ____items_1)); }
	inline DataU5BU5D_tC301F1D28EB105F51B2B6319A42DE3F694913E08* get__items_1() const { return ____items_1; }
	inline DataU5BU5D_tC301F1D28EB105F51B2B6319A42DE3F694913E08** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DataU5BU5D_tC301F1D28EB105F51B2B6319A42DE3F694913E08* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD69A8C09C35C518FDC8117C468527838EB937ABD, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD69A8C09C35C518FDC8117C468527838EB937ABD, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD69A8C09C35C518FDC8117C468527838EB937ABD, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD69A8C09C35C518FDC8117C468527838EB937ABD_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DataU5BU5D_tC301F1D28EB105F51B2B6319A42DE3F694913E08* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD69A8C09C35C518FDC8117C468527838EB937ABD_StaticFields, ____emptyArray_5)); }
	inline DataU5BU5D_tC301F1D28EB105F51B2B6319A42DE3F694913E08* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DataU5BU5D_tC301F1D28EB105F51B2B6319A42DE3F694913E08** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DataU5BU5D_tC301F1D28EB105F51B2B6319A42DE3F694913E08* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____items_1)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// GameData
struct GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Int32> GameData::listTeste
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___listTeste_0;

public:
	inline static int32_t get_offset_of_listTeste_0() { return static_cast<int32_t>(offsetof(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD, ___listTeste_0)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_listTeste_0() const { return ___listTeste_0; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_listTeste_0() { return &___listTeste_0; }
	inline void set_listTeste_0(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___listTeste_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listTeste_0), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// SaveSystem
struct SaveSystem_t0744D25CBCFA325F6FF4C8F8D71FFF2B5721BFDD  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___list_0)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_list_0() const { return ___list_0; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ForceMode2D
struct ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode2D_tAD695DED33FB7C591354430C88D220D71109ABF4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct FormatterAssemblyStyle_t176037936039C0AEAEDFF283CD0E53E721D4CEF2 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t176037936039C0AEAEDFF283CD0E53E721D4CEF2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct FormatterTypeStyle_tE84DD5CF7A3D4E07A4881B66CE1AE112677A4E6A 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_tE84DD5CF7A3D4E07A4881B66CE1AE112677A4E6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.Runtime.Serialization.StreamingContextStates
struct StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct TypeFilterLevel_t7ED94310B4D2D5C697A19E0CE2327A7DC5B39C4D 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t7ED94310B4D2D5C697A19E0CE2327A7DC5B39C4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_8;
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
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_8)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_surrogates
	RuntimeObject* ___m_surrogates_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_context
	StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___m_context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_binder
	SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 * ___m_binder_2;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_typeFormat
	int32_t ___m_typeFormat_3;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_assemblyFormat
	int32_t ___m_assemblyFormat_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_securityLevel
	int32_t ___m_securityLevel_5;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_crossAppDomainArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_crossAppDomainArray_6;

public:
	inline static int32_t get_offset_of_m_surrogates_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_surrogates_0)); }
	inline RuntimeObject* get_m_surrogates_0() const { return ___m_surrogates_0; }
	inline RuntimeObject** get_address_of_m_surrogates_0() { return &___m_surrogates_0; }
	inline void set_m_surrogates_0(RuntimeObject* value)
	{
		___m_surrogates_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_surrogates_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_context_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_context_1)); }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  get_m_context_1() const { return ___m_context_1; }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 * get_address_of_m_context_1() { return &___m_context_1; }
	inline void set_m_context_1(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  value)
	{
		___m_context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_context_1))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_binder_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_binder_2)); }
	inline SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 * get_m_binder_2() const { return ___m_binder_2; }
	inline SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 ** get_address_of_m_binder_2() { return &___m_binder_2; }
	inline void set_m_binder_2(SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 * value)
	{
		___m_binder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_binder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_typeFormat_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_typeFormat_3)); }
	inline int32_t get_m_typeFormat_3() const { return ___m_typeFormat_3; }
	inline int32_t* get_address_of_m_typeFormat_3() { return &___m_typeFormat_3; }
	inline void set_m_typeFormat_3(int32_t value)
	{
		___m_typeFormat_3 = value;
	}

	inline static int32_t get_offset_of_m_assemblyFormat_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_assemblyFormat_4)); }
	inline int32_t get_m_assemblyFormat_4() const { return ___m_assemblyFormat_4; }
	inline int32_t* get_address_of_m_assemblyFormat_4() { return &___m_assemblyFormat_4; }
	inline void set_m_assemblyFormat_4(int32_t value)
	{
		___m_assemblyFormat_4 = value;
	}

	inline static int32_t get_offset_of_m_securityLevel_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_securityLevel_5)); }
	inline int32_t get_m_securityLevel_5() const { return ___m_securityLevel_5; }
	inline int32_t* get_address_of_m_securityLevel_5() { return &___m_securityLevel_5; }
	inline void set_m_securityLevel_5(int32_t value)
	{
		___m_securityLevel_5 = value;
	}

	inline static int32_t get_offset_of_m_crossAppDomainArray_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_crossAppDomainArray_6)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_crossAppDomainArray_6() const { return ___m_crossAppDomainArray_6; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_crossAppDomainArray_6() { return &___m_crossAppDomainArray_6; }
	inline void set_m_crossAppDomainArray_6(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_crossAppDomainArray_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_crossAppDomainArray_6), (void*)value);
	}
};

struct BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::typeNameCache
	Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 * ___typeNameCache_7;

public:
	inline static int32_t get_offset_of_typeNameCache_7() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_StaticFields, ___typeNameCache_7)); }
	inline Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 * get_typeNameCache_7() const { return ___typeNameCache_7; }
	inline Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 ** get_address_of_typeNameCache_7() { return &___typeNameCache_7; }
	inline void set_typeNameCache_7(Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 * value)
	{
		___typeNameCache_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeNameCache_7), (void*)value);
	}
};


// Data
struct Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.String Data::title
	String_t* ___title_4;
	// System.String Data::statusClass
	String_t* ___statusClass_5;
	// System.String Data::description
	String_t* ___description_6;
	// UnityEngine.Sprite Data::image
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___image_7;

public:
	inline static int32_t get_offset_of_title_4() { return static_cast<int32_t>(offsetof(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14, ___title_4)); }
	inline String_t* get_title_4() const { return ___title_4; }
	inline String_t** get_address_of_title_4() { return &___title_4; }
	inline void set_title_4(String_t* value)
	{
		___title_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_4), (void*)value);
	}

	inline static int32_t get_offset_of_statusClass_5() { return static_cast<int32_t>(offsetof(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14, ___statusClass_5)); }
	inline String_t* get_statusClass_5() const { return ___statusClass_5; }
	inline String_t** get_address_of_statusClass_5() { return &___statusClass_5; }
	inline void set_statusClass_5(String_t* value)
	{
		___statusClass_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___statusClass_5), (void*)value);
	}

	inline static int32_t get_offset_of_description_6() { return static_cast<int32_t>(offsetof(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14, ___description_6)); }
	inline String_t* get_description_6() const { return ___description_6; }
	inline String_t** get_address_of_description_6() { return &___description_6; }
	inline void set_description_6(String_t* value)
	{
		___description_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_6), (void*)value);
	}

	inline static int32_t get_offset_of_image_7() { return static_cast<int32_t>(offsetof(Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14, ___image_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_image_7() const { return ___image_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_image_7() { return &___image_7; }
	inline void set_image_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___image_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_7), (void*)value);
	}
};


// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// ButtonControl
struct ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.UI.Button> ButtonControl::btnList
	List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * ___btnList_4;
	// System.Collections.Generic.List`1<System.Int32> ButtonControl::listNumAux
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___listNumAux_5;
	// UnityEngine.GameObject[] ButtonControl::arrayBtn
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___arrayBtn_6;

public:
	inline static int32_t get_offset_of_btnList_4() { return static_cast<int32_t>(offsetof(ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F, ___btnList_4)); }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * get_btnList_4() const { return ___btnList_4; }
	inline List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E ** get_address_of_btnList_4() { return &___btnList_4; }
	inline void set_btnList_4(List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * value)
	{
		___btnList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btnList_4), (void*)value);
	}

	inline static int32_t get_offset_of_listNumAux_5() { return static_cast<int32_t>(offsetof(ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F, ___listNumAux_5)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_listNumAux_5() const { return ___listNumAux_5; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_listNumAux_5() { return &___listNumAux_5; }
	inline void set_listNumAux_5(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___listNumAux_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listNumAux_5), (void*)value);
	}

	inline static int32_t get_offset_of_arrayBtn_6() { return static_cast<int32_t>(offsetof(ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F, ___arrayBtn_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_arrayBtn_6() const { return ___arrayBtn_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_arrayBtn_6() { return &___arrayBtn_6; }
	inline void set_arrayBtn_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___arrayBtn_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arrayBtn_6), (void*)value);
	}
};


// DetectColider
struct DetectColider_t5175106E96CE21174E46BE33CB290F817E4715ED  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject DetectColider::panelGameOver
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panelGameOver_4;
	// UnityEngine.LayerMask DetectColider::layerWall
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___layerWall_5;
	// System.Single DetectColider::radius
	float ___radius_6;
	// System.Int32 DetectColider::ghost
	int32_t ___ghost_7;

public:
	inline static int32_t get_offset_of_panelGameOver_4() { return static_cast<int32_t>(offsetof(DetectColider_t5175106E96CE21174E46BE33CB290F817E4715ED, ___panelGameOver_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panelGameOver_4() const { return ___panelGameOver_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panelGameOver_4() { return &___panelGameOver_4; }
	inline void set_panelGameOver_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panelGameOver_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panelGameOver_4), (void*)value);
	}

	inline static int32_t get_offset_of_layerWall_5() { return static_cast<int32_t>(offsetof(DetectColider_t5175106E96CE21174E46BE33CB290F817E4715ED, ___layerWall_5)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_layerWall_5() const { return ___layerWall_5; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_layerWall_5() { return &___layerWall_5; }
	inline void set_layerWall_5(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___layerWall_5 = value;
	}

	inline static int32_t get_offset_of_radius_6() { return static_cast<int32_t>(offsetof(DetectColider_t5175106E96CE21174E46BE33CB290F817E4715ED, ___radius_6)); }
	inline float get_radius_6() const { return ___radius_6; }
	inline float* get_address_of_radius_6() { return &___radius_6; }
	inline void set_radius_6(float value)
	{
		___radius_6 = value;
	}

	inline static int32_t get_offset_of_ghost_7() { return static_cast<int32_t>(offsetof(DetectColider_t5175106E96CE21174E46BE33CB290F817E4715ED, ___ghost_7)); }
	inline int32_t get_ghost_7() const { return ___ghost_7; }
	inline int32_t* get_address_of_ghost_7() { return &___ghost_7; }
	inline void set_ghost_7(int32_t value)
	{
		___ghost_7 = value;
	}
};


// FeedBackControl
struct FeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject FeedBackControl::feedbackTxt
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___feedbackTxt_4;
	// System.Single FeedBackControl::timeCount
	float ___timeCount_5;
	// System.Boolean FeedBackControl::isActive
	bool ___isActive_6;

public:
	inline static int32_t get_offset_of_feedbackTxt_4() { return static_cast<int32_t>(offsetof(FeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009, ___feedbackTxt_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_feedbackTxt_4() const { return ___feedbackTxt_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_feedbackTxt_4() { return &___feedbackTxt_4; }
	inline void set_feedbackTxt_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___feedbackTxt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___feedbackTxt_4), (void*)value);
	}

	inline static int32_t get_offset_of_timeCount_5() { return static_cast<int32_t>(offsetof(FeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009, ___timeCount_5)); }
	inline float get_timeCount_5() const { return ___timeCount_5; }
	inline float* get_address_of_timeCount_5() { return &___timeCount_5; }
	inline void set_timeCount_5(float value)
	{
		___timeCount_5 = value;
	}

	inline static int32_t get_offset_of_isActive_6() { return static_cast<int32_t>(offsetof(FeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009, ___isActive_6)); }
	inline bool get_isActive_6() const { return ___isActive_6; }
	inline bool* get_address_of_isActive_6() { return &___isActive_6; }
	inline void set_isActive_6(bool value)
	{
		___isActive_6 = value;
	}
};


// Fuel
struct Fuel_tEFC1BA77A2E72363161B01C3D32E3B63234C2E63  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Transform> Fuel::points
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___points_4;
	// UnityEngine.GameObject Fuel::fuelPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___fuelPrefab_5;
	// System.Single Fuel::timeLimit
	float ___timeLimit_6;
	// System.Single Fuel::timeCount
	float ___timeCount_7;

public:
	inline static int32_t get_offset_of_points_4() { return static_cast<int32_t>(offsetof(Fuel_tEFC1BA77A2E72363161B01C3D32E3B63234C2E63, ___points_4)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_points_4() const { return ___points_4; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_points_4() { return &___points_4; }
	inline void set_points_4(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___points_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___points_4), (void*)value);
	}

	inline static int32_t get_offset_of_fuelPrefab_5() { return static_cast<int32_t>(offsetof(Fuel_tEFC1BA77A2E72363161B01C3D32E3B63234C2E63, ___fuelPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_fuelPrefab_5() const { return ___fuelPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_fuelPrefab_5() { return &___fuelPrefab_5; }
	inline void set_fuelPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___fuelPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fuelPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_timeLimit_6() { return static_cast<int32_t>(offsetof(Fuel_tEFC1BA77A2E72363161B01C3D32E3B63234C2E63, ___timeLimit_6)); }
	inline float get_timeLimit_6() const { return ___timeLimit_6; }
	inline float* get_address_of_timeLimit_6() { return &___timeLimit_6; }
	inline void set_timeLimit_6(float value)
	{
		___timeLimit_6 = value;
	}

	inline static int32_t get_offset_of_timeCount_7() { return static_cast<int32_t>(offsetof(Fuel_tEFC1BA77A2E72363161B01C3D32E3B63234C2E63, ___timeCount_7)); }
	inline float get_timeCount_7() const { return ___timeCount_7; }
	inline float* get_address_of_timeCount_7() { return &___timeCount_7; }
	inline void set_timeCount_7(float value)
	{
		___timeCount_7 = value;
	}
};


// FuelCollider
struct FuelCollider_tE8C9954D1E487A32032B366F438408E60709854A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Player FuelCollider::player
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___player_4;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(FuelCollider_tE8C9954D1E487A32032B366F438408E60709854A, ___player_4)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_player_4() const { return ___player_4; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}
};


// FuelText
struct FuelText_t8FBC0C607614047F0EE83F4A25B06BF34B5E204D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform FuelText::point
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___point_4;
	// System.Single FuelText::speed
	float ___speed_5;
	// System.Single FuelText::countLimit
	float ___countLimit_6;
	// System.Single FuelText::timeCount
	float ___timeCount_7;

public:
	inline static int32_t get_offset_of_point_4() { return static_cast<int32_t>(offsetof(FuelText_t8FBC0C607614047F0EE83F4A25B06BF34B5E204D, ___point_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_point_4() const { return ___point_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_point_4() { return &___point_4; }
	inline void set_point_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___point_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___point_4), (void*)value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(FuelText_t8FBC0C607614047F0EE83F4A25B06BF34B5E204D, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_countLimit_6() { return static_cast<int32_t>(offsetof(FuelText_t8FBC0C607614047F0EE83F4A25B06BF34B5E204D, ___countLimit_6)); }
	inline float get_countLimit_6() const { return ___countLimit_6; }
	inline float* get_address_of_countLimit_6() { return &___countLimit_6; }
	inline void set_countLimit_6(float value)
	{
		___countLimit_6 = value;
	}

	inline static int32_t get_offset_of_timeCount_7() { return static_cast<int32_t>(offsetof(FuelText_t8FBC0C607614047F0EE83F4A25B06BF34B5E204D, ___timeCount_7)); }
	inline float get_timeCount_7() const { return ___timeCount_7; }
	inline float* get_address_of_timeCount_7() { return &___timeCount_7; }
	inline void set_timeCount_7(float value)
	{
		___timeCount_7 = value;
	}
};


// GameControl
struct GameControl_t8DAFC60E5E51F6D61D77F480B91691765270D43A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text GameControl::countProgressTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___countProgressTxt_4;
	// UnityEngine.UI.Image GameControl::barProgressItems
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___barProgressItems_5;
	// System.Single GameControl::currentBarItems
	float ___currentBarItems_6;
	// System.Int32 GameControl::countProgress
	int32_t ___countProgress_7;
	// System.Single GameControl::timeCount
	float ___timeCount_8;
	// System.Single GameControl::totalBarItems
	float ___totalBarItems_9;
	// FeedBackControl GameControl::feedback
	FeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009 * ___feedback_10;

public:
	inline static int32_t get_offset_of_countProgressTxt_4() { return static_cast<int32_t>(offsetof(GameControl_t8DAFC60E5E51F6D61D77F480B91691765270D43A, ___countProgressTxt_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_countProgressTxt_4() const { return ___countProgressTxt_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_countProgressTxt_4() { return &___countProgressTxt_4; }
	inline void set_countProgressTxt_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___countProgressTxt_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___countProgressTxt_4), (void*)value);
	}

	inline static int32_t get_offset_of_barProgressItems_5() { return static_cast<int32_t>(offsetof(GameControl_t8DAFC60E5E51F6D61D77F480B91691765270D43A, ___barProgressItems_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_barProgressItems_5() const { return ___barProgressItems_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_barProgressItems_5() { return &___barProgressItems_5; }
	inline void set_barProgressItems_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___barProgressItems_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___barProgressItems_5), (void*)value);
	}

	inline static int32_t get_offset_of_currentBarItems_6() { return static_cast<int32_t>(offsetof(GameControl_t8DAFC60E5E51F6D61D77F480B91691765270D43A, ___currentBarItems_6)); }
	inline float get_currentBarItems_6() const { return ___currentBarItems_6; }
	inline float* get_address_of_currentBarItems_6() { return &___currentBarItems_6; }
	inline void set_currentBarItems_6(float value)
	{
		___currentBarItems_6 = value;
	}

	inline static int32_t get_offset_of_countProgress_7() { return static_cast<int32_t>(offsetof(GameControl_t8DAFC60E5E51F6D61D77F480B91691765270D43A, ___countProgress_7)); }
	inline int32_t get_countProgress_7() const { return ___countProgress_7; }
	inline int32_t* get_address_of_countProgress_7() { return &___countProgress_7; }
	inline void set_countProgress_7(int32_t value)
	{
		___countProgress_7 = value;
	}

	inline static int32_t get_offset_of_timeCount_8() { return static_cast<int32_t>(offsetof(GameControl_t8DAFC60E5E51F6D61D77F480B91691765270D43A, ___timeCount_8)); }
	inline float get_timeCount_8() const { return ___timeCount_8; }
	inline float* get_address_of_timeCount_8() { return &___timeCount_8; }
	inline void set_timeCount_8(float value)
	{
		___timeCount_8 = value;
	}

	inline static int32_t get_offset_of_totalBarItems_9() { return static_cast<int32_t>(offsetof(GameControl_t8DAFC60E5E51F6D61D77F480B91691765270D43A, ___totalBarItems_9)); }
	inline float get_totalBarItems_9() const { return ___totalBarItems_9; }
	inline float* get_address_of_totalBarItems_9() { return &___totalBarItems_9; }
	inline void set_totalBarItems_9(float value)
	{
		___totalBarItems_9 = value;
	}

	inline static int32_t get_offset_of_feedback_10() { return static_cast<int32_t>(offsetof(GameControl_t8DAFC60E5E51F6D61D77F480B91691765270D43A, ___feedback_10)); }
	inline FeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009 * get_feedback_10() const { return ___feedback_10; }
	inline FeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009 ** get_address_of_feedback_10() { return &___feedback_10; }
	inline void set_feedback_10(FeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009 * value)
	{
		___feedback_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___feedback_10), (void*)value);
	}
};


// GetData
struct GetData_tB0CA14A8FBC7A6CA58EC8AE7496ECCC8977FE1E8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<Data> GetData::data
	List_1_tD69A8C09C35C518FDC8117C468527838EB937ABD * ___data_4;
	// UnityEngine.UI.Text GetData::title
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___title_5;
	// UnityEngine.UI.Text GetData::statusClass
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___statusClass_6;
	// UnityEngine.UI.Text GetData::description
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___description_7;
	// UnityEngine.UI.Image GetData::image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image_8;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(GetData_tB0CA14A8FBC7A6CA58EC8AE7496ECCC8977FE1E8, ___data_4)); }
	inline List_1_tD69A8C09C35C518FDC8117C468527838EB937ABD * get_data_4() const { return ___data_4; }
	inline List_1_tD69A8C09C35C518FDC8117C468527838EB937ABD ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(List_1_tD69A8C09C35C518FDC8117C468527838EB937ABD * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}

	inline static int32_t get_offset_of_title_5() { return static_cast<int32_t>(offsetof(GetData_tB0CA14A8FBC7A6CA58EC8AE7496ECCC8977FE1E8, ___title_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_title_5() const { return ___title_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_title_5() { return &___title_5; }
	inline void set_title_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___title_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_5), (void*)value);
	}

	inline static int32_t get_offset_of_statusClass_6() { return static_cast<int32_t>(offsetof(GetData_tB0CA14A8FBC7A6CA58EC8AE7496ECCC8977FE1E8, ___statusClass_6)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_statusClass_6() const { return ___statusClass_6; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_statusClass_6() { return &___statusClass_6; }
	inline void set_statusClass_6(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___statusClass_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___statusClass_6), (void*)value);
	}

	inline static int32_t get_offset_of_description_7() { return static_cast<int32_t>(offsetof(GetData_tB0CA14A8FBC7A6CA58EC8AE7496ECCC8977FE1E8, ___description_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_description_7() const { return ___description_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_description_7() { return &___description_7; }
	inline void set_description_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___description_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_7), (void*)value);
	}

	inline static int32_t get_offset_of_image_8() { return static_cast<int32_t>(offsetof(GetData_tB0CA14A8FBC7A6CA58EC8AE7496ECCC8977FE1E8, ___image_8)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_image_8() const { return ___image_8; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_image_8() { return &___image_8; }
	inline void set_image_8(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___image_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_8), (void*)value);
	}
};


// IncrementItemsUnlock
struct IncrementItemsUnlock_tB29E37E4C2EE02F00B74D6596E78957B3836EC4E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 IncrementItemsUnlock::incrementItems
	int32_t ___incrementItems_4;

public:
	inline static int32_t get_offset_of_incrementItems_4() { return static_cast<int32_t>(offsetof(IncrementItemsUnlock_tB29E37E4C2EE02F00B74D6596E78957B3836EC4E, ___incrementItems_4)); }
	inline int32_t get_incrementItems_4() const { return ___incrementItems_4; }
	inline int32_t* get_address_of_incrementItems_4() { return &___incrementItems_4; }
	inline void set_incrementItems_4(int32_t value)
	{
		___incrementItems_4 = value;
	}
};


// MenuControl
struct MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject MenuControl::panelGameOver
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panelGameOver_4;

public:
	inline static int32_t get_offset_of_panelGameOver_4() { return static_cast<int32_t>(offsetof(MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778, ___panelGameOver_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panelGameOver_4() const { return ___panelGameOver_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panelGameOver_4() { return &___panelGameOver_4; }
	inline void set_panelGameOver_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panelGameOver_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panelGameOver_4), (void*)value);
	}
};


// MoveBG
struct MoveBG_t0207AF35FF4935008877858F1DB5405B92A24C76  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single MoveBG::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(MoveBG_t0207AF35FF4935008877858F1DB5405B92A24C76, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};


// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Player::forceJump
	float ___forceJump_4;
	// UnityEngine.ParticleSystem Player::particleS
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___particleS_5;
	// System.Boolean Player::isJump
	bool ___isJump_6;
	// UnityEngine.Rigidbody2D Player::rig
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rig_7;
	// UnityEngine.UI.Text Player::fuelGetTxt
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___fuelGetTxt_8;
	// UnityEngine.UI.Image Player::fuelBar
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___fuelBar_9;
	// System.Single Player::totalFuel
	float ___totalFuel_10;
	// System.Single Player::decrementValue
	float ___decrementValue_11;
	// System.Single Player::currentFuel
	float ___currentFuel_12;

public:
	inline static int32_t get_offset_of_forceJump_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___forceJump_4)); }
	inline float get_forceJump_4() const { return ___forceJump_4; }
	inline float* get_address_of_forceJump_4() { return &___forceJump_4; }
	inline void set_forceJump_4(float value)
	{
		___forceJump_4 = value;
	}

	inline static int32_t get_offset_of_particleS_5() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___particleS_5)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_particleS_5() const { return ___particleS_5; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_particleS_5() { return &___particleS_5; }
	inline void set_particleS_5(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___particleS_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___particleS_5), (void*)value);
	}

	inline static int32_t get_offset_of_isJump_6() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___isJump_6)); }
	inline bool get_isJump_6() const { return ___isJump_6; }
	inline bool* get_address_of_isJump_6() { return &___isJump_6; }
	inline void set_isJump_6(bool value)
	{
		___isJump_6 = value;
	}

	inline static int32_t get_offset_of_rig_7() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___rig_7)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rig_7() const { return ___rig_7; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rig_7() { return &___rig_7; }
	inline void set_rig_7(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rig_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rig_7), (void*)value);
	}

	inline static int32_t get_offset_of_fuelGetTxt_8() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___fuelGetTxt_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_fuelGetTxt_8() const { return ___fuelGetTxt_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_fuelGetTxt_8() { return &___fuelGetTxt_8; }
	inline void set_fuelGetTxt_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___fuelGetTxt_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fuelGetTxt_8), (void*)value);
	}

	inline static int32_t get_offset_of_fuelBar_9() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___fuelBar_9)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_fuelBar_9() const { return ___fuelBar_9; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_fuelBar_9() { return &___fuelBar_9; }
	inline void set_fuelBar_9(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___fuelBar_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fuelBar_9), (void*)value);
	}

	inline static int32_t get_offset_of_totalFuel_10() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___totalFuel_10)); }
	inline float get_totalFuel_10() const { return ___totalFuel_10; }
	inline float* get_address_of_totalFuel_10() { return &___totalFuel_10; }
	inline void set_totalFuel_10(float value)
	{
		___totalFuel_10 = value;
	}

	inline static int32_t get_offset_of_decrementValue_11() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___decrementValue_11)); }
	inline float get_decrementValue_11() const { return ___decrementValue_11; }
	inline float* get_address_of_decrementValue_11() { return &___decrementValue_11; }
	inline void set_decrementValue_11(float value)
	{
		___decrementValue_11 = value;
	}

	inline static int32_t get_offset_of_currentFuel_12() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___currentFuel_12)); }
	inline float get_currentFuel_12() const { return ___currentFuel_12; }
	inline float* get_address_of_currentFuel_12() { return &___currentFuel_12; }
	inline void set_currentFuel_12(float value)
	{
		___currentFuel_12 = value;
	}
};


// SaveIndex
struct SaveIndex_t4CDE4A8C7E9E266DB00D44DBF9EB7D0E6F73DF95  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Scenary
struct Scenary_tE44B449A3DB988D449CB65231127C22462D1BCD0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Scenary::wall
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___wall_4;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Scenary::points
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___points_5;
	// System.Single Scenary::timeCountLimit
	float ___timeCountLimit_6;
	// System.Single Scenary::timeCount
	float ___timeCount_7;

public:
	inline static int32_t get_offset_of_wall_4() { return static_cast<int32_t>(offsetof(Scenary_tE44B449A3DB988D449CB65231127C22462D1BCD0, ___wall_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_wall_4() const { return ___wall_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_wall_4() { return &___wall_4; }
	inline void set_wall_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___wall_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wall_4), (void*)value);
	}

	inline static int32_t get_offset_of_points_5() { return static_cast<int32_t>(offsetof(Scenary_tE44B449A3DB988D449CB65231127C22462D1BCD0, ___points_5)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_points_5() const { return ___points_5; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_points_5() { return &___points_5; }
	inline void set_points_5(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___points_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___points_5), (void*)value);
	}

	inline static int32_t get_offset_of_timeCountLimit_6() { return static_cast<int32_t>(offsetof(Scenary_tE44B449A3DB988D449CB65231127C22462D1BCD0, ___timeCountLimit_6)); }
	inline float get_timeCountLimit_6() const { return ___timeCountLimit_6; }
	inline float* get_address_of_timeCountLimit_6() { return &___timeCountLimit_6; }
	inline void set_timeCountLimit_6(float value)
	{
		___timeCountLimit_6 = value;
	}

	inline static int32_t get_offset_of_timeCount_7() { return static_cast<int32_t>(offsetof(Scenary_tE44B449A3DB988D449CB65231127C22462D1BCD0, ___timeCount_7)); }
	inline float get_timeCount_7() const { return ___timeCount_7; }
	inline float* get_address_of_timeCount_7() { return &___timeCount_7; }
	inline void set_timeCount_7(float value)
	{
		___timeCount_7 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ValueControl
struct ValueControl_tF26AFCFD049806DB48FB04B12B8A1268263FBA00  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Wall
struct Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Wall::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
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


// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);

// System.Void ButtonControl::GetButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonControl_GetButton_m6FB69BBB1CE586EB8397CC91D7D275281493B6C3 (ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * __this, const RuntimeMethod* method);
// System.Void ButtonControl::LockeInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonControl_LockeInit_mA7E1A83DCEC21115368E049B7C196016AF88292E (ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * __this, const RuntimeMethod* method);
// System.Void ButtonControl::LockControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonControl_LockControl_m418915A0ADBB16DF5134BC774BB7306B3984278B (ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * __this, const RuntimeMethod* method);
// System.Void ButtonControl::UnlockItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonControl_UnlockItems_m81B4D846EC1252AE82A3032C6F344B1FD1714E0A (ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void ButtonControl::LoadGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonControl_LoadGame_m921990E23CE6F1E42397B318D5851841AB86485B (ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Button>::get_Count()
inline int32_t List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(!0)
inline bool List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(!0)
inline void List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_gshared)(__this, ___item0, method);
}
// System.Void ButtonControl::SaveGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonControl_SaveGame_m729618A92182B34A93A7C0697766BF928EE871CB (ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC (const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UI.Button>::get_Item(System.Int32)
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, int32_t, const RuntimeMethod*))List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Button>::Add(!0)
inline void List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93 (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * __this, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E *, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void SaveSystem::SaveGame(ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystem_SaveGame_m6F2463328B31B318BAD89DA7C19C7F0CA95C924E (ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * ___value0, const RuntimeMethod* method);
// GameData SaveSystem::LoadGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * SaveSystem_LoadGame_m4E6D3F57C2D46E749C1DF4CD3169BF22FB70C137 (const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24 (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor()
inline void List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void DetectColider::Detect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectColider_Detect_m3D53E3420B41D85899AB4A74618285E677594CBB (DetectColider_t5175106E96CE21174E46BE33CB290F817E4715ED * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___center0, float ___radius1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void FeedBackControl::Action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeedBackControl_Action_m846170B44E84DE6230A38F83C88004E87C313469 (FeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.Object::FindObjectOfType<Player>()
inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m3CAE7179B3FA6FD24CA1F0D12C0043AE34660491 (const RuntimeMethod* method)
{
	return ((  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void Player::AddFuel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_AddFuel_m9A2F8E5C92182739E131243D0C4E73A9E1839D87 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<FeedBackControl>()
inline FeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009 * Component_GetComponent_TisFeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009_m1D574410DB351F1661DB925B8075215F9D85BF13 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  FeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void GameControl::UnlockObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_UnlockObject_mDC9FF4FD7DE905300751AB8A8F9D9B8B9FE1B8C0 (GameControl_t8DAFC60E5E51F6D61D77F480B91691765270D43A * __this, const RuntimeMethod* method);
// System.Void GameControl::Progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_Progress_m6AF4E6D5110684D8D8A3DC5DADDDB47B947DF5D2 (GameControl_t8DAFC60E5E51F6D61D77F480B91691765270D43A * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Data>::get_Item(System.Int32)
inline Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * List_1_get_Item_m7388ED22F744DCAA22CAB71B36BFA7BEED8AF4DA_inline (List_1_tD69A8C09C35C518FDC8117C468527838EB937ABD * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * (*) (List_1_tD69A8C09C35C518FDC8117C468527838EB937ABD *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void IncrementItemsUnlock::IncrementItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementItemsUnlock_IncrementItems_m2DCA1035F81E31DBE843AE76E88264C9E1EB64AE (IncrementItemsUnlock_tB29E37E4C2EE02F00B74D6596E78957B3836EC4E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<GetData>()
inline GetData_tB0CA14A8FBC7A6CA58EC8AE7496ECCC8977FE1E8 * GameObject_GetComponentInChildren_TisGetData_tB0CA14A8FBC7A6CA58EC8AE7496ECCC8977FE1E8_m6295D5E38989D2A9CAAB73A746EFE85B843FF6FE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GetData_tB0CA14A8FBC7A6CA58EC8AE7496ECCC8977FE1E8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.Void GetData::UpdateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetData_UpdateInfo_mDE386548CFE2648E13D230327398255C80CD92BD (GetData_tB0CA14A8FBC7A6CA58EC8AE7496ECCC8977FE1E8 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteAll_mAE4594C2D974BE67EC390E0FDECEDC59F17A12E0 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14 (const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Player::Inputs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Inputs_m840C46EB1B43CC3AA939BC40B1D039568A1668A9 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player::DecrementFuel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_DecrementFuel_m278184FEFEA457EA41E95E0BBA9FA5651247EECF (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Void Player::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Jump_m741715891EE6DEC1EC5F6A7233B6395ABD0E272C (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126 (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_mDC286819520925AB5873921EFFEADA1EC1648CFB (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void GameData::.ctor(ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData__ctor_mF35B16E2ACF502E4E4F0CD171199E13DE40B08F5 (GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * __this, ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Serialize(System.IO.Stream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter_Serialize_m780327356D3B5B1B734338AB398B32E65AD6CB5B (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___serializationStream0, RuntimeObject * ___graph1, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B (String_t* ___path0, const RuntimeMethod* method);
// System.Object System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::Deserialize(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * BinaryFormatter_Deserialize_mF7AFD0FE0E41A77BC60B11705FA7CC76EFE63DBC (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___serializationStream0, const RuntimeMethod* method);
// System.Void Scenary::CreateWall(System.Collections.Generic.List`1<UnityEngine.Transform>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scenary_CreateWall_mAC15F7A23038BBEFC822AB0184C4928056C663BE (Scenary_tE44B449A3DB988D449CB65231127C22462D1BCD0 * __this, List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___points0, int32_t ___value1, const RuntimeMethod* method);
// System.Single Scenary::get_TimeCountLimit()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Scenary_get_TimeCountLimit_m6F4D12F9214361BE88CF72B4926505A1718AAD57_inline (Scenary_tE44B449A3DB988D449CB65231127C22462D1BCD0 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject Scenary::ModifyObj(UnityEngine.GameObject,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Scenary_ModifyObj_mF740BBAE19B62F31D5A2FA21B22FDD83CFCEC888 (Scenary_tE44B449A3DB988D449CB65231127C22462D1BCD0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, int32_t ___index1, int32_t ___percentagem2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Wall::ToMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall_ToMove_mD8E65A77E93301CB33D08ED9ED634CE197428F1F (Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void ButtonControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonControl_Start_mA4747AD73C4090BDDCF59318CD61BE5C80D93A9A (ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * __this, const RuntimeMethod* method)
{
	{
		// GetButton();//pega todos os bot�es que est�o com a tag "Btn" e armazena dentro de btnList
		ButtonControl_GetButton_m6FB69BBB1CE586EB8397CC91D7D275281493B6C3(__this, /*hidden argument*/NULL);
		// LockeInit(); //trava todos os bot�es ao iniciar.
		ButtonControl_LockeInit_mA7E1A83DCEC21115368E049B7C196016AF88292E(__this, /*hidden argument*/NULL);
		// LockControl(); //controla qual item vai ser liberado.
		ButtonControl_LockControl_m418915A0ADBB16DF5134BC774BB7306B3984278B(__this, /*hidden argument*/NULL);
		// UnlockItems(); //destrava os bot�es de acordo com o n�mero selecionado.
		ButtonControl_UnlockItems_m81B4D846EC1252AE82A3032C6F344B1FD1714E0A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonControl::LockControl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonControl_LockControl_m418915A0ADBB16DF5134BC774BB7306B3984278B (ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral492BACD1E91F0FBEB87836335BDCDDB4563A051F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA6674409F7C6B9292B05AE11ED77B34E89BF184);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	{
		// if (PlayerPrefs.GetInt("number") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0173;
		}
	}
	{
		// LoadGame();
		ButtonControl_LoadGame_m921990E23CE6F1E42397B318D5851841AB86485B(__this, /*hidden argument*/NULL);
		// if (listNumAux.Count != 0)
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = __this->get_listNumAux_5();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_1, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_00d4;
		}
	}
	{
		// int totalNumber = PlayerPrefs.GetInt("ghostItems");
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralEA6674409F7C6B9292B05AE11ED77B34E89BF184, /*hidden argument*/NULL);
		V_0 = L_3;
		// for (int x = 0; x < totalNumber; x++)
		V_1 = 0;
		goto IL_00c8;
	}

IL_0038:
	{
		// if (listNumAux.Count < btnList.Count)
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_4 = __this->get_listNumAux_5();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_4, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_6 = __this->get_btnList_4();
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline(L_6, /*hidden argument*/List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		if ((((int32_t)L_5) >= ((int32_t)L_7)))
		{
			goto IL_00ba;
		}
	}
	{
		// int num = Random.Range(0, btnList.Count);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_8 = __this->get_btnList_4();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline(L_8, /*hidden argument*/List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		int32_t L_10;
		L_10 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// if (listNumAux.Contains(num))
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_11 = __this->get_listNumAux_5();
		int32_t L_12 = V_2;
		NullCheck(L_11);
		bool L_13;
		L_13 = List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2(L_11, L_12, /*hidden argument*/List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		if (!L_13)
		{
			goto IL_00a6;
		}
	}
	{
		// for (int i = 0; listNumAux.Contains(num); i++)
		V_3 = 0;
		goto IL_008a;
	}

IL_0074:
	{
		// num = Random.Range(0, btnList.Count);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_14 = __this->get_btnList_4();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline(L_14, /*hidden argument*/List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		int32_t L_16;
		L_16 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		// for (int i = 0; listNumAux.Contains(num); i++)
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_008a:
	{
		// for (int i = 0; listNumAux.Contains(num); i++)
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_18 = __this->get_listNumAux_5();
		int32_t L_19 = V_2;
		NullCheck(L_18);
		bool L_20;
		L_20 = List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2(L_18, L_19, /*hidden argument*/List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		if (L_20)
		{
			goto IL_0074;
		}
	}
	{
		// listNumAux.Add(num);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_21 = __this->get_listNumAux_5();
		int32_t L_22 = V_2;
		NullCheck(L_21);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_21, L_22, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// }
		goto IL_00b2;
	}

IL_00a6:
	{
		// listNumAux.Add(num);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_23 = __this->get_listNumAux_5();
		int32_t L_24 = V_2;
		NullCheck(L_23);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_23, L_24, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
	}

IL_00b2:
	{
		// SaveGame();
		ButtonControl_SaveGame_m729618A92182B34A93A7C0697766BF928EE871CB(__this, /*hidden argument*/NULL);
		// }
		goto IL_00c4;
	}

IL_00ba:
	{
		// Debug.Log("Todos os itens foram desbloqueados");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral492BACD1E91F0FBEB87836335BDCDDB4563A051F, /*hidden argument*/NULL);
	}

IL_00c4:
	{
		// for (int x = 0; x < totalNumber; x++)
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_00c8:
	{
		// for (int x = 0; x < totalNumber; x++)
		int32_t L_26 = V_1;
		int32_t L_27 = V_0;
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_0038;
		}
	}
	{
		// }
		goto IL_0162;
	}

IL_00d4:
	{
		// int totalNumber = PlayerPrefs.GetInt("ghostItems");
		int32_t L_28;
		L_28 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralEA6674409F7C6B9292B05AE11ED77B34E89BF184, /*hidden argument*/NULL);
		V_4 = L_28;
		// for (int x = 0; x < totalNumber; x++)
		V_5 = 0;
		goto IL_015c;
	}

IL_00e5:
	{
		// int num = Random.Range(0, btnList.Count);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_29 = __this->get_btnList_4();
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline(L_29, /*hidden argument*/List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		int32_t L_31;
		L_31 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_30, /*hidden argument*/NULL);
		V_6 = L_31;
		// if (listNumAux.Contains(num))
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_32 = __this->get_listNumAux_5();
		int32_t L_33 = V_6;
		NullCheck(L_32);
		bool L_34;
		L_34 = List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2(L_32, L_33, /*hidden argument*/List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		if (!L_34)
		{
			goto IL_0143;
		}
	}
	{
		// for (int i = 0; listNumAux.Contains(num); i++)
		V_7 = 0;
		goto IL_0125;
	}

IL_010c:
	{
		// num = Random.Range(0, btnList.Count);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_35 = __this->get_btnList_4();
		NullCheck(L_35);
		int32_t L_36;
		L_36 = List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline(L_35, /*hidden argument*/List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		int32_t L_37;
		L_37 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_36, /*hidden argument*/NULL);
		V_6 = L_37;
		// for (int i = 0; listNumAux.Contains(num); i++)
		int32_t L_38 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_0125:
	{
		// for (int i = 0; listNumAux.Contains(num); i++)
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_39 = __this->get_listNumAux_5();
		int32_t L_40 = V_6;
		NullCheck(L_39);
		bool L_41;
		L_41 = List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2(L_39, L_40, /*hidden argument*/List_1_Contains_mCA1215A6E5F7315854923DB7F5624182C9BA72D2_RuntimeMethod_var);
		if (L_41)
		{
			goto IL_010c;
		}
	}
	{
		// listNumAux.Add(num);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_42 = __this->get_listNumAux_5();
		int32_t L_43 = V_6;
		NullCheck(L_42);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_42, L_43, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		// }
		goto IL_0150;
	}

IL_0143:
	{
		// listNumAux.Add(num);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_44 = __this->get_listNumAux_5();
		int32_t L_45 = V_6;
		NullCheck(L_44);
		List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_44, L_45, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
	}

IL_0150:
	{
		// SaveGame();
		ButtonControl_SaveGame_m729618A92182B34A93A7C0697766BF928EE871CB(__this, /*hidden argument*/NULL);
		// for (int x = 0; x < totalNumber; x++)
		int32_t L_46 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_015c:
	{
		// for (int x = 0; x < totalNumber; x++)
		int32_t L_47 = V_5;
		int32_t L_48 = V_4;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00e5;
		}
	}

IL_0162:
	{
		// PlayerPrefs.SetInt("ghostItems", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralEA6674409F7C6B9292B05AE11ED77B34E89BF184, 0, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}

IL_0173:
	{
		// LoadGame();
		ButtonControl_LoadGame_m921990E23CE6F1E42397B318D5851841AB86485B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonControl::LockeInit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonControl_LockeInit_mA7E1A83DCEC21115368E049B7C196016AF88292E (ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (int i = 0; i < btnList.Count; i++)
		V_0 = 0;
		goto IL_001a;
	}

IL_0004:
	{
		// btnList[i].enabled = false;
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_0 = __this->get_btnList_4();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_2;
		L_2 = List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		NullCheck(L_2);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_2, (bool)0, /*hidden argument*/NULL);
		// for (int i = 0; i < btnList.Count; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_001a:
	{
		// for (int i = 0; i < btnList.Count; i++)
		int32_t L_4 = V_0;
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_5 = __this->get_btnList_4();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline(L_5, /*hidden argument*/List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		if ((((int32_t)L_4) < ((int32_t)L_6)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ButtonControl::UnlockItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonControl_UnlockItems_m81B4D846EC1252AE82A3032C6F344B1FD1714E0A (ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDEE68247CDB4A643D3E7074D3A8F060CE657AE6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < listNumAux.Count; i++)
		V_0 = 0;
		goto IL_004a;
	}

IL_0004:
	{
		// if (listNumAux[i] <= btnList.Count)
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = __this->get_listNumAux_5();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_3 = __this->get_btnList_4();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline(L_3, /*hidden argument*/List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		if ((((int32_t)L_2) > ((int32_t)L_4)))
		{
			goto IL_003c;
		}
	}
	{
		// btnList[listNumAux[i]].enabled = true;
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_5 = __this->get_btnList_4();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_6 = __this->get_listNumAux_5();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_RuntimeMethod_var);
		NullCheck(L_5);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_9;
		L_9 = List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline(L_5, L_8, /*hidden argument*/List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		NullCheck(L_9);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_9, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0046;
	}

IL_003c:
	{
		// Debug.Log("n�mero fora do intervalor!");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralDDEE68247CDB4A643D3E7074D3A8F060CE657AE6, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// for (int i = 0; i < listNumAux.Count; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_004a:
	{
		// for (int i = 0; i < listNumAux.Count; i++)
		int32_t L_11 = V_0;
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_12 = __this->get_listNumAux_5();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_inline(L_12, /*hidden argument*/List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < btnList.Count; i++)
		V_1 = 0;
		goto IL_008e;
	}

IL_005c:
	{
		// if (!btnList[i].enabled)
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_14 = __this->get_btnList_4();
		int32_t L_15 = V_1;
		NullCheck(L_14);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_16;
		L_16 = List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline(L_14, L_15, /*hidden argument*/List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		NullCheck(L_16);
		bool L_17;
		L_17 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_008a;
		}
	}
	{
		// btnList[i].GetComponentInChildren<Text>().text = "X";
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_18 = __this->get_btnList_4();
		int32_t L_19 = V_1;
		NullCheck(L_18);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_20;
		L_20 = List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_m0137FA1532E52BCE2C354C7E3689B9833F3C7711_RuntimeMethod_var);
		NullCheck(L_20);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21;
		L_21 = Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3(L_20, /*hidden argument*/Component_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mFB5C182E24F496A866F116D3F75CBD8616A46AB3_RuntimeMethod_var);
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, _stringLiteralD5D2875F228D651E1289522AEAAB8C492001C1BE);
	}

IL_008a:
	{
		// for (int i = 0; i < btnList.Count; i++)
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_008e:
	{
		// for (int i = 0; i < btnList.Count; i++)
		int32_t L_23 = V_1;
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_24 = __this->get_btnList_4();
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_inline(L_24, /*hidden argument*/List_1_get_Count_mF8AF3BE95FB3004BFAD9AE87BF35C557862905EA_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_005c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ButtonControl::GetButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonControl_GetButton_m6FB69BBB1CE586EB8397CC91D7D275281493B6C3 (ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05199CC28F77BC569DB3D963DDC9950A1A71AF54);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		// arrayBtn = GameObject.FindGameObjectsWithTag("Btn");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral05199CC28F77BC569DB3D963DDC9950A1A71AF54, /*hidden argument*/NULL);
		__this->set_arrayBtn_6(L_0);
		// foreach (var btn in arrayBtn)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_arrayBtn_6();
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_001b:
	{
		// foreach (var btn in arrayBtn)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// btnList.Add(btn.GetComponent<Button>());
		List_1_t21BC49A4390CA067C4050F19A1D58BE64AC2E89E * L_6 = __this->get_btnList_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_2;
		NullCheck(L_7);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8;
		L_8 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_7, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_6);
		List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93(L_6, L_8, /*hidden argument*/List_1_Add_mF6AEA6EB07931A44C878F9EC8EF494930C0A3A93_RuntimeMethod_var);
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0034:
	{
		// foreach (var btn in arrayBtn)
		int32_t L_10 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ButtonControl::SaveGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonControl_SaveGame_m729618A92182B34A93A7C0697766BF928EE871CB (ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * __this, const RuntimeMethod* method)
{
	{
		// SaveSystem.SaveGame(this);
		SaveSystem_SaveGame_m6F2463328B31B318BAD89DA7C19C7F0CA95C924E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonControl::LoadGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonControl_LoadGame_m921990E23CE6F1E42397B318D5851841AB86485B (ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F8D6579B86B02A4D595138A226B58163F5D38AA);
		s_Il2CppMethodInitialized = true;
	}
	GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * V_0 = NULL;
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// GameData data = SaveSystem.LoadGame();
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_0;
		L_0 = SaveSystem_LoadGame_m4E6D3F57C2D46E749C1DF4CD3169BF22FB70C137(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (data != null) //s� pega a lista se ela j� tiver sido salva uma vez
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		// foreach (var item in data.listTeste)
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_2 = V_0;
		NullCheck(L_2);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3 = L_2->get_listTeste_0();
		NullCheck(L_3);
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_4;
		L_4 = List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24(L_3, /*hidden argument*/List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		V_1 = L_4;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002b;
		}

IL_0017:
		{
			// foreach (var item in data.listTeste)
			int32_t L_5;
			L_5 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_1), /*hidden argument*/Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
			V_2 = L_5;
			// listNumAux.Add(item);
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_6 = __this->get_listNumAux_5();
			int32_t L_7 = V_2;
			NullCheck(L_6);
			List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_6, L_7, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		}

IL_002b:
		{
			// foreach (var item in data.listTeste)
			bool L_8;
			L_8 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_1), /*hidden argument*/Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0017;
			}
		}

IL_0034:
		{
			IL2CPP_LEAVE(0x4E, FINALLY_0036);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_1), /*hidden argument*/Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		IL2CPP_END_FINALLY(54)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4E, IL_004e)
	}

IL_0044:
	{
		// Debug.Log("Arquivo n�o encontrado");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral2F8D6579B86B02A4D595138A226B58163F5D38AA, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void ButtonControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonControl__ctor_m1AA2879EB9BB58535C7D8B7AC3E061801394480C (ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<int> listNumAux = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set_listNumAux_5(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Data::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Data__ctor_m7CB7DB28E1ADF23A472A1CF3780E2A8252444E91 (Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void DetectColider::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectColider_Awake_m1FEE229D1655227AD5DD51F30F73E14FE4AD9B6C (DetectColider_t5175106E96CE21174E46BE33CB290F817E4715ED * __this, const RuntimeMethod* method)
{
	{
		// panelGameOver.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_panelGameOver_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DetectColider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectColider_Update_m751B175712EBB25890FC1B6A857F8DF89289BA44 (DetectColider_t5175106E96CE21174E46BE33CB290F817E4715ED * __this, const RuntimeMethod* method)
{
	{
		// Detect();
		DetectColider_Detect_m3D53E3420B41D85899AB4A74618285E677594CBB(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DetectColider::Detect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectColider_Detect_m3D53E3420B41D85899AB4A74618285E677594CBB (DetectColider_t5175106E96CE21174E46BE33CB290F817E4715ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4054E330452FFC0D5C706F1AC4425C943D002646);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA6674409F7C6B9292B05AE11ED77B34E89BF184);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// Collider2D hit = Physics2D.OverlapCircle(transform.position, radius, layerWall);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_radius_6();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_4 = __this->get_layerWall_5();
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6;
		L_6 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_2, L_3, L_5, /*hidden argument*/NULL);
		// if (hit != null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0083;
		}
	}
	{
		// int aux1 = PlayerPrefs.GetInt("totalItens");
		int32_t L_8;
		L_8 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral4054E330452FFC0D5C706F1AC4425C943D002646, /*hidden argument*/NULL);
		V_0 = L_8;
		// int aux2 = PlayerPrefs.GetInt("ghostItems");
		int32_t L_9;
		L_9 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralEA6674409F7C6B9292B05AE11ED77B34E89BF184, /*hidden argument*/NULL);
		V_1 = L_9;
		// ghost = aux1 + aux2;
		int32_t L_10 = V_0;
		int32_t L_11 = V_1;
		__this->set_ghost_7(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)));
		// PlayerPrefs.SetInt("ghostItems", ghost);
		int32_t L_12 = __this->get_ghost_7();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralEA6674409F7C6B9292B05AE11ED77B34E89BF184, L_12, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// panelGameOver.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_panelGameOver_4();
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_14, /*hidden argument*/NULL);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void DetectColider::OnDrawGizmosSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectColider_OnDrawGizmosSelected_mF84B3CF378582A8CADFC6B9E04D4877B62BA4E1F (DetectColider_t5175106E96CE21174E46BE33CB290F817E4715ED * __this, const RuntimeMethod* method)
{
	{
		// Gizmos.DrawWireSphere(transform.position, radius);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = __this->get_radius_6();
		Gizmos_DrawWireSphere_m96C425145BBD85CF0192F9DDB3D1A8C69429B78B(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DetectColider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetectColider__ctor_mF472BE96119F926014EE7EA1E07A8DD6888C5903 (DetectColider_t5175106E96CE21174E46BE33CB290F817E4715ED * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FeedBackControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeedBackControl_Start_m5A1A49FA12BDCC48F4DC3F1F43526983307EC188 (FeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009 * __this, const RuntimeMethod* method)
{
	{
		// timeCount = 0;
		__this->set_timeCount_5((0.0f));
		// isActive = false;
		__this->set_isActive_6((bool)0);
		// feedbackTxt.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_feedbackTxt_4();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FeedBackControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeedBackControl_Update_m71DF64AD9898776BCF542206DEF73C64A43234CD (FeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009 * __this, const RuntimeMethod* method)
{
	{
		// Action();
		FeedBackControl_Action_m846170B44E84DE6230A38F83C88004E87C313469(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FeedBackControl::Action()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeedBackControl_Action_m846170B44E84DE6230A38F83C88004E87C313469 (FeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB92E9C9B67762C98DED905A759A745857ACFC6F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isActive)
		bool L_0 = __this->get_isActive_6();
		if (!L_0)
		{
			goto IL_0070;
		}
	}
	{
		// timeCount += Time.deltaTime;
		float L_1 = __this->get_timeCount_5();
		float L_2;
		L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timeCount_5(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		// feedbackTxt.GetComponent<Text>().text = $"Um item foi desbloqueado!";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_feedbackTxt_4();
		NullCheck(L_3);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4;
		L_4 = GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65(L_3, /*hidden argument*/GameObject_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mD98876EFC776CB8D02A1394AE6A72DC47F271C65_RuntimeMethod_var);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteralDB92E9C9B67762C98DED905A759A745857ACFC6F);
		// feedbackTxt.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_feedbackTxt_4();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// if (timeCount >= 2.5f)
		float L_7 = __this->get_timeCount_5();
		if ((!(((float)L_7) >= ((float)(2.5f)))))
		{
			goto IL_0070;
		}
	}
	{
		// isActive = false;
		__this->set_isActive_6((bool)0);
		// timeCount = 0;
		__this->set_timeCount_5((0.0f));
		// feedbackTxt.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_feedbackTxt_4();
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void FeedBackControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeedBackControl__ctor_m11DA6E3650D3FEF03897E1CB0D056D7F764A5159 (FeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Fuel::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fuel_Start_m7B58959DE30BAD9F942D1BB6314CEE5334A94B0D (Fuel_tEFC1BA77A2E72363161B01C3D32E3B63234C2E63 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = Random.Range(0, points.Count);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_0 = __this->get_points_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline(L_0, /*hidden argument*/List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// Instantiate(fuelPrefab, points[index].position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_fuelPrefab_5();
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_4 = __this->get_points_4();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_3, L_7, L_8, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Fuel::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fuel_Update_mE4E3DC0D246592C1ED2D49762C0BD20A602E21DF (Fuel_tEFC1BA77A2E72363161B01C3D32E3B63234C2E63 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// timeCount += Time.deltaTime;
		float L_0 = __this->get_timeCount_7();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timeCount_7(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (timeCount >= timeLimit)
		float L_2 = __this->get_timeCount_7();
		float L_3 = __this->get_timeLimit_6();
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_005f;
		}
	}
	{
		// int index = Random.Range(0, points.Count);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_4 = __this->get_points_4();
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline(L_4, /*hidden argument*/List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		int32_t L_6;
		L_6 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// Instantiate(fuelPrefab, points[index].position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_fuelPrefab_5();
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_8 = __this->get_points_4();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12;
		L_12 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_7, L_11, L_12, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// timeCount = 0;
		__this->set_timeCount_7((0.0f));
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void Fuel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Fuel__ctor_m9B4CB065DCA2AE7BFA8FF8531CC5F4BF2DAD655B (Fuel_tEFC1BA77A2E72363161B01C3D32E3B63234C2E63 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FuelCollider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FuelCollider_Start_m4ADF46B3FD569601B3643AA90A63FBA55451A773 (FuelCollider_tE8C9954D1E487A32032B366F438408E60709854A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m3CAE7179B3FA6FD24CA1F0D12C0043AE34660491_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = FindObjectOfType<Player>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_0;
		L_0 = Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m3CAE7179B3FA6FD24CA1F0D12C0043AE34660491(/*hidden argument*/Object_FindObjectOfType_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m3CAE7179B3FA6FD24CA1F0D12C0043AE34660491_RuntimeMethod_var);
		__this->set_player_4(L_0);
		// }
		return;
	}
}
// System.Void FuelCollider::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FuelCollider_OnTriggerEnter2D_mDFD7F47ABE15538DCEF5F17D5629188252637197 (FuelCollider_tE8C9954D1E487A32032B366F438408E60709854A * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.CompareTag("Player"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// player.AddFuel(Random.Range(5, 10));
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_2 = __this->get_player_4();
		int32_t L_3;
		L_3 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(5, ((int32_t)10), /*hidden argument*/NULL);
		NullCheck(L_2);
		Player_AddFuel_m9A2F8E5C92182739E131243D0C4E73A9E1839D87(L_2, L_3, /*hidden argument*/NULL);
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// if (collision.CompareTag("End"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = ___collision0;
		NullCheck(L_5);
		bool L_6;
		L_6 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_5, _stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_7, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void FuelCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FuelCollider__ctor_m64C1DF630E271B7D675BD5B3E8609FDBB384FAFF (FuelCollider_tE8C9954D1E487A32032B366F438408E60709854A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FuelText::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FuelText_Start_m2A8279765D4AA4ED90B4EBEF194FDE1DFBF5CA4A (FuelText_t8FBC0C607614047F0EE83F4A25B06BF34B5E204D * __this, const RuntimeMethod* method)
{
	{
		// timeCount = 0;
		__this->set_timeCount_7((0.0f));
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FuelText::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FuelText_Update_m67F4E25DEEC7AA3351201D9B29EF470102B09632 (FuelText_t8FBC0C607614047F0EE83F4A25B06BF34B5E204D * __this, const RuntimeMethod* method)
{
	{
		// transform.Translate(Vector2.up * speed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_2 = __this->get_speed_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_1, L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_3, L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_0, L_6, /*hidden argument*/NULL);
		// timeCount += Time.deltaTime;
		float L_7 = __this->get_timeCount_7();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timeCount_7(((float)il2cpp_codegen_add((float)L_7, (float)L_8)));
		// if (timeCount >= countLimit)
		float L_9 = __this->get_timeCount_7();
		float L_10 = __this->get_countLimit_6();
		if ((!(((float)L_9) >= ((float)L_10))))
		{
			goto IL_007c;
		}
	}
	{
		// timeCount = 0;
		__this->set_timeCount_7((0.0f));
		// gameObject.transform.position = point.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = __this->get_point_4();
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_14, /*hidden argument*/NULL);
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)0, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void FuelText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FuelText__ctor_mE78C3D6B8ED9D02E479BE66E1E70B468A79F0A7F (FuelText_t8FBC0C607614047F0EE83F4A25B06BF34B5E204D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_Start_mC87BC176F09F4C6C35BE717C51E5FCC26F074496 (GameControl_t8DAFC60E5E51F6D61D77F480B91691765270D43A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisFeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009_m1D574410DB351F1661DB925B8075215F9D85BF13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4054E330452FFC0D5C706F1AC4425C943D002646);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("totalItens", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral4054E330452FFC0D5C706F1AC4425C943D002646, 0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("number", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741, 0, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// barProgressItems.fillAmount = 0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_barProgressItems_5();
		NullCheck(L_0);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_0, (0.0f), /*hidden argument*/NULL);
		// feedback = GetComponent<FeedBackControl>();
		FeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009 * L_1;
		L_1 = Component_GetComponent_TisFeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009_m1D574410DB351F1661DB925B8075215F9D85BF13(__this, /*hidden argument*/Component_GetComponent_TisFeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009_m1D574410DB351F1661DB925B8075215F9D85BF13_RuntimeMethod_var);
		__this->set_feedback_10(L_1);
		// countProgress = 0;
		__this->set_countProgress_7(0);
		// timeCount = 0;
		__this->set_timeCount_8((0.0f));
		// }
		return;
	}
}
// System.Void GameControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_Update_mF3B2832BCB029E9CA0F079FBA2FE9FCF1D76ACC1 (GameControl_t8DAFC60E5E51F6D61D77F480B91691765270D43A * __this, const RuntimeMethod* method)
{
	{
		// UnlockObject();
		GameControl_UnlockObject_mDC9FF4FD7DE905300751AB8A8F9D9B8B9FE1B8C0(__this, /*hidden argument*/NULL);
		// Progress();
		GameControl_Progress_m6AF4E6D5110684D8D8A3DC5DADDDB47B947DF5D2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameControl::UnlockObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_UnlockObject_mDC9FF4FD7DE905300751AB8A8F9D9B8B9FE1B8C0 (GameControl_t8DAFC60E5E51F6D61D77F480B91691765270D43A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4054E330452FFC0D5C706F1AC4425C943D002646);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (currentBarItems == totalBarItems)
		float L_0 = __this->get_currentBarItems_6();
		float L_1 = __this->get_totalBarItems_9();
		if ((!(((float)L_0) == ((float)L_1))))
		{
			goto IL_0050;
		}
	}
	{
		// PlayerPrefs.SetInt("number", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741, 1, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("totalItens", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral4054E330452FFC0D5C706F1AC4425C943D002646, 1, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// feedback.isActive = true;
		FeedBackControl_t3CC99B6553FA3D43E7F77EEBD9B49E73F7CA4009 * L_2 = __this->get_feedback_10();
		NullCheck(L_2);
		L_2->set_isActive_6((bool)1);
		// currentBarItems = 0;
		__this->set_currentBarItems_6((0.0f));
		// barProgressItems.fillAmount = 0;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_barProgressItems_5();
		NullCheck(L_3);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_3, (0.0f), /*hidden argument*/NULL);
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void GameControl::Progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl_Progress_m6AF4E6D5110684D8D8A3DC5DADDDB47B947DF5D2 (GameControl_t8DAFC60E5E51F6D61D77F480B91691765270D43A * __this, const RuntimeMethod* method)
{
	{
		// timeCount += Time.deltaTime;
		float L_0 = __this->get_timeCount_8();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timeCount_8(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (timeCount >= 2)
		float L_2 = __this->get_timeCount_8();
		if ((!(((float)L_2) >= ((float)(2.0f)))))
		{
			goto IL_0078;
		}
	}
	{
		// currentBarItems++;
		float L_3 = __this->get_currentBarItems_6();
		__this->set_currentBarItems_6(((float)il2cpp_codegen_add((float)L_3, (float)(1.0f))));
		// barProgressItems.fillAmount = currentBarItems / totalBarItems;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_barProgressItems_5();
		float L_5 = __this->get_currentBarItems_6();
		float L_6 = __this->get_totalBarItems_9();
		NullCheck(L_4);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_4, ((float)((float)L_5/(float)L_6)), /*hidden argument*/NULL);
		// countProgress++;
		int32_t L_7 = __this->get_countProgress_7();
		__this->set_countProgress_7(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		// countProgressTxt.text = countProgress.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_countProgressTxt_4();
		int32_t* L_9 = __this->get_address_of_countProgress_7();
		String_t* L_10;
		L_10 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_10);
		// timeCount = 0;
		__this->set_timeCount_8((0.0f));
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void GameControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameControl__ctor_mACA9C1A4FB36FD1BF79C872BB7828841782B6078 (GameControl_t8DAFC60E5E51F6D61D77F480B91691765270D43A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameData::.ctor(ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData__ctor_mF35B16E2ACF502E4E4F0CD171199E13DE40B08F5 (GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * __this, ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// public GameData(ButtonControl data)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// listTeste = new List<int>();
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)il2cpp_codegen_object_new(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_il2cpp_TypeInfo_var);
		List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD(L_0, /*hidden argument*/List_1__ctor_m45E78772E9157F6CD684A69AAB07CE4082FE5FFD_RuntimeMethod_var);
		__this->set_listTeste_0(L_0);
		// foreach (var item in data.listNumAux)
		ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * L_1 = ___data0;
		NullCheck(L_1);
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_2 = L_1->get_listNumAux_5();
		NullCheck(L_2);
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_3;
		L_3 = List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24(L_2, /*hidden argument*/List_1_GetEnumerator_m153808182EE4702E05177827BB9D2D3961116B24_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_001d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0033;
		}

IL_001f:
		{
			// foreach (var item in data.listNumAux)
			int32_t L_4;
			L_4 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_0), /*hidden argument*/Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_RuntimeMethod_var);
			V_1 = L_4;
			// listTeste.Add(item);
			List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_5 = __this->get_listTeste_0();
			int32_t L_6 = V_1;
			NullCheck(L_5);
			List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F(L_5, L_6, /*hidden argument*/List_1_Add_mEE653047BDB3486ACC2E16DC6C3422A0BA48F01F_RuntimeMethod_var);
		}

IL_0033:
		{
			// foreach (var item in data.listNumAux)
			bool L_7;
			L_7 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_RuntimeMethod_var);
			if (L_7)
			{
				goto IL_001f;
			}
		}

IL_003c:
		{
			IL2CPP_LEAVE(0x4C, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(&V_0), /*hidden argument*/Enumerator_Dispose_m0F4FCA57A586D78D592E624FE089FC61DF99EF86_RuntimeMethod_var);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
	}

IL_004c:
	{
		// }
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
// System.Void GetData::UpdateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetData_UpdateInfo_mDE386548CFE2648E13D230327398255C80CD92BD (GetData_tB0CA14A8FBC7A6CA58EC8AE7496ECCC8977FE1E8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7388ED22F744DCAA22CAB71B36BFA7BEED8AF4DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// title.text = data[index].title;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_title_5();
		List_1_tD69A8C09C35C518FDC8117C468527838EB937ABD * L_1 = __this->get_data_4();
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_3;
		L_3 = List_1_get_Item_m7388ED22F744DCAA22CAB71B36BFA7BEED8AF4DA_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m7388ED22F744DCAA22CAB71B36BFA7BEED8AF4DA_RuntimeMethod_var);
		NullCheck(L_3);
		String_t* L_4 = L_3->get_title_4();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// statusClass.text = data[index].statusClass;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = __this->get_statusClass_6();
		List_1_tD69A8C09C35C518FDC8117C468527838EB937ABD * L_6 = __this->get_data_4();
		int32_t L_7 = ___index0;
		NullCheck(L_6);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_8;
		L_8 = List_1_get_Item_m7388ED22F744DCAA22CAB71B36BFA7BEED8AF4DA_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m7388ED22F744DCAA22CAB71B36BFA7BEED8AF4DA_RuntimeMethod_var);
		NullCheck(L_8);
		String_t* L_9 = L_8->get_statusClass_5();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_9);
		// description.text = data[index].description;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = __this->get_description_7();
		List_1_tD69A8C09C35C518FDC8117C468527838EB937ABD * L_11 = __this->get_data_4();
		int32_t L_12 = ___index0;
		NullCheck(L_11);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_13;
		L_13 = List_1_get_Item_m7388ED22F744DCAA22CAB71B36BFA7BEED8AF4DA_inline(L_11, L_12, /*hidden argument*/List_1_get_Item_m7388ED22F744DCAA22CAB71B36BFA7BEED8AF4DA_RuntimeMethod_var);
		NullCheck(L_13);
		String_t* L_14 = L_13->get_description_6();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_14);
		// image.sprite = data[index].image;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15 = __this->get_image_8();
		List_1_tD69A8C09C35C518FDC8117C468527838EB937ABD * L_16 = __this->get_data_4();
		int32_t L_17 = ___index0;
		NullCheck(L_16);
		Data_t14E47C3ECEA81C6E00A0C71917C0E74F6F05DB14 * L_18;
		L_18 = List_1_get_Item_m7388ED22F744DCAA22CAB71B36BFA7BEED8AF4DA_inline(L_16, L_17, /*hidden argument*/List_1_get_Item_m7388ED22F744DCAA22CAB71B36BFA7BEED8AF4DA_RuntimeMethod_var);
		NullCheck(L_18);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_19 = L_18->get_image_7();
		NullCheck(L_15);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_15, L_19, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GetData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetData__ctor_mA7B015A010D0DEA8FCAB1C681762DC70FA6A745A (GetData_tB0CA14A8FBC7A6CA58EC8AE7496ECCC8977FE1E8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void IncrementItemsUnlock::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementItemsUnlock_Start_m446EE1F9661F47FD6673DBD3431D326518CA219F (IncrementItemsUnlock_tB29E37E4C2EE02F00B74D6596E78957B3836EC4E * __this, const RuntimeMethod* method)
{
	{
		// incrementItems = 0;
		__this->set_incrementItems_4(0);
		// }
		return;
	}
}
// System.Void IncrementItemsUnlock::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementItemsUnlock_Update_mC76B50D3E6AE2BBB61F8D793B28237A513C27B1B (IncrementItemsUnlock_tB29E37E4C2EE02F00B74D6596E78957B3836EC4E * __this, const RuntimeMethod* method)
{
	{
		// IncrementItems();
		IncrementItemsUnlock_IncrementItems_m2DCA1035F81E31DBE843AE76E88264C9E1EB64AE(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IncrementItemsUnlock::IncrementItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementItemsUnlock_IncrementItems_m2DCA1035F81E31DBE843AE76E88264C9E1EB64AE (IncrementItemsUnlock_tB29E37E4C2EE02F00B74D6596E78957B3836EC4E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4054E330452FFC0D5C706F1AC4425C943D002646);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741);
		s_Il2CppMethodInitialized = true;
	}
	{
		// incrementItems++;
		int32_t L_0 = __this->get_incrementItems_4();
		__this->set_incrementItems_4(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// PlayerPrefs.SetInt("totalItens", incrementItems);
		int32_t L_1 = __this->get_incrementItems_4();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral4054E330452FFC0D5C706F1AC4425C943D002646, L_1, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("number", 1);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741, 1, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// Debug.Log(incrementItems);
		int32_t L_2 = __this->get_incrementItems_4();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IncrementItemsUnlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncrementItemsUnlock__ctor_m8737D195321D86DF149762AA332E73502217D26D (IncrementItemsUnlock_tB29E37E4C2EE02F00B74D6596E78957B3836EC4E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MenuControl::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuControl_LoadScene_m55EC1C9C38527B42FCBFD328488EE68D1CFDD3B5 (MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778 * __this, String_t* ___scene0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(scene);
		String_t* L_0 = ___scene0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuControl::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuControl_QuitGame_m0405611F6779C165689FA484D3D7F5F8C75EF3ED (MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuControl::Restart(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuControl_Restart_mBC2F75EC6EA69E2E158C74063AB076E68394E5F3 (MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778 * __this, String_t* ___scene0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// panelGameOver.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_panelGameOver_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// SceneManager.LoadScene(scene);
		String_t* L_1 = ___scene0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuControl::ActiveInfo(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuControl_ActiveInfo_m4617162062E344E3A00839198CA3DC007761E64E (MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panelInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisGetData_tB0CA14A8FBC7A6CA58EC8AE7496ECCC8977FE1E8_m6295D5E38989D2A9CAAB73A746EFE85B843FF6FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!panelInfo.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___panelInfo0;
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		// int index = PlayerPrefs.GetInt("index");
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, /*hidden argument*/NULL);
		V_0 = L_2;
		// panelInfo.GetComponentInChildren<GetData>().UpdateInfo(index);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___panelInfo0;
		NullCheck(L_3);
		GetData_tB0CA14A8FBC7A6CA58EC8AE7496ECCC8977FE1E8 * L_4;
		L_4 = GameObject_GetComponentInChildren_TisGetData_tB0CA14A8FBC7A6CA58EC8AE7496ECCC8977FE1E8_m6295D5E38989D2A9CAAB73A746EFE85B843FF6FE(L_3, /*hidden argument*/GameObject_GetComponentInChildren_TisGetData_tB0CA14A8FBC7A6CA58EC8AE7496ECCC8977FE1E8_m6295D5E38989D2A9CAAB73A746EFE85B843FF6FE_RuntimeMethod_var);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		GetData_UpdateInfo_mDE386548CFE2648E13D230327398255C80CD92BD(L_4, L_5, /*hidden argument*/NULL);
		// panelInfo.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = ___panelInfo0;
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0027:
	{
		// panelInfo.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = ___panelInfo0;
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuControl::Dell()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuControl_Dell_m24826DCF9F70105B7E9BC62EB866EE27FCFD4434 (MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778 * __this, const RuntimeMethod* method)
{
	{
		// PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_mAE4594C2D974BE67EC390E0FDECEDC59F17A12E0(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuControl__ctor_m41FDDED87EF02E950C6268EA0AD453CA34825398 (MenuControl_tD6B61EA950F8DF6E5A76C458AAA2E71D25654778 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MoveBG::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveBG_Update_mE569E6E333E16A0A5B5ADA87553C88E486306C62 (MoveBG_t0207AF35FF4935008877858F1DB5405B92A24C76 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.Translate(Vector2.left * speed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		float L_2 = __this->get_speed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_1, L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_3, L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_0, L_6, /*hidden argument*/NULL);
		// if (transform.position.x == -8.25f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		if ((!(((float)L_9) == ((float)(-8.25f)))))
		{
			goto IL_004c;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_10, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void MoveBG::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveBG__ctor_m5E92EC7EEFEA6350100228A412BCCE1DD465015F (MoveBG_t0207AF35FF4935008877858F1DB5405B92A24C76 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mBD692B64AAC791B93A589E7D3596F36787EAF021 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// particleS.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = __this->get_particleS_5();
		NullCheck(L_0);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_0, /*hidden argument*/NULL);
		// currentFuel = totalFuel;
		float L_1 = __this->get_totalFuel_10();
		__this->set_currentFuel_12(L_1);
		// rig = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_2;
		L_2 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rig_7(L_2);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// Inputs();
		Player_Inputs_m840C46EB1B43CC3AA939BC40B1D039568A1668A9(__this, /*hidden argument*/NULL);
		// DecrementFuel();
		Player_DecrementFuel_m278184FEFEA457EA41E95E0BBA9FA5651247EECF(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FixedUpdate_mD7447EDFC86F29A3E5FBDEF7E0139535BD4C5088 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// Jump();
		Player_Jump_m741715891EE6DEC1EC5F6A7233B6395ABD0E272C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Inputs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Inputs_m840C46EB1B43CC3AA939BC40B1D039568A1668A9 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetMouseButton(0))
		bool L_0;
		L_0 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// isJump = true;
		__this->set_isJump_6((bool)1);
	}

IL_000f:
	{
		// if (Input.GetMouseButtonUp(0))
		bool L_1;
		L_1 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// isJump = false;
		__this->set_isJump_6((bool)0);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void Player::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Jump_m741715891EE6DEC1EC5F6A7233B6395ABD0E272C (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// if (isJump && currentFuel > 0)
		bool L_0 = __this->get_isJump_6();
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		float L_1 = __this->get_currentFuel_12();
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_0046;
		}
	}
	{
		// particleS.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_2 = __this->get_particleS_5();
		NullCheck(L_2);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_2, /*hidden argument*/NULL);
		// rig.AddForce(Vector2.up * forceJump * Time.fixedDeltaTime, ForceMode2D.Impulse);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_3 = __this->get_rig_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_get_up_mCEC23A0CF0FC3A2070C557AFD9F84F3D9991866C(/*hidden argument*/NULL);
		float L_5 = __this->get_forceJump_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_4, L_5, /*hidden argument*/NULL);
		float L_7;
		L_7 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_3);
		Rigidbody2D_AddForce_m2360EEDAF4E9F279AAB77DBD785A7F7161865343(L_3, L_8, 1, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void Player::DecrementFuel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_DecrementFuel_m278184FEFEA457EA41E95E0BBA9FA5651247EECF (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// if (isJump)
		bool L_0 = __this->get_isJump_6();
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		// currentFuel -= decrementValue;
		float L_1 = __this->get_currentFuel_12();
		float L_2 = __this->get_decrementValue_11();
		__this->set_currentFuel_12(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		// fuelBar.fillAmount = currentFuel / totalFuel;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_fuelBar_9();
		float L_4 = __this->get_currentFuel_12();
		float L_5 = __this->get_totalFuel_10();
		NullCheck(L_3);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_3, ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
	}

IL_0033:
	{
		// if (currentFuel <= 0)
		float L_6 = __this->get_currentFuel_12();
		if ((!(((float)L_6) <= ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		// currentFuel = 0;
		__this->set_currentFuel_12((0.0f));
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Player::AddFuel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_AddFuel_m9A2F8E5C92182739E131243D0C4E73A9E1839D87 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B1340CD5A7B722CBA512201F52BB1E5DFCCF7A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// fuelGetTxt.gameObject.SetActive(true);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_fuelGetTxt_8();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// fuelGetTxt.text = $"+{value}";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_fuelGetTxt_8();
		int32_t L_3 = ___value0;
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1B1340CD5A7B722CBA512201F52BB1E5DFCCF7A2, L_5, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_6);
		// if (currentFuel + value < totalFuel)
		float L_7 = __this->get_currentFuel_12();
		int32_t L_8 = ___value0;
		float L_9 = __this->get_totalFuel_10();
		if ((!(((float)((float)il2cpp_codegen_add((float)L_7, (float)((float)((float)L_8))))) < ((float)L_9))))
		{
			goto IL_0065;
		}
	}
	{
		// currentFuel += value;
		float L_10 = __this->get_currentFuel_12();
		int32_t L_11 = ___value0;
		__this->set_currentFuel_12(((float)il2cpp_codegen_add((float)L_10, (float)((float)((float)L_11)))));
		// fuelBar.fillAmount = currentFuel / totalFuel;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_12 = __this->get_fuelBar_9();
		float L_13 = __this->get_currentFuel_12();
		float L_14 = __this->get_totalFuel_10();
		NullCheck(L_12);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_12, ((float)((float)L_13/(float)L_14)), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0065:
	{
		// currentFuel = totalFuel;
		float L_15 = __this->get_totalFuel_10();
		__this->set_currentFuel_12(L_15);
		// fuelBar.fillAmount = currentFuel / totalFuel;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_16 = __this->get_fuelBar_9();
		float L_17 = __this->get_currentFuel_12();
		float L_18 = __this->get_totalFuel_10();
		NullCheck(L_16);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_16, ((float)((float)L_17/(float)L_18)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SaveIndex::SaveIndexInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveIndex_SaveIndexInfo_m8D2E85A32EF62DA3DF3BAD0B82ABEA4C5DD94901 (SaveIndex_t4CDE4A8C7E9E266DB00D44DBF9EB7D0E6F73DF95 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("index", index);
		int32_t L_0 = ___index0;
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1, L_0, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SaveIndex::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveIndex__ctor_mACA6DD729BBEA1BB91F7310710B1D23A883F27EA (SaveIndex_t4CDE4A8C7E9E266DB00D44DBF9EB7D0E6F73DF95 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SaveSystem::SaveGame(ButtonControl)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveSystem_SaveGame_m6F2463328B31B318BAD89DA7C19C7F0CA95C924E (ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EAD9AF6E093DA8D539878BCCC66CAF71C839CB6);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_0 = NULL;
	GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * V_1 = NULL;
	{
		// BinaryFormatter binary = new BinaryFormatter();
		BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * L_0 = (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)il2cpp_codegen_object_new(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126(L_0, /*hidden argument*/NULL);
		// string path = Application.persistentDataPath + "/game.aqs";
		String_t* L_1;
		L_1 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_1, _stringLiteral0EAD9AF6E093DA8D539878BCCC66CAF71C839CB6, /*hidden argument*/NULL);
		// FileStream stream = new FileStream(path, FileMode.Create);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_3 = (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)il2cpp_codegen_object_new(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		FileStream__ctor_mDC286819520925AB5873921EFFEADA1EC1648CFB(L_3, L_2, 2, /*hidden argument*/NULL);
		V_0 = L_3;
		// GameData data = new GameData(value);
		ButtonControl_t847E1A2F6DD4F75019BB1EE19D9F379D4BFDA64F * L_4 = ___value0;
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_5 = (GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD *)il2cpp_codegen_object_new(GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var);
		GameData__ctor_mF35B16E2ACF502E4E4F0CD171199E13DE40B08F5(L_5, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// binary.Serialize(stream, data);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_6 = V_0;
		GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * L_7 = V_1;
		NullCheck(L_0);
		BinaryFormatter_Serialize_m780327356D3B5B1B734338AB398B32E65AD6CB5B(L_0, L_6, L_7, /*hidden argument*/NULL);
		// stream.Close();
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_8 = V_0;
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_8);
		// }
		return;
	}
}
// GameData SaveSystem::LoadGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD * SaveSystem_LoadGame_m4E6D3F57C2D46E749C1DF4CD3169BF22FB70C137 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EAD9AF6E093DA8D539878BCCC66CAF71C839CB6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_1 = NULL;
	{
		// string path = Application.persistentDataPath + "/game.aqs";
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_1;
		L_1 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_0, _stringLiteral0EAD9AF6E093DA8D539878BCCC66CAF71C839CB6, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (File.Exists(path))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// BinaryFormatter binary = new BinaryFormatter();
		BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * L_4 = (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)il2cpp_codegen_object_new(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126(L_4, /*hidden argument*/NULL);
		// FileStream stream = new FileStream(path, FileMode.Open);
		String_t* L_5 = V_0;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_6 = (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)il2cpp_codegen_object_new(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		FileStream__ctor_mDC286819520925AB5873921EFFEADA1EC1648CFB(L_6, L_5, 3, /*hidden argument*/NULL);
		V_1 = L_6;
		// GameData data = binary.Deserialize(stream) as GameData;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_7 = V_1;
		NullCheck(L_4);
		RuntimeObject * L_8;
		L_8 = BinaryFormatter_Deserialize_mF7AFD0FE0E41A77BC60B11705FA7CC76EFE63DBC(L_4, L_7, /*hidden argument*/NULL);
		// stream.Close();
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_9 = V_1;
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_9);
		// return data;
		return ((GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD *)IsInstClass((RuntimeObject*)L_8, GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD_il2cpp_TypeInfo_var));
	}

IL_0037:
	{
		// return null;
		return (GameData_tBB3875760FC6FBB28B9D4694716D4C0E19EED1CD *)NULL;
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
// System.Single Scenary::get_TimeCountLimit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scenary_get_TimeCountLimit_m6F4D12F9214361BE88CF72B4926505A1718AAD57 (Scenary_tE44B449A3DB988D449CB65231127C22462D1BCD0 * __this, const RuntimeMethod* method)
{
	{
		// public float TimeCountLimit { get => timeCountLimit; set => timeCountLimit = value; }
		float L_0 = __this->get_timeCountLimit_6();
		return L_0;
	}
}
// System.Void Scenary::set_TimeCountLimit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scenary_set_TimeCountLimit_m35ABA18D92ECCE01147DA0F07E43F38FD8242CD3 (Scenary_tE44B449A3DB988D449CB65231127C22462D1BCD0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float TimeCountLimit { get => timeCountLimit; set => timeCountLimit = value; }
		float L_0 = ___value0;
		__this->set_timeCountLimit_6(L_0);
		return;
	}
}
// System.Void Scenary::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scenary_Start_m64BE660026D8336C85A263F0FFD212BB43580D71 (Scenary_tE44B449A3DB988D449CB65231127C22462D1BCD0 * __this, const RuntimeMethod* method)
{
	{
		// CreateWall(points, 2);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_0 = __this->get_points_5();
		Scenary_CreateWall_mAC15F7A23038BBEFC822AB0184C4928056C663BE(__this, L_0, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Scenary::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scenary_Update_mF6FFC01FB34FE003422547034CD1F2186E869701 (Scenary_tE44B449A3DB988D449CB65231127C22462D1BCD0 * __this, const RuntimeMethod* method)
{
	{
		// timeCount += Time.deltaTime;
		float L_0 = __this->get_timeCount_7();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_timeCount_7(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (timeCount >= TimeCountLimit)
		float L_2 = __this->get_timeCount_7();
		float L_3;
		L_3 = Scenary_get_TimeCountLimit_m6F4D12F9214361BE88CF72B4926505A1718AAD57_inline(__this, /*hidden argument*/NULL);
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0038;
		}
	}
	{
		// CreateWall(points, 2);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_4 = __this->get_points_5();
		Scenary_CreateWall_mAC15F7A23038BBEFC822AB0184C4928056C663BE(__this, L_4, 2, /*hidden argument*/NULL);
		// timeCount = 0;
		__this->set_timeCount_7((0.0f));
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Scenary::CreateWall(System.Collections.Generic.List`1<UnityEngine.Transform>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scenary_CreateWall_mAC15F7A23038BBEFC822AB0184C4928056C663BE (Scenary_tE44B449A3DB988D449CB65231127C22462D1BCD0 * __this, List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___points0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < value; i++)
		V_0 = 0;
		goto IL_003b;
	}

IL_0004:
	{
		// int index = Random.Range(0, points.Count);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_0 = ___points0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_inline(L_0, /*hidden argument*/List_1_get_Count_m82AF14687C6FA2B1572D859A551E3ADBCBADC3C0_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		// GameObject auxObj = ModifyObj(wall, index, 60);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_wall_4();
		int32_t L_4 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Scenary_ModifyObj_mF740BBAE19B62F31D5A2FA21B22FDD83CFCEC888(__this, L_3, L_4, ((int32_t)60), /*hidden argument*/NULL);
		// Instantiate(auxObj, points[index].position, Quaternion.identity);
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_6 = ___points0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_inline(L_6, L_7, /*hidden argument*/List_1_get_Item_m8B222F262DF0C4B49E12B4E87AB2162202744499_RuntimeMethod_var);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B(L_5, L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m81B599A0051F8F4543E5C73A11585E96E940943B_RuntimeMethod_var);
		// for (int i = 0; i < value; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003b:
	{
		// for (int i = 0; i < value; i++)
		int32_t L_13 = V_0;
		int32_t L_14 = ___value1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject Scenary::ModifyObj(UnityEngine.GameObject,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Scenary_ModifyObj_mF740BBAE19B62F31D5A2FA21B22FDD83CFCEC888 (Scenary_tE44B449A3DB988D449CB65231127C22462D1BCD0 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj0, int32_t ___index1, int32_t ___percentagem2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int perc = Random.Range(1, 100);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, ((int32_t)100), /*hidden argument*/NULL);
		V_0 = L_0;
		// int x = Random.Range(2, 3);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(2, 3, /*hidden argument*/NULL);
		V_1 = L_1;
		// int y = Random.Range(1, 3);
		int32_t L_2;
		L_2 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 3, /*hidden argument*/NULL);
		V_2 = L_2;
		// if (index == 0)
		int32_t L_3 = ___index1;
		if (L_3)
		{
			goto IL_0042;
		}
	}
	{
		// obj.transform.localScale = new Vector3(x, y, obj.transform.localScale.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = ___obj0;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		int32_t L_7 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = ___obj0;
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)((float)L_6)), ((float)((float)L_7)), L_11, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_5, L_12, /*hidden argument*/NULL);
		// return obj;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = ___obj0;
		return L_13;
	}

IL_0042:
	{
		// else if (index == 1)
		int32_t L_14 = ___index1;
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0097;
		}
	}
	{
		// if (perc < percentagem)
		int32_t L_15 = V_0;
		int32_t L_16 = ___percentagem2;
		if ((((int32_t)L_15) >= ((int32_t)L_16)))
		{
			goto IL_0071;
		}
	}
	{
		// obj.transform.localScale = new Vector3(x, -y, obj.transform.localScale.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = ___obj0;
		NullCheck(L_17);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		int32_t L_19 = V_1;
		int32_t L_20 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = ___obj0;
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_22, /*hidden argument*/NULL);
		float L_24 = L_23.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_25), ((float)((float)L_19)), ((float)((float)((-L_20)))), L_24, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_18, L_25, /*hidden argument*/NULL);
		// return obj;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = ___obj0;
		return L_26;
	}

IL_0071:
	{
		// obj.transform.localScale = new Vector3(x, y, obj.transform.localScale.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = ___obj0;
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_1;
		int32_t L_30 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = ___obj0;
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_35), ((float)((float)L_29)), ((float)((float)L_30)), L_34, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_28, L_35, /*hidden argument*/NULL);
		// return obj;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = ___obj0;
		return L_36;
	}

IL_0097:
	{
		// else if (index == 2)
		int32_t L_37 = ___index1;
		if ((!(((uint32_t)L_37) == ((uint32_t)2))))
		{
			goto IL_00c2;
		}
	}
	{
		// obj.transform.localScale = new Vector3(x, -y, obj.transform.localScale.z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = ___obj0;
		NullCheck(L_38);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_39;
		L_39 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_38, /*hidden argument*/NULL);
		int32_t L_40 = V_1;
		int32_t L_41 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = ___obj0;
		NullCheck(L_42);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_43;
		L_43 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44;
		L_44 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_43, /*hidden argument*/NULL);
		float L_45 = L_44.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_46), ((float)((float)L_40)), ((float)((float)((-L_41)))), L_45, /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_39, L_46, /*hidden argument*/NULL);
		// return obj;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = ___obj0;
		return L_47;
	}

IL_00c2:
	{
		// return obj;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = ___obj0;
		return L_48;
	}
}
// System.Void Scenary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scenary__ctor_mE7D2288A9F481217649F607D1A9854A25AF300C8 (Scenary_tE44B449A3DB988D449CB65231127C22462D1BCD0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ValueControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueControl_Start_mD963C5963DED4902A77CAE98B3C33D097B09541A (ValueControl_tF26AFCFD049806DB48FB04B12B8A1268263FBA00 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("number", 0);
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral7A05A136E34451BA838B56C57A62ABDD1887D741, 0, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ValueControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueControl__ctor_m12846F2AF3AC3855BE81E3367189552E4B12A0A6 (ValueControl_tF26AFCFD049806DB48FB04B12B8A1268263FBA00 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Wall::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall_Update_mF5C141797F100C1216B0A21F9ABEDDF2E07C4015 (Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C * __this, const RuntimeMethod* method)
{
	{
		// ToMove();
		Wall_ToMove_mD8E65A77E93301CB33D08ED9ED634CE197428F1F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wall::ToMove()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall_ToMove_mD8E65A77E93301CB33D08ED9ED634CE197428F1F (Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C * __this, const RuntimeMethod* method)
{
	{
		// transform.Translate(Vector2.left * speed * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = Vector2_get_left_m6AB0857E0C702D555B6747B6B4359D019C60CF14(/*hidden argument*/NULL);
		float L_2 = __this->get_speed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_1, L_2, /*hidden argument*/NULL);
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_3, L_4, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m24A8CB13E2AAB0C17EE8FE593266CF463E0B02D0(L_0, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Wall::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall_OnTriggerEnter2D_mFA9E20B48DDBC281FDADD170E4B0AB4C83814254 (Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.CompareTag("End"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Wall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall__ctor_m90F1D5997556A6DA8EEE00148EA781E96718A763 (Wall_t75B0B5D0D103AF52A80C03FFB000620BD9005D4C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Scenary_get_TimeCountLimit_m6F4D12F9214361BE88CF72B4926505A1718AAD57_inline (Scenary_tE44B449A3DB988D449CB65231127C22462D1BCD0 * __this, const RuntimeMethod* method)
{
	{
		// public float TimeCountLimit { get => timeCountLimit; set => timeCountLimit = value; }
		float L_0 = __this->get_timeCountLimit_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7FA90926D9267868473EF90941F6BF794EC87FF2_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Item_m730FCAD2646FA94B07D1216A512B09AB9F0BBA5D_gshared_inline (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_2, (int32_t)L_3);
		return (int32_t)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
