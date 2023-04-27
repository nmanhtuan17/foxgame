#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
// BossTankMine[]
struct BossTankMineU5BU5D_tB8508ED8DD8DE038938C617F08B611823FFD23EC;
// Checkpoint[]
struct CheckpointU5BU5D_t5C9CE0CC022D7F12B4299C1EA681347FB012C337;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// MapPoint[]
struct MapPointU5BU5D_t84BCF9FA2C4A6A22FE730A04BA0CAF4F4BAC1917;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BossActivator
struct BossActivator_t7A2557EBD0DB96374A95102E6A455A2B734F51E2;
// BossBullet
struct BossBullet_t11BD774C4D178E3F05D07331097D3E724FF197EB;
// BossTankController
struct BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E;
// BossTankHitBox
struct BossTankHitBox_t67E5ECAB86413C0F6DB56D89E1F076219D789E73;
// BossTankMine
struct BossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC;
// BouncePad
struct BouncePad_tBE250C0A3B6946A38A62FD7CF48B62872BB58F0C;
// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// Checkpoint
struct Checkpoint_t73DBB588194FE620149319CC45C4187E6A9EB068;
// CheckpointController
struct CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DamagePlayer
struct DamagePlayer_tF2BE6E941F78A7C9B9D32F315CBBC925D08A308B;
// DestroyOverTime
struct DestroyOverTime_tB6E7227A73D9ED057CD22D98943009A2A5195C08;
// EnemyController
struct EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A;
// FlyingEnemyController
struct FlyingEnemyController_t362C518795D93DE0AD0402D3701CD7D23E14EC1F;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// KillPlayer
struct KillPlayer_tB2C563851C648DB239F5CC0A98A3518F8F6FF3EE;
// LSCameraController
struct LSCameraController_t5896A02FED50CCB1D60CCB5E261D014357E70029;
// LSManager
struct LSManager_t9F2EEE70BECC88CC79FDAA50B3877099CF361A3A;
// LSPauseMenu
struct LSPauseMenu_t97451F1377EBF387FC7B8C49724F274E09501FAB;
// LSPlayer
struct LSPlayer_tAEB18044524E230E4CF14FCC187F3CCF7E18BFA3;
// LSUIController
struct LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB;
// LevelExit
struct LevelExit_t231B7228C2441A7D1FB308B56CD4E934850712AE;
// LevelManager
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530;
// LineCave
struct LineCave_t9B2A61C883B0223A9213D51AFE10D5CF4A7C0748;
// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF;
// MapPoint
struct MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MovingPlatform
struct MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// OpoSumEnnemy
struct OpoSumEnnemy_tACAFBB6A89F15192C62334E7A8FDF6CF5FDBD504;
// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985;
// Pickup
struct Pickup_tE353BFD6F96A556F00672AD2761272F6AAABA0B8;
// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95;
// PlayerHealthController
struct PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F;
// PlayerImageAfterDash
struct PlayerImageAfterDash_tC77408C286C8649FE4384ADC84036A066E16B31B;
// PlayerImagePool
struct PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Slammer
struct Slammer_t31ED2A66298DADCF3487BB85AF408C21959518B1;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// Stompbox
struct Stompbox_t536483430873266BE4C79B4CBE3DC76C2BD7C2B9;
// System.String
struct String_t;
// Switch
struct Switch_t46A64C733A0D45D9F4352EE05D9D82F06B41B94E;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UIController
struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// Victory
struct Victory_t40F6510ACF81AED3989AB047DFE1ADC98F4B424E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// LSManager/<LoadLevelCo>d__6
struct U3CLoadLevelCoU3Ed__6_t2D197BF7525B579BF73444C4808219846B74222D;
// LevelManager/<EndLevelCo>d__12
struct U3CEndLevelCoU3Ed__12_t004D52E601847CCDE4BD6364F908F40E4C7DA052;
// LevelManager/<RespawnCo>d__10
struct U3CRespawnCoU3Ed__10_t411BA6CD95D30DCFD3EA6C2E2FA1DFFDC6E88AD1;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LSPauseMenu_t97451F1377EBF387FC7B8C49724F274E09501FAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEndLevelCoU3Ed__12_t004D52E601847CCDE4BD6364F908F40E4C7DA052_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadLevelCoU3Ed__6_t2D197BF7525B579BF73444C4808219846B74222D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRespawnCoU3Ed__10_t411BA6CD95D30DCFD3EA6C2E2FA1DFFDC6E88AD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral075488768B36FC6B56A29920D44014060332E6C1;
IL2CPP_EXTERN_C String_t* _stringLiteral08ED18A68FEE41D91B879B79D73CA5E656097163;
IL2CPP_EXTERN_C String_t* _stringLiteral19E432A47FC398AAE408E0B29A2F5DB4412BE993;
IL2CPP_EXTERN_C String_t* _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28;
IL2CPP_EXTERN_C String_t* _stringLiteral30E3EA07EC73E95C9F85B6230DEC6F3F0373CA42;
IL2CPP_EXTERN_C String_t* _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7;
IL2CPP_EXTERN_C String_t* _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral734B4839496AB9102151B94D3F70A735F392F545;
IL2CPP_EXTERN_C String_t* _stringLiteral78DB8AA40D3B780BCB7B7076042CF600254368BC;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C;
IL2CPP_EXTERN_C String_t* _stringLiteral9AC6DD7957C107D80F8FA476DBEF880D93A2BB0E;
IL2CPP_EXTERN_C String_t* _stringLiteral9CE441749195C391435BE1B9FD62C1208F0551BB;
IL2CPP_EXTERN_C String_t* _stringLiteral9FF36436D1CFC3CD12BEC10C304D07D7C3784A3A;
IL2CPP_EXTERN_C String_t* _stringLiteralA473AD343663CD0A813A1992379CEA04F4516B4C;
IL2CPP_EXTERN_C String_t* _stringLiteralB4525DEC730EDDA1A14353AAA2E40857BACC6F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralB7545646B000247B00D875790E3ED73EB1267360;
IL2CPP_EXTERN_C String_t* _stringLiteralBED406E0547AD3CBC86EBAA57F44C28228041BD8;
IL2CPP_EXTERN_C String_t* _stringLiteralC232500C54DD6719F837074E25605E147D9D106E;
IL2CPP_EXTERN_C String_t* _stringLiteralC8C1C8DBCD190AD757B340916245FB7F9E1400FE;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCF1CD87FDFAC87AC835B1D3D847F56D3E6E59F66;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralDF953B1BAAE56A3E1998B6A1DC98AC472A4DAF75;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisBossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC_m82218B8F262F4E2C880AD781725049E655EDB564_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisCheckpoint_t73DBB588194FE620149319CC45C4187E6A9EB068_mE71E15DC367DBCBA13FEA30EC836A6B52B621473_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisMapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2_mC32351DB64D5488686173E7BD6D61767FDEB1AA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEndLevelCoU3Ed__12_System_Collections_IEnumerator_Reset_m9CA0A2EFBFF3256CB6C7E23E65E33DC574F0D246_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadLevelCoU3Ed__6_System_Collections_IEnumerator_Reset_m90AF7D7B955E603F62EE8FD2175A7E8101CAC942_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRespawnCoU3Ed__10_System_Collections_IEnumerator_Reset_mB4B2CA92BA20518C34DD83A6B2CFE5E378193966_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
struct BossTankMineU5BU5D_tB8508ED8DD8DE038938C617F08B611823FFD23EC;
struct CheckpointU5BU5D_t5C9CE0CC022D7F12B4299C1EA681347FB012C337;
struct MapPointU5BU5D_t84BCF9FA2C4A6A22FE730A04BA0CAF4F4BAC1917;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// LSManager/<LoadLevelCo>d__6
struct U3CLoadLevelCoU3Ed__6_t2D197BF7525B579BF73444C4808219846B74222D  : public RuntimeObject
{
	// System.Int32 LSManager/<LoadLevelCo>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LSManager/<LoadLevelCo>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// LSManager LSManager/<LoadLevelCo>d__6::<>4__this
	LSManager_t9F2EEE70BECC88CC79FDAA50B3877099CF361A3A* ___U3CU3E4__this_2;
};

// LevelManager/<EndLevelCo>d__12
struct U3CEndLevelCoU3Ed__12_t004D52E601847CCDE4BD6364F908F40E4C7DA052  : public RuntimeObject
{
	// System.Int32 LevelManager/<EndLevelCo>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LevelManager/<EndLevelCo>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// LevelManager LevelManager/<EndLevelCo>d__12::<>4__this
	LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* ___U3CU3E4__this_2;
};

// LevelManager/<RespawnCo>d__10
struct U3CRespawnCoU3Ed__10_t411BA6CD95D30DCFD3EA6C2E2FA1DFFDC6E88AD1  : public RuntimeObject
{
	// System.Int32 LevelManager/<RespawnCo>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LevelManager/<RespawnCo>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// LevelManager LevelManager/<RespawnCo>d__10::<>4__this
	LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* ___U3CU3E4__this_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource[] AudioManager::soundEffects
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___soundEffects_5;
	// UnityEngine.AudioSource AudioManager::bgm
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bgm_6;
	// UnityEngine.AudioSource AudioManager::levelEndMusic
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___levelEndMusic_7;
	// UnityEngine.AudioSource AudioManager::bossMusic
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bossMusic_8;
};

struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields
{
	// AudioManager AudioManager::instance
	AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* ___instance_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BossActivator
struct BossActivator_t7A2557EBD0DB96374A95102E6A455A2B734F51E2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject BossActivator::theBossBattle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___theBossBattle_4;
};

// BossBullet
struct BossBullet_t11BD774C4D178E3F05D07331097D3E724FF197EB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BossBullet::speed
	float ___speed_4;
};

// BossTankController
struct BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BossTankController/bossStates BossTankController::currentState
	int32_t ___currentState_5;
	// UnityEngine.Transform BossTankController::theBoss
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___theBoss_6;
	// UnityEngine.Animator BossTankController::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_7;
	// System.Single BossTankController::moveSpeed
	float ___moveSpeed_8;
	// UnityEngine.Transform BossTankController::leftPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftPoint_9;
	// UnityEngine.Transform BossTankController::rightPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightPoint_10;
	// System.Boolean BossTankController::moveRight
	bool ___moveRight_11;
	// UnityEngine.GameObject BossTankController::mine
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mine_12;
	// UnityEngine.Transform BossTankController::minePoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___minePoint_13;
	// System.Single BossTankController::timeBetweenMines
	float ___timeBetweenMines_14;
	// System.Single BossTankController::mineCounter
	float ___mineCounter_15;
	// UnityEngine.GameObject BossTankController::bullet
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bullet_16;
	// UnityEngine.Transform BossTankController::firePoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___firePoint_17;
	// System.Single BossTankController::timeBetweenShots
	float ___timeBetweenShots_18;
	// System.Single BossTankController::shotCounter
	float ___shotCounter_19;
	// System.Single BossTankController::hurtTime
	float ___hurtTime_20;
	// System.Single BossTankController::hurtCounter
	float ___hurtCounter_21;
	// UnityEngine.GameObject BossTankController::hitBox
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hitBox_22;
	// System.Int32 BossTankController::maxHealth
	int32_t ___maxHealth_23;
	// System.Int32 BossTankController::health
	int32_t ___health_24;
	// UnityEngine.GameObject BossTankController::explosion
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___explosion_25;
	// UnityEngine.GameObject BossTankController::winPlatform
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___winPlatform_26;
	// System.Boolean BossTankController::isDefeated
	bool ___isDefeated_27;
	// System.Single BossTankController::shotSpeedUp
	float ___shotSpeedUp_28;
	// System.Single BossTankController::mineSpeedUp
	float ___mineSpeedUp_29;
};

struct BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E_StaticFields
{
	// BossTankController BossTankController::instance
	BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E* ___instance_4;
};

// BossTankHitBox
struct BossTankHitBox_t67E5ECAB86413C0F6DB56D89E1F076219D789E73  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BossTankController BossTankHitBox::bossCont
	BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E* ___bossCont_4;
};

// BossTankMine
struct BossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject BossTankMine::explosion
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___explosion_4;
};

// BouncePad
struct BouncePad_tBE250C0A3B6946A38A62FD7CF48B62872BB58F0C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator BouncePad::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_4;
	// System.Single BouncePad::bounceForce
	float ___bounceForce_5;
};

// CameraController
struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform CameraController::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_5;
	// UnityEngine.Transform CameraController::farBackground
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___farBackground_6;
	// UnityEngine.Transform CameraController::middleBackground
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___middleBackground_7;
	// System.Single CameraController::minHeight
	float ___minHeight_8;
	// System.Single CameraController::maxHeight
	float ___maxHeight_9;
	// System.Boolean CameraController::stopFollow
	bool ___stopFollow_10;
	// UnityEngine.Vector2 CameraController::lastPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastPos_11;
};

struct CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_StaticFields
{
	// CameraController CameraController::instance
	CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* ___instance_4;
};

// Checkpoint
struct Checkpoint_t73DBB588194FE620149319CC45C4187E6A9EB068  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.SpriteRenderer Checkpoint::theSR
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___theSR_4;
	// UnityEngine.Sprite Checkpoint::cpOn
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___cpOn_5;
	// UnityEngine.Sprite Checkpoint::cpOff
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___cpOff_6;
};

// CheckpointController
struct CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Checkpoint[] CheckpointController::checkpoints
	CheckpointU5BU5D_t5C9CE0CC022D7F12B4299C1EA681347FB012C337* ___checkpoints_5;
	// UnityEngine.Vector3 CheckpointController::spawnPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnPoint_6;
};

struct CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4_StaticFields
{
	// CheckpointController CheckpointController::instance
	CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4* ___instance_4;
};

// DamagePlayer
struct DamagePlayer_tF2BE6E941F78A7C9B9D32F315CBBC925D08A308B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DestroyOverTime
struct DestroyOverTime_tB6E7227A73D9ED057CD22D98943009A2A5195C08  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single DestroyOverTime::lifeTime
	float ___lifeTime_4;
};

// EnemyController
struct EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EnemyController::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.Transform EnemyController::leftPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftPoint_5;
	// UnityEngine.Transform EnemyController::rightPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightPoint_6;
	// System.Boolean EnemyController::movingRight
	bool ___movingRight_7;
	// UnityEngine.Rigidbody2D EnemyController::theRB
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___theRB_8;
	// UnityEngine.SpriteRenderer EnemyController::theSR
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___theSR_9;
	// UnityEngine.Animator EnemyController::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_10;
	// System.Single EnemyController::moveTime
	float ___moveTime_11;
	// System.Single EnemyController::waitTime
	float ___waitTime_12;
	// System.Single EnemyController::moveCount
	float ___moveCount_13;
	// System.Single EnemyController::waitCount
	float ___waitCount_14;
};

// FlyingEnemyController
struct FlyingEnemyController_t362C518795D93DE0AD0402D3701CD7D23E14EC1F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform[] FlyingEnemyController::points
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___points_4;
	// System.Single FlyingEnemyController::moveSpeed
	float ___moveSpeed_5;
	// System.Int32 FlyingEnemyController::currentPoint
	int32_t ___currentPoint_6;
	// UnityEngine.SpriteRenderer FlyingEnemyController::theSR
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___theSR_7;
	// System.Single FlyingEnemyController::distanceToAttackPlayer
	float ___distanceToAttackPlayer_8;
	// System.Single FlyingEnemyController::chaseSpeed
	float ___chaseSpeed_9;
	// UnityEngine.Vector3 FlyingEnemyController::attackTarget
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___attackTarget_10;
	// System.Single FlyingEnemyController::waitAfterAttack
	float ___waitAfterAttack_11;
	// System.Single FlyingEnemyController::attackCounter
	float ___attackCounter_12;
};

// KillPlayer
struct KillPlayer_tB2C563851C648DB239F5CC0A98A3518F8F6FF3EE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LSCameraController
struct LSCameraController_t5896A02FED50CCB1D60CCB5E261D014357E70029  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector2 LSCameraController::minPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___minPos_4;
	// UnityEngine.Vector2 LSCameraController::maxPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___maxPos_5;
	// UnityEngine.Transform LSCameraController::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_6;
};

// LSManager
struct LSManager_t9F2EEE70BECC88CC79FDAA50B3877099CF361A3A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LSPlayer LSManager::thePlayer
	LSPlayer_tAEB18044524E230E4CF14FCC187F3CCF7E18BFA3* ___thePlayer_4;
	// MapPoint[] LSManager::allPoints
	MapPointU5BU5D_t84BCF9FA2C4A6A22FE730A04BA0CAF4F4BAC1917* ___allPoints_5;
	// UnityEngine.GameObject LSManager::pauseGame
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseGame_6;
};

// LSPauseMenu
struct LSPauseMenu_t97451F1377EBF387FC7B8C49724F274E09501FAB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String LSPauseMenu::levelSelect
	String_t* ___levelSelect_5;
	// System.String LSPauseMenu::mainMenu
	String_t* ___mainMenu_6;
	// UnityEngine.GameObject LSPauseMenu::pauseScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseScreen_7;
	// System.Boolean LSPauseMenu::isPaused
	bool ___isPaused_8;
};

struct LSPauseMenu_t97451F1377EBF387FC7B8C49724F274E09501FAB_StaticFields
{
	// LSPauseMenu LSPauseMenu::instance
	LSPauseMenu_t97451F1377EBF387FC7B8C49724F274E09501FAB* ___instance_4;
};

// LSPlayer
struct LSPlayer_tAEB18044524E230E4CF14FCC187F3CCF7E18BFA3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MapPoint LSPlayer::currentPoint
	MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* ___currentPoint_4;
	// System.Single LSPlayer::moveSpeed
	float ___moveSpeed_5;
	// System.Boolean LSPlayer::levelLoading
	bool ___levelLoading_6;
	// LSManager LSPlayer::theManager
	LSManager_t9F2EEE70BECC88CC79FDAA50B3877099CF361A3A* ___theManager_7;
};

// LSUIController
struct LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image LSUIController::fadeScreen
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___fadeScreen_5;
	// System.Single LSUIController::fadeSpeed
	float ___fadeSpeed_6;
	// System.Boolean LSUIController::shouldFadeToBlack
	bool ___shouldFadeToBlack_7;
	// System.Boolean LSUIController::shouldFadeFromBlack
	bool ___shouldFadeFromBlack_8;
	// UnityEngine.GameObject LSUIController::levelInfoPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___levelInfoPanel_9;
	// UnityEngine.UI.Text LSUIController::levelName
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___levelName_10;
	// UnityEngine.UI.Text LSUIController::gemsFound
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___gemsFound_11;
	// UnityEngine.UI.Text LSUIController::gemsTarget
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___gemsTarget_12;
	// UnityEngine.UI.Text LSUIController::bestTime
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___bestTime_13;
	// UnityEngine.UI.Text LSUIController::timeTarget
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___timeTarget_14;
};

struct LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB_StaticFields
{
	// LSUIController LSUIController::instance
	LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB* ___instance_4;
};

// LevelExit
struct LevelExit_t231B7228C2441A7D1FB308B56CD4E934850712AE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// LevelManager
struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean LevelManager::isRespawn
	bool ___isRespawn_5;
	// System.Single LevelManager::waitToRespawn
	float ___waitToRespawn_6;
	// System.Int32 LevelManager::gemsCollected
	int32_t ___gemsCollected_7;
	// System.String LevelManager::levelToLoad
	String_t* ___levelToLoad_8;
	// System.Single LevelManager::timeInLevel
	float ___timeInLevel_9;
};

struct LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields
{
	// LevelManager LevelManager::instance
	LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* ___instance_4;
};

// LineCave
struct LineCave_t9B2A61C883B0223A9213D51AFE10D5CF4A7C0748  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean LineCave::incave
	bool ___incave_4;
};

// MainMenu
struct MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String MainMenu::startScene
	String_t* ___startScene_4;
	// System.String MainMenu::continueScene
	String_t* ___continueScene_5;
	// UnityEngine.GameObject MainMenu::continueButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___continueButton_6;
};

// MapPoint
struct MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// MapPoint MapPoint::up
	MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* ___up_4;
	// MapPoint MapPoint::right
	MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* ___right_5;
	// MapPoint MapPoint::down
	MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* ___down_6;
	// MapPoint MapPoint::left
	MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* ___left_7;
	// System.Boolean MapPoint::isLevel
	bool ___isLevel_8;
	// System.Boolean MapPoint::isLocked
	bool ___isLocked_9;
	// System.String MapPoint::levelToLoad
	String_t* ___levelToLoad_10;
	// System.String MapPoint::levelToCheck
	String_t* ___levelToCheck_11;
	// System.String MapPoint::levelName
	String_t* ___levelName_12;
	// System.Int32 MapPoint::gemsCollected
	int32_t ___gemsCollected_13;
	// System.Int32 MapPoint::totalGems
	int32_t ___totalGems_14;
	// System.Single MapPoint::bestTime
	float ___bestTime_15;
	// System.Single MapPoint::targetTime
	float ___targetTime_16;
	// UnityEngine.GameObject MapPoint::gemBadge
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gemBadge_17;
	// UnityEngine.GameObject MapPoint::timeBadge
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___timeBadge_18;
};

// MovingPlatform
struct MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform[] MovingPlatform::points
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___points_4;
	// System.Single MovingPlatform::moveSpeed
	float ___moveSpeed_5;
	// System.Int32 MovingPlatform::currentPoint
	int32_t ___currentPoint_6;
	// UnityEngine.Transform MovingPlatform::platform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___platform_7;
};

// OpoSumEnnemy
struct OpoSumEnnemy_tACAFBB6A89F15192C62334E7A8FDF6CF5FDBD504  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single OpoSumEnnemy::moveSpeed
	float ___moveSpeed_4;
	// UnityEngine.Transform OpoSumEnnemy::leftPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftPoint_5;
	// UnityEngine.Transform OpoSumEnnemy::rightPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightPoint_6;
	// System.Boolean OpoSumEnnemy::movingRight
	bool ___movingRight_7;
	// UnityEngine.Rigidbody2D OpoSumEnnemy::theRB
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___theRB_8;
	// UnityEngine.SpriteRenderer OpoSumEnnemy::theSR
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___theSR_9;
	// UnityEngine.Animator OpoSumEnnemy::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_10;
	// System.Single OpoSumEnnemy::moveTime
	float ___moveTime_11;
	// System.Single OpoSumEnnemy::waitTime
	float ___waitTime_12;
	// System.Single OpoSumEnnemy::moveCount
	float ___moveCount_13;
	// System.Single OpoSumEnnemy::waitCount
	float ___waitCount_14;
};

// PauseMenu
struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String PauseMenu::levelSelect
	String_t* ___levelSelect_5;
	// System.String PauseMenu::mainMenu
	String_t* ___mainMenu_6;
	// UnityEngine.GameObject PauseMenu::pauseScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseScreen_7;
	// System.Boolean PauseMenu::isPaused
	bool ___isPaused_8;
};

struct PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_StaticFields
{
	// PauseMenu PauseMenu::instance
	PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* ___instance_4;
};

// Pickup
struct Pickup_tE353BFD6F96A556F00672AD2761272F6AAABA0B8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Pickup::isGem
	bool ___isGem_4;
	// System.Boolean Pickup::isHeal
	bool ___isHeal_5;
	// System.Boolean Pickup::isCollected
	bool ___isCollected_6;
	// UnityEngine.GameObject Pickup::pickupEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pickupEffect_7;
};

// PlayerController
struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single PlayerController::moveSpeed
	float ___moveSpeed_5;
	// UnityEngine.Rigidbody2D PlayerController::theRB
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___theRB_6;
	// System.Single PlayerController::jumpForce
	float ___jumpForce_7;
	// System.Boolean PlayerController::canDoubleJump
	bool ___canDoubleJump_8;
	// System.Boolean PlayerController::isGrounded
	bool ___isGrounded_9;
	// UnityEngine.Transform PlayerController::groundCheckPoint
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___groundCheckPoint_10;
	// UnityEngine.LayerMask PlayerController::whatIsGround
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___whatIsGround_11;
	// System.Boolean PlayerController::isDashing
	bool ___isDashing_12;
	// System.Single PlayerController::currentSpeed
	float ___currentSpeed_13;
	// System.Single PlayerController::dashTimeLeft
	float ___dashTimeLeft_14;
	// System.Single PlayerController::dashTime
	float ___dashTime_15;
	// System.Single PlayerController::dashSpeed
	float ___dashSpeed_16;
	// System.Single PlayerController::dashCouter
	float ___dashCouter_17;
	// System.Single PlayerController::distanceBWTImage
	float ___distanceBWTImage_18;
	// System.Single PlayerController::lastImageXpos
	float ___lastImageXpos_19;
	// System.Single PlayerController::lastDash
	float ___lastDash_20;
	// UnityEngine.Animator PlayerController::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_21;
	// UnityEngine.SpriteRenderer PlayerController::theSR
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___theSR_22;
	// System.Single PlayerController::knockBackLength
	float ___knockBackLength_23;
	// System.Single PlayerController::knockBackForce
	float ___knockBackForce_24;
	// System.Single PlayerController::knockBackCounter
	float ___knockBackCounter_25;
	// System.Single PlayerController::bounceForce
	float ___bounceForce_26;
	// System.Boolean PlayerController::stopInput
	bool ___stopInput_27;
};

struct PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields
{
	// PlayerController PlayerController::instance
	PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* ___instance_4;
};

// PlayerHealthController
struct PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 PlayerHealthController::currentHealth
	int32_t ___currentHealth_5;
	// System.Int32 PlayerHealthController::maxHealth
	int32_t ___maxHealth_6;
	// System.Single PlayerHealthController::invincibleLength
	float ___invincibleLength_7;
	// System.Single PlayerHealthController::invincibleCounter
	float ___invincibleCounter_8;
	// UnityEngine.SpriteRenderer PlayerHealthController::theSR
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___theSR_9;
	// UnityEngine.GameObject PlayerHealthController::deathEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___deathEffect_10;
};

struct PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_StaticFields
{
	// PlayerHealthController PlayerHealthController::instance
	PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* ___instance_4;
};

// PlayerImageAfterDash
struct PlayerImageAfterDash_tC77408C286C8649FE4384ADC84036A066E16B31B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform PlayerImageAfterDash::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_4;
	// UnityEngine.SpriteRenderer PlayerImageAfterDash::playerSR
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___playerSR_5;
	// UnityEngine.SpriteRenderer PlayerImageAfterDash::theSR
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___theSR_6;
	// UnityEngine.Color PlayerImageAfterDash::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_7;
	// System.Single PlayerImageAfterDash::activeTime
	float ___activeTime_8;
	// System.Single PlayerImageAfterDash::timeActived
	float ___timeActived_9;
	// System.Single PlayerImageAfterDash::alpha
	float ___alpha_10;
	// System.Single PlayerImageAfterDash::alphaSet
	float ___alphaSet_11;
	// System.Single PlayerImageAfterDash::alphaMultiplier
	float ___alphaMultiplier_12;
};

// PlayerImagePool
struct PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PlayerImagePool::afterImagePrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___afterImagePrefab_5;
	// System.Collections.Generic.Queue`1<UnityEngine.GameObject> PlayerImagePool::availableObjects
	Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* ___availableObjects_6;
};

struct PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6_StaticFields
{
	// PlayerImagePool PlayerImagePool::instance
	PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6* ___instance_4;
};

// Slammer
struct Slammer_t31ED2A66298DADCF3487BB85AF408C21959518B1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform Slammer::theSlammer
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___theSlammer_4;
	// UnityEngine.Transform Slammer::slammerTarget
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___slammerTarget_5;
	// UnityEngine.Vector3 Slammer::startPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startPoint_6;
	// System.Single Slammer::slamSpeed
	float ___slamSpeed_7;
	// System.Single Slammer::waitAfterSlam
	float ___waitAfterSlam_8;
	// System.Single Slammer::resetSpeed
	float ___resetSpeed_9;
	// System.Single Slammer::waitCounter
	float ___waitCounter_10;
	// System.Boolean Slammer::slamming
	bool ___slamming_11;
	// System.Boolean Slammer::resetting
	bool ___resetting_12;
};

// Stompbox
struct Stompbox_t536483430873266BE4C79B4CBE3DC76C2BD7C2B9  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Stompbox::deathEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___deathEffect_4;
	// UnityEngine.GameObject Stompbox::collectible
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___collectible_5;
	// System.Single Stompbox::chanceToDrop
	float ___chanceToDrop_6;
};

// Switch
struct Switch_t46A64C733A0D45D9F4352EE05D9D82F06B41B94E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Switch::objectToSwitch
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___objectToSwitch_4;
	// UnityEngine.SpriteRenderer Switch::theSR
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___theSR_5;
	// UnityEngine.Sprite Switch::downSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___downSprite_6;
	// System.Boolean Switch::hasSwitched
	bool ___hasSwitched_7;
	// System.Boolean Switch::deactivateOnSwitch
	bool ___deactivateOnSwitch_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UIController
struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image UIController::heart1
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___heart1_5;
	// UnityEngine.UI.Image UIController::heart2
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___heart2_6;
	// UnityEngine.UI.Image UIController::heart3
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___heart3_7;
	// UnityEngine.UI.Image UIController::DashImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___DashImage_8;
	// System.Boolean UIController::isCoolDown
	bool ___isCoolDown_9;
	// UnityEngine.Sprite UIController::heartFull
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___heartFull_10;
	// UnityEngine.Sprite UIController::heartEmpty
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___heartEmpty_11;
	// UnityEngine.Sprite UIController::heartHalf
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___heartHalf_12;
	// UnityEngine.UI.Text UIController::gemText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___gemText_13;
	// UnityEngine.UI.Image UIController::fadeScreen
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___fadeScreen_14;
	// System.Single UIController::fadeSpeed
	float ___fadeSpeed_15;
	// System.Boolean UIController::shouldFadeToBlack
	bool ___shouldFadeToBlack_16;
	// System.Boolean UIController::shouldFadeFromBlack
	bool ___shouldFadeFromBlack_17;
	// UnityEngine.GameObject UIController::levelCompleteText
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___levelCompleteText_18;
};

struct UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields
{
	// UIController UIController::instance
	UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* ___instance_4;
};

// Victory
struct Victory_t40F6510ACF81AED3989AB047DFE1ADC98F4B424E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Victory::mainMenu
	String_t* ___mainMenu_4;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
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
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* m_Items[1];

	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// BossTankMine[]
struct BossTankMineU5BU5D_tB8508ED8DD8DE038938C617F08B611823FFD23EC  : public RuntimeArray
{
	ALIGN_FIELD (8) BossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC* m_Items[1];

	inline BossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Checkpoint[]
struct CheckpointU5BU5D_t5C9CE0CC022D7F12B4299C1EA681347FB012C337  : public RuntimeArray
{
	ALIGN_FIELD (8) Checkpoint_t73DBB588194FE620149319CC45C4187E6A9EB068* m_Items[1];

	inline Checkpoint_t73DBB588194FE620149319CC45C4187E6A9EB068* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Checkpoint_t73DBB588194FE620149319CC45C4187E6A9EB068** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Checkpoint_t73DBB588194FE620149319CC45C4187E6A9EB068* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Checkpoint_t73DBB588194FE620149319CC45C4187E6A9EB068* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Checkpoint_t73DBB588194FE620149319CC45C4187E6A9EB068** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Checkpoint_t73DBB588194FE620149319CC45C4187E6A9EB068* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24  : public RuntimeArray
{
	ALIGN_FIELD (8) Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* m_Items[1];

	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// MapPoint[]
struct MapPointU5BU5D_t84BCF9FA2C4A6A22FE730A04BA0CAF4F4BAC1917  : public RuntimeArray
{
	ALIGN_FIELD (8) MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* m_Items[1];

	inline MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void AudioManager::PlayBossMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayBossMusic_mA9C469B85A95A9D993F269D39E994901C9AED970 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) ;
// System.Void AudioManager::PlaySFX(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, int32_t ___soundToPlay0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void PlayerHealthController::DealDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealthController_DealDamage_mD532BE2FD2087A396AFFB4541E570984806FC3EB (PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void AudioManager::StopBossMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_StopBossMusic_mA9AAABB6E26895A62107369354D77B779785C1E7 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.Void BossTankController::EndMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTankController_EndMovement_mE1BFE49FC47C1695F636635C879F6D76B3A60433 (BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<BossTankMine>()
inline BossTankMineU5BU5D_tB8508ED8DD8DE038938C617F08B611823FFD23EC* Object_FindObjectsOfType_TisBossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC_m82218B8F262F4E2C880AD781725049E655EDB564 (const RuntimeMethod* method)
{
	return ((  BossTankMineU5BU5D_tB8508ED8DD8DE038938C617F08B611823FFD23EC* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// System.Void BossTankMine::Explode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTankMine_Explode_m843DFCE15C5624D44537DD80D4F020369A63AFB7 (BossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC* __this, const RuntimeMethod* method) ;
// System.Void BossTankController::TakeHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTankController_TakeHit_m59816E89C7F979CDFCA5D49D344E7ACE856BB81A (BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E* __this, const RuntimeMethod* method) ;
// System.Void PlayerController::Bounce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Bounce_mDAF579DD3454FF6E5B2FE09649E32233AF6E2682 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void CheckpointController::DeactivateCheckpoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckpointController_DeactivateCheckpoints_mF83355FE0C8C4C3F2AB754A99C8ED06A45E60EDC (CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void CheckpointController::SetSpawnPoint(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CheckpointController_SetSpawnPoint_m8888DA4AA7BD0A97F52A82341BA520948F89E486_inline (CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newSpawnPoint0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<Checkpoint>()
inline CheckpointU5BU5D_t5C9CE0CC022D7F12B4299C1EA681347FB012C337* Object_FindObjectsOfType_TisCheckpoint_t73DBB588194FE620149319CC45C4187E6A9EB068_mE71E15DC367DBCBA13FEA30EC836A6B52B621473 (const RuntimeMethod* method)
{
	return ((  CheckpointU5BU5D_t5C9CE0CC022D7F12B4299C1EA681347FB012C337* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// System.Void Checkpoint::ResetCheckpoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Checkpoint_ResetCheckpoint_m7E45138483A716ABF7F2093ACE19D940D8C33D42 (Checkpoint_t73DBB588194FE620149319CC45C4187E6A9EB068* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void LevelManager::RespawnPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_RespawnPlayer_m9828E47BB559B81ED9374ABC5606404689D7F48B (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) ;
// System.Void LevelManager::EndLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_EndLevel_m115808926D3FBFFB959DEC8E028ED4523CF22914 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LevelManager::RespawnCo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_RespawnCo_m29FAE4C63BF3308B7C05D5B48FBF2E94BA6483FA (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void LevelManager/<RespawnCo>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespawnCoU3Ed__10__ctor_mAFDAE8D0E2A3C22164B00F21C70B2C4CD7C7D1CA (U3CRespawnCoU3Ed__10_t411BA6CD95D30DCFD3EA6C2E2FA1DFFDC6E88AD1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LevelManager::EndLevelCo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_EndLevelCo_mAC517E53C1103BB1FD0C267FE0E6B6B5CE6C5612 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) ;
// System.Void LevelManager/<EndLevelCo>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndLevelCoU3Ed__12__ctor_m5E3DE10489405D2750C9EABB908AB509BDEB5E76 (U3CEndLevelCoU3Ed__12_t004D52E601847CCDE4BD6364F908F40E4C7DA052* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void UIController::FadeToBlack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_FadeToBlack_mB79901580AAF4A5494BA7D2A1DA5AFEED6D4D0D0 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void UIController::FadeFromBlack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_FadeFromBlack_m06CB6F0F1B38C83636086DE37D81F90DBD91A7F5 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void UIController::UpdateHealthDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_UpdateHealthDisplay_m2D84303912D630F2CB424180CA0A8C727FF2B19D (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void AudioManager::PlayLevelVictory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayLevelVictory_m915DBB4A40157767E0314219B1038CF404924EC5 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F (String_t* ___key0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B (String_t* ___key0, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF (String_t* ___key0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<MapPoint>()
inline MapPointU5BU5D_t84BCF9FA2C4A6A22FE730A04BA0CAF4F4BAC1917* Object_FindObjectsOfType_TisMapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2_mC32351DB64D5488686173E7BD6D61767FDEB1AA3 (const RuntimeMethod* method)
{
	return ((  MapPointU5BU5D_t84BCF9FA2C4A6A22FE730A04BA0CAF4F4BAC1917* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m1E6D851F6A46D646E0554A94729E9AAE79B0E87A_gshared)(method);
}
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator LSManager::LoadLevelCo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LSManager_LoadLevelCo_mB3FD43EA92891F38C9A235F4545663331068A885 (LSManager_t9F2EEE70BECC88CC79FDAA50B3877099CF361A3A* __this, const RuntimeMethod* method) ;
// System.Void LSManager/<LoadLevelCo>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadLevelCoU3Ed__6__ctor_m1883696AC1EC59901BC8569F9A73EA8FB85F1429 (U3CLoadLevelCoU3Ed__6_t2D197BF7525B579BF73444C4808219846B74222D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void LSUIController::FadeToBlack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSUIController_FadeToBlack_m1D81AFCA5ED09E56A7B325E6504F115DC31C9FE3 (LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void LSPauseMenu::PauseUnpause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSPauseMenu_PauseUnpause_m57A8EA9B3352E0B7F2C285057F2F60A966FD0B12 (LSPauseMenu_t97451F1377EBF387FC7B8C49724F274E09501FAB* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void LSPlayer::SetNextPoint(MapPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSPlayer_SetNextPoint_m895A10BAD54548A35615C080C25FCE6AE3A1BC8B (LSPlayer_tAEB18044524E230E4CF14FCC187F3CCF7E18BFA3* __this, MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* ___nextPoint0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void LSUIController::ShowInfo(MapPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSUIController_ShowInfo_m87D4D27C8B550B64BEF488F7D31BF977BC8D4D42 (LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB* __this, MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* ___levelInfo0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677 (String_t* ___buttonName0, const RuntimeMethod* method) ;
// System.Void LSManager::LoadLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSManager_LoadLevel_mADB001BAD6F3D0584E2DC2780E55D96E7CDF9534 (LSManager_t9F2EEE70BECC88CC79FDAA50B3877099CF361A3A* __this, const RuntimeMethod* method) ;
// System.Void LSUIController::HideInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSUIController_HideInfo_mFEF36CFF7282F614F99BFB2D90BE35B71E80B876 (LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB* __this, const RuntimeMethod* method) ;
// System.Void LSUIController::FadeFromBlack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSUIController_FadeFromBlack_m66BB069D31BE000E26FEC2C12DC50FD0D899C95E (LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::MoveTowards(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D (float* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::DeleteAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteAll_mBB63C28A69EA934DC7DF12336F8D5341BF6CA521 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void PauseMenu::PauseUnpause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_PauseUnpause_m81B6DBEF9CA5821594BEE89301851F77C50F6471 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) ;
// System.Void UIController::UpdateGemCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_UpdateGemCount_mE8FE1E6A7A960137623828A9D5764CE6290714E2 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void PlayerHealthController::HealPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealthController_HealPlayer_m39DB339146565A3DBFB72796A8695B8F9DA9847F (PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* Physics2D_OverlapCircle_mD20DC99402D0E7514265AFF9E0B24041197D7D36 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.SpriteRenderer::get_flipX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SpriteRenderer_get_flipX_mFD4FA98A1DA2943820C21B3B345A42F1CD2DDC76 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3 (const RuntimeMethod* method) ;
// System.Void PlayerController::AttemptToDash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AttemptToDash_mFC2BA61CA9DEFB6A2576F4A3CA072BBFE2946365 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void PlayerController::checkDash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_checkDash_m7A66A6ACBD5FFEE27CAEF2543322E9D38D463ED8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, float ___value1, const RuntimeMethod* method) ;
// UnityEngine.GameObject PlayerImagePool::GetFromPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PlayerImagePool_GetFromPool_m459D05E0DAA4C6E67D2FBE5570AB5D4AF63396CA (PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void PlayerController::KnockBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_KnockBack_mE0CC9527F35F04DF9A28F8A95AC35C0DAC6751CD (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision2D::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Collision2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Collision2D_get_transform_mC59737F246B2DAFF2AB4F6322664C87B28605CC7 (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9 (String_t* ___tag0, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void PlayerImagePool::AddToPool(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerImagePool_AddToPool_mC6C1FCA57B010231AC85937CD8E9D10AC7DF7557 (PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____instance0, const RuntimeMethod* method) ;
// System.Void PlayerImagePool::GrowPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerImagePool_GrowPool_mE2C0A44E7DFB8CA4DA38A75AB3631E0A1543C058 (PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Enqueue(T)
inline void Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.GameObject>::get_Count()
inline int32_t Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_inline (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Dequeue()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24 (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::.ctor()
inline void Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82 (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UIController::coolDownSkill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_coolDownSkill_mA3D2821D3CA29DAC62F90442D2BA4D59371EA799 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) ;
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
// System.Void AudioManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Awake_m8138BCED4D692C83C95626A1A09AB46EA5205569 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void AudioManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Start_m3C0FEAF19F58B6D28A9E6D815B3AAF94FEA21B69 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudioManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Update_m7DF7834692993676DCBBECA42E396F7A4E623A43 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void AudioManager::PlaySFX(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, int32_t ___soundToPlay0, const RuntimeMethod* method) 
{
	{
		// soundEffects[soundToPlay].Stop();
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_0 = __this->___soundEffects_5;
		int32_t L_1 = ___soundToPlay0;
		int32_t L_2 = L_1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_3, NULL);
		// soundEffects[soundToPlay].pitch = Random.Range(.9f, 1.1f);
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_4 = __this->___soundEffects_5;
		int32_t L_5 = ___soundToPlay0;
		int32_t L_6 = L_5;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = (L_4)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6));
		float L_8;
		L_8 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.899999976f), (1.10000002f), NULL);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_7, L_8, NULL);
		// soundEffects[soundToPlay].Play();
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_9 = __this->___soundEffects_5;
		int32_t L_10 = ___soundToPlay0;
		int32_t L_11 = L_10;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = (L_9)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_11));
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_12, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::PlayLevelVictory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayLevelVictory_m915DBB4A40157767E0314219B1038CF404924EC5 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		// bgm.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___bgm_6;
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_0, NULL);
		// levelEndMusic.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___levelEndMusic_7;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::PlayBossMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_PlayBossMusic_mA9C469B85A95A9D993F269D39E994901C9AED970 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		// bgm.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___bgm_6;
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_0, NULL);
		// bossMusic.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___bossMusic_8;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::StopBossMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_StopBossMusic_mA9AAABB6E26895A62107369354D77B779785C1E7 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		// bossMusic.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___bossMusic_8;
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_0, NULL);
		// bgm.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___bgm_6;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_1, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager__ctor_mA793A9DF6B975D03690B7C953972EFE41AE4D5E6 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BossActivator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossActivator_Start_m2ABA0F527005560E87F4FD20B6008741603736BF (BossActivator_t7A2557EBD0DB96374A95102E6A455A2B734F51E2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BossActivator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossActivator_Update_m60E160C6C782063E7454F678FA08070D896955F4 (BossActivator_t7A2557EBD0DB96374A95102E6A455A2B734F51E2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BossActivator::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossActivator_OnTriggerEnter2D_mBA8F81CCC631ACA2BC5BDA74B414AC9777C35E16 (BossActivator_t7A2557EBD0DB96374A95102E6A455A2B734F51E2* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		// theBossBattle.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___theBossBattle_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// AudioManager.instance.PlayBossMusic();
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_5 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlayBossMusic_mA9C469B85A95A9D993F269D39E994901C9AED970(L_5, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void BossActivator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossActivator__ctor_m46C65B3EE92B870ABED99D57EA75349885DFD891 (BossActivator_t7A2557EBD0DB96374A95102E6A455A2B734F51E2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BossBullet::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossBullet_Start_mDCA6C2D3051FF9CA900D2ACF6EE3F2F02CF28C09 (BossBullet_t11BD774C4D178E3F05D07331097D3E724FF197EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AudioManager.instance.PlaySFX(2);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_0 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F(L_0, 2, NULL);
		// }
		return;
	}
}
// System.Void BossBullet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossBullet_Update_mD1A768E8EE4CE94741FB939FA6F13E6ADFBCEFB9 (BossBullet_t11BD774C4D178E3F05D07331097D3E724FF197EB* __this, const RuntimeMethod* method) 
{
	{
		// transform.position += new Vector3(-speed * transform.localScale.x * Time.deltaTime, 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = __this->___speed_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_4, NULL);
		float L_6 = L_5.___x_2;
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_8), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((-L_3)), L_6)), L_7)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_2, L_8, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_9, NULL);
		// }
		return;
	}
}
// System.Void BossBullet::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossBullet_OnTriggerEnter2D_m832E23C35AB041F8BF4E2712423EF009AD134D96 (BossBullet_t11BD774C4D178E3F05D07331097D3E724FF197EB* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// PlayerHealthController.instance.DealDamage();
		PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* L_3 = ((PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var))->___instance_4;
		PlayerHealthController_DealDamage_mD532BE2FD2087A396AFFB4541E570984806FC3EB(L_3, NULL);
	}

IL_001c:
	{
		// AudioManager.instance.PlaySFX(1);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_4 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F(L_4, 1, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_5, NULL);
		// }
		return;
	}
}
// System.Void BossBullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossBullet__ctor_m53B25DE4DEC071BD6EE23A899186CDD8A16D5D64 (BossBullet_t11BD774C4D178E3F05D07331097D3E724FF197EB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BossTankController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTankController_Awake_m8231B9850D79F9450019038FC3DB35E94C780538 (BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E_StaticFields*)il2cpp_codegen_static_fields_for(BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E_StaticFields*)il2cpp_codegen_static_fields_for(BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void BossTankController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTankController_Start_m9CE435CA797EC52E0B73FF585C7D298ED1CBD7DC (BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E* __this, const RuntimeMethod* method) 
{
	{
		// currentState = bossStates.shooting;
		__this->___currentState_5 = 0;
		// health = maxHealth;
		int32_t L_0 = __this->___maxHealth_23;
		__this->___health_24 = L_0;
		// }
		return;
	}
}
// System.Void BossTankController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTankController_Update_m71DCB9AB8F088E3CA0B7F5ECA9B325F520C56108 (BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (LevelManager.instance.isRespawn)
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_0 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___instance_4;
		bool L_1 = L_0->___isRespawn_5;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// health = maxHealth;
		int32_t L_2 = __this->___maxHealth_23;
		__this->___health_24 = L_2;
		// LevelManager.instance.isRespawn = false;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_3 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___instance_4;
		L_3->___isRespawn_5 = (bool)0;
	}

IL_0023:
	{
		// switch (currentState)
		int32_t L_4 = __this->___currentState_5;
		V_0 = L_4;
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_003d;
			}
			case 1:
			{
				goto IL_00a2;
			}
			case 2:
			{
				goto IL_0142;
			}
		}
	}
	{
		return;
	}

IL_003d:
	{
		// shotCounter -= Time.deltaTime;
		float L_6 = __this->___shotCounter_19;
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___shotCounter_19 = ((float)il2cpp_codegen_subtract(L_6, L_7));
		// if(shotCounter <= 0)
		float L_8 = __this->___shotCounter_19;
		if ((!(((float)L_8) <= ((float)(0.0f)))))
		{
			goto IL_028b;
		}
	}
	{
		// shotCounter = timeBetweenShots;
		float L_9 = __this->___timeBetweenShots_18;
		__this->___shotCounter_19 = L_9;
		// var newBullet = Instantiate(bullet, firePoint.position, firePoint.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___bullet_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___firePoint_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___firePoint_17;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_10, L_12, L_14, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// newBullet.transform.localScale = theBoss.localScale;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___theBoss_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_17, NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_16, L_18, NULL);
		// break;
		return;
	}

IL_00a2:
	{
		// if(hurtCounter > 0)
		float L_19 = __this->___hurtCounter_21;
		if ((!(((float)L_19) > ((float)(0.0f)))))
		{
			goto IL_028b;
		}
	}
	{
		// hurtCounter -= Time.deltaTime;
		float L_20 = __this->___hurtCounter_21;
		float L_21;
		L_21 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___hurtCounter_21 = ((float)il2cpp_codegen_subtract(L_20, L_21));
		// if(hurtCounter <= 0)
		float L_22 = __this->___hurtCounter_21;
		if ((!(((float)L_22) <= ((float)(0.0f)))))
		{
			goto IL_028b;
		}
	}
	{
		// currentState = bossStates.moving;
		__this->___currentState_5 = 2;
		// mineCounter = 0;
		__this->___mineCounter_15 = (0.0f);
		// if(isDefeated)
		bool L_23 = __this->___isDefeated_27;
		if (!L_23)
		{
			goto IL_028b;
		}
	}
	{
		// theBoss.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___theBoss_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_24, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)0, NULL);
		// Instantiate(explosion, theBoss.position, theBoss.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___explosion_25;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___theBoss_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = __this->___theBoss_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30;
		L_30 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31;
		L_31 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_26, L_28, L_30, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// winPlatform.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___winPlatform_26;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_32, (bool)1, NULL);
		// AudioManager.instance.StopBossMusic();
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_33 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_StopBossMusic_mA9AAABB6E26895A62107369354D77B779785C1E7(L_33, NULL);
		// currentState = bossStates.ended;
		__this->___currentState_5 = 3;
		// break;
		return;
	}

IL_0142:
	{
		// if(moveRight)
		bool L_34 = __this->___moveRight_11;
		if (!L_34)
		{
			goto IL_01bf;
		}
	}
	{
		// theBoss.position += new Vector3(moveSpeed * Time.deltaTime, 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = __this->___theBoss_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = L_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_36, NULL);
		float L_38 = __this->___moveSpeed_8;
		float L_39;
		L_39 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_40), ((float)il2cpp_codegen_multiply(L_38, L_39)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_37, L_40, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_36, L_41, NULL);
		// if(theBoss.position.x > rightPoint.position.x)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->___theBoss_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		float L_44 = L_43.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = __this->___rightPoint_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_45, NULL);
		float L_47 = L_46.___x_2;
		if ((!(((float)L_44) > ((float)L_47))))
		{
			goto IL_023e;
		}
	}
	{
		// theBoss.localScale = Vector3.one;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48 = __this->___theBoss_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_48, L_49, NULL);
		// moveRight = false;
		__this->___moveRight_11 = (bool)0;
		// EndMovement();
		BossTankController_EndMovement_mE1BFE49FC47C1695F636635C879F6D76B3A60433(__this, NULL);
		goto IL_023e;
	}

IL_01bf:
	{
		// theBoss.position -= new Vector3(moveSpeed * Time.deltaTime, 0f, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50 = __this->___theBoss_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51 = L_50;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_51, NULL);
		float L_53 = __this->___moveSpeed_8;
		float L_54;
		L_54 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_55), ((float)il2cpp_codegen_multiply(L_53, L_54)), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_52, L_55, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_51, L_56, NULL);
		// if (theBoss.position.x < leftPoint.position.x)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57 = __this->___theBoss_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_57, NULL);
		float L_59 = L_58.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60 = __this->___leftPoint_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_60, NULL);
		float L_62 = L_61.___x_2;
		if ((!(((float)L_59) < ((float)L_62))))
		{
			goto IL_023e;
		}
	}
	{
		// theBoss.localScale = new Vector3(-1f, 1f, 1f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63 = __this->___theBoss_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_64), (-1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_63, L_64, NULL);
		// moveRight = true;
		__this->___moveRight_11 = (bool)1;
		// EndMovement();
		BossTankController_EndMovement_mE1BFE49FC47C1695F636635C879F6D76B3A60433(__this, NULL);
	}

IL_023e:
	{
		// mineCounter -= Time.deltaTime;
		float L_65 = __this->___mineCounter_15;
		float L_66;
		L_66 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___mineCounter_15 = ((float)il2cpp_codegen_subtract(L_65, L_66));
		// if(mineCounter <= 0)
		float L_67 = __this->___mineCounter_15;
		if ((!(((float)L_67) <= ((float)(0.0f)))))
		{
			goto IL_028b;
		}
	}
	{
		// mineCounter = timeBetweenMines;
		float L_68 = __this->___timeBetweenMines_14;
		__this->___mineCounter_15 = L_68;
		// Instantiate(mine, minePoint.position, minePoint.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = __this->___mine_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70 = __this->___minePoint_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_70, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72 = __this->___minePoint_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_73;
		L_73 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_72, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74;
		L_74 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_69, L_71, L_73, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
	}

IL_028b:
	{
		// }
		return;
	}
}
// System.Void BossTankController::TakeHit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTankController_TakeHit_m59816E89C7F979CDFCA5D49D344E7ACE856BB81A (BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisBossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC_m82218B8F262F4E2C880AD781725049E655EDB564_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C);
		s_Il2CppMethodInitialized = true;
	}
	BossTankMineU5BU5D_tB8508ED8DD8DE038938C617F08B611823FFD23EC* V_0 = NULL;
	BossTankMineU5BU5D_tB8508ED8DD8DE038938C617F08B611823FFD23EC* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// currentState = bossStates.hurt;
		__this->___currentState_5 = 1;
		// hurtCounter = hurtTime;
		float L_0 = __this->___hurtTime_20;
		__this->___hurtCounter_21 = L_0;
		// anim.SetTrigger("Hit");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___anim_7;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_1, _stringLiteral8964425D5AFA567D9602F7E19CD9E3B473DEBE0C, NULL);
		// AudioManager.instance.PlaySFX(0);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_2 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F(L_2, 0, NULL);
		// BossTankMine[] mines = FindObjectsOfType<BossTankMine>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		BossTankMineU5BU5D_tB8508ED8DD8DE038938C617F08B611823FFD23EC* L_3;
		L_3 = Object_FindObjectsOfType_TisBossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC_m82218B8F262F4E2C880AD781725049E655EDB564(Object_FindObjectsOfType_TisBossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC_m82218B8F262F4E2C880AD781725049E655EDB564_RuntimeMethod_var);
		V_0 = L_3;
		// if(mines.Length > 0)
		BossTankMineU5BU5D_tB8508ED8DD8DE038938C617F08B611823FFD23EC* L_4 = V_0;
		if (!(((RuntimeArray*)L_4)->max_length))
		{
			goto IL_0050;
		}
	}
	{
		// foreach(BossTankMine foundMine in mines)
		BossTankMineU5BU5D_tB8508ED8DD8DE038938C617F08B611823FFD23EC* L_5 = V_0;
		V_1 = L_5;
		V_2 = 0;
		goto IL_004a;
	}

IL_003e:
	{
		// foreach(BossTankMine foundMine in mines)
		BossTankMineU5BU5D_tB8508ED8DD8DE038938C617F08B611823FFD23EC* L_6 = V_1;
		int32_t L_7 = V_2;
		int32_t L_8 = L_7;
		BossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		// foundMine.Explode();
		BossTankMine_Explode_m843DFCE15C5624D44537DD80D4F020369A63AFB7(L_9, NULL);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_004a:
	{
		// foreach(BossTankMine foundMine in mines)
		int32_t L_11 = V_2;
		BossTankMineU5BU5D_tB8508ED8DD8DE038938C617F08B611823FFD23EC* L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_003e;
		}
	}

IL_0050:
	{
		// health--;
		int32_t L_13 = __this->___health_24;
		__this->___health_24 = ((int32_t)il2cpp_codegen_subtract(L_13, 1));
		// if(health <= 0)
		int32_t L_14 = __this->___health_24;
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_006f;
		}
	}
	{
		// isDefeated = true;
		__this->___isDefeated_27 = (bool)1;
		return;
	}

IL_006f:
	{
		// timeBetweenShots /= shotSpeedUp;
		float L_15 = __this->___timeBetweenShots_18;
		float L_16 = __this->___shotSpeedUp_28;
		__this->___timeBetweenShots_18 = ((float)(L_15/L_16));
		// timeBetweenMines /= mineSpeedUp;
		float L_17 = __this->___timeBetweenMines_14;
		float L_18 = __this->___mineSpeedUp_29;
		__this->___timeBetweenMines_14 = ((float)(L_17/L_18));
		// }
		return;
	}
}
// System.Void BossTankController::EndMovement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTankController_EndMovement_mE1BFE49FC47C1695F636635C879F6D76B3A60433 (BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral734B4839496AB9102151B94D3F70A735F392F545);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentState = bossStates.shooting;
		__this->___currentState_5 = 0;
		// shotCounter = 0f;
		__this->___shotCounter_19 = (0.0f);
		// anim.SetTrigger("StopMoving");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_7;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral734B4839496AB9102151B94D3F70A735F392F545, NULL);
		// hitBox.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___hitBox_22;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void BossTankController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTankController__ctor_mD19806D75D86D1BE74D46A2679C08184A99D3C4F (BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BossTankHitBox::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTankHitBox_Start_m5CC115E78C3E08B333A37300857D44E458BFF090 (BossTankHitBox_t67E5ECAB86413C0F6DB56D89E1F076219D789E73* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BossTankHitBox::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTankHitBox_Update_m808115A4D235EF031E0B9CE70887ECF96DB097ED (BossTankHitBox_t67E5ECAB86413C0F6DB56D89E1F076219D789E73* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BossTankHitBox::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTankHitBox_OnTriggerEnter2D_m24436916A0314ED5BC251A4D4D81574697876BEF (BossTankHitBox_t67E5ECAB86413C0F6DB56D89E1F076219D789E73* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Player" && PlayerController.instance.transform.position.y > transform.position.y)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0059;
		}
	}
	{
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		if ((!(((float)L_6) > ((float)L_9))))
		{
			goto IL_0059;
		}
	}
	{
		// bossCont.TakeHit();
		BossTankController_t58C4EA7835A15183F9632F83C20FD0DD7D590D8E* L_10 = __this->___bossCont_4;
		BossTankController_TakeHit_m59816E89C7F979CDFCA5D49D344E7ACE856BB81A(L_10, NULL);
		// PlayerController.instance.Bounce();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_11 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_4;
		PlayerController_Bounce_mDAF579DD3454FF6E5B2FE09649E32233AF6E2682(L_11, NULL);
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void BossTankHitBox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTankHitBox__ctor_m357C785948D241A5ACEF763B47D3B58ED0CE55C8 (BossTankHitBox_t67E5ECAB86413C0F6DB56D89E1F076219D789E73* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BossTankMine::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTankMine_Start_m6FF12683FA17899B0119E0E1D64F646F54B4E2F5 (BossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BossTankMine::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTankMine_Update_mBA516BC4BDDCB27E4D9132CEB102E45F53BDFC9E (BossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BossTankMine::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTankMine_OnTriggerEnter2D_m3F15651F3C51D1897E06CE9FB9464F498F6EDF12 (BossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_3, NULL);
		// Instantiate(explosion, transform.position, transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___explosion_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_4, L_6, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// PlayerHealthController.instance.DealDamage();
		PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* L_10 = ((PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var))->___instance_4;
		PlayerHealthController_DealDamage_mD532BE2FD2087A396AFFB4541E570984806FC3EB(L_10, NULL);
		// AudioManager.instance.PlaySFX(3);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_11 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F(L_11, 3, NULL);
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void BossTankMine::Explode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTankMine_Explode_m843DFCE15C5624D44537DD80D4F020369A63AFB7 (BossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_0, NULL);
		// AudioManager.instance.PlaySFX(3);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_1 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F(L_1, 3, NULL);
		// Instantiate(explosion, transform.position, transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___explosion_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_2, L_4, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BossTankMine::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BossTankMine__ctor_mB3BC1498F95787B9F827EA3F36302CAB831F862B (BossTankMine_t135030DDC125DA3C71FFC3D1EF13878B4E9730FC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BouncePad::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BouncePad_Start_mAB45F0DB57CC27C306D6AC47DD613F1F11AE891C (BouncePad_tBE250C0A3B6946A38A62FD7CF48B62872BB58F0C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void BouncePad::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BouncePad_Update_m65B474063298C389BC2E10E7B72C4E27A658B3E2 (BouncePad_tBE250C0A3B6946A38A62FD7CF48B62872BB58F0C* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void BouncePad::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BouncePad_OnTriggerEnter2D_m9ECB0474C4D4A0782D5598CA460F51671D232F89 (BouncePad_tBE250C0A3B6946A38A62FD7CF48B62872BB58F0C* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8C1C8DBCD190AD757B340916245FB7F9E1400FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_005c;
		}
	}
	{
		// PlayerController.instance.theRB.velocity = new Vector2(PlayerController.instance.theRB.velocity.x, bounceForce);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = L_3->___theRB_6;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = L_5->___theRB_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_6, NULL);
		float L_8 = L_7.___x_0;
		float L_9 = __this->___bounceForce_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), L_8, L_9, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_4, L_10, NULL);
		// anim.SetTrigger("Bounce");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11 = __this->___anim_4;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_11, _stringLiteralC8C1C8DBCD190AD757B340916245FB7F9E1400FE, NULL);
		// AudioManager.instance.PlaySFX(10);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_12 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F(L_12, ((int32_t)10), NULL);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void BouncePad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BouncePad__ctor_mDA89283AC79C69DC83E8FD6054E4EEEF742969CC (BouncePad_tBE250C0A3B6946A38A62FD7CF48B62872BB58F0C* __this, const RuntimeMethod* method) 
{
	{
		// public float bounceForce = 20f;
		__this->___bounceForce_5 = (20.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CameraController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Awake_mA329C09A8A267A4FABDFE7E67EBA83B1706B04B7 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_StaticFields*)il2cpp_codegen_static_fields_for(CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_StaticFields*)il2cpp_codegen_static_fields_for(CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void CameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Start_m8EAAC188934ECCBD009EC00751280DCFF4D96C71 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		// lastPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_1, NULL);
		__this->___lastPos_11 = L_2;
		// }
		return;
	}
}
// System.Void CameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController_Update_mBCB871B23DBA60444D43AB56D780478BA3D355E6 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!stopFollow)
		bool L_0 = __this->___stopFollow_10;
		if (L_0)
		{
			goto IL_0118;
		}
	}
	{
		// transform.position = new Vector3(target.position.x, Mathf.Clamp(target.position.y, minHeight, maxHeight), transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___target_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___target_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___y_3;
		float L_8 = __this->___minHeight_8;
		float L_9 = __this->___maxHeight_9;
		float L_10;
		L_10 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_7, L_8, L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_14), L_4, L_10, L_13, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_14, NULL);
		// Vector2 amountToMove = new Vector2(transform.position.x - lastPos.x, transform.position.y - lastPos.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_18 = (&__this->___lastPos_11);
		float L_19 = L_18->___x_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		float L_22 = L_21.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_23 = (&__this->___lastPos_11);
		float L_24 = L_23->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_subtract(L_17, L_19)), ((float)il2cpp_codegen_subtract(L_22, L_24)), NULL);
		// farBackground.position = farBackground.position + new Vector3(amountToMove.x, amountToMove.y, 0f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25 = __this->___farBackground_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___farBackground_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_0;
		float L_29 = L_28.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_30 = V_0;
		float L_31 = L_30.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		memset((&L_32), 0, sizeof(L_32));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_32), L_29, L_31, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_27, L_32, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_33, NULL);
		// middleBackground.position += new Vector3(amountToMove.x, amountToMove.y, 0f) * .8f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___middleBackground_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35 = L_34;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_35, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = V_0;
		float L_38 = L_37.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39 = V_0;
		float L_40 = L_39.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_41), L_38, L_40, (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_41, (0.800000012f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_36, L_42, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_35, L_43, NULL);
		// lastPos = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_46;
		L_46 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_45, NULL);
		__this->___lastPos_11 = L_46;
	}

IL_0118:
	{
		// }
		return;
	}
}
// System.Void CameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraController__ctor_mE196A6332BDDED632D6F9DB6260E424594598950 (CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Checkpoint::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Checkpoint_Start_m49678E47BE223C7739F208C3720AB5EFB549E95E (Checkpoint_t73DBB588194FE620149319CC45C4187E6A9EB068* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Checkpoint::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Checkpoint_Update_mB254286641B1222DF1CF5C228EE1C0424987F749 (Checkpoint_t73DBB588194FE620149319CC45C4187E6A9EB068* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Checkpoint::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Checkpoint_OnTriggerEnter2D_m71A2C3E1CA938F95F506C3EC62CCACAB9FECB089 (Checkpoint_t73DBB588194FE620149319CC45C4187E6A9EB068* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.CompareTag("Player"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// CheckpointController.instance.DeactivateCheckpoints();
		CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4* L_2 = ((CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4_StaticFields*)il2cpp_codegen_static_fields_for(CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4_il2cpp_TypeInfo_var))->___instance_4;
		CheckpointController_DeactivateCheckpoints_mF83355FE0C8C4C3F2AB754A99C8ED06A45E60EDC(L_2, NULL);
		// theSR.sprite = cpOn;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___theSR_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___cpOn_5;
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_3, L_4, NULL);
		// CheckpointController.instance.SetSpawnPoint(transform.position);
		CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4* L_5 = ((CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4_StaticFields*)il2cpp_codegen_static_fields_for(CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		CheckpointController_SetSpawnPoint_m8888DA4AA7BD0A97F52A82341BA520948F89E486_inline(L_5, L_7, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void Checkpoint::ResetCheckpoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Checkpoint_ResetCheckpoint_m7E45138483A716ABF7F2093ACE19D940D8C33D42 (Checkpoint_t73DBB588194FE620149319CC45C4187E6A9EB068* __this, const RuntimeMethod* method) 
{
	{
		// theSR.sprite = cpOff;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___theSR_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = __this->___cpOff_6;
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Checkpoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Checkpoint__ctor_mB5C31C13421C1D53CACD4B476F9EDD90E2680975 (Checkpoint_t73DBB588194FE620149319CC45C4187E6A9EB068* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CheckpointController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckpointController_Awake_m3C3AF0E3273D64BE326D98B9ADA94251E2C56698 (CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4_StaticFields*)il2cpp_codegen_static_fields_for(CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4_StaticFields*)il2cpp_codegen_static_fields_for(CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void CheckpointController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckpointController_Start_mEE8B68CFB46C92AC22AA7A144F2F722A81D923A6 (CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisCheckpoint_t73DBB588194FE620149319CC45C4187E6A9EB068_mE71E15DC367DBCBA13FEA30EC836A6B52B621473_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// checkpoints = FindObjectsOfType<Checkpoint>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		CheckpointU5BU5D_t5C9CE0CC022D7F12B4299C1EA681347FB012C337* L_0;
		L_0 = Object_FindObjectsOfType_TisCheckpoint_t73DBB588194FE620149319CC45C4187E6A9EB068_mE71E15DC367DBCBA13FEA30EC836A6B52B621473(Object_FindObjectsOfType_TisCheckpoint_t73DBB588194FE620149319CC45C4187E6A9EB068_mE71E15DC367DBCBA13FEA30EC836A6B52B621473_RuntimeMethod_var);
		__this->___checkpoints_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___checkpoints_5), (void*)L_0);
		// spawnPoint = PlayerController.instance.transform.position;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_1 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		__this->___spawnPoint_6 = L_3;
		// }
		return;
	}
}
// System.Void CheckpointController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckpointController_Update_m3BF53239E671BECF172C5DE957765411F1D73146 (CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void CheckpointController::DeactivateCheckpoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckpointController_DeactivateCheckpoints_mF83355FE0C8C4C3F2AB754A99C8ED06A45E60EDC (CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < checkpoints.Length; i++)
		V_0 = 0;
		goto IL_0015;
	}

IL_0004:
	{
		// checkpoints[i].ResetCheckpoint();
		CheckpointU5BU5D_t5C9CE0CC022D7F12B4299C1EA681347FB012C337* L_0 = __this->___checkpoints_5;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		Checkpoint_t73DBB588194FE620149319CC45C4187E6A9EB068* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Checkpoint_ResetCheckpoint_m7E45138483A716ABF7F2093ACE19D940D8C33D42(L_3, NULL);
		// for(int i = 0; i < checkpoints.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0015:
	{
		// for(int i = 0; i < checkpoints.Length; i++)
		int32_t L_5 = V_0;
		CheckpointU5BU5D_t5C9CE0CC022D7F12B4299C1EA681347FB012C337* L_6 = __this->___checkpoints_5;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CheckpointController::SetSpawnPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckpointController_SetSpawnPoint_m8888DA4AA7BD0A97F52A82341BA520948F89E486 (CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newSpawnPoint0, const RuntimeMethod* method) 
{
	{
		// spawnPoint = newSpawnPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___newSpawnPoint0;
		__this->___spawnPoint_6 = L_0;
		// }
		return;
	}
}
// System.Void CheckpointController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CheckpointController__ctor_m9053FF0A0AC91ED0B8B6903C2DBF1BACBF1BF6DB (CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DamagePlayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamagePlayer_Start_m7B5F687DA2898162BFD3B6621C8A000E60E244A4 (DamagePlayer_tF2BE6E941F78A7C9B9D32F315CBBC925D08A308B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DamagePlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamagePlayer_Update_mD46ABC92F2DED8D5C8F9D3FBE23913F543669333 (DamagePlayer_tF2BE6E941F78A7C9B9D32F315CBBC925D08A308B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DamagePlayer::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamagePlayer_OnTriggerEnter2D_m90779B8D9524B9204884E77F078D23245A08AFF6 (DamagePlayer_tF2BE6E941F78A7C9B9D32F315CBBC925D08A308B* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// PlayerHealthController.instance.DealDamage();
		PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* L_3 = ((PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var))->___instance_4;
		PlayerHealthController_DealDamage_mD532BE2FD2087A396AFFB4541E570984806FC3EB(L_3, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void DamagePlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamagePlayer__ctor_mDDC5A0DECF0DC1C9048D5980688714B50811ACBE (DamagePlayer_tF2BE6E941F78A7C9B9D32F315CBBC925D08A308B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DestroyOverTime::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyOverTime_Start_m940C621F92431D3C822929D2991CFE376C70DE46 (DestroyOverTime_tB6E7227A73D9ED057CD22D98943009A2A5195C08* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void DestroyOverTime::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyOverTime_Update_mA567977BBBDF6CEF93F3CA72D622FFF5F28D0D9C (DestroyOverTime_tB6E7227A73D9ED057CD22D98943009A2A5195C08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject, lifeTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		float L_1 = __this->___lifeTime_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DestroyOverTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyOverTime__ctor_mFFAE3F229C81D5F8B12C15C5B03917747BCBD78E (DestroyOverTime_tB6E7227A73D9ED057CD22D98943009A2A5195C08* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EnemyController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Start_mD47FA99710AFEDA91637E73B4109FC0125032604 (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theRB = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___theRB_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___theRB_8), (void*)L_0);
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_10), (void*)L_1);
		// leftPoint.parent = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___leftPoint_5;
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_2, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// rightPoint.parent = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___rightPoint_6;
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_3, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// movingRight = true;
		__this->___movingRight_7 = (bool)1;
		// moveCount = moveTime;
		float L_4 = __this->___moveTime_11;
		__this->___moveCount_13 = L_4;
		// }
		return;
	}
}
// System.Void EnemyController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Update_mD4EAAD97042453D8F3F5D623882F24366451F7ED (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (moveCount > 0)
		float L_0 = __this->___moveCount_13;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0125;
		}
	}
	{
		// moveCount -= Time.deltaTime;
		float L_1 = __this->___moveCount_13;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___moveCount_13 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if (movingRight)
		bool L_3 = __this->___movingRight_7;
		if (!L_3)
		{
			goto IL_0087;
		}
	}
	{
		// theRB.velocity = new Vector2(moveSpeed, theRB.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___theRB_8;
		float L_5 = __this->___moveSpeed_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->___theRB_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_6, NULL);
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), L_5, L_8, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_4, L_9, NULL);
		// theSR.flipX = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___theSR_9;
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_10, (bool)1, NULL);
		// if (transform.position.x > rightPoint.position.x)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___rightPoint_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = L_15.___x_2;
		if ((!(((float)L_13) > ((float)L_16))))
		{
			goto IL_00e3;
		}
	}
	{
		// movingRight = false;
		__this->___movingRight_7 = (bool)0;
		goto IL_00e3;
	}

IL_0087:
	{
		// theRB.velocity = new Vector2(-moveSpeed, theRB.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_17 = __this->___theRB_8;
		float L_18 = __this->___moveSpeed_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_19 = __this->___theRB_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_19, NULL);
		float L_21 = L_20.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), ((-L_18)), L_21, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_17, L_22, NULL);
		// theSR.flipX = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_23 = __this->___theSR_9;
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_23, (bool)0, NULL);
		// if (transform.position.x < leftPoint.position.x)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		float L_26 = L_25.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___leftPoint_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = L_28.___x_2;
		if ((!(((float)L_26) < ((float)L_29))))
		{
			goto IL_00e3;
		}
	}
	{
		// movingRight = true;
		__this->___movingRight_7 = (bool)1;
	}

IL_00e3:
	{
		// if(moveCount <= 0)
		float L_30 = __this->___moveCount_13;
		if ((!(((float)L_30) <= ((float)(0.0f)))))
		{
			goto IL_0113;
		}
	}
	{
		// waitCount = Random.Range(waitTime * .75f, waitTime * 1.25f);
		float L_31 = __this->___waitTime_12;
		float L_32 = __this->___waitTime_12;
		float L_33;
		L_33 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((float)il2cpp_codegen_multiply(L_31, (0.75f))), ((float)il2cpp_codegen_multiply(L_32, (1.25f))), NULL);
		__this->___waitCount_14 = L_33;
	}

IL_0113:
	{
		// anim.SetBool("isMoving", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_34 = __this->___anim_10;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_34, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)1, NULL);
		return;
	}

IL_0125:
	{
		// } else if(waitCount > 0)
		float L_35 = __this->___waitCount_14;
		if ((!(((float)L_35) > ((float)(0.0f)))))
		{
			goto IL_01aa;
		}
	}
	{
		// waitCount -= Time.deltaTime;
		float L_36 = __this->___waitCount_14;
		float L_37;
		L_37 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___waitCount_14 = ((float)il2cpp_codegen_subtract(L_36, L_37));
		// theRB.velocity = new Vector2(0f, theRB.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_38 = __this->___theRB_8;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_39 = __this->___theRB_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_39, NULL);
		float L_41 = L_40.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_42), (0.0f), L_41, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_38, L_42, NULL);
		// if(waitCount <= 0)
		float L_43 = __this->___waitCount_14;
		if ((!(((float)L_43) <= ((float)(0.0f)))))
		{
			goto IL_0199;
		}
	}
	{
		// moveCount = Random.Range(moveTime * .75f, waitTime * .75f);
		float L_44 = __this->___moveTime_11;
		float L_45 = __this->___waitTime_12;
		float L_46;
		L_46 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((float)il2cpp_codegen_multiply(L_44, (0.75f))), ((float)il2cpp_codegen_multiply(L_45, (0.75f))), NULL);
		__this->___moveCount_13 = L_46;
	}

IL_0199:
	{
		// anim.SetBool("isMoving", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_47 = __this->___anim_10;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_47, _stringLiteral465D36DE2399F80427DF5746DF5CDC6C7818D907, (bool)0, NULL);
	}

IL_01aa:
	{
		// }
		return;
	}
}
// System.Void EnemyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController__ctor_m984FF7EBF9BF2923A09FA943862B8941E9FFECCD (EnemyController_tBB576F8CA41609F61E7D9AD27B14D49FB5A11C4A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FlyingEnemyController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlyingEnemyController_Start_m9C9B82D397719C650A7F63240A343C7D435545B4 (FlyingEnemyController_t362C518795D93DE0AD0402D3701CD7D23E14EC1F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < points.Length; i++)
		V_0 = 0;
		goto IL_0016;
	}

IL_0004:
	{
		// points[i].parent = null;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_0 = __this->___points_4;
		int32_t L_1 = V_0;
		int32_t L_2 = L_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_3, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// for(int i = 0; i < points.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0016:
	{
		// for(int i = 0; i < points.Length; i++)
		int32_t L_5 = V_0;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_6 = __this->___points_4;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void FlyingEnemyController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlyingEnemyController_Update_mF5492B67A822561820FC0D7DFB8B8C09358971A3 (FlyingEnemyController_t362C518795D93DE0AD0402D3701CD7D23E14EC1F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (attackCounter > 0)
		float L_0 = __this->___attackCounter_12;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0020;
		}
	}
	{
		// attackCounter -= Time.deltaTime;
		float L_1 = __this->___attackCounter_12;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___attackCounter_12 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		return;
	}

IL_0020:
	{
		// if (Vector3.Distance(transform.position, PlayerController.instance.transform.position) > distanceToAttackPlayer)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_5 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8;
		L_8 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_4, L_7, NULL);
		float L_9 = __this->___distanceToAttackPlayer_8;
		if ((!(((float)L_8) > ((float)L_9))))
		{
			goto IL_014b;
		}
	}
	{
		// attackTarget = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___attackTarget_10 = L_10;
		// transform.position = Vector3.MoveTowards(transform.position, points[currentPoint].position, moveSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_14 = __this->___points_4;
		int32_t L_15 = __this->___currentPoint_6;
		int32_t L_16 = L_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_17, NULL);
		float L_19 = __this->___moveSpeed_5;
		float L_20;
		L_20 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(L_13, L_18, ((float)il2cpp_codegen_multiply(L_19, L_20)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_21, NULL);
		// if (Vector3.Distance(transform.position, points[currentPoint].position) < .05f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_24 = __this->___points_4;
		int32_t L_25 = __this->___currentPoint_6;
		int32_t L_26 = L_25;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = (L_24)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_26));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29;
		L_29 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_23, L_28, NULL);
		if ((!(((float)L_29) < ((float)(0.0500000007f)))))
		{
			goto IL_00dc;
		}
	}
	{
		// currentPoint++;
		int32_t L_30 = __this->___currentPoint_6;
		__this->___currentPoint_6 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		// if (currentPoint >= points.Length)
		int32_t L_31 = __this->___currentPoint_6;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_32 = __this->___points_4;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))))
		{
			goto IL_00dc;
		}
	}
	{
		// currentPoint = 0;
		__this->___currentPoint_6 = 0;
	}

IL_00dc:
	{
		// if (transform.position.x < points[currentPoint].position.x)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		float L_35 = L_34.___x_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_36 = __this->___points_4;
		int32_t L_37 = __this->___currentPoint_6;
		int32_t L_38 = L_37;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_39, NULL);
		float L_41 = L_40.___x_2;
		if ((!(((float)L_35) < ((float)L_41))))
		{
			goto IL_0112;
		}
	}
	{
		// theSR.flipX = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_42 = __this->___theSR_7;
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_42, (bool)1, NULL);
		return;
	}

IL_0112:
	{
		// else if (transform.position.x > points[currentPoint].position.x)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		float L_45 = L_44.___x_2;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_46 = __this->___points_4;
		int32_t L_47 = __this->___currentPoint_6;
		int32_t L_48 = L_47;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49 = (L_46)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_48));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_49, NULL);
		float L_51 = L_50.___x_2;
		if ((!(((float)L_45) > ((float)L_51))))
		{
			goto IL_01d3;
		}
	}
	{
		// theSR.flipX = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_52 = __this->___theSR_7;
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_52, (bool)0, NULL);
		return;
	}

IL_014b:
	{
		// if (attackTarget == Vector3.zero)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = __this->___attackTarget_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		bool L_55;
		L_55 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_53, L_54, NULL);
		if (!L_55)
		{
			goto IL_0172;
		}
	}
	{
		// attackTarget = PlayerController.instance.transform.position;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_56 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_56, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_57, NULL);
		__this->___attackTarget_10 = L_58;
	}

IL_0172:
	{
		// transform.position = Vector3.MoveTowards(transform.position, attackTarget, chaseSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_60, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = __this->___attackTarget_10;
		float L_63 = __this->___chaseSpeed_9;
		float L_64;
		L_64 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(L_61, L_62, ((float)il2cpp_codegen_multiply(L_63, L_64)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_59, L_65, NULL);
		// if (Vector3.Distance(transform.position, attackTarget) <= .1f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_66, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = __this->___attackTarget_10;
		float L_69;
		L_69 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_67, L_68, NULL);
		if ((!(((float)L_69) <= ((float)(0.100000001f)))))
		{
			goto IL_01d3;
		}
	}
	{
		// attackCounter = waitAfterAttack;
		float L_70 = __this->___waitAfterAttack_11;
		__this->___attackCounter_12 = L_70;
		// attackTarget = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___attackTarget_10 = L_71;
	}

IL_01d3:
	{
		// }
		return;
	}
}
// System.Void FlyingEnemyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlyingEnemyController__ctor_mFBC596A8EE03DB887BDE65141006D225B2AEAB12 (FlyingEnemyController_t362C518795D93DE0AD0402D3701CD7D23E14EC1F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void KillPlayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KillPlayer_Start_mA19675D6E486B6F7D8FE6367517655F0A16576AC (KillPlayer_tB2C563851C648DB239F5CC0A98A3518F8F6FF3EE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void KillPlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KillPlayer_Update_mF40F267E40644E94A4373AD78E232E05378E691D (KillPlayer_tB2C563851C648DB239F5CC0A98A3518F8F6FF3EE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void KillPlayer::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KillPlayer_OnTriggerEnter2D_m5A34DBFCE97F7C0BA9C24F0C13B673114076EA72 (KillPlayer_tB2C563851C648DB239F5CC0A98A3518F8F6FF3EE* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// LevelManager.instance.RespawnPlayer();
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_3 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___instance_4;
		LevelManager_RespawnPlayer_m9828E47BB559B81ED9374ABC5606404689D7F48B(L_3, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void KillPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KillPlayer__ctor_m57DE111907A6DB6C8ADE6EC211A78727D4D84CF8 (KillPlayer_tB2C563851C648DB239F5CC0A98A3518F8F6FF3EE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LevelExit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelExit_Start_m9ECC164D5D1405C05ECA3FE47D8FBA591472289E (LevelExit_t231B7228C2441A7D1FB308B56CD4E934850712AE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LevelExit::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelExit_Update_mC4BE278E64B47E5F12FCA09378EE44537DAFAFF6 (LevelExit_t231B7228C2441A7D1FB308B56CD4E934850712AE* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LevelExit::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelExit_OnTriggerEnter2D_m61A4DD3A790BD40FF89FD879F9AB8544638D8F1C (LevelExit_t231B7228C2441A7D1FB308B56CD4E934850712AE* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// LevelManager.instance.EndLevel();
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_3 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___instance_4;
		LevelManager_EndLevel_m115808926D3FBFFB959DEC8E028ED4523CF22914(L_3, NULL);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void LevelExit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelExit__ctor_m4483E285CD4424B6C5F23ABA20D288349DEF10C0 (LevelExit_t231B7228C2441A7D1FB308B56CD4E934850712AE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LevelManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Awake_m5DEB1CF05B334C6E29A91D604623C1B8401AE09C (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void LevelManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Start_mA7A45D9D0CBA8784B87F70B204C19A2AAC234D42 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	{
		// timeInLevel = 0f;
		__this->___timeInLevel_9 = (0.0f);
		// }
		return;
	}
}
// System.Void LevelManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_Update_mD2004B9E4119DF7C3EE3D3F147754CCBC7FFD61D (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	{
		// timeInLevel += Time.deltaTime;
		float L_0 = __this->___timeInLevel_9;
		float L_1;
		L_1 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___timeInLevel_9 = ((float)il2cpp_codegen_add(L_0, L_1));
		// }
		return;
	}
}
// System.Void LevelManager::RespawnPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_RespawnPlayer_m9828E47BB559B81ED9374ABC5606404689D7F48B (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(RespawnCo());
		RuntimeObject* L_0;
		L_0 = LevelManager_RespawnCo_m29FAE4C63BF3308B7C05D5B48FBF2E94BA6483FA(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LevelManager::RespawnCo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_RespawnCo_m29FAE4C63BF3308B7C05D5B48FBF2E94BA6483FA (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRespawnCoU3Ed__10_t411BA6CD95D30DCFD3EA6C2E2FA1DFFDC6E88AD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRespawnCoU3Ed__10_t411BA6CD95D30DCFD3EA6C2E2FA1DFFDC6E88AD1* L_0 = (U3CRespawnCoU3Ed__10_t411BA6CD95D30DCFD3EA6C2E2FA1DFFDC6E88AD1*)il2cpp_codegen_object_new(U3CRespawnCoU3Ed__10_t411BA6CD95D30DCFD3EA6C2E2FA1DFFDC6E88AD1_il2cpp_TypeInfo_var);
		U3CRespawnCoU3Ed__10__ctor_mAFDAE8D0E2A3C22164B00F21C70B2C4CD7C7D1CA(L_0, 0, NULL);
		U3CRespawnCoU3Ed__10_t411BA6CD95D30DCFD3EA6C2E2FA1DFFDC6E88AD1* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void LevelManager::EndLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager_EndLevel_m115808926D3FBFFB959DEC8E028ED4523CF22914 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(EndLevelCo());
		RuntimeObject* L_0;
		L_0 = LevelManager_EndLevelCo_mAC517E53C1103BB1FD0C267FE0E6B6B5CE6C5612(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LevelManager::EndLevelCo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LevelManager_EndLevelCo_mAC517E53C1103BB1FD0C267FE0E6B6B5CE6C5612 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEndLevelCoU3Ed__12_t004D52E601847CCDE4BD6364F908F40E4C7DA052_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEndLevelCoU3Ed__12_t004D52E601847CCDE4BD6364F908F40E4C7DA052* L_0 = (U3CEndLevelCoU3Ed__12_t004D52E601847CCDE4BD6364F908F40E4C7DA052*)il2cpp_codegen_object_new(U3CEndLevelCoU3Ed__12_t004D52E601847CCDE4BD6364F908F40E4C7DA052_il2cpp_TypeInfo_var);
		U3CEndLevelCoU3Ed__12__ctor_m5E3DE10489405D2750C9EABB908AB509BDEB5E76(L_0, 0, NULL);
		U3CEndLevelCoU3Ed__12_t004D52E601847CCDE4BD6364F908F40E4C7DA052* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void LevelManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LevelManager__ctor_m97F35AC08C296B73BD7D85FFB593A7BEA61B3F92 (LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LevelManager/<RespawnCo>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespawnCoU3Ed__10__ctor_mAFDAE8D0E2A3C22164B00F21C70B2C4CD7C7D1CA (U3CRespawnCoU3Ed__10_t411BA6CD95D30DCFD3EA6C2E2FA1DFFDC6E88AD1* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LevelManager/<RespawnCo>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespawnCoU3Ed__10_System_IDisposable_Dispose_mE730673415D368C2ED0C42FDDC28093D4D95ECAC (U3CRespawnCoU3Ed__10_t411BA6CD95D30DCFD3EA6C2E2FA1DFFDC6E88AD1* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LevelManager/<RespawnCo>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRespawnCoU3Ed__10_MoveNext_m73231722577EED3A9CBD70BB33FB9F9323C6527C (U3CRespawnCoU3Ed__10_t411BA6CD95D30DCFD3EA6C2E2FA1DFFDC6E88AD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_1 = __this->___U3CU3E4__this_2;
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
				goto IL_006f;
			}
			case 2:
			{
				goto IL_00aa;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PlayerController.instance.gameObject.SetActive(false);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_3 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// AudioManager.instance.PlaySFX(8);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_5 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F(L_5, 8, NULL);
		// yield return new WaitForSeconds(waitToRespawn - (1f / UIController.instance.fadeSpeed));
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_6 = V_1;
		float L_7 = L_6->___waitToRespawn_6;
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_8 = ((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___instance_4;
		float L_9 = L_8->___fadeSpeed_15;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_10 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_10, ((float)il2cpp_codegen_subtract(L_7, ((float)((1.0f)/L_9)))), NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_006f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// UIController.instance.FadeToBlack();
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_11 = ((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___instance_4;
		UIController_FadeToBlack_mB79901580AAF4A5494BA7D2A1DA5AFEED6D4D0D0(L_11, NULL);
		// yield return new WaitForSeconds((1f / UIController.instance.fadeSpeed) + .2f);
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_12 = ((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___instance_4;
		float L_13 = L_12->___fadeSpeed_15;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_14 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_14, ((float)il2cpp_codegen_add(((float)((1.0f)/L_13)), (0.200000003f))), NULL);
		__this->___U3CU3E2__current_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_14);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00aa:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// UIController.instance.FadeFromBlack();
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_15 = ((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___instance_4;
		UIController_FadeFromBlack_m06CB6F0F1B38C83636086DE37D81F90DBD91A7F5(L_15, NULL);
		// PlayerController.instance.gameObject.SetActive(true);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_16 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)1, NULL);
		// isRespawn = true;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_18 = V_1;
		L_18->___isRespawn_5 = (bool)1;
		// PlayerController.instance.transform.position = CheckpointController.instance.spawnPoint;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_19 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4* L_21 = ((CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4_StaticFields*)il2cpp_codegen_static_fields_for(CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4_il2cpp_TypeInfo_var))->___instance_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = L_21->___spawnPoint_6;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_20, L_22, NULL);
		// PlayerHealthController.instance.currentHealth = PlayerHealthController.instance.maxHealth;
		PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* L_23 = ((PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var))->___instance_4;
		PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* L_24 = ((PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_25 = L_24->___maxHealth_6;
		L_23->___currentHealth_5 = L_25;
		// UIController.instance.UpdateHealthDisplay();
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_26 = ((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___instance_4;
		UIController_UpdateHealthDisplay_m2D84303912D630F2CB424180CA0A8C727FF2B19D(L_26, NULL);
		// }
		return (bool)0;
	}
}
// System.Object LevelManager/<RespawnCo>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRespawnCoU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAEACEF92A039CEBF2F274062ADD0843B49113124 (U3CRespawnCoU3Ed__10_t411BA6CD95D30DCFD3EA6C2E2FA1DFFDC6E88AD1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LevelManager/<RespawnCo>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespawnCoU3Ed__10_System_Collections_IEnumerator_Reset_mB4B2CA92BA20518C34DD83A6B2CFE5E378193966 (U3CRespawnCoU3Ed__10_t411BA6CD95D30DCFD3EA6C2E2FA1DFFDC6E88AD1* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRespawnCoU3Ed__10_System_Collections_IEnumerator_Reset_mB4B2CA92BA20518C34DD83A6B2CFE5E378193966_RuntimeMethod_var)));
	}
}
// System.Object LevelManager/<RespawnCo>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRespawnCoU3Ed__10_System_Collections_IEnumerator_get_Current_m9DE5857C53E686A4EB036F0E17B28B3350A9C6E1 (U3CRespawnCoU3Ed__10_t411BA6CD95D30DCFD3EA6C2E2FA1DFFDC6E88AD1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void LevelManager/<EndLevelCo>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndLevelCoU3Ed__12__ctor_m5E3DE10489405D2750C9EABB908AB509BDEB5E76 (U3CEndLevelCoU3Ed__12_t004D52E601847CCDE4BD6364F908F40E4C7DA052* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LevelManager/<EndLevelCo>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndLevelCoU3Ed__12_System_IDisposable_Dispose_m9F572EC2962BDCCBEDC9E6E7A7CF56737BEFCCA2 (U3CEndLevelCoU3Ed__12_t004D52E601847CCDE4BD6364F908F40E4C7DA052* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LevelManager/<EndLevelCo>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEndLevelCoU3Ed__12_MoveNext_m7BEF319E197ECC1EDC31DE293F6BFED0FD4B6077 (U3CEndLevelCoU3Ed__12_t004D52E601847CCDE4BD6364F908F40E4C7DA052* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AC6DD7957C107D80F8FA476DBEF880D93A2BB0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE441749195C391435BE1B9FD62C1208F0551BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FF36436D1CFC3CD12BEC10C304D07D7C3784A3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF1CD87FDFAC87AC835B1D3D847F56D3E6E59F66);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* V_1 = NULL;
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_1 = __this->___U3CU3E4__this_2;
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
				goto IL_0072;
			}
			case 2:
			{
				goto IL_00ad;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AudioManager.instance.PlayLevelVictory();
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_3 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlayLevelVictory_m915DBB4A40157767E0314219B1038CF404924EC5(L_3, NULL);
		// PlayerController.instance.stopInput = true;
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_4;
		L_4->___stopInput_27 = (bool)1;
		// CameraController.instance.stopFollow = true;
		CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* L_5 = ((CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_StaticFields*)il2cpp_codegen_static_fields_for(CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_il2cpp_TypeInfo_var))->___instance_4;
		L_5->___stopFollow_10 = (bool)1;
		// UIController.instance.levelCompleteText.SetActive(true);
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_6 = ((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___instance_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___levelCompleteText_18;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, (1.5f), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0072:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// UIController.instance.FadeToBlack();
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_9 = ((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___instance_4;
		UIController_FadeToBlack_mB79901580AAF4A5494BA7D2A1DA5AFEED6D4D0D0(L_9, NULL);
		// yield return new WaitForSeconds((1f / UIController.instance.fadeSpeed) + 3f);
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_10 = ((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___instance_4;
		float L_11 = L_10->___fadeSpeed_15;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_12 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_12, ((float)il2cpp_codegen_add(((float)((1.0f)/L_11)), (3.0f))), NULL);
		__this->___U3CU3E2__current_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_12);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00ad:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// PlayerPrefs.SetInt(SceneManager.GetActiveScene().name + "_unlocked", 1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_13;
		L_13 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_2 = L_13;
		String_t* L_14;
		L_14 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_2), NULL);
		String_t* L_15;
		L_15 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_14, _stringLiteral9FF36436D1CFC3CD12BEC10C304D07D7C3784A3A, NULL);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_15, 1, NULL);
		// PlayerPrefs.SetString("CurrentLevel", SceneManager.GetActiveScene().name);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_16;
		L_16 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_2 = L_16;
		String_t* L_17;
		L_17 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_2), NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteralCF1CD87FDFAC87AC835B1D3D847F56D3E6E59F66, L_17, NULL);
		// if (PlayerPrefs.HasKey(SceneManager.GetActiveScene().name + "_gems"))
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_18;
		L_18 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_2 = L_18;
		String_t* L_19;
		L_19 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_2), NULL);
		String_t* L_20;
		L_20 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_19, _stringLiteral9CE441749195C391435BE1B9FD62C1208F0551BB, NULL);
		bool L_21;
		L_21 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_20, NULL);
		if (!L_21)
		{
			goto IL_014e;
		}
	}
	{
		// if(gemsCollected > PlayerPrefs.GetInt(SceneManager.GetActiveScene().name + "_gems"))
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_22 = V_1;
		int32_t L_23 = L_22->___gemsCollected_7;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_24;
		L_24 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_2 = L_24;
		String_t* L_25;
		L_25 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_2), NULL);
		String_t* L_26;
		L_26 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_25, _stringLiteral9CE441749195C391435BE1B9FD62C1208F0551BB, NULL);
		int32_t L_27;
		L_27 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_26, NULL);
		if ((((int32_t)L_23) <= ((int32_t)L_27)))
		{
			goto IL_0170;
		}
	}
	{
		// PlayerPrefs.SetInt(SceneManager.GetActiveScene().name + "_gems", gemsCollected);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_28;
		L_28 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_2 = L_28;
		String_t* L_29;
		L_29 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_2), NULL);
		String_t* L_30;
		L_30 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_29, _stringLiteral9CE441749195C391435BE1B9FD62C1208F0551BB, NULL);
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_31 = V_1;
		int32_t L_32 = L_31->___gemsCollected_7;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_30, L_32, NULL);
		goto IL_0170;
	}

IL_014e:
	{
		// PlayerPrefs.SetInt(SceneManager.GetActiveScene().name + "_gems", gemsCollected);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_33;
		L_33 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_2 = L_33;
		String_t* L_34;
		L_34 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_2), NULL);
		String_t* L_35;
		L_35 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_34, _stringLiteral9CE441749195C391435BE1B9FD62C1208F0551BB, NULL);
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_36 = V_1;
		int32_t L_37 = L_36->___gemsCollected_7;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_35, L_37, NULL);
	}

IL_0170:
	{
		// if (PlayerPrefs.HasKey(SceneManager.GetActiveScene().name + "_time"))
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_38;
		L_38 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_2 = L_38;
		String_t* L_39;
		L_39 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_2), NULL);
		String_t* L_40;
		L_40 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_39, _stringLiteral9AC6DD7957C107D80F8FA476DBEF880D93A2BB0E, NULL);
		bool L_41;
		L_41 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_40, NULL);
		if (!L_41)
		{
			goto IL_01d6;
		}
	}
	{
		// if(timeInLevel < PlayerPrefs.GetFloat(SceneManager.GetActiveScene().name + "_time"))
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_42 = V_1;
		float L_43 = L_42->___timeInLevel_9;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_44;
		L_44 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_2 = L_44;
		String_t* L_45;
		L_45 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_2), NULL);
		String_t* L_46;
		L_46 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_45, _stringLiteral9AC6DD7957C107D80F8FA476DBEF880D93A2BB0E, NULL);
		float L_47;
		L_47 = PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896(L_46, NULL);
		if ((!(((float)L_43) < ((float)L_47))))
		{
			goto IL_01f8;
		}
	}
	{
		// PlayerPrefs.SetFloat(SceneManager.GetActiveScene().name + "_time", timeInLevel);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_48;
		L_48 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_2 = L_48;
		String_t* L_49;
		L_49 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_2), NULL);
		String_t* L_50;
		L_50 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_49, _stringLiteral9AC6DD7957C107D80F8FA476DBEF880D93A2BB0E, NULL);
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_51 = V_1;
		float L_52 = L_51->___timeInLevel_9;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(L_50, L_52, NULL);
		goto IL_01f8;
	}

IL_01d6:
	{
		// PlayerPrefs.SetFloat(SceneManager.GetActiveScene().name + "_time", timeInLevel);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_53;
		L_53 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_2 = L_53;
		String_t* L_54;
		L_54 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_2), NULL);
		String_t* L_55;
		L_55 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_54, _stringLiteral9AC6DD7957C107D80F8FA476DBEF880D93A2BB0E, NULL);
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_56 = V_1;
		float L_57 = L_56->___timeInLevel_9;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(L_55, L_57, NULL);
	}

IL_01f8:
	{
		// SceneManager.LoadScene(levelToLoad);
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_58 = V_1;
		String_t* L_59 = L_58->___levelToLoad_8;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_59, NULL);
		// }
		return (bool)0;
	}
}
// System.Object LevelManager/<EndLevelCo>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEndLevelCoU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m170CA563CAC085E4ED0ED24A183C5F5F47C9D72D (U3CEndLevelCoU3Ed__12_t004D52E601847CCDE4BD6364F908F40E4C7DA052* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LevelManager/<EndLevelCo>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndLevelCoU3Ed__12_System_Collections_IEnumerator_Reset_m9CA0A2EFBFF3256CB6C7E23E65E33DC574F0D246 (U3CEndLevelCoU3Ed__12_t004D52E601847CCDE4BD6364F908F40E4C7DA052* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEndLevelCoU3Ed__12_System_Collections_IEnumerator_Reset_m9CA0A2EFBFF3256CB6C7E23E65E33DC574F0D246_RuntimeMethod_var)));
	}
}
// System.Object LevelManager/<EndLevelCo>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEndLevelCoU3Ed__12_System_Collections_IEnumerator_get_Current_m38716BAD0976F23DEDF218A5DFA348DBFED2C575 (U3CEndLevelCoU3Ed__12_t004D52E601847CCDE4BD6364F908F40E4C7DA052* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void LineCave::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineCave_OnTriggerEnter2D_m7DFBB527C1D3BAA1F5F0EA690766419C2882B8C8 (LineCave_t9B2A61C883B0223A9213D51AFE10D5CF4A7C0748* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.CompareTag("Player"))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_0042;
		}
	}
	{
		// if (!incave)
		bool L_2 = __this->___incave_4;
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		// CameraController.instance.minHeight = -13.2f;
		CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* L_3 = ((CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_StaticFields*)il2cpp_codegen_static_fields_for(CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_il2cpp_TypeInfo_var))->___instance_4;
		L_3->___minHeight_8 = (-13.1999998f);
		// incave = true;
		__this->___incave_4 = (bool)1;
		return;
	}

IL_002c:
	{
		// CameraController.instance.minHeight = -0.5f;
		CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5* L_4 = ((CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_StaticFields*)il2cpp_codegen_static_fields_for(CameraController_tDC4FF0FA10418272A26E5E7539156F4F4A98E8C5_il2cpp_TypeInfo_var))->___instance_4;
		L_4->___minHeight_8 = (-0.5f);
		// incave = false;
		__this->___incave_4 = (bool)0;
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void LineCave::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineCave__ctor_m07B8226FA3E2557531D00A1E71A8B8B4B36FE7EF (LineCave_t9B2A61C883B0223A9213D51AFE10D5CF4A7C0748* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LSCameraController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSCameraController_Start_m995990B97E76C1B717CE389874E15AD6BD1B404B (LSCameraController_t5896A02FED50CCB1D60CCB5E261D014357E70029* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LSCameraController::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSCameraController_LateUpdate_mC6EE863D7BE9A3098AF6B80A2A3F34F517A66DB6 (LSCameraController_t5896A02FED50CCB1D60CCB5E261D014357E70029* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float xPos = Mathf.Clamp(target.position.x, minPos.x, maxPos.x);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___minPos_4);
		float L_4 = L_3->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___maxPos_5);
		float L_6 = L_5->___x_0;
		float L_7;
		L_7 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_2, L_4, L_6, NULL);
		V_0 = L_7;
		// float yPos = Mathf.Clamp(target.position.y, minPos.y, maxPos.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___target_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_11 = (&__this->___minPos_4);
		float L_12 = L_11->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___maxPos_5);
		float L_14 = L_13->___y_1;
		float L_15;
		L_15 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_10, L_12, L_14, NULL);
		V_1 = L_15;
		// transform.position = new Vector3(xPos, yPos, transform.position.z);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_17 = V_0;
		float L_18 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21 = L_20.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), L_17, L_18, L_21, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_16, L_22, NULL);
		// }
		return;
	}
}
// System.Void LSCameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSCameraController__ctor_m0BC55F425CCEBEED7707AFF778C7979563E85CDB (LSCameraController_t5896A02FED50CCB1D60CCB5E261D014357E70029* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LSManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSManager_Start_m40C09D4F4A1A2851CAEF4FA0B373FDB3E202C150 (LSManager_t9F2EEE70BECC88CC79FDAA50B3877099CF361A3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisMapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2_mC32351DB64D5488686173E7BD6D61767FDEB1AA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF1CD87FDFAC87AC835B1D3D847F56D3E6E59F66);
		s_Il2CppMethodInitialized = true;
	}
	MapPointU5BU5D_t84BCF9FA2C4A6A22FE730A04BA0CAF4F4BAC1917* V_0 = NULL;
	int32_t V_1 = 0;
	MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* V_2 = NULL;
	{
		// allPoints = FindObjectsOfType<MapPoint>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		MapPointU5BU5D_t84BCF9FA2C4A6A22FE730A04BA0CAF4F4BAC1917* L_0;
		L_0 = Object_FindObjectsOfType_TisMapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2_mC32351DB64D5488686173E7BD6D61767FDEB1AA3(Object_FindObjectsOfType_TisMapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2_mC32351DB64D5488686173E7BD6D61767FDEB1AA3_RuntimeMethod_var);
		__this->___allPoints_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___allPoints_5), (void*)L_0);
		// if(PlayerPrefs.HasKey("CurrentLevel"))
		bool L_1;
		L_1 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(_stringLiteralCF1CD87FDFAC87AC835B1D3D847F56D3E6E59F66, NULL);
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		// foreach(MapPoint point in allPoints)
		MapPointU5BU5D_t84BCF9FA2C4A6A22FE730A04BA0CAF4F4BAC1917* L_2 = __this->___allPoints_5;
		V_0 = L_2;
		V_1 = 0;
		goto IL_0068;
	}

IL_0022:
	{
		// foreach(MapPoint point in allPoints)
		MapPointU5BU5D_t84BCF9FA2C4A6A22FE730A04BA0CAF4F4BAC1917* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if(point.levelToLoad == PlayerPrefs.GetString("CurrentLevel"))
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_7 = V_2;
		String_t* L_8 = L_7->___levelToLoad_10;
		String_t* L_9;
		L_9 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteralCF1CD87FDFAC87AC835B1D3D847F56D3E6E59F66, NULL);
		bool L_10;
		L_10 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0064;
		}
	}
	{
		// thePlayer.transform.position = point.transform.position;
		LSPlayer_tAEB18044524E230E4CF14FCC187F3CCF7E18BFA3* L_11 = __this->___thePlayer_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_13 = V_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_15, NULL);
		// thePlayer.currentPoint = point;
		LSPlayer_tAEB18044524E230E4CF14FCC187F3CCF7E18BFA3* L_16 = __this->___thePlayer_4;
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_17 = V_2;
		L_16->___currentPoint_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_16->___currentPoint_4), (void*)L_17);
	}

IL_0064:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0068:
	{
		// foreach(MapPoint point in allPoints)
		int32_t L_19 = V_1;
		MapPointU5BU5D_t84BCF9FA2C4A6A22FE730A04BA0CAF4F4BAC1917* L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length)))))
		{
			goto IL_0022;
		}
	}

IL_006e:
	{
		// }
		return;
	}
}
// System.Void LSManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSManager_Update_m8AD7479762194D84C284A335402B49B0FC1046FD (LSManager_t9F2EEE70BECC88CC79FDAA50B3877099CF361A3A* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LSManager::LoadLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSManager_LoadLevel_mADB001BAD6F3D0584E2DC2780E55D96E7CDF9534 (LSManager_t9F2EEE70BECC88CC79FDAA50B3877099CF361A3A* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(LoadLevelCo());
		RuntimeObject* L_0;
		L_0 = LSManager_LoadLevelCo_mB3FD43EA92891F38C9A235F4545663331068A885(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LSManager::LoadLevelCo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LSManager_LoadLevelCo_mB3FD43EA92891F38C9A235F4545663331068A885 (LSManager_t9F2EEE70BECC88CC79FDAA50B3877099CF361A3A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadLevelCoU3Ed__6_t2D197BF7525B579BF73444C4808219846B74222D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadLevelCoU3Ed__6_t2D197BF7525B579BF73444C4808219846B74222D* L_0 = (U3CLoadLevelCoU3Ed__6_t2D197BF7525B579BF73444C4808219846B74222D*)il2cpp_codegen_object_new(U3CLoadLevelCoU3Ed__6_t2D197BF7525B579BF73444C4808219846B74222D_il2cpp_TypeInfo_var);
		U3CLoadLevelCoU3Ed__6__ctor_m1883696AC1EC59901BC8569F9A73EA8FB85F1429(L_0, 0, NULL);
		U3CLoadLevelCoU3Ed__6_t2D197BF7525B579BF73444C4808219846B74222D* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void LSManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSManager__ctor_mEF3D0AFA026956DAF64DED00409F9177D44D088F (LSManager_t9F2EEE70BECC88CC79FDAA50B3877099CF361A3A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LSManager/<LoadLevelCo>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadLevelCoU3Ed__6__ctor_m1883696AC1EC59901BC8569F9A73EA8FB85F1429 (U3CLoadLevelCoU3Ed__6_t2D197BF7525B579BF73444C4808219846B74222D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void LSManager/<LoadLevelCo>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadLevelCoU3Ed__6_System_IDisposable_Dispose_mF3385353BD197EAE44D757A3DFD47EAF550E4B48 (U3CLoadLevelCoU3Ed__6_t2D197BF7525B579BF73444C4808219846B74222D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean LSManager/<LoadLevelCo>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadLevelCoU3Ed__6_MoveNext_mC27B9E1C8604490330DC28F75308E551ACA53124 (U3CLoadLevelCoU3Ed__6_t2D197BF7525B579BF73444C4808219846B74222D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LSManager_t9F2EEE70BECC88CC79FDAA50B3877099CF361A3A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		LSManager_t9F2EEE70BECC88CC79FDAA50B3877099CF361A3A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AudioManager.instance.PlaySFX(4);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_4 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F(L_4, 4, NULL);
		// LSUIController.instance.FadeToBlack();
		LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB* L_5 = ((LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB_StaticFields*)il2cpp_codegen_static_fields_for(LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB_il2cpp_TypeInfo_var))->___instance_4;
		LSUIController_FadeToBlack_m1D81AFCA5ED09E56A7B325E6504F115DC31C9FE3(L_5, NULL);
		// yield return new WaitForSeconds((1f / LSUIController.instance.fadeSpeed) + .25f);
		LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB* L_6 = ((LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB_StaticFields*)il2cpp_codegen_static_fields_for(LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB_il2cpp_TypeInfo_var))->___instance_4;
		float L_7 = L_6->___fadeSpeed_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, ((float)il2cpp_codegen_add(((float)((1.0f)/L_7)), (0.25f))), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_005d:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadScene(thePlayer.currentPoint.levelToLoad);
		LSManager_t9F2EEE70BECC88CC79FDAA50B3877099CF361A3A* L_9 = V_1;
		LSPlayer_tAEB18044524E230E4CF14FCC187F3CCF7E18BFA3* L_10 = L_9->___thePlayer_4;
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_11 = L_10->___currentPoint_4;
		String_t* L_12 = L_11->___levelToLoad_10;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_12, NULL);
		// }
		return (bool)0;
	}
}
// System.Object LSManager/<LoadLevelCo>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadLevelCoU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD0ED345A9FF7A85D90527C7EFA206B1B4D766E12 (U3CLoadLevelCoU3Ed__6_t2D197BF7525B579BF73444C4808219846B74222D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void LSManager/<LoadLevelCo>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadLevelCoU3Ed__6_System_Collections_IEnumerator_Reset_m90AF7D7B955E603F62EE8FD2175A7E8101CAC942 (U3CLoadLevelCoU3Ed__6_t2D197BF7525B579BF73444C4808219846B74222D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadLevelCoU3Ed__6_System_Collections_IEnumerator_Reset_m90AF7D7B955E603F62EE8FD2175A7E8101CAC942_RuntimeMethod_var)));
	}
}
// System.Object LSManager/<LoadLevelCo>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CLoadLevelCoU3Ed__6_System_Collections_IEnumerator_get_Current_m2459B315D3FA0F3024A3A03FD851D59E8C8DC246 (U3CLoadLevelCoU3Ed__6_t2D197BF7525B579BF73444C4808219846B74222D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void LSPauseMenu::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSPauseMenu_Awake_m21442289B6602160305C2C9850A90A7CF576C460 (LSPauseMenu_t97451F1377EBF387FC7B8C49724F274E09501FAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LSPauseMenu_t97451F1377EBF387FC7B8C49724F274E09501FAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((LSPauseMenu_t97451F1377EBF387FC7B8C49724F274E09501FAB_StaticFields*)il2cpp_codegen_static_fields_for(LSPauseMenu_t97451F1377EBF387FC7B8C49724F274E09501FAB_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((LSPauseMenu_t97451F1377EBF387FC7B8C49724F274E09501FAB_StaticFields*)il2cpp_codegen_static_fields_for(LSPauseMenu_t97451F1377EBF387FC7B8C49724F274E09501FAB_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void LSPauseMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSPauseMenu_Start_m32F95398891E3282394CAE13712C608AD70D11AA (LSPauseMenu_t97451F1377EBF387FC7B8C49724F274E09501FAB* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LSPauseMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSPauseMenu_Update_mC1D33CE2A570D2E8AF514F279FAD8CAF6FACBF3B (LSPauseMenu_t97451F1377EBF387FC7B8C49724F274E09501FAB* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// PauseUnpause();
		LSPauseMenu_PauseUnpause_m57A8EA9B3352E0B7F2C285057F2F60A966FD0B12(__this, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void LSPauseMenu::PauseUnpause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSPauseMenu_PauseUnpause_m57A8EA9B3352E0B7F2C285057F2F60A966FD0B12 (LSPauseMenu_t97451F1377EBF387FC7B8C49724F274E09501FAB* __this, const RuntimeMethod* method) 
{
	{
		// if (isPaused)
		bool L_0 = __this->___isPaused_8;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// isPaused = false;
		__this->___isPaused_8 = (bool)0;
		// pauseScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___pauseScreen_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		return;
	}

IL_0026:
	{
		// isPaused = true;
		__this->___isPaused_8 = (bool)1;
		// pauseScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___pauseScreen_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// }
		return;
	}
}
// System.Void LSPauseMenu::MainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSPauseMenu_MainMenu_m936708439FB43F971301A67D34D5F70D5F778A95 (LSPauseMenu_t97451F1377EBF387FC7B8C49724F274E09501FAB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(mainMenu);
		String_t* L_0 = __this->___mainMenu_6;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_0, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// }
		return;
	}
}
// System.Void LSPauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSPauseMenu__ctor_m5D5768675CE905727D2EE4A91D934875C69A50EF (LSPauseMenu_t97451F1377EBF387FC7B8C49724F274E09501FAB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LSPlayer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSPlayer_Start_m8A5D975ACB2C6918080F1D1BC63AEBCF8D835172 (LSPlayer_tAEB18044524E230E4CF14FCC187F3CCF7E18BFA3* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void LSPlayer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSPlayer_Update_m426531259C5B5C0D68B04C1CA459AC5F18197316 (LSPlayer_tAEB18044524E230E4CF14FCC187F3CCF7E18BFA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position = Vector3.MoveTowards(transform.position, currentPoint.transform.position, moveSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_3 = __this->___currentPoint_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = __this->___moveSpeed_5;
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(L_2, L_5, ((float)il2cpp_codegen_multiply(L_6, L_7)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_8, NULL);
		// if (Vector3.Distance(transform.position, currentPoint.transform.position) < .1f && !levelLoading)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_11 = __this->___currentPoint_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		float L_14;
		L_14 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_10, L_13, NULL);
		if ((!(((float)L_14) < ((float)(0.100000001f)))))
		{
			goto IL_019f;
		}
	}
	{
		bool L_15 = __this->___levelLoading_6;
		if (L_15)
		{
			goto IL_019f;
		}
	}
	{
		// if (Input.GetAxisRaw("Horizontal") > .5f)
		float L_16;
		L_16 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((!(((float)L_16) > ((float)(0.5f)))))
		{
			goto IL_00a1;
		}
	}
	{
		// if (currentPoint.right != null)
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_17 = __this->___currentPoint_4;
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_18 = L_17->___right_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_00a1;
		}
	}
	{
		// SetNextPoint(currentPoint.right);
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_20 = __this->___currentPoint_4;
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_21 = L_20->___right_5;
		LSPlayer_SetNextPoint_m895A10BAD54548A35615C080C25FCE6AE3A1BC8B(__this, L_21, NULL);
	}

IL_00a1:
	{
		// if (Input.GetAxisRaw("Horizontal") < -.5f)
		float L_22;
		L_22 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		if ((!(((float)L_22) < ((float)(-0.5f)))))
		{
			goto IL_00d6;
		}
	}
	{
		// if (currentPoint.left != null)
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_23 = __this->___currentPoint_4;
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_24 = L_23->___left_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00d6;
		}
	}
	{
		// SetNextPoint(currentPoint.left);
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_26 = __this->___currentPoint_4;
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_27 = L_26->___left_7;
		LSPlayer_SetNextPoint_m895A10BAD54548A35615C080C25FCE6AE3A1BC8B(__this, L_27, NULL);
	}

IL_00d6:
	{
		// if (Input.GetAxisRaw("Vertical") > .5f)
		float L_28;
		L_28 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		if ((!(((float)L_28) > ((float)(0.5f)))))
		{
			goto IL_010b;
		}
	}
	{
		// if (currentPoint.up != null)
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_29 = __this->___currentPoint_4;
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_30 = L_29->___up_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_30, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_31)
		{
			goto IL_010b;
		}
	}
	{
		// SetNextPoint(currentPoint.up);
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_32 = __this->___currentPoint_4;
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_33 = L_32->___up_4;
		LSPlayer_SetNextPoint_m895A10BAD54548A35615C080C25FCE6AE3A1BC8B(__this, L_33, NULL);
	}

IL_010b:
	{
		// if (Input.GetAxisRaw("Vertical") < -.5f)
		float L_34;
		L_34 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		if ((!(((float)L_34) < ((float)(-0.5f)))))
		{
			goto IL_0140;
		}
	}
	{
		// if (currentPoint.down != null)
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_35 = __this->___currentPoint_4;
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_36 = L_35->___down_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_37)
		{
			goto IL_0140;
		}
	}
	{
		// SetNextPoint(currentPoint.down);
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_38 = __this->___currentPoint_4;
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_39 = L_38->___down_6;
		LSPlayer_SetNextPoint_m895A10BAD54548A35615C080C25FCE6AE3A1BC8B(__this, L_39, NULL);
	}

IL_0140:
	{
		// if(currentPoint.isLevel && currentPoint.levelToLoad != "" && !currentPoint.isLocked)
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_40 = __this->___currentPoint_4;
		bool L_41 = L_40->___isLevel_8;
		if (!L_41)
		{
			goto IL_019f;
		}
	}
	{
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_42 = __this->___currentPoint_4;
		String_t* L_43 = L_42->___levelToLoad_10;
		bool L_44;
		L_44 = String_op_Inequality_m0FBE5AC4931D312E5B347BAA603755676E6DA2FE(L_43, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_44)
		{
			goto IL_019f;
		}
	}
	{
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_45 = __this->___currentPoint_4;
		bool L_46 = L_45->___isLocked_9;
		if (L_46)
		{
			goto IL_019f;
		}
	}
	{
		// LSUIController.instance.ShowInfo(currentPoint);
		LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB* L_47 = ((LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB_StaticFields*)il2cpp_codegen_static_fields_for(LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB_il2cpp_TypeInfo_var))->___instance_4;
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_48 = __this->___currentPoint_4;
		LSUIController_ShowInfo_m87D4D27C8B550B64BEF488F7D31BF977BC8D4D42(L_47, L_48, NULL);
		// if(Input.GetButtonDown("Jump"))
		bool L_49;
		L_49 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_49)
		{
			goto IL_019f;
		}
	}
	{
		// levelLoading = true;
		__this->___levelLoading_6 = (bool)1;
		// theManager.LoadLevel();
		LSManager_t9F2EEE70BECC88CC79FDAA50B3877099CF361A3A* L_50 = __this->___theManager_7;
		LSManager_LoadLevel_mADB001BAD6F3D0584E2DC2780E55D96E7CDF9534(L_50, NULL);
	}

IL_019f:
	{
		// }
		return;
	}
}
// System.Void LSPlayer::SetNextPoint(MapPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSPlayer_SetNextPoint_m895A10BAD54548A35615C080C25FCE6AE3A1BC8B (LSPlayer_tAEB18044524E230E4CF14FCC187F3CCF7E18BFA3* __this, MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* ___nextPoint0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentPoint = nextPoint;
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_0 = ___nextPoint0;
		__this->___currentPoint_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentPoint_4), (void*)L_0);
		// LSUIController.instance.HideInfo();
		LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB* L_1 = ((LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB_StaticFields*)il2cpp_codegen_static_fields_for(LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB_il2cpp_TypeInfo_var))->___instance_4;
		LSUIController_HideInfo_mFEF36CFF7282F614F99BFB2D90BE35B71E80B876(L_1, NULL);
		// AudioManager.instance.PlaySFX(5);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_2 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F(L_2, 5, NULL);
		// }
		return;
	}
}
// System.Void LSPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSPlayer__ctor_m191E5FF86865A662890D3EB544C7CFAA20D8FE4B (LSPlayer_tAEB18044524E230E4CF14FCC187F3CCF7E18BFA3* __this, const RuntimeMethod* method) 
{
	{
		// public float moveSpeed = 10f;
		__this->___moveSpeed_5 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LSUIController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSUIController_Awake_m926C1C0D3C7E5AE885F22CED6AC4F0A594593E3E (LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB_StaticFields*)il2cpp_codegen_static_fields_for(LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB_StaticFields*)il2cpp_codegen_static_fields_for(LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void LSUIController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSUIController_Start_mDAF672CCEACCDA727F845CF4566DE77F144A0822 (LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB* __this, const RuntimeMethod* method) 
{
	{
		// FadeFromBlack();
		LSUIController_FadeFromBlack_m66BB069D31BE000E26FEC2C12DC50FD0D899C95E(__this, NULL);
		// }
		return;
	}
}
// System.Void LSUIController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSUIController_Update_m98D44EA5E45D4E3261B68401900C82C207737946 (LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB* __this, const RuntimeMethod* method) 
{
	{
		// if (shouldFadeToBlack)
		bool L_0 = __this->___shouldFadeToBlack_7;
		if (!L_0)
		{
			goto IL_008f;
		}
	}
	{
		// fadeScreen.color = new Color(fadeScreen.color.r, fadeScreen.color.g, fadeScreen.color.b, Mathf.MoveTowards(fadeScreen.color.a, 1f, fadeSpeed * Time.deltaTime));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___fadeScreen_5;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___fadeScreen_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		float L_4 = L_3.___r_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___fadeScreen_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		float L_7 = L_6.___g_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___fadeScreen_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		float L_10 = L_9.___b_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___fadeScreen_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_11);
		float L_13 = L_12.___a_3;
		float L_14 = __this->___fadeSpeed_6;
		float L_15;
		L_15 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_16;
		L_16 = Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline(L_13, (1.0f), ((float)il2cpp_codegen_multiply(L_14, L_15)), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_17), L_4, L_7, L_10, L_16, /*hidden argument*/NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_17);
		// if (fadeScreen.color.a == 1f)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___fadeScreen_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_18);
		float L_20 = L_19.___a_3;
		if ((!(((float)L_20) == ((float)(1.0f)))))
		{
			goto IL_008f;
		}
	}
	{
		// shouldFadeToBlack = false;
		__this->___shouldFadeToBlack_7 = (bool)0;
	}

IL_008f:
	{
		// if (shouldFadeFromBlack)
		bool L_21 = __this->___shouldFadeFromBlack_8;
		if (!L_21)
		{
			goto IL_011e;
		}
	}
	{
		// fadeScreen.color = new Color(fadeScreen.color.r, fadeScreen.color.g, fadeScreen.color.b, Mathf.MoveTowards(fadeScreen.color.a, 0f, fadeSpeed * Time.deltaTime));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = __this->___fadeScreen_5;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_23 = __this->___fadeScreen_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_23);
		float L_25 = L_24.___r_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___fadeScreen_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_26);
		float L_28 = L_27.___g_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___fadeScreen_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		L_30 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_29);
		float L_31 = L_30.___b_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32 = __this->___fadeScreen_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
		L_33 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_32);
		float L_34 = L_33.___a_3;
		float L_35 = __this->___fadeSpeed_6;
		float L_36;
		L_36 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_37;
		L_37 = Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline(L_34, (0.0f), ((float)il2cpp_codegen_multiply(L_35, L_36)), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		memset((&L_38), 0, sizeof(L_38));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_38), L_25, L_28, L_31, L_37, /*hidden argument*/NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_38);
		// if (fadeScreen.color.a == 0f)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_39 = __this->___fadeScreen_5;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_39);
		float L_41 = L_40.___a_3;
		if ((!(((float)L_41) == ((float)(0.0f)))))
		{
			goto IL_011e;
		}
	}
	{
		// shouldFadeFromBlack = false;
		__this->___shouldFadeFromBlack_8 = (bool)0;
	}

IL_011e:
	{
		// }
		return;
	}
}
// System.Void LSUIController::FadeToBlack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSUIController_FadeToBlack_m1D81AFCA5ED09E56A7B325E6504F115DC31C9FE3 (LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB* __this, const RuntimeMethod* method) 
{
	{
		// shouldFadeToBlack = true;
		__this->___shouldFadeToBlack_7 = (bool)1;
		// shouldFadeFromBlack = false;
		__this->___shouldFadeFromBlack_8 = (bool)0;
		// }
		return;
	}
}
// System.Void LSUIController::FadeFromBlack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSUIController_FadeFromBlack_m66BB069D31BE000E26FEC2C12DC50FD0D899C95E (LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB* __this, const RuntimeMethod* method) 
{
	{
		// shouldFadeFromBlack = true;
		__this->___shouldFadeFromBlack_8 = (bool)1;
		// shouldFadeToBlack = false;
		__this->___shouldFadeToBlack_7 = (bool)0;
		// }
		return;
	}
}
// System.Void LSUIController::ShowInfo(MapPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSUIController_ShowInfo_m87D4D27C8B550B64BEF488F7D31BF977BC8D4D42 (LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB* __this, MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* ___levelInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral075488768B36FC6B56A29920D44014060332E6C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08ED18A68FEE41D91B879B79D73CA5E656097163);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19E432A47FC398AAE408E0B29A2F5DB4412BE993);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7545646B000247B00D875790E3ED73EB1267360);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC232500C54DD6719F837074E25605E147D9D106E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		s_Il2CppMethodInitialized = true;
	}
	{
		// levelName.text = levelInfo.levelName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___levelName_10;
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_1 = ___levelInfo0;
		String_t* L_2 = L_1->___levelName_12;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// gemsFound.text = "FOUND: " + levelInfo.gemsCollected;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___gemsFound_11;
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_4 = ___levelInfo0;
		int32_t* L_5 = (&L_4->___gemsCollected_13);
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_5, NULL);
		String_t* L_7;
		L_7 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralC232500C54DD6719F837074E25605E147D9D106E, L_6, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_7);
		// gemsTarget.text = "IN LEVEL: " + levelInfo.totalGems;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___gemsTarget_12;
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_9 = ___levelInfo0;
		int32_t* L_10 = (&L_9->___totalGems_14);
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral08ED18A68FEE41D91B879B79D73CA5E656097163, L_11, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_12);
		// timeTarget.text = "TARGET: " + levelInfo.targetTime + "s";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___timeTarget_14;
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_14 = ___levelInfo0;
		float* L_15 = (&L_14->___targetTime_16);
		String_t* L_16;
		L_16 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972(L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralB7545646B000247B00D875790E3ED73EB1267360, L_16, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_17);
		// if(levelInfo.bestTime == 0)
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_18 = ___levelInfo0;
		float L_19 = L_18->___bestTime_15;
		if ((!(((float)L_19) == ((float)(0.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		// bestTime.text = "BEST: ----";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___bestTime_13;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, _stringLiteral19E432A47FC398AAE408E0B29A2F5DB4412BE993);
		goto IL_00bf;
	}

IL_0095:
	{
		// bestTime.text = "BEST: " + levelInfo.bestTime.ToString("F2") + "s";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = __this->___bestTime_13;
		MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* L_22 = ___levelInfo0;
		float* L_23 = (&L_22->___bestTime_15);
		String_t* L_24;
		L_24 = Single_ToString_m3F2C4433B6ADFA5ED8E3F14ED19CD23014E5179D(L_23, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		String_t* L_25;
		L_25 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral075488768B36FC6B56A29920D44014060332E6C1, L_24, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_25);
	}

IL_00bf:
	{
		// levelInfoPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___levelInfoPanel_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void LSUIController::HideInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSUIController_HideInfo_mFEF36CFF7282F614F99BFB2D90BE35B71E80B876 (LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB* __this, const RuntimeMethod* method) 
{
	{
		// levelInfoPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___levelInfoPanel_9;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LSUIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LSUIController__ctor_m71D60FE75EA7F87B8577CC897CD44C85DFC2D63D (LSUIController_t6E5A841C9E6B65A092C53C9643AC7ACD1EE2EDFB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MainMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Start_m1729BDE6D096D9F4C92DBE72B392BA89E9A9ECAD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FF36436D1CFC3CD12BEC10C304D07D7C3784A3A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.HasKey(startScene + "_unlocked"))
		String_t* L_0 = __this->___startScene_4;
		String_t* L_1;
		L_1 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_0, _stringLiteral9FF36436D1CFC3CD12BEC10C304D07D7C3784A3A, NULL);
		bool L_2;
		L_2 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_1, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		// continueButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___continueButton_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		return;
	}

IL_0024:
	{
		// continueButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___continueButton_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_Update_m6D9E8EB1A42CC68CFAA865B9CF18FAEB81595C5C (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MainMenu::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_StartGame_m8FB75C50790940C87A983517C4C08F4159A8A7D0 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(startScene);
		String_t* L_0 = __this->___startScene_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_0, NULL);
		// PlayerPrefs.DeleteAll();
		PlayerPrefs_DeleteAll_mBB63C28A69EA934DC7DF12336F8D5341BF6CA521(NULL);
		// }
		return;
	}
}
// System.Void MainMenu::ContinueGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_ContinueGame_m12AE4026B81E430C5AF95B9C07E007E6D7B30691 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(continueScene);
		String_t* L_0 = __this->___continueScene_5;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_0, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_QuitGame_mBF761274C14BD7341FE8C32A538D28343B63EDC4 (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4525DEC730EDDA1A14353AAA2E40857BACC6F3A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// Debug.Log("Quitting Game");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralB4525DEC730EDDA1A14353AAA2E40857BACC6F3A, NULL);
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m8209CEC1D907C87A96D777961F4D0536E6E948DD (MainMenu_t5A8A8E4906FD2B24D16567A6BFFDAA6B91DD12DF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MapPoint::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapPoint_Start_m125B3EB81DEB1AFDF36BDFFC36B1D65A8D13A762 (MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9AC6DD7957C107D80F8FA476DBEF880D93A2BB0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CE441749195C391435BE1B9FD62C1208F0551BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FF36436D1CFC3CD12BEC10C304D07D7C3784A3A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(isLevel && levelToLoad != null)
		bool L_0 = __this->___isLevel_8;
		if (!L_0)
		{
			goto IL_011a;
		}
	}
	{
		String_t* L_1 = __this->___levelToLoad_10;
		if (!L_1)
		{
			goto IL_011a;
		}
	}
	{
		// if(PlayerPrefs.HasKey(levelToLoad + "_gems"))
		String_t* L_2 = __this->___levelToLoad_10;
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_2, _stringLiteral9CE441749195C391435BE1B9FD62C1208F0551BB, NULL);
		bool L_4;
		L_4 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_3, NULL);
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		// gemsCollected = PlayerPrefs.GetInt(levelToLoad + "_gems");
		String_t* L_5 = __this->___levelToLoad_10;
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_5, _stringLiteral9CE441749195C391435BE1B9FD62C1208F0551BB, NULL);
		int32_t L_7;
		L_7 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_6, NULL);
		__this->___gemsCollected_13 = L_7;
	}

IL_0048:
	{
		// if(PlayerPrefs.HasKey(levelToLoad + "_time"))
		String_t* L_8 = __this->___levelToLoad_10;
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_8, _stringLiteral9AC6DD7957C107D80F8FA476DBEF880D93A2BB0E, NULL);
		bool L_10;
		L_10 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_9, NULL);
		if (!L_10)
		{
			goto IL_007a;
		}
	}
	{
		// bestTime = PlayerPrefs.GetFloat(levelToLoad + "_time");
		String_t* L_11 = __this->___levelToLoad_10;
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_11, _stringLiteral9AC6DD7957C107D80F8FA476DBEF880D93A2BB0E, NULL);
		float L_13;
		L_13 = PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896(L_12, NULL);
		__this->___bestTime_15 = L_13;
	}

IL_007a:
	{
		// if(gemsCollected >= totalGems)
		int32_t L_14 = __this->___gemsCollected_13;
		int32_t L_15 = __this->___totalGems_14;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0094;
		}
	}
	{
		// gemBadge.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___gemBadge_17;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)1, NULL);
	}

IL_0094:
	{
		// if(bestTime <= targetTime && bestTime != 0)
		float L_17 = __this->___bestTime_15;
		float L_18 = __this->___targetTime_16;
		if ((!(((float)L_17) <= ((float)L_18))))
		{
			goto IL_00bb;
		}
	}
	{
		float L_19 = __this->___bestTime_15;
		if ((((float)L_19) == ((float)(0.0f))))
		{
			goto IL_00bb;
		}
	}
	{
		// timeBadge.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___timeBadge_18;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)1, NULL);
	}

IL_00bb:
	{
		// isLocked = true;
		__this->___isLocked_9 = (bool)1;
		// if(levelToCheck != null)
		String_t* L_21 = __this->___levelToCheck_11;
		if (!L_21)
		{
			goto IL_0100;
		}
	}
	{
		// if(PlayerPrefs.HasKey(levelToCheck + "_unlocked"))
		String_t* L_22 = __this->___levelToCheck_11;
		String_t* L_23;
		L_23 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_22, _stringLiteral9FF36436D1CFC3CD12BEC10C304D07D7C3784A3A, NULL);
		bool L_24;
		L_24 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_23, NULL);
		if (!L_24)
		{
			goto IL_0100;
		}
	}
	{
		// if(PlayerPrefs.GetInt(levelToCheck + "_unlocked") == 1)
		String_t* L_25 = __this->___levelToCheck_11;
		String_t* L_26;
		L_26 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_25, _stringLiteral9FF36436D1CFC3CD12BEC10C304D07D7C3784A3A, NULL);
		int32_t L_27;
		L_27 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_26, NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)1))))
		{
			goto IL_0100;
		}
	}
	{
		// isLocked = false;
		__this->___isLocked_9 = (bool)0;
	}

IL_0100:
	{
		// if(levelToLoad == levelToCheck)
		String_t* L_28 = __this->___levelToLoad_10;
		String_t* L_29 = __this->___levelToCheck_11;
		bool L_30;
		L_30 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_28, L_29, NULL);
		if (!L_30)
		{
			goto IL_011a;
		}
	}
	{
		// isLocked = false;
		__this->___isLocked_9 = (bool)0;
	}

IL_011a:
	{
		// }
		return;
	}
}
// System.Void MapPoint::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapPoint_Update_m1853CF31C7B599125C08A5F84C8337375F25563C (MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MapPoint::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MapPoint__ctor_m729462A00D3A3BEE6F88940857D509ADB0BB9152 (MapPoint_t983C52CF88301C0105ABE8BFF14564F9E21A5AE2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MovingPlatform::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatform_Start_m9914EE0A6A01DDDC4EB8217C5B9A228C0C99AD93 (MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void MovingPlatform::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatform_Update_mB9FF010491E49D66F773CD25A878874D10ECDF58 (MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* __this, const RuntimeMethod* method) 
{
	{
		// platform.position = Vector3.MoveTowards(platform.position, points[currentPoint].position, moveSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___platform_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___platform_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_3 = __this->___points_4;
		int32_t L_4 = __this->___currentPoint_6;
		int32_t L_5 = L_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = __this->___moveSpeed_5;
		float L_9;
		L_9 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(L_2, L_7, ((float)il2cpp_codegen_multiply(L_8, L_9)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_10, NULL);
		// if(Vector3.Distance(platform.position, points[currentPoint].position) <.05f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___platform_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_13 = __this->___points_4;
		int32_t L_14 = __this->___currentPoint_6;
		int32_t L_15 = L_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = (L_13)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18;
		L_18 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_12, L_17, NULL);
		if ((!(((float)L_18) < ((float)(0.0500000007f)))))
		{
			goto IL_0087;
		}
	}
	{
		// currentPoint++;
		int32_t L_19 = __this->___currentPoint_6;
		__this->___currentPoint_6 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		// if(currentPoint >= points.Length)
		int32_t L_20 = __this->___currentPoint_6;
		TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* L_21 = __this->___points_4;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0087;
		}
	}
	{
		// currentPoint = 0;
		__this->___currentPoint_6 = 0;
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void MovingPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingPlatform__ctor_m5C990ED2F574567F2C5AF2F4F878C60899E2ADDA (MovingPlatform_tD6AB1AA7B41D2351BFDA869A3EBEA490C639D57B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void OpoSumEnnemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpoSumEnnemy_Start_mED810A40E47308F7A7784DAD8469DF82EA6369EE (OpoSumEnnemy_tACAFBB6A89F15192C62334E7A8FDF6CF5FDBD504* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theRB = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___theRB_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___theRB_8), (void*)L_0);
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_10), (void*)L_1);
		// leftPoint.parent = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___leftPoint_5;
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_2, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// rightPoint.parent = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___rightPoint_6;
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_3, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// movingRight = true;
		__this->___movingRight_7 = (bool)1;
		// moveCount = moveTime;
		float L_4 = __this->___moveTime_11;
		__this->___moveCount_13 = L_4;
		// }
		return;
	}
}
// System.Void OpoSumEnnemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpoSumEnnemy_Update_m78BC36ECFCCC0CC30D4A37AED389BB722B646EF7 (OpoSumEnnemy_tACAFBB6A89F15192C62334E7A8FDF6CF5FDBD504* __this, const RuntimeMethod* method) 
{
	{
		// if (moveCount > 0)
		float L_0 = __this->___moveCount_13;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0117;
		}
	}
	{
		// moveCount -= Time.deltaTime;
		float L_1 = __this->___moveCount_13;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___moveCount_13 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if (movingRight)
		bool L_3 = __this->___movingRight_7;
		if (!L_3)
		{
			goto IL_0087;
		}
	}
	{
		// theRB.velocity = new Vector2(moveSpeed, theRB.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___theRB_8;
		float L_5 = __this->___moveSpeed_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->___theRB_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_6, NULL);
		float L_8 = L_7.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), L_5, L_8, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_4, L_9, NULL);
		// theSR.flipX = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___theSR_9;
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_10, (bool)1, NULL);
		// if (transform.position.x > rightPoint.position.x)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___rightPoint_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		float L_16 = L_15.___x_2;
		if ((!(((float)L_13) > ((float)L_16))))
		{
			goto IL_00e3;
		}
	}
	{
		// movingRight = false;
		__this->___movingRight_7 = (bool)0;
		goto IL_00e3;
	}

IL_0087:
	{
		// theRB.velocity = new Vector2(-moveSpeed, theRB.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_17 = __this->___theRB_8;
		float L_18 = __this->___moveSpeed_4;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_19 = __this->___theRB_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		L_20 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_19, NULL);
		float L_21 = L_20.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), ((-L_18)), L_21, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_17, L_22, NULL);
		// theSR.flipX = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_23 = __this->___theSR_9;
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_23, (bool)0, NULL);
		// if (transform.position.x < leftPoint.position.x)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		float L_26 = L_25.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___leftPoint_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = L_28.___x_2;
		if ((!(((float)L_26) < ((float)L_29))))
		{
			goto IL_00e3;
		}
	}
	{
		// movingRight = true;
		__this->___movingRight_7 = (bool)1;
	}

IL_00e3:
	{
		// if (moveCount <= 0)
		float L_30 = __this->___moveCount_13;
		if ((!(((float)L_30) <= ((float)(0.0f)))))
		{
			goto IL_018b;
		}
	}
	{
		// waitCount = Random.Range(waitTime * .75f, waitTime * 1.25f);
		float L_31 = __this->___waitTime_12;
		float L_32 = __this->___waitTime_12;
		float L_33;
		L_33 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((float)il2cpp_codegen_multiply(L_31, (0.75f))), ((float)il2cpp_codegen_multiply(L_32, (1.25f))), NULL);
		__this->___waitCount_14 = L_33;
		return;
	}

IL_0117:
	{
		// else if (waitCount > 0)
		float L_34 = __this->___waitCount_14;
		if ((!(((float)L_34) > ((float)(0.0f)))))
		{
			goto IL_018b;
		}
	}
	{
		// waitCount -= Time.deltaTime;
		float L_35 = __this->___waitCount_14;
		float L_36;
		L_36 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___waitCount_14 = ((float)il2cpp_codegen_subtract(L_35, L_36));
		// theRB.velocity = new Vector2(0f, theRB.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_37 = __this->___theRB_8;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_38 = __this->___theRB_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_39;
		L_39 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_38, NULL);
		float L_40 = L_39.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		memset((&L_41), 0, sizeof(L_41));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_41), (0.0f), L_40, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_37, L_41, NULL);
		// if (waitCount <= 0)
		float L_42 = __this->___waitCount_14;
		if ((!(((float)L_42) <= ((float)(0.0f)))))
		{
			goto IL_018b;
		}
	}
	{
		// moveCount = Random.Range(moveTime * .75f, waitTime * .75f);
		float L_43 = __this->___moveTime_11;
		float L_44 = __this->___waitTime_12;
		float L_45;
		L_45 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((float)il2cpp_codegen_multiply(L_43, (0.75f))), ((float)il2cpp_codegen_multiply(L_44, (0.75f))), NULL);
		__this->___moveCount_13 = L_45;
	}

IL_018b:
	{
		// }
		return;
	}
}
// System.Void OpoSumEnnemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpoSumEnnemy__ctor_mC51DCE5AE05427175A2CDFF49914FE895FD72335 (OpoSumEnnemy_tACAFBB6A89F15192C62334E7A8FDF6CF5FDBD504* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PauseMenu::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Awake_mD17C2664126E61F76112D3C96B5A4684E0D00B66 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void PauseMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Start_m4BBF1E67B42A2E936C792E83778ADCD87DE3C80E (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PauseMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_Update_m5097E74BFD4385B73BA9EF7198886DCEC7DF9A83 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// if(Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// PauseUnpause();
		PauseMenu_PauseUnpause_m81B6DBEF9CA5821594BEE89301851F77C50F6471(__this, NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void PauseMenu::PauseUnpause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_PauseUnpause_m81B6DBEF9CA5821594BEE89301851F77C50F6471 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		// if(isPaused)
		bool L_0 = __this->___isPaused_8;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// isPaused = false;
		__this->___isPaused_8 = (bool)0;
		// pauseScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___pauseScreen_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		return;
	}

IL_0026:
	{
		// isPaused = true;
		__this->___isPaused_8 = (bool)1;
		// pauseScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___pauseScreen_7;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::LevelSelect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_LevelSelect_mB4CA56F4BCD7CB5867547E06A38CCE7276E35819 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF1CD87FDFAC87AC835B1D3D847F56D3E6E59F66);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// PlayerPrefs.SetString("CurrentLevel", SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteralCF1CD87FDFAC87AC835B1D3D847F56D3E6E59F66, L_1, NULL);
		// SceneManager.LoadScene(levelSelect);
		String_t* L_2 = __this->___levelSelect_5;
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_2, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::MainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu_MainMenu_mEB01C45B5CC2F6E8EE0A84D839C4697B00913B25 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(mainMenu);
		String_t* L_0 = __this->___mainMenu_6;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_0, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// }
		return;
	}
}
// System.Void PauseMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PauseMenu__ctor_m81B0E020DC5008DA4D414200BAAF7122B430D826 (PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Pickup::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickup_Start_m08358465309E69925EF4EFA6E6BF3D942B1742F0 (Pickup_tE353BFD6F96A556F00672AD2761272F6AAABA0B8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Pickup::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickup_Update_mAC0F0C23863194D55CA5020E9A298A9AEAF1C528 (Pickup_tE353BFD6F96A556F00672AD2761272F6AAABA0B8* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Pickup::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickup_OnTriggerEnter2D_m21C5184DF99915353626549EA1A40F4E0E119ABC (Pickup_tE353BFD6F96A556F00672AD2761272F6AAABA0B8* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.CompareTag("Player") && !isCollected)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_1)
		{
			goto IL_00e5;
		}
	}
	{
		bool L_2 = __this->___isCollected_6;
		if (L_2)
		{
			goto IL_00e5;
		}
	}
	{
		// if(isGem)
		bool L_3 = __this->___isGem_4;
		if (!L_3)
		{
			goto IL_007e;
		}
	}
	{
		// LevelManager.instance.gemsCollected++;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_4 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___instance_4;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_5 = L_4;
		int32_t L_6 = L_5->___gemsCollected_7;
		L_5->___gemsCollected_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
		// isCollected = true;
		__this->___isCollected_6 = (bool)1;
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
		// Instantiate(pickupEffect, transform.position, transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___pickupEffect_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_8, L_10, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// UIController.instance.UpdateGemCount();
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_14 = ((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___instance_4;
		UIController_UpdateGemCount_mE8FE1E6A7A960137623828A9D5764CE6290714E2(L_14, NULL);
		// AudioManager.instance.PlaySFX(6);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_15 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F(L_15, 6, NULL);
	}

IL_007e:
	{
		// if(isHeal)
		bool L_16 = __this->___isHeal_5;
		if (!L_16)
		{
			goto IL_00e5;
		}
	}
	{
		// if((PlayerHealthController.instance.currentHealth != PlayerHealthController.instance.maxHealth))
		PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* L_17 = ((PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_18 = L_17->___currentHealth_5;
		PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* L_19 = ((PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_20 = L_19->___maxHealth_6;
		if ((((int32_t)L_18) == ((int32_t)L_20)))
		{
			goto IL_00e5;
		}
	}
	{
		// PlayerHealthController.instance.HealPlayer();
		PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* L_21 = ((PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var))->___instance_4;
		PlayerHealthController_HealPlayer_m39DB339146565A3DBFB72796A8695B8F9DA9847F(L_21, NULL);
		// isCollected = true;
		__this->___isCollected_6 = (bool)1;
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_22, NULL);
		// Instantiate(pickupEffect, transform.position, transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___pickupEffect_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_24, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_26, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_23, L_25, L_27, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// AudioManager.instance.PlaySFX(7);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_29 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F(L_29, 7, NULL);
	}

IL_00e5:
	{
		// }
		return;
	}
}
// System.Void Pickup::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pickup__ctor_m35A93842B4E2401E38CF814A00D57E6A2969852E (Pickup_tE353BFD6F96A556F00672AD2761272F6AAABA0B8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Awake_m82639826DE098DC447C79B43900C5F2A630B3DC3 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void PlayerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Start_m1D83076E8B136A71051F2F02545EE04947D3A8CF (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_21 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_21), (void*)L_0);
		// theSR = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1;
		L_1 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___theSR_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___theSR_22), (void*)L_1);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_m1F4051EB5BCBCCE5EEE2E3E49B7E278C3B14EC33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30E3EA07EC73E95C9F85B6230DEC6F3F0373CA42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78DB8AA40D3B780BCB7B7076042CF600254368BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF953B1BAAE56A3E1998B6A1DC98AC472A4DAF75);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!PauseMenu.instance.isPaused && !stopInput)
		PauseMenu_t36539DEACE8377BD498A235C80769301799E1985* L_0 = ((PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_StaticFields*)il2cpp_codegen_static_fields_for(PauseMenu_t36539DEACE8377BD498A235C80769301799E1985_il2cpp_TypeInfo_var))->___instance_4;
		bool L_1 = L_0->___isPaused_8;
		if (L_1)
		{
			goto IL_0235;
		}
	}
	{
		bool L_2 = __this->___stopInput_27;
		if (L_2)
		{
			goto IL_0235;
		}
	}
	{
		// if (knockBackCounter <= 0)
		float L_3 = __this->___knockBackCounter_25;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0170;
		}
	}
	{
		// theRB.velocity = new Vector2(moveSpeed * Input.GetAxis("Horizontal"), theRB.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___theRB_6;
		float L_5 = __this->___moveSpeed_5;
		float L_6;
		L_6 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_7 = __this->___theRB_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_7, NULL);
		float L_9 = L_8.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_10), ((float)il2cpp_codegen_multiply(L_5, L_6)), L_9, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_4, L_10, NULL);
		// isGrounded = Physics2D.OverlapCircle(groundCheckPoint.position, .2f, whatIsGround);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___groundCheckPoint_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_12, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_14 = __this->___whatIsGround_11;
		int32_t L_15;
		L_15 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_16;
		L_16 = Physics2D_OverlapCircle_mD20DC99402D0E7514265AFF9E0B24041197D7D36(L_13, (0.200000003f), L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_16, NULL);
		__this->___isGrounded_9 = L_17;
		// if (isGrounded)
		bool L_18 = __this->___isGrounded_9;
		if (!L_18)
		{
			goto IL_009a;
		}
	}
	{
		// canDoubleJump = true;
		__this->___canDoubleJump_8 = (bool)1;
	}

IL_009a:
	{
		// if (Input.GetButtonDown("Jump"))
		bool L_19;
		L_19 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, NULL);
		if (!L_19)
		{
			goto IL_0123;
		}
	}
	{
		// if (isGrounded)
		bool L_20 = __this->___isGrounded_9;
		if (!L_20)
		{
			goto IL_00e2;
		}
	}
	{
		// theRB.velocity = new Vector2(theRB.velocity.x, jumpForce);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_21 = __this->___theRB_6;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_22 = __this->___theRB_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_22, NULL);
		float L_24 = L_23.___x_0;
		float L_25 = __this->___jumpForce_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		memset((&L_26), 0, sizeof(L_26));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_26), L_24, L_25, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_21, L_26, NULL);
		// AudioManager.instance.PlaySFX(10);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_27 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F(L_27, ((int32_t)10), NULL);
		goto IL_0123;
	}

IL_00e2:
	{
		// if (canDoubleJump)
		bool L_28 = __this->___canDoubleJump_8;
		if (!L_28)
		{
			goto IL_0123;
		}
	}
	{
		// theRB.velocity = new Vector2(theRB.velocity.x, jumpForce);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_29 = __this->___theRB_6;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_30 = __this->___theRB_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_30, NULL);
		float L_32 = L_31.___x_0;
		float L_33 = __this->___jumpForce_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_34), L_32, L_33, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_29, L_34, NULL);
		// canDoubleJump = false;
		__this->___canDoubleJump_8 = (bool)0;
		// AudioManager.instance.PlaySFX(10);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_35 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F(L_35, ((int32_t)10), NULL);
	}

IL_0123:
	{
		// if (theRB.velocity.x < 0)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_36 = __this->___theRB_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37;
		L_37 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_36, NULL);
		float L_38 = L_37.___x_0;
		if ((!(((float)L_38) < ((float)(0.0f)))))
		{
			goto IL_014b;
		}
	}
	{
		// theSR.flipX = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_39 = __this->___theSR_22;
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_39, (bool)1, NULL);
		goto IL_01de;
	}

IL_014b:
	{
		// else if (theRB.velocity.x > 0)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_40 = __this->___theRB_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41;
		L_41 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_40, NULL);
		float L_42 = L_41.___x_0;
		if ((!(((float)L_42) > ((float)(0.0f)))))
		{
			goto IL_01de;
		}
	}
	{
		// theSR.flipX = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_43 = __this->___theSR_22;
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_43, (bool)0, NULL);
		goto IL_01de;
	}

IL_0170:
	{
		// knockBackCounter -= Time.deltaTime;
		float L_44 = __this->___knockBackCounter_25;
		float L_45;
		L_45 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___knockBackCounter_25 = ((float)il2cpp_codegen_subtract(L_44, L_45));
		// if (!theSR.flipX)
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_46 = __this->___theSR_22;
		bool L_47;
		L_47 = SpriteRenderer_get_flipX_mFD4FA98A1DA2943820C21B3B345A42F1CD2DDC76(L_46, NULL);
		if (L_47)
		{
			goto IL_01b8;
		}
	}
	{
		// theRB.velocity = new Vector2(-knockBackForce, theRB.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_48 = __this->___theRB_6;
		float L_49 = __this->___knockBackForce_24;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_50 = __this->___theRB_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		L_51 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_50, NULL);
		float L_52 = L_51.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_53), ((-L_49)), L_52, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_48, L_53, NULL);
		goto IL_01de;
	}

IL_01b8:
	{
		// theRB.velocity = new Vector2(knockBackForce, theRB.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_54 = __this->___theRB_6;
		float L_55 = __this->___knockBackForce_24;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_56 = __this->___theRB_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		L_57 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_56, NULL);
		float L_58 = L_57.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_59), L_55, L_58, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_54, L_59, NULL);
	}

IL_01de:
	{
		// if (Input.GetButtonDown("Dash"))
		bool L_60;
		L_60 = Input_GetButtonDown_m0419DAA8F0BB0FF6C040248A74BED52DB0A44677(_stringLiteral78DB8AA40D3B780BCB7B7076042CF600254368BC, NULL);
		if (!L_60)
		{
			goto IL_022f;
		}
	}
	{
		// if(Time.time >= (lastDash + dashCouter))
		float L_61;
		L_61 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_62 = __this->___lastDash_20;
		float L_63 = __this->___dashCouter_17;
		if ((!(((float)L_61) >= ((float)((float)il2cpp_codegen_add(L_62, L_63))))))
		{
			goto IL_022f;
		}
	}
	{
		// AttemptToDash();
		PlayerController_AttemptToDash_mFC2BA61CA9DEFB6A2576F4A3CA072BBFE2946365(__this, NULL);
		// AudioManager.instance.PlaySFX(12);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_64 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F(L_64, ((int32_t)12), NULL);
		// UIController.instance.DashImage.fillAmount = 0;
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_65 = ((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___instance_4;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_66 = L_65->___DashImage_8;
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_66, (0.0f), NULL);
		// UIController.instance.isCoolDown = true;
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_67 = ((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___instance_4;
		L_67->___isCoolDown_9 = (bool)1;
	}

IL_022f:
	{
		// checkDash();
		PlayerController_checkDash_m7A66A6ACBD5FFEE27CAEF2543322E9D38D463ED8(__this, NULL);
	}

IL_0235:
	{
		// anim.SetFloat("moveSpeed", Mathf.Abs( theRB.velocity.x));
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_68 = __this->___anim_21;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_69 = __this->___theRB_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70;
		L_70 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_69, NULL);
		float L_71 = L_70.___x_0;
		float L_72;
		L_72 = fabsf(L_71);
		Animator_SetFloat_m10C78733FAFC7AFEDBDACC48B7C66D3A35A0A7FE(L_68, _stringLiteral30E3EA07EC73E95C9F85B6230DEC6F3F0373CA42, L_72, NULL);
		// anim.SetBool("isGrounded", isGrounded);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_73 = __this->___anim_21;
		bool L_74 = __this->___isGrounded_9;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_73, _stringLiteralDF953B1BAAE56A3E1998B6A1DC98AC472A4DAF75, L_74, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::KnockBack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_KnockBack_mE0CC9527F35F04DF9A28F8A95AC35C0DAC6751CD (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA473AD343663CD0A813A1992379CEA04F4516B4C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// knockBackCounter = knockBackLength;
		float L_0 = __this->___knockBackLength_23;
		__this->___knockBackCounter_25 = L_0;
		// theRB.velocity = new Vector2(0f, knockBackForce);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___theRB_6;
		float L_2 = __this->___knockBackForce_24;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), (0.0f), L_2, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_1, L_3, NULL);
		// anim.SetTrigger("hurt");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___anim_21;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_4, _stringLiteralA473AD343663CD0A813A1992379CEA04F4516B4C, NULL);
		// }
		return;
	}
}
// System.Void PlayerController::Bounce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Bounce_mDAF579DD3454FF6E5B2FE09649E32233AF6E2682 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theRB.velocity = new Vector2(theRB.velocity.x, bounceForce);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0 = __this->___theRB_6;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___theRB_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_1, NULL);
		float L_3 = L_2.___x_0;
		float L_4 = __this->___bounceForce_26;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), L_3, L_4, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_0, L_5, NULL);
		// AudioManager.instance.PlaySFX(10);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_6 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F(L_6, ((int32_t)10), NULL);
		// }
		return;
	}
}
// System.Void PlayerController::AttemptToDash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_AttemptToDash_mFC2BA61CA9DEFB6A2576F4A3CA072BBFE2946365 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isDashing = true;
		__this->___isDashing_12 = (bool)1;
		// dashTimeLeft = dashTime;
		float L_0 = __this->___dashTime_15;
		__this->___dashTimeLeft_14 = L_0;
		// lastDash = Time.time;
		float L_1;
		L_1 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___lastDash_20 = L_1;
		// PlayerImagePool.instance.GetFromPool();
		PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6* L_2 = ((PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6_StaticFields*)il2cpp_codegen_static_fields_for(PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6_il2cpp_TypeInfo_var))->___instance_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = PlayerImagePool_GetFromPool_m459D05E0DAA4C6E67D2FBE5570AB5D4AF63396CA(L_2, NULL);
		// lastImageXpos = transform.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___x_2;
		__this->___lastImageXpos_19 = L_6;
		// }
		return;
	}
}
// System.Void PlayerController::checkDash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_checkDash_m7A66A6ACBD5FFEE27CAEF2543322E9D38D463ED8 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isDashing)
		bool L_0 = __this->___isDashing_12;
		if (!L_0)
		{
			goto IL_00e7;
		}
	}
	{
		// if(dashTimeLeft > 0f)
		float L_1 = __this->___dashTimeLeft_14;
		if ((!(((float)L_1) > ((float)(0.0f)))))
		{
			goto IL_00e0;
		}
	}
	{
		// theRB.velocity = new Vector2(dashSpeed * Input.GetAxis("Horizontal"), theRB.velocity.y);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___theRB_6;
		float L_3 = __this->___dashSpeed_16;
		float L_4;
		L_4 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_5 = __this->___theRB_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_5, NULL);
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_3, L_4)), L_7, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_2, L_8, NULL);
		// dashTimeLeft -= Time.deltaTime;
		float L_9 = __this->___dashTimeLeft_14;
		float L_10;
		L_10 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___dashTimeLeft_14 = ((float)il2cpp_codegen_subtract(L_9, L_10));
		// if ((transform.position.x - lastImageXpos) > distanceBWTImage)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___x_2;
		float L_14 = __this->___lastImageXpos_19;
		float L_15 = __this->___distanceBWTImage_18;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_13, L_14))) > ((float)L_15))))
		{
			goto IL_009f;
		}
	}
	{
		// PlayerImagePool.instance.GetFromPool();
		PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6* L_16 = ((PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6_StaticFields*)il2cpp_codegen_static_fields_for(PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6_il2cpp_TypeInfo_var))->___instance_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = PlayerImagePool_GetFromPool_m459D05E0DAA4C6E67D2FBE5570AB5D4AF63396CA(L_16, NULL);
		// lastImageXpos = transform.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20 = L_19.___x_2;
		__this->___lastImageXpos_19 = L_20;
		return;
	}

IL_009f:
	{
		// else if((lastImageXpos - transform.position.x) > distanceBWTImage)
		float L_21 = __this->___lastImageXpos_19;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		float L_24 = L_23.___x_2;
		float L_25 = __this->___distanceBWTImage_18;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_21, L_24))) > ((float)L_25))))
		{
			goto IL_00e7;
		}
	}
	{
		// PlayerImagePool.instance.GetFromPool();
		PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6* L_26 = ((PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6_StaticFields*)il2cpp_codegen_static_fields_for(PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6_il2cpp_TypeInfo_var))->___instance_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27;
		L_27 = PlayerImagePool_GetFromPool_m459D05E0DAA4C6E67D2FBE5570AB5D4AF63396CA(L_26, NULL);
		// lastImageXpos = transform.position.x;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		float L_30 = L_29.___x_2;
		__this->___lastImageXpos_19 = L_30;
		return;
	}

IL_00e0:
	{
		// isDashing = false;
		__this->___isDashing_12 = (bool)0;
	}

IL_00e7:
	{
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mDDAB7C7D82E1A5B3E6C197B1AB9D653DFE554F33 (PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* __this, const RuntimeMethod* method) 
{
	{
		// private float lastDash = -100f;
		__this->___lastDash_20 = (-100.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerHealthController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealthController_Awake_m76365CB50C9DBD8232167091332B59A0006EE1A0 (PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void PlayerHealthController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealthController_Start_mFFA3ADB17D80D6E744082AEEE5FD2630D020A3EB (PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentHealth = maxHealth;
		int32_t L_0 = __this->___maxHealth_6;
		__this->___currentHealth_5 = L_0;
		// theSR = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1;
		L_1 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___theSR_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___theSR_9), (void*)L_1);
		// }
		return;
	}
}
// System.Void PlayerHealthController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealthController_Update_mEEA7E57ED8FB7108493BDA2E1D35935977A5CA31 (PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* __this, const RuntimeMethod* method) 
{
	{
		// if(invincibleCounter > 0)
		float L_0 = __this->___invincibleCounter_8;
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0071;
		}
	}
	{
		// invincibleCounter -= Time.deltaTime;
		float L_1 = __this->___invincibleCounter_8;
		float L_2;
		L_2 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___invincibleCounter_8 = ((float)il2cpp_codegen_subtract(L_1, L_2));
		// if(invincibleCounter <= 0)
		float L_3 = __this->___invincibleCounter_8;
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0071;
		}
	}
	{
		// theSR.color = new Color(theSR.color.r, theSR.color.g, theSR.color.b, 1f);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___theSR_9;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___theSR_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_5, NULL);
		float L_7 = L_6.___r_0;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___theSR_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_8, NULL);
		float L_10 = L_9.___g_1;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___theSR_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_11, NULL);
		float L_13 = L_12.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_14), L_7, L_10, L_13, (1.0f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_4, L_14, NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void PlayerHealthController::DealDamage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealthController_DealDamage_mD532BE2FD2087A396AFFB4541E570984806FC3EB (PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (invincibleCounter <= 0)
		float L_0 = __this->___invincibleCounter_8;
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_00cd;
		}
	}
	{
		// currentHealth--;
		int32_t L_1 = __this->___currentHealth_5;
		__this->___currentHealth_5 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		// if (currentHealth <= 0)
		int32_t L_2 = __this->___currentHealth_5;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		// currentHealth = 0;
		__this->___currentHealth_5 = 0;
		// Instantiate(deathEffect, transform.position, transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___deathEffect_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_3, L_5, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// LevelManager.instance.RespawnPlayer();
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_9 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___instance_4;
		LevelManager_RespawnPlayer_m9828E47BB559B81ED9374ABC5606404689D7F48B(L_9, NULL);
		goto IL_00c3;
	}

IL_005c:
	{
		// invincibleCounter = invincibleLength;
		float L_10 = __this->___invincibleLength_7;
		__this->___invincibleCounter_8 = L_10;
		// theSR.color = new Color(theSR.color.r, theSR.color.g, theSR.color.b, .5f);
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_11 = __this->___theSR_9;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_12 = __this->___theSR_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_12, NULL);
		float L_14 = L_13.___r_0;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_15 = __this->___theSR_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		L_16 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_15, NULL);
		float L_17 = L_16.___g_1;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_18 = __this->___theSR_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = SpriteRenderer_get_color_mF19DA1B83ABD9A825127D4FBED9A111FE52F1F52(L_18, NULL);
		float L_20 = L_19.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		memset((&L_21), 0, sizeof(L_21));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_21), L_14, L_17, L_20, (0.5f), /*hidden argument*/NULL);
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_11, L_21, NULL);
		// PlayerController.instance.KnockBack();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_22 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_4;
		PlayerController_KnockBack_mE0CC9527F35F04DF9A28F8A95AC35C0DAC6751CD(L_22, NULL);
		// AudioManager.instance.PlaySFX(9);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_23 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F(L_23, ((int32_t)9), NULL);
	}

IL_00c3:
	{
		// UIController.instance.UpdateHealthDisplay();
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_24 = ((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___instance_4;
		UIController_UpdateHealthDisplay_m2D84303912D630F2CB424180CA0A8C727FF2B19D(L_24, NULL);
	}

IL_00cd:
	{
		// }
		return;
	}
}
// System.Void PlayerHealthController::HealPlayer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealthController_HealPlayer_m39DB339146565A3DBFB72796A8695B8F9DA9847F (PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// currentHealth++;
		int32_t L_0 = __this->___currentHealth_5;
		__this->___currentHealth_5 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		// if(currentHealth > maxHealth)
		int32_t L_1 = __this->___currentHealth_5;
		int32_t L_2 = __this->___maxHealth_6;
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0028;
		}
	}
	{
		// currentHealth = maxHealth;
		int32_t L_3 = __this->___maxHealth_6;
		__this->___currentHealth_5 = L_3;
	}

IL_0028:
	{
		// UIController.instance.UpdateHealthDisplay();
		UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* L_4 = ((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___instance_4;
		UIController_UpdateHealthDisplay_m2D84303912D630F2CB424180CA0A8C727FF2B19D(L_4, NULL);
		// }
		return;
	}
}
// System.Void PlayerHealthController::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealthController_OnCollisionEnter2D_mF82C97AA7DD9D3EA0E7E03CB99A95ED927451253 (PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.tag == "Platform")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// transform.parent = other.transform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_5 = ___other0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Collision2D_get_transform_mC59737F246B2DAFF2AB4F6322664C87B28605CC7(L_5, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_4, L_6, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void PlayerHealthController::OnCollisionExit2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealthController_OnCollisionExit2D_mBD0B8B3F57B501EE3384CA5BC5515311A37772F3 (PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.tag == "Platform")
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision2D_get_gameObject_mE4B3D56F3477F7D2D6D7B217DF5488DA1D13204C(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral2ABA09E1C17B843688061F3708C4148AC2322D28, NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// transform.parent = null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_4, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void PlayerHealthController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerHealthController__ctor_m25532FF306E0A06498AC645EDA2E1C3F26AC7886 (PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerImageAfterDash::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerImageAfterDash_OnEnable_m51D13BAC27DAC8D3266C582DA27DB41FA15790FD (PlayerImageAfterDash_tC77408C286C8649FE4384ADC84036A066E16B31B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theSR = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___theSR_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___theSR_6), (void*)L_0);
		// player = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		__this->___player_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_4), (void*)L_2);
		// playerSR = player.GetComponent<SpriteRenderer>();
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___player_4;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4;
		L_4 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(L_3, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___playerSR_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerSR_5), (void*)L_4);
		// alpha = alphaSet;
		float L_5 = __this->___alphaSet_11;
		__this->___alpha_10 = L_5;
		// theSR.sprite = playerSR.sprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___theSR_6;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___playerSR_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8;
		L_8 = SpriteRenderer_get_sprite_mEEED0A9E872AE12E56CAF1641F2F592633181D44(L_7, NULL);
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_6, L_8, NULL);
		// transform.position = player.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___player_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_11, NULL);
		// transform.rotation = player.rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___player_4;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_13, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_12, L_14, NULL);
		// theSR.flipX = playerSR.flipX;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_15 = __this->___theSR_6;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_16 = __this->___playerSR_5;
		bool L_17;
		L_17 = SpriteRenderer_get_flipX_mFD4FA98A1DA2943820C21B3B345A42F1CD2DDC76(L_16, NULL);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_15, L_17, NULL);
		// timeActived = Time.time;
		float L_18;
		L_18 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		__this->___timeActived_9 = L_18;
		// }
		return;
	}
}
// System.Void PlayerImageAfterDash::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerImageAfterDash_Update_mA587C5CCFC2A59DEDE6A86DA4446FDDD8D2F0B77 (PlayerImageAfterDash_tC77408C286C8649FE4384ADC84036A066E16B31B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// alpha *= alphaMultiplier;
		float L_0 = __this->___alpha_10;
		float L_1 = __this->___alphaMultiplier_12;
		__this->___alpha_10 = ((float)il2cpp_codegen_multiply(L_0, L_1));
		// color = new Color(1f, 1f, 1f, alpha);
		float L_2 = __this->___alpha_10;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_3), (1.0f), (1.0f), (1.0f), L_2, /*hidden argument*/NULL);
		__this->___color_7 = L_3;
		// theSR.color = color;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___theSR_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = __this->___color_7;
		SpriteRenderer_set_color_mB0EEC2845A0347E296C01C831F967731D2804546(L_4, L_5, NULL);
		// if(Time.time > (timeActived + activeTime))
		float L_6;
		L_6 = Time_get_time_m0BEE9AACD0723FE414465B77C9C64D12263675F3(NULL);
		float L_7 = __this->___timeActived_9;
		float L_8 = __this->___activeTime_8;
		if ((!(((float)L_6) > ((float)((float)il2cpp_codegen_add(L_7, L_8))))))
		{
			goto IL_0068;
		}
	}
	{
		// PlayerImagePool.instance.AddToPool(gameObject);
		PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6* L_9 = ((PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6_StaticFields*)il2cpp_codegen_static_fields_for(PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6_il2cpp_TypeInfo_var))->___instance_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		PlayerImagePool_AddToPool_mC6C1FCA57B010231AC85937CD8E9D10AC7DF7557(L_9, L_10, NULL);
	}

IL_0068:
	{
		// }
		return;
	}
}
// System.Void PlayerImageAfterDash::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerImageAfterDash__ctor_mD2EA88628C83B56C1B8AA8120C6C1ADAB84D3EB0 (PlayerImageAfterDash_tC77408C286C8649FE4384ADC84036A066E16B31B* __this, const RuntimeMethod* method) 
{
	{
		// private float activeTime = 0.1f;
		__this->___activeTime_8 = (0.100000001f);
		// private float alphaSet = 0.8f;
		__this->___alphaSet_11 = (0.800000012f);
		// private float alphaMultiplier = 0.85f;
		__this->___alphaMultiplier_12 = (0.850000024f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlayerImagePool::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerImagePool_Awake_m994EF9C24C7631EEA554C3A5881E790B04F9E8D9 (PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6_StaticFields*)il2cpp_codegen_static_fields_for(PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6_StaticFields*)il2cpp_codegen_static_fields_for(PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// GrowPool();
		PlayerImagePool_GrowPool_mE2C0A44E7DFB8CA4DA38A75AB3631E0A1543C058(__this, NULL);
		// }
		return;
	}
}
// System.Void PlayerImagePool::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerImagePool_Update_mF170D1F6ECABD5F80204555EBBBCB220F56F581B (PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlayerImagePool::GrowPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerImagePool_GrowPool_mE2C0A44E7DFB8CA4DA38A75AB3631E0A1543C058 (PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// for(int i = 0; i < 10; i++)
		V_0 = 0;
		goto IL_002c;
	}

IL_0004:
	{
		// var instanceToAdd = Instantiate(afterImagePrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___afterImagePrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_0, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		V_1 = L_1;
		// instanceToAdd.transform.SetParent(transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_3, L_4, NULL);
		// AddToPool(instanceToAdd);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
		PlayerImagePool_AddToPool_mC6C1FCA57B010231AC85937CD8E9D10AC7DF7557(__this, L_5, NULL);
		// for(int i = 0; i < 10; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_002c:
	{
		// for(int i = 0; i < 10; i++)
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)10))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void PlayerImagePool::AddToPool(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerImagePool_AddToPool_mC6C1FCA57B010231AC85937CD8E9D10AC7DF7557 (PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____instance0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _instance.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ____instance0;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// availableObjects.Enqueue(_instance);
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_1 = __this->___availableObjects_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ____instance0;
		Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B(L_1, L_2, Queue_1_Enqueue_m5A435FDDADE10BC9599E175F9B600C40ECFE3C1B_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.GameObject PlayerImagePool::GetFromPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* PlayerImagePool_GetFromPool_m459D05E0DAA4C6E67D2FBE5570AB5D4AF63396CA (PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(availableObjects.Count == 0)
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_0 = __this->___availableObjects_6;
		int32_t L_1;
		L_1 = Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_inline(L_0, Queue_1_get_Count_m63EB352CDC9F12E3141775BB74938A69685DE1D7_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		// GrowPool();
		PlayerImagePool_GrowPool_mE2C0A44E7DFB8CA4DA38A75AB3631E0A1543C058(__this, NULL);
	}

IL_0013:
	{
		// var instance = availableObjects.Dequeue();
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_2 = __this->___availableObjects_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24(L_2, Queue_1_Dequeue_m11F75D84C5BAC39C7B433215A25DFC2818603B24_RuntimeMethod_var);
		// instance.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// return instance;
		return L_4;
	}
}
// System.Void PlayerImagePool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerImagePool__ctor_m548D23913FEA0415D4017CF8F3D187AB60BEF5BF (PlayerImagePool_tC921DA32990827E58F56E9C5A446DA53EAC915F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Queue<GameObject> availableObjects = new Queue<GameObject>();
		Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4* L_0 = (Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4*)il2cpp_codegen_object_new(Queue_1_t57484CF2A316F8471C210AA410F8270CCEFF92F4_il2cpp_TypeInfo_var);
		Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82(L_0, Queue_1__ctor_m6C30DC4D1D969EDB9CB65C30AD26D6263B66DB82_RuntimeMethod_var);
		__this->___availableObjects_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___availableObjects_6), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Slammer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slammer_Start_mE4890ED62B5591C35C02D7AE319C92356DBD0863 (Slammer_t31ED2A66298DADCF3487BB85AF408C21959518B1* __this, const RuntimeMethod* method) 
{
	{
		// startPoint = theSlammer.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___theSlammer_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		__this->___startPoint_6 = L_1;
		// }
		return;
	}
}
// System.Void Slammer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slammer_Update_m3712591A29415F0021B2B3AC01A4FA2ABE639FEA (Slammer_t31ED2A66298DADCF3487BB85AF408C21959518B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!slamming && !resetting)
		bool L_0 = __this->___slamming_11;
		if (L_0)
		{
			goto IL_0049;
		}
	}
	{
		bool L_1 = __this->___resetting_12;
		if (L_1)
		{
			goto IL_0049;
		}
	}
	{
		// if (Vector3.Distance(slammerTarget.position, PlayerController.instance.transform.position) < 2f)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___slammerTarget_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7;
		L_7 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_3, L_6, NULL);
		if ((!(((float)L_7) < ((float)(2.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		// slamming = true;
		__this->___slamming_11 = (bool)1;
		// waitCounter = waitAfterSlam;
		float L_8 = __this->___waitAfterSlam_8;
		__this->___waitCounter_10 = L_8;
	}

IL_0049:
	{
		// if (slamming)
		bool L_9 = __this->___slamming_11;
		if (!L_9)
		{
			goto IL_00cd;
		}
	}
	{
		// theSlammer.position = Vector3.MoveTowards(theSlammer.position, slammerTarget.position, slamSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___theSlammer_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___theSlammer_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___slammerTarget_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = __this->___slamSpeed_7;
		float L_16;
		L_16 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(L_12, L_14, ((float)il2cpp_codegen_multiply(L_15, L_16)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_10, L_17, NULL);
		// if (theSlammer.position == slammerTarget.position)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___theSlammer_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___slammerTarget_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		bool L_22;
		L_22 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_00cd;
		}
	}
	{
		// waitCounter -= Time.deltaTime;
		float L_23 = __this->___waitCounter_10;
		float L_24;
		L_24 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___waitCounter_10 = ((float)il2cpp_codegen_subtract(L_23, L_24));
		// if (waitCounter <= 0)
		float L_25 = __this->___waitCounter_10;
		if ((!(((float)L_25) <= ((float)(0.0f)))))
		{
			goto IL_00cd;
		}
	}
	{
		// slamming = false;
		__this->___slamming_11 = (bool)0;
		// resetting = true;
		__this->___resetting_12 = (bool)1;
	}

IL_00cd:
	{
		// if (resetting)
		bool L_26 = __this->___resetting_12;
		if (!L_26)
		{
			goto IL_0121;
		}
	}
	{
		// theSlammer.position = Vector3.MoveTowards(theSlammer.position, startPoint, resetSpeed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___theSlammer_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___theSlammer_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = __this->___startPoint_6;
		float L_31 = __this->___resetSpeed_9;
		float L_32;
		L_32 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline(L_29, L_30, ((float)il2cpp_codegen_multiply(L_31, L_32)), NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_27, L_33, NULL);
		// if (theSlammer.position == startPoint)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___theSlammer_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = __this->___startPoint_6;
		bool L_37;
		L_37 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_35, L_36, NULL);
		if (!L_37)
		{
			goto IL_0121;
		}
	}
	{
		// resetting = false;
		__this->___resetting_12 = (bool)0;
	}

IL_0121:
	{
		// }
		return;
	}
}
// System.Void Slammer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slammer__ctor_mCB675A3E46EC0892382483E91B6052CC8A12769E (Slammer_t31ED2A66298DADCF3487BB85AF408C21959518B1* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Stompbox::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stompbox_Start_mDE369D4D7790915BEF3CABC8E09F60E5CD9602C0 (Stompbox_t536483430873266BE4C79B4CBE3DC76C2BD7C2B9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Stompbox::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stompbox_Update_mDFB42D50B9B6C644E44692813FCE4536A1280BD0 (Stompbox_t536483430873266BE4C79B4CBE3DC76C2BD7C2B9* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Stompbox::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stompbox_OnTriggerEnter2D_m9AD4E0367AB85B971881538FB094A43A89392C93 (Stompbox_t536483430873266BE4C79B4CBE3DC76C2BD7C2B9* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBED406E0547AD3CBC86EBAA57F44C28228041BD8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.tag == "Enemy")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral3260331AF5DA53ABC7CA7BAF659CF8D9FC93DEC7, NULL);
		if (!L_2)
		{
			goto IL_00a5;
		}
	}
	{
		// Debug.Log("Hit Enemy");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralBED406E0547AD3CBC86EBAA57F44C28228041BD8, NULL);
		// other.transform.parent.gameObject.SetActive(false);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___other0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// Instantiate(deathEffect, other.transform.position, other.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___deathEffect_4;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_8 = ___other0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_11 = ___other0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_7, L_10, L_13, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// PlayerController.instance.Bounce();
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_15 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_4;
		PlayerController_Bounce_mDAF579DD3454FF6E5B2FE09649E32233AF6E2682(L_15, NULL);
		// float dropSelect = Random.Range(0, 100f);
		float L_16;
		L_16 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((0.0f), (100.0f), NULL);
		// if(dropSelect <= chanceToDrop)
		float L_17 = __this->___chanceToDrop_6;
		if ((!(((float)L_16) <= ((float)L_17))))
		{
			goto IL_009a;
		}
	}
	{
		// Instantiate(collectible, other.transform.position, other.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___collectible_5;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_19 = ___other0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_20, NULL);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_22 = ___other0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_22, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24;
		L_24 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_23, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_18, L_21, L_24, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
	}

IL_009a:
	{
		// AudioManager.instance.PlaySFX(3);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_26 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_4;
		AudioManager_PlaySFX_m3D82156DCCF0797A330A89ED3F655AB5BC79663F(L_26, 3, NULL);
	}

IL_00a5:
	{
		// }
		return;
	}
}
// System.Void Stompbox::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stompbox__ctor_m0AAD6FFDCB638AE875F2C882DDAFA42EEDB315DB (Stompbox_t536483430873266BE4C79B4CBE3DC76C2BD7C2B9* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Switch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Switch_Start_m7F61F8E2F32F8949B8EC4648823728615F5D6B0B (Switch_t46A64C733A0D45D9F4352EE05D9D82F06B41B94E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// theSR = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___theSR_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___theSR_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void Switch::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Switch_Update_m1054888BEAE100C2ACBF24BF178026BEEFD07F79 (Switch_t46A64C733A0D45D9F4352EE05D9D82F06B41B94E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Switch::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Switch_OnTriggerEnter2D_m48CF611D98109B7E656AAE2BB94F2E055293DA72 (Switch_t46A64C733A0D45D9F4352EE05D9D82F06B41B94E* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.tag == "Player" && !hasSwitched)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_2)
		{
			goto IL_0054;
		}
	}
	{
		bool L_3 = __this->___hasSwitched_7;
		if (L_3)
		{
			goto IL_0054;
		}
	}
	{
		// if(deactivateOnSwitch)
		bool L_4 = __this->___deactivateOnSwitch_8;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// objectToSwitch.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___objectToSwitch_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		goto IL_003c;
	}

IL_0030:
	{
		// objectToSwitch.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___objectToSwitch_4;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
	}

IL_003c:
	{
		// theSR.sprite = downSprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___theSR_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = __this->___downSprite_6;
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_7, L_8, NULL);
		// hasSwitched = true;
		__this->___hasSwitched_7 = (bool)1;
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void Switch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Switch__ctor_m5B451533A9E45C8B5AEF4629DE69167757044B92 (Switch_t46A64C733A0D45D9F4352EE05D9D82F06B41B94E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UIController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Awake_m8D57F9A6CDDF4400F8E75A66BA0719BE0A125A3D (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_StaticFields*)il2cpp_codegen_static_fields_for(UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void UIController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Start_mDB390A5128712606F938A56F294FBDE7DFE649D4 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// UpdateGemCount();
		UIController_UpdateGemCount_mE8FE1E6A7A960137623828A9D5764CE6290714E2(__this, NULL);
		// FadeFromBlack();
		UIController_FadeFromBlack_m06CB6F0F1B38C83636086DE37D81F90DBD91A7F5(__this, NULL);
		// }
		return;
	}
}
// System.Void UIController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_Update_m8F538932F53B831D5B82191902ADADACD32B108B (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// coolDownSkill();
		UIController_coolDownSkill_mA3D2821D3CA29DAC62F90442D2BA4D59371EA799(__this, NULL);
		// if (shouldFadeToBlack)
		bool L_0 = __this->___shouldFadeToBlack_16;
		if (!L_0)
		{
			goto IL_0095;
		}
	}
	{
		// fadeScreen.color = new Color(fadeScreen.color.r, fadeScreen.color.g, fadeScreen.color.b, Mathf.MoveTowards(fadeScreen.color.a, 1f, fadeSpeed * Time.deltaTime));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___fadeScreen_14;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___fadeScreen_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_2);
		float L_4 = L_3.___r_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___fadeScreen_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		L_6 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		float L_7 = L_6.___g_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___fadeScreen_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		float L_10 = L_9.___b_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___fadeScreen_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_11);
		float L_13 = L_12.___a_3;
		float L_14 = __this->___fadeSpeed_15;
		float L_15;
		L_15 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_16;
		L_16 = Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline(L_13, (1.0f), ((float)il2cpp_codegen_multiply(L_14, L_15)), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_17), L_4, L_7, L_10, L_16, /*hidden argument*/NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_1, L_17);
		// if(fadeScreen.color.a == 1f)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___fadeScreen_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		L_19 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_18);
		float L_20 = L_19.___a_3;
		if ((!(((float)L_20) == ((float)(1.0f)))))
		{
			goto IL_0095;
		}
	}
	{
		// shouldFadeToBlack = false;
		__this->___shouldFadeToBlack_16 = (bool)0;
	}

IL_0095:
	{
		// if(shouldFadeFromBlack)
		bool L_21 = __this->___shouldFadeFromBlack_17;
		if (!L_21)
		{
			goto IL_0124;
		}
	}
	{
		// fadeScreen.color = new Color(fadeScreen.color.r, fadeScreen.color.g, fadeScreen.color.b, Mathf.MoveTowards(fadeScreen.color.a, 0f, fadeSpeed * Time.deltaTime));
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = __this->___fadeScreen_14;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_23 = __this->___fadeScreen_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_23);
		float L_25 = L_24.___r_0;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___fadeScreen_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_26);
		float L_28 = L_27.___g_1;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___fadeScreen_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		L_30 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_29);
		float L_31 = L_30.___b_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32 = __this->___fadeScreen_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
		L_33 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_32);
		float L_34 = L_33.___a_3;
		float L_35 = __this->___fadeSpeed_15;
		float L_36;
		L_36 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_37;
		L_37 = Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline(L_34, (0.0f), ((float)il2cpp_codegen_multiply(L_35, L_36)), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		memset((&L_38), 0, sizeof(L_38));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_38), L_25, L_28, L_31, L_37, /*hidden argument*/NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_38);
		// if (fadeScreen.color.a == 0f)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_39 = __this->___fadeScreen_14;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_39);
		float L_41 = L_40.___a_3;
		if ((!(((float)L_41) == ((float)(0.0f)))))
		{
			goto IL_0124;
		}
	}
	{
		// shouldFadeFromBlack = false;
		__this->___shouldFadeFromBlack_17 = (bool)0;
	}

IL_0124:
	{
		// }
		return;
	}
}
// System.Void UIController::UpdateHealthDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_UpdateHealthDisplay_m2D84303912D630F2CB424180CA0A8C727FF2B19D (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch(PlayerHealthController.instance.currentHealth)
		PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F* L_0 = ((PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_StaticFields*)il2cpp_codegen_static_fields_for(PlayerHealthController_tCADE19FDA46D6C6CD5C013D08071F86F11565C4F_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_1 = L_0->___currentHealth_5;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_016a;
			}
			case 1:
			{
				goto IL_0136;
			}
			case 2:
			{
				goto IL_0102;
			}
			case 3:
			{
				goto IL_00ce;
			}
			case 4:
			{
				goto IL_009a;
			}
			case 5:
			{
				goto IL_0066;
			}
			case 6:
			{
				goto IL_0032;
			}
		}
	}
	{
		goto IL_019e;
	}

IL_0032:
	{
		// heart1.sprite = heartFull;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3 = __this->___heart1_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->___heartFull_10;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_3, L_4, NULL);
		// heart2.sprite = heartFull;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___heart2_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = __this->___heartFull_10;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_5, L_6, NULL);
		// heart3.sprite = heartFull;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___heart3_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8 = __this->___heartFull_10;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_7, L_8, NULL);
		// break;
		return;
	}

IL_0066:
	{
		// heart1.sprite = heartFull;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___heart1_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_10 = __this->___heartFull_10;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_9, L_10, NULL);
		// heart2.sprite = heartFull;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11 = __this->___heart2_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = __this->___heartFull_10;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_11, L_12, NULL);
		// heart3.sprite = heartHalf;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13 = __this->___heart3_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_14 = __this->___heartHalf_12;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_13, L_14, NULL);
		// break;
		return;
	}

IL_009a:
	{
		// heart1.sprite = heartFull;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_15 = __this->___heart1_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_16 = __this->___heartFull_10;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_15, L_16, NULL);
		// heart2.sprite = heartFull;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17 = __this->___heart2_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18 = __this->___heartFull_10;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_17, L_18, NULL);
		// heart3.sprite = heartEmpty;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___heart3_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_20 = __this->___heartEmpty_11;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_19, L_20, NULL);
		// break;
		return;
	}

IL_00ce:
	{
		// heart1.sprite = heartFull;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = __this->___heart1_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_22 = __this->___heartFull_10;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_21, L_22, NULL);
		// heart2.sprite = heartHalf;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_23 = __this->___heart2_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_24 = __this->___heartHalf_12;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_23, L_24, NULL);
		// heart3.sprite = heartEmpty;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_25 = __this->___heart3_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_26 = __this->___heartEmpty_11;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_25, L_26, NULL);
		// break;
		return;
	}

IL_0102:
	{
		// heart1.sprite = heartFull;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = __this->___heart1_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_28 = __this->___heartFull_10;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_27, L_28, NULL);
		// heart2.sprite = heartEmpty;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = __this->___heart2_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_30 = __this->___heartEmpty_11;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_29, L_30, NULL);
		// heart3.sprite = heartEmpty;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_31 = __this->___heart3_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_32 = __this->___heartEmpty_11;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_31, L_32, NULL);
		// break;
		return;
	}

IL_0136:
	{
		// heart1.sprite = heartHalf;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_33 = __this->___heart1_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_34 = __this->___heartHalf_12;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_33, L_34, NULL);
		// heart2.sprite = heartEmpty;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_35 = __this->___heart2_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_36 = __this->___heartEmpty_11;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_35, L_36, NULL);
		// heart3.sprite = heartEmpty;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37 = __this->___heart3_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_38 = __this->___heartEmpty_11;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_37, L_38, NULL);
		// break;
		return;
	}

IL_016a:
	{
		// heart1.sprite = heartEmpty;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_39 = __this->___heart1_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_40 = __this->___heartEmpty_11;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_39, L_40, NULL);
		// heart2.sprite = heartEmpty;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_41 = __this->___heart2_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_42 = __this->___heartEmpty_11;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_41, L_42, NULL);
		// heart3.sprite = heartEmpty;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_43 = __this->___heart3_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_44 = __this->___heartEmpty_11;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_43, L_44, NULL);
		// break;
		return;
	}

IL_019e:
	{
		// heart1.sprite = heartEmpty;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_45 = __this->___heart1_5;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_46 = __this->___heartEmpty_11;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_45, L_46, NULL);
		// heart2.sprite = heartEmpty;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_47 = __this->___heart2_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_48 = __this->___heartEmpty_11;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_47, L_48, NULL);
		// heart3.sprite = heartEmpty;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_49 = __this->___heart3_7;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_50 = __this->___heartEmpty_11;
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_49, L_50, NULL);
		// }
		return;
	}
}
// System.Void UIController::UpdateGemCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_UpdateGemCount_mE8FE1E6A7A960137623828A9D5764CE6290714E2 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gemText.text = LevelManager.instance.gemsCollected.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___gemText_13;
		LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530* L_1 = ((LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_StaticFields*)il2cpp_codegen_static_fields_for(LevelManager_t8405886BBC5A0ACBB1CC210E25D5DA1C72D16530_il2cpp_TypeInfo_var))->___instance_4;
		int32_t* L_2 = (&L_1->___gemsCollected_7);
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_2, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		// }
		return;
	}
}
// System.Void UIController::FadeToBlack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_FadeToBlack_mB79901580AAF4A5494BA7D2A1DA5AFEED6D4D0D0 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// shouldFadeToBlack = true;
		__this->___shouldFadeToBlack_16 = (bool)1;
		// shouldFadeFromBlack = false;
		__this->___shouldFadeFromBlack_17 = (bool)0;
		// }
		return;
	}
}
// System.Void UIController::FadeFromBlack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_FadeFromBlack_m06CB6F0F1B38C83636086DE37D81F90DBD91A7F5 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		// shouldFadeFromBlack = true;
		__this->___shouldFadeFromBlack_17 = (bool)1;
		// shouldFadeToBlack = false;
		__this->___shouldFadeToBlack_16 = (bool)0;
		// }
		return;
	}
}
// System.Void UIController::coolDownSkill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController_coolDownSkill_mA3D2821D3CA29DAC62F90442D2BA4D59371EA799 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isCoolDown)
		bool L_0 = __this->___isCoolDown_9;
		if (!L_0)
		{
			goto IL_0049;
		}
	}
	{
		// DashImage.fillAmount += 1 / PlayerController.instance.dashCouter *Time.deltaTime;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_1 = __this->___DashImage_8;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = L_1;
		float L_3;
		L_3 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(L_2, NULL);
		PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95* L_4 = ((PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_t7E8D7042FA2D0DFEC54A1FCDF395161D88DAAE95_il2cpp_TypeInfo_var))->___instance_4;
		float L_5 = L_4->___dashCouter_17;
		float L_6;
		L_6 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_2, ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)((1.0f)/L_5)), L_6)))), NULL);
		// if(DashImage.fillAmount >= 1)
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___DashImage_8;
		float L_8;
		L_8 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(L_7, NULL);
		if ((!(((float)L_8) >= ((float)(1.0f)))))
		{
			goto IL_0049;
		}
	}
	{
		// isCoolDown = false;
		__this->___isCoolDown_9 = (bool)0;
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Void UIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIController__ctor_mFF218DBC8CCEFE36AAC295D2376501658CD8B7A2 (UIController_tB28317BDC5493B0C94BC719AA8B3FFC90E5AF6D2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Victory::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Victory_Start_mBF3A08DE933CDCDD27A9EEE71400F65CBC2110D4 (Victory_t40F6510ACF81AED3989AB047DFE1ADC98F4B424E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Victory::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Victory_Update_m90E184A57172DECBE802079BF217FF7691D5D7C8 (Victory_t40F6510ACF81AED3989AB047DFE1ADC98F4B424E* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Victory::MainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Victory_MainMenu_m87D11FA7257664493BFE640276394A20636D137E (Victory_t40F6510ACF81AED3989AB047DFE1ADC98F4B424E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(mainMenu);
		String_t* L_0 = __this->___mainMenu_4;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_0, NULL);
		// }
		return;
	}
}
// System.Void Victory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Victory__ctor_m93FF9B00A6E06EFB799AB4BC43F516B487D6B139 (Victory_t40F6510ACF81AED3989AB047DFE1ADC98F4B424E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CheckpointController_SetSpawnPoint_m8888DA4AA7BD0A97F52A82341BA520948F89E486_inline (CheckpointController_tE217331E3BE5B775DF9593F805E02918071A1CB4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___newSpawnPoint0, const RuntimeMethod* method) 
{
	{
		// spawnPoint = newSpawnPoint;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___newSpawnPoint0;
		__this->___spawnPoint_6 = L_0;
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_MoveTowards_m3E2E4E94093F49D09DEB34CA97BF8A632B27F1AD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___target1;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___current0;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___target1;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___current0;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___target1;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___current0;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		if ((((float)L_18) == ((float)(0.0f))))
		{
			goto IL_0055;
		}
	}
	{
		float L_19 = ___maxDistanceDelta2;
		if ((!(((float)L_19) >= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		float L_20 = V_3;
		float L_21 = ___maxDistanceDelta2;
		float L_22 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_20) <= ((float)((float)il2cpp_codegen_multiply(L_21, L_22)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0053;
	}

IL_0052:
	{
		G_B4_0 = 0;
	}

IL_0053:
	{
		G_B6_0 = G_B4_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B6_0 = 1;
	}

IL_0056:
	{
		V_5 = (bool)G_B6_0;
		bool L_23 = V_5;
		if (!L_23)
		{
			goto IL_0061;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___target1;
		V_6 = L_24;
		goto IL_009b;
	}

IL_0061:
	{
		float L_25 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_26;
		L_26 = sqrt(((double)L_25));
		V_4 = ((float)L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ___current0;
		float L_28 = L_27.___x_2;
		float L_29 = V_0;
		float L_30 = V_4;
		float L_31 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___current0;
		float L_33 = L_32.___y_3;
		float L_34 = V_1;
		float L_35 = V_4;
		float L_36 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___current0;
		float L_38 = L_37.___z_4;
		float L_39 = V_2;
		float L_40 = V_4;
		float L_41 = ___maxDistanceDelta2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_42), ((float)il2cpp_codegen_add(L_28, ((float)il2cpp_codegen_multiply(((float)(L_29/L_30)), L_31)))), ((float)il2cpp_codegen_add(L_33, ((float)il2cpp_codegen_multiply(((float)(L_34/L_35)), L_36)))), ((float)il2cpp_codegen_add(L_38, ((float)il2cpp_codegen_multiply(((float)(L_39/L_40)), L_41)))), /*hidden argument*/NULL);
		V_6 = L_42;
		goto IL_009b;
	}

IL_009b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		return L_43;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_MoveTowards_m28F18762A84FB55152D854EBC92604FABA0879D1_inline (float ___current0, float ___target1, float ___maxDelta2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		float L_0 = ___target1;
		float L_1 = ___current0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___maxDelta2;
		V_0 = (bool)((((int32_t)((!(((float)L_2) <= ((float)L_3)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0017;
		}
	}
	{
		float L_5 = ___target1;
		V_1 = L_5;
		goto IL_0026;
	}

IL_0017:
	{
		float L_6 = ___current0;
		float L_7 = ___target1;
		float L_8 = ___current0;
		float L_9;
		L_9 = Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline(((float)il2cpp_codegen_subtract(L_7, L_8)), NULL);
		float L_10 = ___maxDelta2;
		V_1 = ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_9, L_10))));
		goto IL_0026;
	}

IL_0026:
	{
		float L_11 = V_1;
		return L_11;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// public float fillAmount { get { return m_FillAmount; } set { if (SetPropertyUtility.SetStruct(ref m_FillAmount, Mathf.Clamp01(value))) SetVerticesDirty(); } }
		float L_0 = __this->___m_FillAmount_43;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Sign_m015249B312238B8DCA3493489FAFC3055E2FFEF8_inline (float ___f0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___f0;
		if ((((float)L_0) >= ((float)(0.0f))))
		{
			goto IL_0010;
		}
	}
	{
		G_B3_0 = (-1.0f);
		goto IL_0015;
	}

IL_0010:
	{
		G_B3_0 = (1.0f);
	}

IL_0015:
	{
		V_0 = G_B3_0;
		goto IL_0018;
	}

IL_0018:
	{
		float L_1 = V_0;
		return L_1;
	}
}
