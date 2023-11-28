#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1*, T2, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>
struct Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,NativeWebSocket.WebSocket>[]
struct EntryU5BU5D_tE9800CE77CB8434AC6C14159624DF68EF0EB6B67;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// MainThreadUtil
struct MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// NativeWebSocket.WaitForBackgroundThread
struct WaitForBackgroundThread_t78A4D0D429FC84A263F9E9D015498CA51B838E2F;
// WaitForUpdate
struct WaitForUpdate_t7DD67F8046EEE88C1F07A439792BAEB2ED4EB468;
// NativeWebSocket.WebSocket
struct WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F;
// NativeWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466;
// NativeWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3;
// NativeWebSocket.WebSocketException
struct WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525;
// NativeWebSocket.WebSocketInvalidArgumentException
struct WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979;
// NativeWebSocket.WebSocketInvalidStateException
struct WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B;
// NativeWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C;
// NativeWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E;
// NativeWebSocket.WebSocketUnexpectedException
struct WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06;
// MainThreadUtil/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// NativeWebSocket.WaitForBackgroundThread/<>c
struct U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9;
// WaitForUpdate/<CoroutineWrapper>d__4
struct U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF;
// WaitForUpdate/MainThreadAwaiter
struct MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71;
// NativeWebSocket.WebSocketFactory/OnCloseCallback
struct OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B;
// NativeWebSocket.WebSocketFactory/OnErrorCallback
struct OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F;
// NativeWebSocket.WebSocketFactory/OnMessageCallback
struct OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD;
// NativeWebSocket.WebSocketFactory/OnOpenCallback
struct OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketCloseCode_t361F9B1DC4140998BF9D7D179DA50DF3CDA9A3F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1092566FAE22ADAF2E6C0CD48101A26FFB87370B;
IL2CPP_EXTERN_C String_t* _stringLiteral1742337439BBC66D76773857596C8E79F12FE929;
IL2CPP_EXTERN_C String_t* _stringLiteral462D595BAC3CBFD090FDF07068A9535396E9CB69;
IL2CPP_EXTERN_C String_t* _stringLiteral479625953694FC0583C3D8F93F44332026972846;
IL2CPP_EXTERN_C String_t* _stringLiteral482C4EF014C145C7E8B1E7898B254DE910B5A52A;
IL2CPP_EXTERN_C String_t* _stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3CE916CA42882DCFA8FDD2A4BD122B2CCBB8612;
IL2CPP_EXTERN_C String_t* _stringLiteralB84CE3C86E018FA7FB2A0310EDFEF321F5E2BC48;
IL2CPP_EXTERN_C String_t* _stringLiteralD75065A3883D75C7E20825442A96EDBA6A07033C;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mB7F5F3C8827A6593C6AF6E2BDF4A2DA302F080E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m8ED9A6608A684953641E661481D65D9D176491CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m52F7996E0D29362376BECB65034208A045BFC2A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m98266C8DDBBE11FE1E079E5D87ABF8F983AFCBEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisMainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_m92E71D16AF61352A6E7148033389DE22ACB6CE74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m3D82EC56DC7C2A43849959484D39F01B7857B5A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetAwaiterU3Eb__0_0_mFDD0FD9389C71F771348ADE10DAA60AB7ECDD980_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_m0F3B58C434FCB0B603320CFBF1E7FF116BC3DE56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnCloseEvent_mE517E2DE4CA909A77FC7BFDB411C2D7856697FEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnErrorEvent_m224C967DBEB014A9ED73B06636E97A812F3E3BF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnMessageEvent_m459231DE0BD80E06158A78CED322C7B274BC1CF7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocketFactory_DelegateOnOpenEvent_m15718BB4A7518F092674DFD0E6ED5C3D69DF392C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_Close_m5E661C600C35E9DAC15128D52843D1C5CD2FB9C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_Connect_m6668D9F07FE1BFD16D5391B1AB8980FA740E705A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_SendText_m084ADA70E9B407C3211185FD17F7F50251F5245C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_Send_mD28BF1375EBB89AD846765454D361350BF604B97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WebSocket_get_State_m9787DE3CBD95685151F66BAA37CF2817F4CF54DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* WebSocketCloseCode_t361F9B1DC4140998BF9D7D179DA50DF3CDA9A3F5_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t93286EC3939E6D2A3848A46758C92B54C6C9E961 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>
struct Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tE9800CE77CB8434AC6C14159624DF68EF0EB6B67* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_7;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_7;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
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

// NativeWebSocket.WaitForBackgroundThread
struct WaitForBackgroundThread_t78A4D0D429FC84A263F9E9D015498CA51B838E2F  : public RuntimeObject
{
};

// NativeWebSocket.WebSocket
struct WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F  : public RuntimeObject
{
	// System.Int32 NativeWebSocket.WebSocket::instanceId
	int32_t ___instanceId_0;
	// NativeWebSocket.WebSocketOpenEventHandler NativeWebSocket.WebSocket::OnOpen
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* ___OnOpen_1;
	// NativeWebSocket.WebSocketMessageEventHandler NativeWebSocket.WebSocket::OnMessage
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* ___OnMessage_2;
	// NativeWebSocket.WebSocketErrorEventHandler NativeWebSocket.WebSocket::OnError
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* ___OnError_3;
	// NativeWebSocket.WebSocketCloseEventHandler NativeWebSocket.WebSocket::OnClose
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* ___OnClose_4;
};

// NativeWebSocket.WebSocketFactory
struct WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953  : public RuntimeObject
{
};

// NativeWebSocket.WebSocketHelpers
struct WebSocketHelpers_tA390BCA68E5570108D9674A85A47212CA153F7E9  : public RuntimeObject
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

// MainThreadUtil/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5  : public RuntimeObject
{
	// System.Collections.IEnumerator MainThreadUtil/<>c__DisplayClass9_0::waitForUpdate
	RuntimeObject* ___waitForUpdate_0;
};

// NativeWebSocket.WaitForBackgroundThread/<>c
struct U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9  : public RuntimeObject
{
};

// WaitForUpdate/<CoroutineWrapper>d__4
struct U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF  : public RuntimeObject
{
	// System.Int32 WaitForUpdate/<CoroutineWrapper>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object WaitForUpdate/<CoroutineWrapper>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Collections.IEnumerator WaitForUpdate/<CoroutineWrapper>d__4::theWorker
	RuntimeObject* ___theWorker_2;
	// WaitForUpdate/MainThreadAwaiter WaitForUpdate/<CoroutineWrapper>d__4::awaiter
	MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* ___awaiter_3;
};

// WaitForUpdate/MainThreadAwaiter
struct MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71  : public RuntimeObject
{
	// System.Action WaitForUpdate/MainThreadAwaiter::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_0;
	// System.Boolean WaitForUpdate/MainThreadAwaiter::<IsCompleted>k__BackingField
	bool ___U3CIsCompletedU3Ek__BackingField_1;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// WaitForUpdate
struct WaitForUpdate_t7DD67F8046EEE88C1F07A439792BAEB2ED4EB468  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	// System.Boolean System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter::m_continueOnCapturedContext
	bool ___m_continueOnCapturedContext_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
struct ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
	int32_t ___m_continueOnCapturedContext_1;
};

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C 
{
	// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::m_configuredTaskAwaiter
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ___m_configuredTaskAwaiter_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_pinvoke
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_pinvoke ___m_configuredTaskAwaiter_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.ConfiguredTaskAwaitable
struct ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C_marshaled_com
{
	ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618_marshaled_com ___m_configuredTaskAwaiter_0;
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// NativeWebSocket.WebSocketException
struct WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525  : public Exception_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
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

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketInvalidArgumentException
struct WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979  : public WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525
{
};

// NativeWebSocket.WebSocketInvalidStateException
struct WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B  : public WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525
{
};

// NativeWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketUnexpectedException
struct WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06  : public WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525
{
};

// NativeWebSocket.WebSocketFactory/OnCloseCallback
struct OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketFactory/OnErrorCallback
struct OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketFactory/OnMessageCallback
struct OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketFactory/OnOpenCallback
struct OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// MainThreadUtil
struct MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>

// System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// UnityEngine.CustomYieldInstruction

// UnityEngine.CustomYieldInstruction

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0_StaticFields
{
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType1
	Type_t* ___s_cachedPreparedType1_1;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType2
	Type_t* ___s_cachedPreparedType2_2;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType3
	Type_t* ___s_cachedPreparedType3_3;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType4
	Type_t* ___s_cachedPreparedType4_4;
	// System.Type System.Threading.SynchronizationContext::s_cachedPreparedType5
	Type_t* ___s_cachedPreparedType5_5;
};

// System.Threading.SynchronizationContext

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// NativeWebSocket.WaitForBackgroundThread

// NativeWebSocket.WaitForBackgroundThread

// NativeWebSocket.WebSocket

// NativeWebSocket.WebSocket

// NativeWebSocket.WebSocketFactory
struct WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket> NativeWebSocket.WebSocketFactory::instances
	Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142* ___instances_0;
	// System.Boolean NativeWebSocket.WebSocketFactory::isInitialized
	bool ___isInitialized_1;
};

// NativeWebSocket.WebSocketFactory

// NativeWebSocket.WebSocketHelpers

// NativeWebSocket.WebSocketHelpers

// MainThreadUtil/<>c__DisplayClass9_0

// MainThreadUtil/<>c__DisplayClass9_0

// NativeWebSocket.WaitForBackgroundThread/<>c
struct U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_StaticFields
{
	// NativeWebSocket.WaitForBackgroundThread/<>c NativeWebSocket.WaitForBackgroundThread/<>c::<>9
	U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9* ___U3CU3E9_0;
	// System.Action NativeWebSocket.WaitForBackgroundThread/<>c::<>9__0_0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3E9__0_0_1;
};

// NativeWebSocket.WaitForBackgroundThread/<>c

// WaitForUpdate/<CoroutineWrapper>d__4

// WaitForUpdate/<CoroutineWrapper>d__4

// WaitForUpdate/MainThreadAwaiter

// WaitForUpdate/MainThreadAwaiter

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Void

// System.Void

// WaitForUpdate

// WaitForUpdate

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable

// System.Runtime.CompilerServices.ConfiguredTaskAwaitable

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// NativeWebSocket.WebSocketException

// NativeWebSocket.WebSocketException

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// System.NotSupportedException

// System.NotSupportedException

// System.Threading.SendOrPostCallback

// System.Threading.SendOrPostCallback

// NativeWebSocket.WebSocketCloseEventHandler

// NativeWebSocket.WebSocketCloseEventHandler

// NativeWebSocket.WebSocketErrorEventHandler

// NativeWebSocket.WebSocketErrorEventHandler

// NativeWebSocket.WebSocketInvalidArgumentException

// NativeWebSocket.WebSocketInvalidArgumentException

// NativeWebSocket.WebSocketInvalidStateException

// NativeWebSocket.WebSocketInvalidStateException

// NativeWebSocket.WebSocketMessageEventHandler

// NativeWebSocket.WebSocketMessageEventHandler

// NativeWebSocket.WebSocketOpenEventHandler

// NativeWebSocket.WebSocketOpenEventHandler

// NativeWebSocket.WebSocketUnexpectedException

// NativeWebSocket.WebSocketUnexpectedException

// NativeWebSocket.WebSocketFactory/OnCloseCallback

// NativeWebSocket.WebSocketFactory/OnCloseCallback

// NativeWebSocket.WebSocketFactory/OnErrorCallback

// NativeWebSocket.WebSocketFactory/OnErrorCallback

// NativeWebSocket.WebSocketFactory/OnMessageCallback

// NativeWebSocket.WebSocketFactory/OnMessageCallback

// NativeWebSocket.WebSocketFactory/OnOpenCallback

// NativeWebSocket.WebSocketFactory/OnOpenCallback

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// MainThreadUtil
struct MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields
{
	// MainThreadUtil MainThreadUtil::<Instance>k__BackingField
	MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* ___U3CInstanceU3Ek__BackingField_4;
	// System.Threading.SynchronizationContext MainThreadUtil::<synchronizationContext>k__BackingField
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___U3CsynchronizationContextU3Ek__BackingField_5;
};

// MainThreadUtil
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

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


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<MainThreadUtil>()
inline MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* GameObject_AddComponent_TisMainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_m92E71D16AF61352A6E7148033389DE22ACB6CE74 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void MainThreadUtil::set_Instance(MainThreadUtil)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_Instance_mCC9E86FB5D6CA9E9765DA15CEAC40A2097FA7B1D_inline (MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* ___0_value, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82 (const RuntimeMethod* method) ;
// System.Void MainThreadUtil::set_synchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_synchronizationContext_mCAAE2E112A6B05340E0642270FEBAA1D1912E5F7_inline (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___0_value, const RuntimeMethod* method) ;
// System.Void MainThreadUtil/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mB06DBF3AB8930EE0AB977D79A03FC4D95CF378C1 (U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5* __this, const RuntimeMethod* method) ;
// System.Threading.SynchronizationContext MainThreadUtil::get_synchronizationContext()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* MainThreadUtil_get_synchronizationContext_m2E8C4435E5F339E3F95FB164BFF66EAF654ED43B_inline (const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// MainThreadUtil MainThreadUtil::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* MainThreadUtil_get_Instance_mACAAECA4BF768341AD32A92592C6970ED302C4D2_inline (const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void WaitForUpdate/MainThreadAwaiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter__ctor_m3540C6B9BCACE777A12635C545A3CC2A294E757A (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator WaitForUpdate::CoroutineWrapper(System.Collections.IEnumerator,WaitForUpdate/MainThreadAwaiter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitForUpdate_CoroutineWrapper_m11E499E7DE7F929488E0AAC0F2307E6A45A54EB7 (RuntimeObject* ___0_theWorker, MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* ___1_awaiter, const RuntimeMethod* method) ;
// System.Void MainThreadUtil::Run(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Run_m8FB282D6410D1AB9BDBF301FE5457B77B5A2F496 (RuntimeObject* ___0_waitForUpdate, const RuntimeMethod* method) ;
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4__ctor_mFCB32C22F75BF38ADEE0D6D437115B22C5C6A495 (U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50 (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* __this, const RuntimeMethod* method) ;
// System.Void WaitForUpdate/MainThreadAwaiter::set_IsCompleted(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadAwaiter_set_IsCompleted_m2CC67562B58AED84A4D52BCB2F848C33414355FF_inline (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void WaitForUpdate/MainThreadAwaiter::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_Complete_mC13A5BC24DB6EB6DE1A605A5BFBD634969A0F4FC (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.Boolean System.Enum::IsDefined(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28 (Type_t* ___0_enumType, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_mC5A752D3BD5F838A648F5378A95EF97C0BEBB542 (WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_mA6FD2235780137ABE39891FAB0B23BD059FD438B (WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_m46EB1E930E8BC5B9E4E42594C205D876A26C1C7C (WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m157EADEEBE6A00DC1EFCB69566CECD6C03A249C0 (WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* __this, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mEE531950700010B746626D9EC8055577FE09B7C8 (WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mD588369E6718B3CF063B52BF1DF124C03E623C5B (WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable System.Threading.Tasks.Task::ConfigureAwait(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, bool ___0_continueOnCapturedContext, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter System.Runtime.CompilerServices.ConfiguredTaskAwaitable::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3B0196104B567545C8C9E67C81D37C8CCDC57F5F (U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketFactory::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_Initialize_m0CF63934FE3DEA082A2BAFFC1EEE3888DDB9FCE1 (const RuntimeMethod* method) ;
// System.Int32 NativeWebSocket.WebSocketFactory::WebSocketAllocate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketFactory_WebSocketAllocate_m554581F8877B5CA4451EE14944BA0DF5236ACD81 (String_t* ___0_url, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>::Add(TKey,TValue)
inline void Dictionary_2_Add_mB7F5F3C8827A6593C6AF6E2BDF4A2DA302F080E3 (Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142* __this, int32_t ___0_key, WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142*, int32_t, WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F*, const RuntimeMethod*))Dictionary_2_Add_mAF1EF7DA16BD70E252EA5C4B0F74DE519A02CBCD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Int32 NativeWebSocket.WebSocketFactory::WebSocketAddSubProtocol(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketFactory_WebSocketAddSubProtocol_m004542304C1A6D93EC5FAEBE772EDD091A6758CA (int32_t ___0_instanceId, String_t* ___1_subprotocol, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketFactory::HandleInstanceDestroy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_HandleInstanceDestroy_m9B8BB265FF330C94655B183141CB749FEF82C475 (int32_t ___0_instanceId, const RuntimeMethod* method) ;
// System.Int32 NativeWebSocket.WebSocket::WebSocketConnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketConnect_m789BE8E73E3F7172106306042BC7909719786BDA (int32_t ___0_instanceId, const RuntimeMethod* method) ;
// NativeWebSocket.WebSocketException NativeWebSocket.WebSocketHelpers::GetErrorMessageFromCode(System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* WebSocketHelpers_GetErrorMessageFromCode_m79662BAFD5D32C7F8652DF7FE8619344D7DAD5EB (int32_t ___0_errorCode, Exception_t* ___1_inner, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) ;
// NativeWebSocket.WebSocketState NativeWebSocket.WebSocket::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_get_State_m9787DE3CBD95685151F66BAA37CF2817F4CF54DD (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Close(NativeWebSocket.WebSocketCloseCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Close_m5E661C600C35E9DAC15128D52843D1C5CD2FB9C9 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, int32_t ___0_code, String_t* ___1_reason, const RuntimeMethod* method) ;
// System.Int32 NativeWebSocket.WebSocket::WebSocketClose(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketClose_mA23DEFD9273EFD23D01A0284BA44F544E772F51A (int32_t ___0_instanceId, int32_t ___1_code, String_t* ___2_reason, const RuntimeMethod* method) ;
// System.Int32 NativeWebSocket.WebSocket::WebSocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketSend_m827AAAB243CEBA845ED7082A1213388B24C68713 (int32_t ___0_instanceId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_dataPtr, int32_t ___2_dataLength, const RuntimeMethod* method) ;
// System.Int32 NativeWebSocket.WebSocket::WebSocketSendText(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketSendText_mDD80F133317E0D9C2E89FF455257DEBC1906FDF9 (int32_t ___0_instanceId, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Int32 NativeWebSocket.WebSocket::WebSocketGetState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketGetState_m05F35D93725E0D0BDB1ECAE532930A7152F214D8 (int32_t ___0_instanceId, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketOpenEventHandler::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_inline (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketMessageEventHandler::Invoke(System.Byte[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_inline (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketErrorEventHandler::Invoke(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_inline (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, const RuntimeMethod* method) ;
// NativeWebSocket.WebSocketCloseCode NativeWebSocket.WebSocketHelpers::ParseCloseCodeEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketHelpers_ParseCloseCodeEnum_m836B8A2B93FCA3807BA213AF89C6DDA82FBEA49C (int32_t ___0_closeCode, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketCloseEventHandler::Invoke(NativeWebSocket.WebSocketCloseCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_inline (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnOpenEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnOpenEvent_m15718BB4A7518F092674DFD0E6ED5C3D69DF392C (int32_t ___0_instanceId, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnMessageEvent(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnMessageEvent_m459231DE0BD80E06158A78CED322C7B274BC1CF7 (int32_t ___0_instanceId, intptr_t ___1_msgPtr, int32_t ___2_msgSize, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnErrorEvent(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnErrorEvent_m224C967DBEB014A9ED73B06636E97A812F3E3BF4 (int32_t ___0_instanceId, intptr_t ___1_errorPtr, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnCloseEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnCloseEvent_mE517E2DE4CA909A77FC7BFDB411C2D7856697FEB (int32_t ___0_instanceId, int32_t ___1_closeCode, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketFactory/OnOpenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback__ctor_m5B2F4550F9DB21B8999622AA5F194154D369261C (OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnOpen(NativeWebSocket.WebSocketFactory/OnOpenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnOpen_m665F0476036CA1D15E4D276EC19BF581BA85C391 (OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C* ___0_callback, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketFactory/OnMessageCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback__ctor_m29BB2FB901D57457E44D659270CCB9C20BD5A096 (OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnMessage(NativeWebSocket.WebSocketFactory/OnMessageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnMessage_mC9147E41B3081311DC72D94D1924E3007C588E6F (OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD* ___0_callback, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketFactory/OnErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback__ctor_mAA37FB508C376C2A0E28068D81BF83704F670773 (OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnError(NativeWebSocket.WebSocketFactory/OnErrorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnError_m3B656ED0FA3DBF909174D89AC22DCCD2620DFDB6 (OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F* ___0_callback, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketFactory/OnCloseCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback__ctor_mCB063C7DAD09AD382E5B4EE62D3E6DC96A2BF875 (OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnClose(NativeWebSocket.WebSocketFactory/OnCloseCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnClose_mCF6C82CBACDC177C5850B168F1D42F6D2E1A45E6 (OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B* ___0_callback, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>::Remove(TKey)
inline bool Dictionary_2_Remove_m8ED9A6608A684953641E661481D65D9D176491CF (Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142*, int32_t, const RuntimeMethod*))Dictionary_2_Remove_m12BAB2F82E34CAA21A7245AB61E48F106340C1A4_gshared)(__this, ___0_key, method);
}
// System.Void NativeWebSocket.WebSocketFactory::WebSocketFree(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketFree_m2B4996A0201004F41EE258EA75CC21605D05B18C (int32_t ___0_instanceId, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m52F7996E0D29362376BECB65034208A045BFC2A0 (Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142* __this, int32_t ___0_key, WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142*, int32_t, WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void NativeWebSocket.WebSocket::DelegateOnOpenEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnOpenEvent_m2EA97A153CF99128B547E4113904806C3DA2B0C0 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.Marshal::Copy(System.IntPtr,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77 (intptr_t ___0_source, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_destination, int32_t ___2_startIndex, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::DelegateOnMessageEvent(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnMessageEvent_m0B68D20A87E6621C9213DF40C0D8AC45286BED68 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.String System.Runtime.InteropServices.Marshal::PtrToStringAuto(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Marshal_PtrToStringAuto_m163B3E46325675C58A42EB0C5C36B950DD9D1275 (intptr_t ___0_ptr, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::DelegateOnErrorEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnErrorEvent_mE9E72F7D4B177C6312966C94035B37113F7BFDE5 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, String_t* ___0_errorMsg, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::DelegateOnCloseEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnCloseEvent_mA3F2B7AA5CEB7335B276AA5A412F608E2A344076 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, int32_t ___0_closeCode, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mE82FA607D6E3E45BA219738196DA152651677B24 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, String_t* ___0_url, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___1_headers, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,NativeWebSocket.WebSocket>::.ctor()
inline void Dictionary_2__ctor_m98266C8DDBBE11FE1E079E5D87ABF8F983AFCBEB (Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketConnect(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketClose(int32_t, int32_t, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketSend(int32_t, uint8_t*, int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketSendText(int32_t, char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketGetState(int32_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketAllocate(char*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL WebSocketAddSubProtocol(int32_t, char*);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketFree(int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnOpen(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnMessage(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnError(Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL WebSocketSetOnClose(Il2CppMethodPointer);
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
// MainThreadUtil MainThreadUtil::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* MainThreadUtil_get_Instance_mACAAECA4BF768341AD32A92592C6970ED302C4D2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* L_0 = ((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void MainThreadUtil::set_Instance(MainThreadUtil)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_set_Instance_mCC9E86FB5D6CA9E9765DA15CEAC40A2097FA7B1D (MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* L_0 = ___0_value;
		((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Threading.SynchronizationContext MainThreadUtil::get_synchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* MainThreadUtil_get_synchronizationContext_m2E8C4435E5F339E3F95FB164BFF66EAF654ED43B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CsynchronizationContextU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void MainThreadUtil::set_synchronizationContext(System.Threading.SynchronizationContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_set_synchronizationContext_mCAAE2E112A6B05340E0642270FEBAA1D1912E5F7 (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ___0_value;
		((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CsynchronizationContextU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CsynchronizationContextU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void MainThreadUtil::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Setup_m8814A6CE6BF068CF3511EFE9AD1EB94267EC6219 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisMainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_m92E71D16AF61352A6E7148033389DE22ACB6CE74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral479625953694FC0583C3D8F93F44332026972846);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instance = new GameObject("MainThreadUtil")
		//     .AddComponent<MainThreadUtil>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral479625953694FC0583C3D8F93F44332026972846, NULL);
		MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* L_1;
		L_1 = GameObject_AddComponent_TisMainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_m92E71D16AF61352A6E7148033389DE22ACB6CE74(L_0, GameObject_AddComponent_TisMainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_m92E71D16AF61352A6E7148033389DE22ACB6CE74_RuntimeMethod_var);
		MainThreadUtil_set_Instance_mCC9E86FB5D6CA9E9765DA15CEAC40A2097FA7B1D_inline(L_1, NULL);
		// synchronizationContext = SynchronizationContext.Current;
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_2;
		L_2 = SynchronizationContext_get_Current_m8DE6D3020745B7955249A2470A23EC0ECBB02A82(NULL);
		MainThreadUtil_set_synchronizationContext_mCAAE2E112A6B05340E0642270FEBAA1D1912E5F7_inline(L_2, NULL);
		// }
		return;
	}
}
// System.Void MainThreadUtil::Run(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Run_m8FB282D6410D1AB9BDBF301FE5457B77B5A2F496 (RuntimeObject* ___0_waitForUpdate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_m0F3B58C434FCB0B603320CFBF1E7FF116BC3DE56_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5* L_0 = (U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass9_0__ctor_mB06DBF3AB8930EE0AB977D79A03FC4D95CF378C1(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5* L_1 = V_0;
		RuntimeObject* L_2 = ___0_waitForUpdate;
		L_1->___waitForUpdate_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___waitForUpdate_0), (void*)L_2);
		// synchronizationContext.Post(_ => Instance.StartCoroutine(
		//             waitForUpdate), null);
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_3;
		L_3 = MainThreadUtil_get_synchronizationContext_m2E8C4435E5F339E3F95FB164BFF66EAF654ED43B_inline(NULL);
		U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5* L_4 = V_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_5 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_m0F3B58C434FCB0B603320CFBF1E7FF116BC3DE56_RuntimeMethod_var), NULL);
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, L_3, L_5, NULL);
		// }
		return;
	}
}
// System.Void MainThreadUtil::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil_Awake_mEF6BB0CDCBD7D36EE831BB64866819ECF768A788 (MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gameObject.hideFlags = HideFlags.HideAndDontSave;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_set_hideFlags_mACB8BFC903FB3B01BBD427753E791BF28B5E33D4(L_0, ((int32_t)61), NULL);
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_1, NULL);
		// }
		return;
	}
}
// System.Void MainThreadUtil::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadUtil__ctor_m6CB94A0F19A70BBE196A8EA7524BBB2E1CC602F8 (MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* __this, const RuntimeMethod* method) 
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
// System.Void MainThreadUtil/<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mB06DBF3AB8930EE0AB977D79A03FC4D95CF378C1 (U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void MainThreadUtil/<>c__DisplayClass9_0::<Run>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0_U3CRunU3Eb__0_m0F3B58C434FCB0B603320CFBF1E7FF116BC3DE56 (U3CU3Ec__DisplayClass9_0_t37DFDC241ED8D93E01A393281745D29222F797C5* __this, RuntimeObject* ___0__, const RuntimeMethod* method) 
{
	{
		// synchronizationContext.Post(_ => Instance.StartCoroutine(
		//             waitForUpdate), null);
		MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* L_0;
		L_0 = MainThreadUtil_get_Instance_mACAAECA4BF768341AD32A92592C6970ED302C4D2_inline(NULL);
		RuntimeObject* L_1 = __this->___waitForUpdate_0;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_1, NULL);
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
// System.Boolean WaitForUpdate::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaitForUpdate_get_keepWaiting_m480490B3002E6F4BE3ACB3DB39E92097CF3B4B01 (WaitForUpdate_t7DD67F8046EEE88C1F07A439792BAEB2ED4EB468* __this, const RuntimeMethod* method) 
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// WaitForUpdate/MainThreadAwaiter WaitForUpdate::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* WaitForUpdate_GetAwaiter_m0AFC1E5EEBB62B1D5A4C7518105E62D19C3A5E09 (WaitForUpdate_t7DD67F8046EEE88C1F07A439792BAEB2ED4EB468* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* V_0 = NULL;
	{
		// var awaiter = new MainThreadAwaiter();
		MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* L_0 = (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71*)il2cpp_codegen_object_new(MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71_il2cpp_TypeInfo_var);
		MainThreadAwaiter__ctor_m3540C6B9BCACE777A12635C545A3CC2A294E757A(L_0, NULL);
		V_0 = L_0;
		// MainThreadUtil.Run(CoroutineWrapper(this, awaiter));
		MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* L_1 = V_0;
		RuntimeObject* L_2;
		L_2 = WaitForUpdate_CoroutineWrapper_m11E499E7DE7F929488E0AAC0F2307E6A45A54EB7(__this, L_1, NULL);
		MainThreadUtil_Run_m8FB282D6410D1AB9BDBF301FE5457B77B5A2F496(L_2, NULL);
		// return awaiter;
		MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* L_3 = V_0;
		return L_3;
	}
}
// System.Collections.IEnumerator WaitForUpdate::CoroutineWrapper(System.Collections.IEnumerator,WaitForUpdate/MainThreadAwaiter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WaitForUpdate_CoroutineWrapper_m11E499E7DE7F929488E0AAC0F2307E6A45A54EB7 (RuntimeObject* ___0_theWorker, MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* ___1_awaiter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* L_0 = (U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF*)il2cpp_codegen_object_new(U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF_il2cpp_TypeInfo_var);
		U3CCoroutineWrapperU3Ed__4__ctor_mFCB32C22F75BF38ADEE0D6D437115B22C5C6A495(L_0, 0, NULL);
		U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* L_1 = L_0;
		RuntimeObject* L_2 = ___0_theWorker;
		L_1->___theWorker_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___theWorker_2), (void*)L_2);
		U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* L_3 = L_1;
		MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* L_4 = ___1_awaiter;
		L_3->___awaiter_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___awaiter_3), (void*)L_4);
		return L_3;
	}
}
// System.Void WaitForUpdate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForUpdate__ctor_mFF05044547F6948426D9D97EE983E27CA0779A72 (WaitForUpdate_t7DD67F8046EEE88C1F07A439792BAEB2ED4EB468* __this, const RuntimeMethod* method) 
{
	{
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
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
// System.Boolean WaitForUpdate/MainThreadAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainThreadAwaiter_get_IsCompleted_mAABDD292AFFB6638820C22103692B70BBB7AD9F0 (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; set; }
		bool L_0 = __this->___U3CIsCompletedU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::set_IsCompleted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_set_IsCompleted_m2CC67562B58AED84A4D52BCB2F848C33414355FF (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CIsCompletedU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_GetResult_mE7D7A67486FC52CB3D382089C1449DAC4E511F1E (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, const RuntimeMethod* method) 
{
	{
		// public void GetResult() { }
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_Complete_mC13A5BC24DB6EB6DE1A605A5BFBD634969A0F4FC (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// IsCompleted = true;
		MainThreadAwaiter_set_IsCompleted_m2CC67562B58AED84A4D52BCB2F848C33414355FF_inline(__this, (bool)1, NULL);
		// continuation?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___continuation_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::System.Runtime.CompilerServices.INotifyCompletion.OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter_System_Runtime_CompilerServices_INotifyCompletion_OnCompleted_mBDF459C9C554139C6387EEF57F7208FAC3F53C5D (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	{
		// this.continuation = continuation;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_continuation;
		__this->___continuation_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___continuation_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void WaitForUpdate/MainThreadAwaiter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadAwaiter__ctor_m3540C6B9BCACE777A12635C545A3CC2A294E757A (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4__ctor_mFCB32C22F75BF38ADEE0D6D437115B22C5C6A495 (U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4_System_IDisposable_Dispose_m4E2553F7993D8E896A9A9D39DB84FE14B3B3885A (U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean WaitForUpdate/<CoroutineWrapper>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCoroutineWrapperU3Ed__4_MoveNext_mECC93C8D079EA70C248B6C6D3430CFB03A8D5BC7 (U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return theWorker;
		RuntimeObject* L_3 = __this->___theWorker_2;
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_002c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// awaiter.Complete();
		MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* L_4 = __this->___awaiter_3;
		MainThreadAwaiter_Complete_mC13A5BC24DB6EB6DE1A605A5BFBD634969A0F4FC(L_4, NULL);
		// }
		return (bool)0;
	}
}
// System.Object WaitForUpdate/<CoroutineWrapper>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoroutineWrapperU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5D385EA010E507ECC7562AEF0B8E412C1CF41896 (U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void WaitForUpdate/<CoroutineWrapper>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m3D82EC56DC7C2A43849959484D39F01B7857B5A3 (U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_Reset_m3D82EC56DC7C2A43849959484D39F01B7857B5A3_RuntimeMethod_var)));
	}
}
// System.Object WaitForUpdate/<CoroutineWrapper>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCoroutineWrapperU3Ed__4_System_Collections_IEnumerator_get_Current_mADB1E2B7913828E96AED6E88B320052BA26B2E0C (U3CCoroutineWrapperU3Ed__4_t04F3022C44B89AF110A456EB180C1164575891BF* __this, const RuntimeMethod* method) 
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
void WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_Multicast(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* currentDelegate = reinterpret_cast<WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_OpenInst(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_OpenStatic(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_OpenStaticInvoker(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
void WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_ClosedStaticInvoker(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler__ctor_m9C0F1F9240E959710FE2E7F9F1F97AF5D3D440AF (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_Multicast;
}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.WebSocketOpenEventHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketOpenEventHandler_BeginInvoke_mEA31CB521D6AC0C6BEDF2715BDF7292E51E7B5AF (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void NativeWebSocket.WebSocketOpenEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_EndInvoke_m2FE99EBFFE5ABE6192E1928A42471BEF3F9AAA43 (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_Multicast(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* currentDelegate = reinterpret_cast<WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_data, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_OpenInst(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_data, method);
}
void WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_OpenStatic(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_data, method);
}
void WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_OpenStaticInvoker(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method)
{
	InvokerActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_data);
}
void WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_ClosedStaticInvoker(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_data);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_data' to native representation
	uint8_t* ____0_data_marshaled = NULL;
	if (___0_data != NULL)
	{
		____0_data_marshaled = reinterpret_cast<uint8_t*>((___0_data)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____0_data_marshaled);

}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler__ctor_m15BC0672C78EDC192A2ECACCD3B9762149A5A7A8 (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_Multicast;
}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350 (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_data, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.WebSocketMessageEventHandler::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketMessageEventHandler_BeginInvoke_m93F2144C9CCDF9658BC703DBBA00D94F6FA181ED (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_data;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeWebSocket.WebSocketMessageEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_EndInvoke_m9BE9B6B8580AD8283FD29A5FD1430C71AD4C8463 (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_Multicast(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* currentDelegate = reinterpret_cast<WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_errorMsg, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_OpenInst(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_errorMsg, method);
}
void WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_OpenStatic(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_errorMsg, method);
}
void WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_OpenStaticInvoker(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, const RuntimeMethod* method)
{
	InvokerActionInvoker1< String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_errorMsg);
}
void WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_ClosedStaticInvoker(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, String_t* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_errorMsg);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3 (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Marshaling of parameter '___0_errorMsg' to native representation
	char* ____0_errorMsg_marshaled = NULL;
	____0_errorMsg_marshaled = il2cpp_codegen_marshal_string(___0_errorMsg);

	// Native function invocation
	il2cppPInvokeFunc(____0_errorMsg_marshaled);

	// Marshaling cleanup of parameter '___0_errorMsg' native representation
	il2cpp_codegen_marshal_free(____0_errorMsg_marshaled);
	____0_errorMsg_marshaled = NULL;

}
// System.Void NativeWebSocket.WebSocketErrorEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler__ctor_m57F2C1BA800F30F50FD411F8461AAA24D40FBAF9 (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = __this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_Multicast;
}
// System.Void NativeWebSocket.WebSocketErrorEventHandler::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50 (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_errorMsg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.WebSocketErrorEventHandler::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketErrorEventHandler_BeginInvoke_m11A21D70CBFADF4206B3DD7BB1A34C8C83B2DF47 (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___0_errorMsg;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeWebSocket.WebSocketErrorEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_EndInvoke_m3E7CE2E3744A74B8B46ABB6EDED79AB87D0079CD (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_Multicast(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* currentDelegate = reinterpret_cast<WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_closeCode, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_OpenInst(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_closeCode, method);
}
void WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_OpenStatic(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_closeCode, method);
}
void WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_OpenStaticInvoker(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_closeCode);
}
void WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_ClosedStaticInvoker(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_closeCode);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466 (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_closeCode);

}
// System.Void NativeWebSocket.WebSocketCloseEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler__ctor_mCF39CA9F24C0F9804D5B6E51EF946CEB60142764 (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_Multicast;
}
// System.Void NativeWebSocket.WebSocketCloseEventHandler::Invoke(NativeWebSocket.WebSocketCloseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_closeCode, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.WebSocketCloseEventHandler::BeginInvoke(NativeWebSocket.WebSocketCloseCode,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WebSocketCloseEventHandler_BeginInvoke_mD3B7F3CABD0626BE1DA93B329A21A1325ACC718B (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseCode_t361F9B1DC4140998BF9D7D179DA50DF3CDA9A3F5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(WebSocketCloseCode_t361F9B1DC4140998BF9D7D179DA50DF3CDA9A3F5_il2cpp_TypeInfo_var, &___0_closeCode);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeWebSocket.WebSocketCloseEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_EndInvoke_m56CC8B8002B2A3C71BEC88F0419370914DB66D2B (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// NativeWebSocket.WebSocketCloseCode NativeWebSocket.WebSocketHelpers::ParseCloseCodeEnum(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketHelpers_ParseCloseCodeEnum_m836B8A2B93FCA3807BA213AF89C6DDA82FBEA49C (int32_t ___0_closeCode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseCode_t361F9B1DC4140998BF9D7D179DA50DF3CDA9A3F5_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (WebSocketCloseCode.IsDefined(typeof(WebSocketCloseCode), closeCode))
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (WebSocketCloseCode_t361F9B1DC4140998BF9D7D179DA50DF3CDA9A3F5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		int32_t L_2 = ___0_closeCode;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_3);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Enum_IsDefined_m1C9A0C4F54B0538351585FF563A01091A6FE2F28(L_1, L_4, NULL);
		if (!L_5)
		{
			goto IL_0019;
		}
	}
	{
		// return (WebSocketCloseCode)closeCode;
		int32_t L_6 = ___0_closeCode;
		return (int32_t)(L_6);
	}

IL_0019:
	{
		// return WebSocketCloseCode.Undefined;
		return (int32_t)(((int32_t)1004));
	}
}
// NativeWebSocket.WebSocketException NativeWebSocket.WebSocketHelpers::GetErrorMessageFromCode(System.Int32,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* WebSocketHelpers_GetErrorMessageFromCode_m79662BAFD5D32C7F8652DF7FE8619344D7DAD5EB (int32_t ___0_errorCode, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1092566FAE22ADAF2E6C0CD48101A26FFB87370B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1742337439BBC66D76773857596C8E79F12FE929);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral462D595BAC3CBFD090FDF07068A9535396E9CB69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral482C4EF014C145C7E8B1E7898B254DE910B5A52A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3CE916CA42882DCFA8FDD2A4BD122B2CCBB8612);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB84CE3C86E018FA7FB2A0310EDFEF321F5E2BC48);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD75065A3883D75C7E20825442A96EDBA6A07033C);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_errorCode;
		switch (((int32_t)il2cpp_codegen_subtract(L_0, ((int32_t)-7))))
		{
			case 0:
			{
				goto IL_006f;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_004b;
			}
			case 4:
			{
				goto IL_003f;
			}
			case 5:
			{
				goto IL_0033;
			}
			case 6:
			{
				goto IL_0027;
			}
		}
	}
	{
		goto IL_007b;
	}

IL_0027:
	{
		// return new WebSocketUnexpectedException("WebSocket instance not found.", inner);
		Exception_t* L_1 = ___1_inner;
		WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06* L_2 = (WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06*)il2cpp_codegen_object_new(WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06_il2cpp_TypeInfo_var);
		WebSocketUnexpectedException__ctor_mC5A752D3BD5F838A648F5378A95EF97C0BEBB542(L_2, _stringLiteral1092566FAE22ADAF2E6C0CD48101A26FFB87370B, L_1, NULL);
		return L_2;
	}

IL_0033:
	{
		// return new WebSocketInvalidStateException("WebSocket is already connected or in connecting state.", inner);
		Exception_t* L_3 = ___1_inner;
		WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B* L_4 = (WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B*)il2cpp_codegen_object_new(WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_mA6FD2235780137ABE39891FAB0B23BD059FD438B(L_4, _stringLiteralB84CE3C86E018FA7FB2A0310EDFEF321F5E2BC48, L_3, NULL);
		return L_4;
	}

IL_003f:
	{
		// return new WebSocketInvalidStateException("WebSocket is not connected.", inner);
		Exception_t* L_5 = ___1_inner;
		WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B* L_6 = (WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B*)il2cpp_codegen_object_new(WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_mA6FD2235780137ABE39891FAB0B23BD059FD438B(L_6, _stringLiteralA3CE916CA42882DCFA8FDD2A4BD122B2CCBB8612, L_5, NULL);
		return L_6;
	}

IL_004b:
	{
		// return new WebSocketInvalidStateException("WebSocket is already closing.", inner);
		Exception_t* L_7 = ___1_inner;
		WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B* L_8 = (WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B*)il2cpp_codegen_object_new(WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_mA6FD2235780137ABE39891FAB0B23BD059FD438B(L_8, _stringLiteral1742337439BBC66D76773857596C8E79F12FE929, L_7, NULL);
		return L_8;
	}

IL_0057:
	{
		// return new WebSocketInvalidStateException("WebSocket is already closed.", inner);
		Exception_t* L_9 = ___1_inner;
		WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B* L_10 = (WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B*)il2cpp_codegen_object_new(WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_mA6FD2235780137ABE39891FAB0B23BD059FD438B(L_10, _stringLiteralD75065A3883D75C7E20825442A96EDBA6A07033C, L_9, NULL);
		return L_10;
	}

IL_0063:
	{
		// return new WebSocketInvalidStateException("WebSocket is not in open state.", inner);
		Exception_t* L_11 = ___1_inner;
		WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B* L_12 = (WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B*)il2cpp_codegen_object_new(WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B_il2cpp_TypeInfo_var);
		WebSocketInvalidStateException__ctor_mA6FD2235780137ABE39891FAB0B23BD059FD438B(L_12, _stringLiteral482C4EF014C145C7E8B1E7898B254DE910B5A52A, L_11, NULL);
		return L_12;
	}

IL_006f:
	{
		// return new WebSocketInvalidArgumentException("Cannot close WebSocket. An invalid code was specified or reason is too long.", inner);
		Exception_t* L_13 = ___1_inner;
		WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979* L_14 = (WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979*)il2cpp_codegen_object_new(WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979_il2cpp_TypeInfo_var);
		WebSocketInvalidArgumentException__ctor_m46EB1E930E8BC5B9E4E42594C205D876A26C1C7C(L_14, _stringLiteral462D595BAC3CBFD090FDF07068A9535396E9CB69, L_13, NULL);
		return L_14;
	}

IL_007b:
	{
		// return new WebSocketUnexpectedException("Unknown error.", inner);
		Exception_t* L_15 = ___1_inner;
		WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06* L_16 = (WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06*)il2cpp_codegen_object_new(WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06_il2cpp_TypeInfo_var);
		WebSocketUnexpectedException__ctor_mC5A752D3BD5F838A648F5378A95EF97C0BEBB542(L_16, _stringLiteral6555D619DF10C3DFF9961F8B3B6FE159188B6C7D, L_15, NULL);
		return L_16;
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
// System.Void NativeWebSocket.WebSocketException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_m157EADEEBE6A00DC1EFCB69566CECD6C03A249C0 (WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebSocketException() { }
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// public WebSocketException() { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mEE531950700010B746626D9EC8055577FE09B7C8 (WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebSocketException(string message) : base(message) { }
		String_t* L_0 = ___0_message;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		// public WebSocketException(string message) : base(message) { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketException__ctor_mD588369E6718B3CF063B52BF1DF124C03E623C5B (WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WebSocketException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_inner;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// public WebSocketException(string message, Exception inner) : base(message, inner) { }
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
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_m49EC20BE0F5BED5F23A5ADDE4054199310DB4B4D (WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06* __this, const RuntimeMethod* method) 
{
	{
		// public WebSocketUnexpectedException() { }
		WebSocketException__ctor_m157EADEEBE6A00DC1EFCB69566CECD6C03A249C0(__this, NULL);
		// public WebSocketUnexpectedException() { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_m880085532CEAF9A2ED0D623EFDF7AE279FC03E4F (WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public WebSocketUnexpectedException(string message) : base(message) { }
		String_t* L_0 = ___0_message;
		WebSocketException__ctor_mEE531950700010B746626D9EC8055577FE09B7C8(__this, L_0, NULL);
		// public WebSocketUnexpectedException(string message) : base(message) { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketUnexpectedException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketUnexpectedException__ctor_mC5A752D3BD5F838A648F5378A95EF97C0BEBB542 (WebSocketUnexpectedException_tED7F870DE27694DCE4A70C60270EFBE6692D3D06* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	{
		// public WebSocketUnexpectedException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_inner;
		WebSocketException__ctor_mD588369E6718B3CF063B52BF1DF124C03E623C5B(__this, L_0, L_1, NULL);
		// public WebSocketUnexpectedException(string message, Exception inner) : base(message, inner) { }
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
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_mFFE10926149E92DE51FFB0B026CCFA72DC096EB6 (WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979* __this, const RuntimeMethod* method) 
{
	{
		// public WebSocketInvalidArgumentException() { }
		WebSocketException__ctor_m157EADEEBE6A00DC1EFCB69566CECD6C03A249C0(__this, NULL);
		// public WebSocketInvalidArgumentException() { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_m8785E6A477242477FB69E4F7F6268D9D5ADC48DC (WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public WebSocketInvalidArgumentException(string message) : base(message) { }
		String_t* L_0 = ___0_message;
		WebSocketException__ctor_mEE531950700010B746626D9EC8055577FE09B7C8(__this, L_0, NULL);
		// public WebSocketInvalidArgumentException(string message) : base(message) { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidArgumentException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidArgumentException__ctor_m46EB1E930E8BC5B9E4E42594C205D876A26C1C7C (WebSocketInvalidArgumentException_t631EC274A299E7F6F8D4681FD54013754D0BD979* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	{
		// public WebSocketInvalidArgumentException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_inner;
		WebSocketException__ctor_mD588369E6718B3CF063B52BF1DF124C03E623C5B(__this, L_0, L_1, NULL);
		// public WebSocketInvalidArgumentException(string message, Exception inner) : base(message, inner) { }
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
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_m7054E83B2115F5B81C8FC991D97D856AAC88CBFB (WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B* __this, const RuntimeMethod* method) 
{
	{
		// public WebSocketInvalidStateException() { }
		WebSocketException__ctor_m157EADEEBE6A00DC1EFCB69566CECD6C03A249C0(__this, NULL);
		// public WebSocketInvalidStateException() { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_mBABAE6E35C4B57372A4F5AA8E82984C7C92FDBCC (WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// public WebSocketInvalidStateException(string message) : base(message) { }
		String_t* L_0 = ___0_message;
		WebSocketException__ctor_mEE531950700010B746626D9EC8055577FE09B7C8(__this, L_0, NULL);
		// public WebSocketInvalidStateException(string message) : base(message) { }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketInvalidStateException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketInvalidStateException__ctor_mA6FD2235780137ABE39891FAB0B23BD059FD438B (WebSocketInvalidStateException_t35DEDF27B3D1B1F9155ACFC6DCB96863CBA7739B* __this, String_t* ___0_message, Exception_t* ___1_inner, const RuntimeMethod* method) 
{
	{
		// public WebSocketInvalidStateException(string message, Exception inner) : base(message, inner) { }
		String_t* L_0 = ___0_message;
		Exception_t* L_1 = ___1_inner;
		WebSocketException__ctor_mD588369E6718B3CF063B52BF1DF124C03E623C5B(__this, L_0, L_1, NULL);
		// public WebSocketInvalidStateException(string message, Exception inner) : base(message, inner) { }
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
// System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter NativeWebSocket.WaitForBackgroundThread::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 WaitForBackgroundThread_GetAwaiter_m46658C23E3A73C971C6156466AF6645E1F1D85C8 (WaitForBackgroundThread_t78A4D0D429FC84A263F9E9D015498CA51B838E2F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetAwaiterU3Eb__0_0_mFDD0FD9389C71F771348ADE10DAA60AB7ECDD980_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// return Task.Run(() => { }).ConfigureAwait(false).GetAwaiter();
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ((U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var);
		U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9* L_2 = ((U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, L_2, (intptr_t)((void*)U3CU3Ec_U3CGetAwaiterU3Eb__0_0_mFDD0FD9389C71F771348ADE10DAA60AB7ECDD980_RuntimeMethod_var), NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = L_3;
		((U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var))->___U3CU3E9__0_0_1), (void*)L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = Task_Run_m03529F41B4EEF4AC57C3F110767A0E3AF599C853(G_B2_0, NULL);
		ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C L_6;
		L_6 = Task_ConfigureAwait_m0DD682B1D29B85067C993734C12E26554D6CBFF4(L_5, (bool)0, NULL);
		V_0 = L_6;
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_7;
		L_7 = ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline((&V_0), NULL);
		return L_7;
	}
}
// System.Void NativeWebSocket.WaitForBackgroundThread::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForBackgroundThread__ctor_m5FA299CF241DBDAD9413498751323F62D1D325FC (WaitForBackgroundThread_t78A4D0D429FC84A263F9E9D015498CA51B838E2F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mA16E073715862776C372EB8D0AAF7C4DBAD7F077 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9* L_0 = (U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9*)il2cpp_codegen_object_new(U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3B0196104B567545C8C9E67C81D37C8CCDC57F5F(L_0, NULL);
		((U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3B0196104B567545C8C9E67C81D37C8CCDC57F5F (U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeWebSocket.WaitForBackgroundThread/<>c::<GetAwaiter>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CGetAwaiterU3Eb__0_0_mFDD0FD9389C71F771348ADE10DAA60AB7ECDD980 (U3CU3Ec_tBEECE0D7CE67CAB64DCADDA21A4A7F5B50ABA7D9* __this, const RuntimeMethod* method) 
{
	{
		// return Task.Run(() => { }).ConfigureAwait(false).GetAwaiter();
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
// System.Int32 NativeWebSocket.WebSocket::WebSocketConnect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketConnect_m789BE8E73E3F7172106306042BC7909719786BDA (int32_t ___0_instanceId, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketConnect)(___0_instanceId);

	return returnValue;
}
// System.Int32 NativeWebSocket.WebSocket::WebSocketClose(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketClose_mA23DEFD9273EFD23D01A0284BA44F544E772F51A (int32_t ___0_instanceId, int32_t ___1_code, String_t* ___2_reason, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, int32_t, char*);

	// Marshaling of parameter '___2_reason' to native representation
	char* ____2_reason_marshaled = NULL;
	____2_reason_marshaled = il2cpp_codegen_marshal_string(___2_reason);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketClose)(___0_instanceId, ___1_code, ____2_reason_marshaled);

	// Marshaling cleanup of parameter '___2_reason' native representation
	il2cpp_codegen_marshal_free(____2_reason_marshaled);
	____2_reason_marshaled = NULL;

	return returnValue;
}
// System.Int32 NativeWebSocket.WebSocket::WebSocketSend(System.Int32,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketSend_m827AAAB243CEBA845ED7082A1213388B24C68713 (int32_t ___0_instanceId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_dataPtr, int32_t ___2_dataLength, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, uint8_t*, int32_t);

	// Marshaling of parameter '___1_dataPtr' to native representation
	uint8_t* ____1_dataPtr_marshaled = NULL;
	if (___1_dataPtr != NULL)
	{
		____1_dataPtr_marshaled = reinterpret_cast<uint8_t*>((___1_dataPtr)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketSend)(___0_instanceId, ____1_dataPtr_marshaled, ___2_dataLength);

	return returnValue;
}
// System.Int32 NativeWebSocket.WebSocket::WebSocketSendText(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketSendText_mDD80F133317E0D9C2E89FF455257DEBC1906FDF9 (int32_t ___0_instanceId, String_t* ___1_message, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);

	// Marshaling of parameter '___1_message' to native representation
	char* ____1_message_marshaled = NULL;
	____1_message_marshaled = il2cpp_codegen_marshal_string(___1_message);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketSendText)(___0_instanceId, ____1_message_marshaled);

	// Marshaling cleanup of parameter '___1_message' native representation
	il2cpp_codegen_marshal_free(____1_message_marshaled);
	____1_message_marshaled = NULL;

	return returnValue;
}
// System.Int32 NativeWebSocket.WebSocket::WebSocketGetState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_WebSocketGetState_m05F35D93725E0D0BDB1ECAE532930A7152F214D8 (int32_t ___0_instanceId, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketGetState)(___0_instanceId);

	return returnValue;
}
// System.Void NativeWebSocket.WebSocket::add_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_mE4848C3EB53A6CF346B790895D636D7A8BA4DDA3 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* V_0 = NULL;
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* V_1 = NULL;
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* V_2 = NULL;
	{
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_0 = __this->___OnOpen_1;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_1 = V_0;
		V_1 = L_1;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_2 = V_1;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*)CastclassSealed((RuntimeObject*)L_4, WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var));
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E** L_5 = (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E**)(&__this->___OnOpen_1);
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_6 = V_2;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_7 = V_1;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_9 = V_0;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*)L_9) == ((RuntimeObject*)(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnOpen_mD70BF7EE68490BB802CA3F20DC891F32CB8248AD (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* V_0 = NULL;
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* V_1 = NULL;
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* V_2 = NULL;
	{
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_0 = __this->___OnOpen_1;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_1 = V_0;
		V_1 = L_1;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_2 = V_1;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*)CastclassSealed((RuntimeObject*)L_4, WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var));
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E** L_5 = (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E**)(&__this->___OnOpen_1);
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_6 = V_2;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_7 = V_1;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_9 = V_0;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*)L_9) == ((RuntimeObject*)(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::add_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnMessage_mB2D438685DB29D57498A0AC6BEF756F5FEB0BDE5 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* V_0 = NULL;
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* V_1 = NULL;
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* V_2 = NULL;
	{
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_0 = __this->___OnMessage_2;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_1 = V_0;
		V_1 = L_1;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_2 = V_1;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*)CastclassSealed((RuntimeObject*)L_4, WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var));
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C** L_5 = (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C**)(&__this->___OnMessage_2);
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_6 = V_2;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_7 = V_1;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_9 = V_0;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*)L_9) == ((RuntimeObject*)(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnMessage_m4B642AAA23B71F53A5A2ADEC0872384C4917EB94 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* V_0 = NULL;
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* V_1 = NULL;
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* V_2 = NULL;
	{
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_0 = __this->___OnMessage_2;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_1 = V_0;
		V_1 = L_1;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_2 = V_1;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*)CastclassSealed((RuntimeObject*)L_4, WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var));
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C** L_5 = (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C**)(&__this->___OnMessage_2);
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_6 = V_2;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_7 = V_1;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_9 = V_0;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*)L_9) == ((RuntimeObject*)(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::add_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnError_mA10F34789A6C13F5AA64EC0F35D45ED4EDCDABA0 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* V_0 = NULL;
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* V_1 = NULL;
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* V_2 = NULL;
	{
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_0 = __this->___OnError_3;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_1 = V_0;
		V_1 = L_1;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_2 = V_1;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*)CastclassSealed((RuntimeObject*)L_4, WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var));
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3** L_5 = (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3**)(&__this->___OnError_3);
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_6 = V_2;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_7 = V_1;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_9 = V_0;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*)L_9) == ((RuntimeObject*)(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnError_m908C41B83BB34AFE942A97981C1C048B5C050AD7 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* V_0 = NULL;
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* V_1 = NULL;
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* V_2 = NULL;
	{
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_0 = __this->___OnError_3;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_1 = V_0;
		V_1 = L_1;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_2 = V_1;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*)CastclassSealed((RuntimeObject*)L_4, WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var));
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3** L_5 = (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3**)(&__this->___OnError_3);
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_6 = V_2;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_7 = V_1;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_9 = V_0;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*)L_9) == ((RuntimeObject*)(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::add_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_m5D0A672A02F5BF6252DA825D7AB7EFC1020C2B4A (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* V_0 = NULL;
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* V_1 = NULL;
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* V_2 = NULL;
	{
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_0 = __this->___OnClose_4;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_1 = V_0;
		V_1 = L_1;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_2 = V_1;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*)CastclassSealed((RuntimeObject*)L_4, WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var));
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466** L_5 = (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466**)(&__this->___OnClose_4);
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_6 = V_2;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_7 = V_1;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_9 = V_0;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*)L_9) == ((RuntimeObject*)(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::remove_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_remove_OnClose_m051BE16B74A02FA76B6B33E8E8AFBA7411F9177C (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* V_0 = NULL;
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* V_1 = NULL;
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* V_2 = NULL;
	{
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_0 = __this->___OnClose_4;
		V_0 = L_0;
	}

IL_0007:
	{
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_1 = V_0;
		V_1 = L_1;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_2 = V_1;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*)CastclassSealed((RuntimeObject*)L_4, WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var));
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466** L_5 = (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466**)(&__this->___OnClose_4);
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_6 = V_2;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_7 = V_1;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_8;
		L_8 = InterlockedCompareExchangeImpl<WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*>(L_5, L_6, L_7);
		V_0 = L_8;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_9 = V_0;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_10 = V_1;
		if ((!(((RuntimeObject*)(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*)L_9) == ((RuntimeObject*)(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mE82FA607D6E3E45BA219738196DA152651677B24 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, String_t* ___0_url, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___1_headers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB7F5F3C8827A6593C6AF6E2BDF4A2DA302F080E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public WebSocket (string url, Dictionary<string, string> headers = null) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (!WebSocketFactory.isInitialized) {
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		bool L_0 = ((WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var))->___isInitialized_1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// WebSocketFactory.Initialize ();
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		WebSocketFactory_Initialize_m0CF63934FE3DEA082A2BAFFC1EEE3888DDB9FCE1(NULL);
	}

IL_0012:
	{
		// int instanceId = WebSocketFactory.WebSocketAllocate (url);
		String_t* L_1 = ___0_url;
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = WebSocketFactory_WebSocketAllocate_m554581F8877B5CA4451EE14944BA0DF5236ACD81(L_1, NULL);
		V_0 = L_2;
		// WebSocketFactory.instances.Add (instanceId, this);
		Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142* L_3 = ((WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var))->___instances_0;
		int32_t L_4 = V_0;
		Dictionary_2_Add_mB7F5F3C8827A6593C6AF6E2BDF4A2DA302F080E3(L_3, L_4, __this, Dictionary_2_Add_mB7F5F3C8827A6593C6AF6E2BDF4A2DA302F080E3_RuntimeMethod_var);
		// this.instanceId = instanceId;
		int32_t L_5 = V_0;
		__this->___instanceId_0 = L_5;
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::.ctor(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mBFF4356E4E9DE13DE725B70833E8A2397B35A401 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, String_t* ___0_url, String_t* ___1_subprotocol, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___2_headers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB7F5F3C8827A6593C6AF6E2BDF4A2DA302F080E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public WebSocket (string url, string subprotocol, Dictionary<string, string> headers = null) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (!WebSocketFactory.isInitialized) {
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		bool L_0 = ((WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var))->___isInitialized_1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// WebSocketFactory.Initialize ();
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		WebSocketFactory_Initialize_m0CF63934FE3DEA082A2BAFFC1EEE3888DDB9FCE1(NULL);
	}

IL_0012:
	{
		// int instanceId = WebSocketFactory.WebSocketAllocate (url);
		String_t* L_1 = ___0_url;
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = WebSocketFactory_WebSocketAllocate_m554581F8877B5CA4451EE14944BA0DF5236ACD81(L_1, NULL);
		V_0 = L_2;
		// WebSocketFactory.instances.Add (instanceId, this);
		Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142* L_3 = ((WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var))->___instances_0;
		int32_t L_4 = V_0;
		Dictionary_2_Add_mB7F5F3C8827A6593C6AF6E2BDF4A2DA302F080E3(L_3, L_4, __this, Dictionary_2_Add_mB7F5F3C8827A6593C6AF6E2BDF4A2DA302F080E3_RuntimeMethod_var);
		// WebSocketFactory.WebSocketAddSubProtocol(instanceId, subprotocol);
		int32_t L_5 = V_0;
		String_t* L_6 = ___1_subprotocol;
		int32_t L_7;
		L_7 = WebSocketFactory_WebSocketAddSubProtocol_m004542304C1A6D93EC5FAEBE772EDD091A6758CA(L_5, L_6, NULL);
		// this.instanceId = instanceId;
		int32_t L_8 = V_0;
		__this->___instanceId_0 = L_8;
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::.ctor(System.String,System.Collections.Generic.List`1<System.String>,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m587EE74CAC1152DE4889BC903EAF666EDB6A484A (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, String_t* ___0_url, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___1_subprotocols, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___2_headers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mB7F5F3C8827A6593C6AF6E2BDF4A2DA302F080E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		// public WebSocket (string url, List<string> subprotocols, Dictionary<string, string> headers = null) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (!WebSocketFactory.isInitialized) {
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		bool L_0 = ((WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var))->___isInitialized_1;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// WebSocketFactory.Initialize ();
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		WebSocketFactory_Initialize_m0CF63934FE3DEA082A2BAFFC1EEE3888DDB9FCE1(NULL);
	}

IL_0012:
	{
		// int instanceId = WebSocketFactory.WebSocketAllocate (url);
		String_t* L_1 = ___0_url;
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = WebSocketFactory_WebSocketAllocate_m554581F8877B5CA4451EE14944BA0DF5236ACD81(L_1, NULL);
		V_0 = L_2;
		// WebSocketFactory.instances.Add (instanceId, this);
		Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142* L_3 = ((WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var))->___instances_0;
		int32_t L_4 = V_0;
		Dictionary_2_Add_mB7F5F3C8827A6593C6AF6E2BDF4A2DA302F080E3(L_3, L_4, __this, Dictionary_2_Add_mB7F5F3C8827A6593C6AF6E2BDF4A2DA302F080E3_RuntimeMethod_var);
		// foreach (string subprotocol in subprotocols) {
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = ___1_subprotocols;
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_6;
		L_6 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_5, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0049:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_1), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003e_1;
			}

IL_002e_1:
			{
				// foreach (string subprotocol in subprotocols) {
				String_t* L_7;
				L_7 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_1), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_2 = L_7;
				// WebSocketFactory.WebSocketAddSubProtocol(instanceId, subprotocol);
				int32_t L_8 = V_0;
				String_t* L_9 = V_2;
				il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
				int32_t L_10;
				L_10 = WebSocketFactory_WebSocketAddSubProtocol_m004542304C1A6D93EC5FAEBE772EDD091A6758CA(L_8, L_9, NULL);
			}

IL_003e_1:
			{
				// foreach (string subprotocol in subprotocols) {
				bool L_11;
				L_11 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_1), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_002e_1;
				}
			}
			{
				goto IL_0057;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0057:
	{
		// this.instanceId = instanceId;
		int32_t L_12 = V_0;
		__this->___instanceId_0 = L_12;
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_Finalize_m171424C2F330C4D11DE4B05C459017C6D0302D7F (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{// begin finally (depth: 1)
				// }
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// WebSocketFactory.HandleInstanceDestroy (this.instanceId);
			int32_t L_0 = __this->___instanceId_0;
			il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
			WebSocketFactory_HandleInstanceDestroy_m9B8BB265FF330C94655B183141CB749FEF82C475(L_0, NULL);
			goto IL_0014;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Int32 NativeWebSocket.WebSocket::GetInstanceId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_GetInstanceId_mED5576C3BACB56A7C38B635249B2E096B1F24974 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) 
{
	{
		// return this.instanceId;
		int32_t L_0 = __this->___instanceId_0;
		return L_0;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Connect_m6668D9F07FE1BFD16D5391B1AB8980FA740E705A (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int ret = WebSocketConnect (this.instanceId);
		int32_t L_0 = __this->___instanceId_0;
		int32_t L_1;
		L_1 = WebSocket_WebSocketConnect_m789BE8E73E3F7172106306042BC7909719786BDA(L_0, NULL);
		V_0 = L_1;
		// if (ret < 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode (ret, null);
		int32_t L_3 = V_0;
		WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* L_4;
		L_4 = WebSocketHelpers_GetErrorMessageFromCode_m79662BAFD5D32C7F8652DF7FE8619344D7DAD5EB(L_3, (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_Connect_m6668D9F07FE1BFD16D5391B1AB8980FA740E705A_RuntimeMethod_var)));
	}

IL_0018:
	{
		// return Task.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_5;
	}
}
// System.Void NativeWebSocket.WebSocket::CancelConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_CancelConnection_mABA9078D10A52EC11D01A37C34216DF28DB2EC16 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) 
{
	{
		// if (State == WebSocketState.Open)
		int32_t L_0;
		L_0 = WebSocket_get_State_m9787DE3CBD95685151F66BAA37CF2817F4CF54DD(__this, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0016;
		}
	}
	{
		// Close (WebSocketCloseCode.Abnormal);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = WebSocket_Close_m5E661C600C35E9DAC15128D52843D1C5CD2FB9C9(__this, ((int32_t)1006), (String_t*)NULL, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Close(NativeWebSocket.WebSocketCloseCode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Close_m5E661C600C35E9DAC15128D52843D1C5CD2FB9C9 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, int32_t ___0_code, String_t* ___1_reason, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int ret = WebSocketClose (this.instanceId, (int) code, reason);
		int32_t L_0 = __this->___instanceId_0;
		int32_t L_1 = ___0_code;
		String_t* L_2 = ___1_reason;
		int32_t L_3;
		L_3 = WebSocket_WebSocketClose_mA23DEFD9273EFD23D01A0284BA44F544E772F51A(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		// if (ret < 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode (ret, null);
		int32_t L_5 = V_0;
		WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* L_6;
		L_6 = WebSocketHelpers_GetErrorMessageFromCode_m79662BAFD5D32C7F8652DF7FE8619344D7DAD5EB(L_5, (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_Close_m5E661C600C35E9DAC15128D52843D1C5CD2FB9C9_RuntimeMethod_var)));
	}

IL_001a:
	{
		// return Task.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
		L_7 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Send_mD28BF1375EBB89AD846765454D361350BF604B97 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int ret = WebSocketSend (this.instanceId, data, data.Length);
		int32_t L_0 = __this->___instanceId_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_data;
		int32_t L_3;
		L_3 = WebSocket_WebSocketSend_m827AAAB243CEBA845ED7082A1213388B24C68713(L_0, L_1, ((int32_t)(((RuntimeArray*)L_2)->max_length)), NULL);
		V_0 = L_3;
		// if (ret < 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_001c;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode (ret, null);
		int32_t L_5 = V_0;
		WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* L_6;
		L_6 = WebSocketHelpers_GetErrorMessageFromCode_m79662BAFD5D32C7F8652DF7FE8619344D7DAD5EB(L_5, (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_Send_mD28BF1375EBB89AD846765454D361350BF604B97_RuntimeMethod_var)));
	}

IL_001c:
	{
		// return Task.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_7;
		L_7 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_7;
	}
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::SendText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_SendText_m084ADA70E9B407C3211185FD17F7F50251F5245C (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int ret = WebSocketSendText (this.instanceId, message);
		int32_t L_0 = __this->___instanceId_0;
		String_t* L_1 = ___0_message;
		int32_t L_2;
		L_2 = WebSocket_WebSocketSendText_mDD80F133317E0D9C2E89FF455257DEBC1906FDF9(L_0, L_1, NULL);
		V_0 = L_2;
		// if (ret < 0)
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode (ret, null);
		int32_t L_4 = V_0;
		WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* L_5;
		L_5 = WebSocketHelpers_GetErrorMessageFromCode_m79662BAFD5D32C7F8652DF7FE8619344D7DAD5EB(L_4, (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_SendText_m084ADA70E9B407C3211185FD17F7F50251F5245C_RuntimeMethod_var)));
	}

IL_0019:
	{
		// return Task.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		return L_6;
	}
}
// NativeWebSocket.WebSocketState NativeWebSocket.WebSocket::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_get_State_m9787DE3CBD95685151F66BAA37CF2817F4CF54DD (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// int state = WebSocketGetState (this.instanceId);
		int32_t L_0 = __this->___instanceId_0;
		int32_t L_1;
		L_1 = WebSocket_WebSocketGetState_m05F35D93725E0D0BDB1ECAE532930A7152F214D8(L_0, NULL);
		V_0 = L_1;
		// if (state < 0)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0018;
		}
	}
	{
		// throw WebSocketHelpers.GetErrorMessageFromCode (state, null);
		int32_t L_3 = V_0;
		WebSocketException_tA326D9FB3936D5BE50FE12D342BC6B9D1FC5F525* L_4;
		L_4 = WebSocketHelpers_GetErrorMessageFromCode_m79662BAFD5D32C7F8652DF7FE8619344D7DAD5EB(L_3, (Exception_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&WebSocket_get_State_m9787DE3CBD95685151F66BAA37CF2817F4CF54DD_RuntimeMethod_var)));
	}

IL_0018:
	{
		int32_t L_5 = V_0;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0030;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_0038;
	}

IL_0030:
	{
		// return WebSocketState.Connecting;
		return (int32_t)(0);
	}

IL_0032:
	{
		// return WebSocketState.Open;
		return (int32_t)(1);
	}

IL_0034:
	{
		// return WebSocketState.Closing;
		return (int32_t)(2);
	}

IL_0036:
	{
		// return WebSocketState.Closed;
		return (int32_t)(3);
	}

IL_0038:
	{
		// return WebSocketState.Closed;
		return (int32_t)(3);
	}
}
// System.Void NativeWebSocket.WebSocket::DelegateOnOpenEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnOpenEvent_m2EA97A153CF99128B547E4113904806C3DA2B0C0 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) 
{
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* G_B2_0 = NULL;
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* G_B1_0 = NULL;
	{
		// this.OnOpen?.Invoke ();
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_0 = __this->___OnOpen_1;
		WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::DelegateOnMessageEvent(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnMessageEvent_m0B68D20A87E6621C9213DF40C0D8AC45286BED68 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* G_B2_0 = NULL;
	WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* G_B1_0 = NULL;
	{
		// this.OnMessage?.Invoke (data);
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_0 = __this->___OnMessage_2;
		WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___0_data;
		WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_inline(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::DelegateOnErrorEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnErrorEvent_mE9E72F7D4B177C6312966C94035B37113F7BFDE5 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, String_t* ___0_errorMsg, const RuntimeMethod* method) 
{
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* G_B2_0 = NULL;
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* G_B1_0 = NULL;
	{
		// this.OnError?.Invoke (errorMsg);
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_0 = __this->___OnError_3;
		WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		String_t* L_2 = ___0_errorMsg;
		WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_inline(G_B2_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocket::DelegateOnCloseEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_DelegateOnCloseEvent_mA3F2B7AA5CEB7335B276AA5A412F608E2A344076 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, int32_t ___0_closeCode, const RuntimeMethod* method) 
{
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* G_B2_0 = NULL;
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* G_B1_0 = NULL;
	{
		// this.OnClose?.Invoke (WebSocketHelpers.ParseCloseCodeEnum (closeCode));
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_0 = __this->___OnClose_4;
		WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___0_closeCode;
		int32_t L_3;
		L_3 = WebSocketHelpers_ParseCloseCodeEnum_m836B8A2B93FCA3807BA213AF89C6DDA82FBEA49C(L_2, NULL);
		WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_inline(G_B2_0, L_3, NULL);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnOpenEvent_m15718BB4A7518F092674DFD0E6ED5C3D69DF392C(int32_t ___0_instanceId)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnOpenEvent_m15718BB4A7518F092674DFD0E6ED5C3D69DF392C(___0_instanceId, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnMessageEvent_m459231DE0BD80E06158A78CED322C7B274BC1CF7(int32_t ___0_instanceId, intptr_t ___1_msgPtr, int32_t ___2_msgSize)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnMessageEvent_m459231DE0BD80E06158A78CED322C7B274BC1CF7(___0_instanceId, ___1_msgPtr, ___2_msgSize, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnErrorEvent_m224C967DBEB014A9ED73B06636E97A812F3E3BF4(int32_t ___0_instanceId, intptr_t ___1_errorPtr)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnErrorEvent_m224C967DBEB014A9ED73B06636E97A812F3E3BF4(___0_instanceId, ___1_errorPtr, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_WebSocketFactory_DelegateOnCloseEvent_mE517E2DE4CA909A77FC7BFDB411C2D7856697FEB(int32_t ___0_instanceId, int32_t ___1_closeCode)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	WebSocketFactory_DelegateOnCloseEvent_mE517E2DE4CA909A77FC7BFDB411C2D7856697FEB(___0_instanceId, ___1_closeCode, NULL);

}
// System.Int32 NativeWebSocket.WebSocketFactory::WebSocketAllocate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketFactory_WebSocketAllocate_m554581F8877B5CA4451EE14944BA0DF5236ACD81 (String_t* ___0_url, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_url' to native representation
	char* ____0_url_marshaled = NULL;
	____0_url_marshaled = il2cpp_codegen_marshal_string(___0_url);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketAllocate)(____0_url_marshaled);

	// Marshaling cleanup of parameter '___0_url' native representation
	il2cpp_codegen_marshal_free(____0_url_marshaled);
	____0_url_marshaled = NULL;

	return returnValue;
}
// System.Int32 NativeWebSocket.WebSocketFactory::WebSocketAddSubProtocol(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocketFactory_WebSocketAddSubProtocol_m004542304C1A6D93EC5FAEBE772EDD091A6758CA (int32_t ___0_instanceId, String_t* ___1_subprotocol, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (int32_t, char*);

	// Marshaling of parameter '___1_subprotocol' to native representation
	char* ____1_subprotocol_marshaled = NULL;
	____1_subprotocol_marshaled = il2cpp_codegen_marshal_string(___1_subprotocol);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(WebSocketAddSubProtocol)(___0_instanceId, ____1_subprotocol_marshaled);

	// Marshaling cleanup of parameter '___1_subprotocol' native representation
	il2cpp_codegen_marshal_free(____1_subprotocol_marshaled);
	____1_subprotocol_marshaled = NULL;

	return returnValue;
}
// System.Void NativeWebSocket.WebSocketFactory::WebSocketFree(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketFree_m2B4996A0201004F41EE258EA75CC21605D05B18C (int32_t ___0_instanceId, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketFree)(___0_instanceId);

}
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnOpen(NativeWebSocket.WebSocketFactory/OnOpenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnOpen_m665F0476036CA1D15E4D276EC19BF581BA85C391 (OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___0_callback' to native representation
	Il2CppMethodPointer ____0_callback_marshaled = NULL;
	____0_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callback));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnOpen)(____0_callback_marshaled);

}
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnMessage(NativeWebSocket.WebSocketFactory/OnMessageCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnMessage_mC9147E41B3081311DC72D94D1924E3007C588E6F (OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___0_callback' to native representation
	Il2CppMethodPointer ____0_callback_marshaled = NULL;
	____0_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callback));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnMessage)(____0_callback_marshaled);

}
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnError(NativeWebSocket.WebSocketFactory/OnErrorCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnError_m3B656ED0FA3DBF909174D89AC22DCCD2620DFDB6 (OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___0_callback' to native representation
	Il2CppMethodPointer ____0_callback_marshaled = NULL;
	____0_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callback));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnError)(____0_callback_marshaled);

}
// System.Void NativeWebSocket.WebSocketFactory::WebSocketSetOnClose(NativeWebSocket.WebSocketFactory/OnCloseCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_WebSocketSetOnClose_mCF6C82CBACDC177C5850B168F1D42F6D2E1A45E6 (OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B* ___0_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___0_callback' to native representation
	Il2CppMethodPointer ____0_callback_marshaled = NULL;
	____0_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___0_callback));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(WebSocketSetOnClose)(____0_callback_marshaled);

}
// System.Void NativeWebSocket.WebSocketFactory::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_Initialize_m0CF63934FE3DEA082A2BAFFC1EEE3888DDB9FCE1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_DelegateOnCloseEvent_mE517E2DE4CA909A77FC7BFDB411C2D7856697FEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_DelegateOnErrorEvent_m224C967DBEB014A9ED73B06636E97A812F3E3BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_DelegateOnMessageEvent_m459231DE0BD80E06158A78CED322C7B274BC1CF7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_DelegateOnOpenEvent_m15718BB4A7518F092674DFD0E6ED5C3D69DF392C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebSocketSetOnOpen (DelegateOnOpenEvent);
		OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C* L_0 = (OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C*)il2cpp_codegen_object_new(OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C_il2cpp_TypeInfo_var);
		OnOpenCallback__ctor_m5B2F4550F9DB21B8999622AA5F194154D369261C(L_0, NULL, (intptr_t)((void*)WebSocketFactory_DelegateOnOpenEvent_m15718BB4A7518F092674DFD0E6ED5C3D69DF392C_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		WebSocketFactory_WebSocketSetOnOpen_m665F0476036CA1D15E4D276EC19BF581BA85C391(L_0, NULL);
		// WebSocketSetOnMessage (DelegateOnMessageEvent);
		OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD* L_1 = (OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD*)il2cpp_codegen_object_new(OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD_il2cpp_TypeInfo_var);
		OnMessageCallback__ctor_m29BB2FB901D57457E44D659270CCB9C20BD5A096(L_1, NULL, (intptr_t)((void*)WebSocketFactory_DelegateOnMessageEvent_m459231DE0BD80E06158A78CED322C7B274BC1CF7_RuntimeMethod_var), NULL);
		WebSocketFactory_WebSocketSetOnMessage_mC9147E41B3081311DC72D94D1924E3007C588E6F(L_1, NULL);
		// WebSocketSetOnError (DelegateOnErrorEvent);
		OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F* L_2 = (OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F*)il2cpp_codegen_object_new(OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F_il2cpp_TypeInfo_var);
		OnErrorCallback__ctor_mAA37FB508C376C2A0E28068D81BF83704F670773(L_2, NULL, (intptr_t)((void*)WebSocketFactory_DelegateOnErrorEvent_m224C967DBEB014A9ED73B06636E97A812F3E3BF4_RuntimeMethod_var), NULL);
		WebSocketFactory_WebSocketSetOnError_m3B656ED0FA3DBF909174D89AC22DCCD2620DFDB6(L_2, NULL);
		// WebSocketSetOnClose (DelegateOnCloseEvent);
		OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B* L_3 = (OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B*)il2cpp_codegen_object_new(OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B_il2cpp_TypeInfo_var);
		OnCloseCallback__ctor_mCB063C7DAD09AD382E5B4EE62D3E6DC96A2BF875(L_3, NULL, (intptr_t)((void*)WebSocketFactory_DelegateOnCloseEvent_mE517E2DE4CA909A77FC7BFDB411C2D7856697FEB_RuntimeMethod_var), NULL);
		WebSocketFactory_WebSocketSetOnClose_mCF6C82CBACDC177C5850B168F1D42F6D2E1A45E6(L_3, NULL);
		// isInitialized = true;
		((WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var))->___isInitialized_1 = (bool)1;
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketFactory::HandleInstanceDestroy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_HandleInstanceDestroy_m9B8BB265FF330C94655B183141CB749FEF82C475 (int32_t ___0_instanceId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m8ED9A6608A684953641E661481D65D9D176491CF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instances.Remove (instanceId);
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142* L_0 = ((WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var))->___instances_0;
		int32_t L_1 = ___0_instanceId;
		bool L_2;
		L_2 = Dictionary_2_Remove_m8ED9A6608A684953641E661481D65D9D176491CF(L_0, L_1, Dictionary_2_Remove_m8ED9A6608A684953641E661481D65D9D176491CF_RuntimeMethod_var);
		// WebSocketFree (instanceId);
		int32_t L_3 = ___0_instanceId;
		WebSocketFactory_WebSocketFree_m2B4996A0201004F41EE258EA75CC21605D05B18C(L_3, NULL);
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnOpenEvent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnOpenEvent_m15718BB4A7518F092674DFD0E6ED5C3D69DF392C (int32_t ___0_instanceId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m52F7996E0D29362376BECB65034208A045BFC2A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* V_0 = NULL;
	{
		// if (instances.TryGetValue (instanceId, out instanceRef)) {
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142* L_0 = ((WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var))->___instances_0;
		int32_t L_1 = ___0_instanceId;
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m52F7996E0D29362376BECB65034208A045BFC2A0(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m52F7996E0D29362376BECB65034208A045BFC2A0_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// instanceRef.DelegateOnOpenEvent ();
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_3 = V_0;
		WebSocket_DelegateOnOpenEvent_m2EA97A153CF99128B547E4113904806C3DA2B0C0(L_3, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnMessageEvent(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnMessageEvent_m459231DE0BD80E06158A78CED322C7B274BC1CF7 (int32_t ___0_instanceId, intptr_t ___1_msgPtr, int32_t ___2_msgSize, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m52F7996E0D29362376BECB65034208A045BFC2A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// if (instances.TryGetValue (instanceId, out instanceRef)) {
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142* L_0 = ((WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var))->___instances_0;
		int32_t L_1 = ___0_instanceId;
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m52F7996E0D29362376BECB65034208A045BFC2A0(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m52F7996E0D29362376BECB65034208A045BFC2A0_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		// byte[] msg = new byte[msgSize];
		int32_t L_3 = ___2_msgSize;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_1 = L_4;
		// Marshal.Copy (msgPtr, msg, 0, msgSize);
		intptr_t L_5 = ___1_msgPtr;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		int32_t L_7 = ___2_msgSize;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		Marshal_Copy_mF7402FFDB520EA1B8D1C32B368DBEE4B13F1BE77(L_5, L_6, 0, L_7, NULL);
		// instanceRef.DelegateOnMessageEvent (msg);
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_8 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		WebSocket_DelegateOnMessageEvent_m0B68D20A87E6621C9213DF40C0D8AC45286BED68(L_8, L_9, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnErrorEvent(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnErrorEvent_m224C967DBEB014A9ED73B06636E97A812F3E3BF4 (int32_t ___0_instanceId, intptr_t ___1_errorPtr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m52F7996E0D29362376BECB65034208A045BFC2A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if (instances.TryGetValue (instanceId, out instanceRef)) {
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142* L_0 = ((WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var))->___instances_0;
		int32_t L_1 = ___0_instanceId;
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m52F7996E0D29362376BECB65034208A045BFC2A0(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m52F7996E0D29362376BECB65034208A045BFC2A0_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// string errorMsg = Marshal.PtrToStringAuto (errorPtr);
		intptr_t L_3 = ___1_errorPtr;
		il2cpp_codegen_runtime_class_init_inline(Marshal_tD976A56A90263C3CE2B780D4B1CADADE2E70B4A7_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = Marshal_PtrToStringAuto_m163B3E46325675C58A42EB0C5C36B950DD9D1275(L_3, NULL);
		V_1 = L_4;
		// instanceRef.DelegateOnErrorEvent (errorMsg);
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_5 = V_0;
		String_t* L_6 = V_1;
		WebSocket_DelegateOnErrorEvent_mE9E72F7D4B177C6312966C94035B37113F7BFDE5(L_5, L_6, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void NativeWebSocket.WebSocketFactory::DelegateOnCloseEvent(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory_DelegateOnCloseEvent_mE517E2DE4CA909A77FC7BFDB411C2D7856697FEB (int32_t ___0_instanceId, int32_t ___1_closeCode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m52F7996E0D29362376BECB65034208A045BFC2A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* V_0 = NULL;
	{
		// if (instances.TryGetValue (instanceId, out instanceRef)) {
		il2cpp_codegen_runtime_class_init_inline(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142* L_0 = ((WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var))->___instances_0;
		int32_t L_1 = ___0_instanceId;
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m52F7996E0D29362376BECB65034208A045BFC2A0(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m52F7996E0D29362376BECB65034208A045BFC2A0_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		// instanceRef.DelegateOnCloseEvent (closeCode);
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_3 = V_0;
		int32_t L_4 = ___1_closeCode;
		WebSocket_DelegateOnCloseEvent_mA3F2B7AA5CEB7335B276AA5A412F608E2A344076(L_3, L_4, NULL);
	}

IL_0016:
	{
		// }
		return;
	}
}
// NativeWebSocket.WebSocket NativeWebSocket.WebSocketFactory::CreateInstance(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* WebSocketFactory_CreateInstance_m07FE080584425D2D21D8C5686C5F304432C8E7FA (String_t* ___0_url, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new WebSocket(url);
		String_t* L_0 = ___0_url;
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_1 = (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F*)il2cpp_codegen_object_new(WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F_il2cpp_TypeInfo_var);
		WebSocket__ctor_mE82FA607D6E3E45BA219738196DA152651677B24(L_1, L_0, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, NULL);
		return L_1;
	}
}
// System.Void NativeWebSocket.WebSocketFactory::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketFactory__cctor_m9E0DEA5B3DE67C8AE482B8B3A564B866364E2529 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m98266C8DDBBE11FE1E079E5D87ABF8F983AFCBEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static Dictionary<Int32, WebSocket> instances = new Dictionary<Int32, WebSocket> ();
		Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142* L_0 = (Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142*)il2cpp_codegen_object_new(Dictionary_2_t48E90D3E80B881243AEA8270F7CBAC4BF8DD2142_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m98266C8DDBBE11FE1E079E5D87ABF8F983AFCBEB(L_0, Dictionary_2__ctor_m98266C8DDBBE11FE1E079E5D87ABF8F983AFCBEB_RuntimeMethod_var);
		((WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var))->___instances_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var))->___instances_0), (void*)L_0);
		// public static bool isInitialized = false;
		((WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_StaticFields*)il2cpp_codegen_static_fields_for(WebSocketFactory_t2032D2EEA139EAFD0574D7CBE3F9FC08D686E953_il2cpp_TypeInfo_var))->___isInitialized_1 = (bool)0;
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
void OnOpenCallback_Invoke_mB8B6CDC465C88FA4B688A90EEAB4956B7D2CB3A0_Multicast(OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C* __this, int32_t ___0_instanceId, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C* currentDelegate = reinterpret_cast<OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_instanceId, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnOpenCallback_Invoke_mB8B6CDC465C88FA4B688A90EEAB4956B7D2CB3A0_OpenInst(OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C* __this, int32_t ___0_instanceId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instanceId, method);
}
void OnOpenCallback_Invoke_mB8B6CDC465C88FA4B688A90EEAB4956B7D2CB3A0_OpenStatic(OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C* __this, int32_t ___0_instanceId, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instanceId, method);
}
void OnOpenCallback_Invoke_mB8B6CDC465C88FA4B688A90EEAB4956B7D2CB3A0_OpenStaticInvoker(OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C* __this, int32_t ___0_instanceId, const RuntimeMethod* method)
{
	InvokerActionInvoker1< int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_instanceId);
}
void OnOpenCallback_Invoke_mB8B6CDC465C88FA4B688A90EEAB4956B7D2CB3A0_ClosedStaticInvoker(OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C* __this, int32_t ___0_instanceId, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_instanceId);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C (OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C* __this, int32_t ___0_instanceId, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_instanceId);

}
// System.Void NativeWebSocket.WebSocketFactory/OnOpenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback__ctor_m5B2F4550F9DB21B8999622AA5F194154D369261C (OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOpenCallback_Invoke_mB8B6CDC465C88FA4B688A90EEAB4956B7D2CB3A0_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnOpenCallback_Invoke_mB8B6CDC465C88FA4B688A90EEAB4956B7D2CB3A0_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOpenCallback_Invoke_mB8B6CDC465C88FA4B688A90EEAB4956B7D2CB3A0_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnOpenCallback_Invoke_mB8B6CDC465C88FA4B688A90EEAB4956B7D2CB3A0_Multicast;
}
// System.Void NativeWebSocket.WebSocketFactory/OnOpenCallback::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback_Invoke_mB8B6CDC465C88FA4B688A90EEAB4956B7D2CB3A0 (OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C* __this, int32_t ___0_instanceId, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_instanceId, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.WebSocketFactory/OnOpenCallback::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnOpenCallback_BeginInvoke_m416842C096614285A89C07FB1A6EF4860CF10363 (OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C* __this, int32_t ___0_instanceId, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___1_callback, RuntimeObject* ___2_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_instanceId);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___1_callback, (RuntimeObject*)___2_object);
}
// System.Void NativeWebSocket.WebSocketFactory/OnOpenCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOpenCallback_EndInvoke_mAA1C64B1C34B3BECB069300BA185DD7E8F962BC1 (OnOpenCallback_tEA0F0A72CF0684C78FB314710A683F553EA6900C* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnMessageCallback_Invoke_m19C337A99D2CFD8359E3BAD14E4D1B0D5A7B963A_Multicast(OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD* __this, int32_t ___0_instanceId, intptr_t ___1_msgPtr, int32_t ___2_msgSize, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD* currentDelegate = reinterpret_cast<OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_instanceId, ___1_msgPtr, ___2_msgSize, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnMessageCallback_Invoke_m19C337A99D2CFD8359E3BAD14E4D1B0D5A7B963A_OpenInst(OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD* __this, int32_t ___0_instanceId, intptr_t ___1_msgPtr, int32_t ___2_msgSize, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instanceId, ___1_msgPtr, ___2_msgSize, method);
}
void OnMessageCallback_Invoke_m19C337A99D2CFD8359E3BAD14E4D1B0D5A7B963A_OpenStatic(OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD* __this, int32_t ___0_instanceId, intptr_t ___1_msgPtr, int32_t ___2_msgSize, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instanceId, ___1_msgPtr, ___2_msgSize, method);
}
void OnMessageCallback_Invoke_m19C337A99D2CFD8359E3BAD14E4D1B0D5A7B963A_OpenStaticInvoker(OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD* __this, int32_t ___0_instanceId, intptr_t ___1_msgPtr, int32_t ___2_msgSize, const RuntimeMethod* method)
{
	InvokerActionInvoker3< int32_t, intptr_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_instanceId, ___1_msgPtr, ___2_msgSize);
}
void OnMessageCallback_Invoke_m19C337A99D2CFD8359E3BAD14E4D1B0D5A7B963A_ClosedStaticInvoker(OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD* __this, int32_t ___0_instanceId, intptr_t ___1_msgPtr, int32_t ___2_msgSize, const RuntimeMethod* method)
{
	InvokerActionInvoker4< RuntimeObject*, int32_t, intptr_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_instanceId, ___1_msgPtr, ___2_msgSize);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD (OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD* __this, int32_t ___0_instanceId, intptr_t ___1_msgPtr, int32_t ___2_msgSize, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_instanceId, ___1_msgPtr, ___2_msgSize);

}
// System.Void NativeWebSocket.WebSocketFactory/OnMessageCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback__ctor_m29BB2FB901D57457E44D659270CCB9C20BD5A096 (OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 3;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnMessageCallback_Invoke_m19C337A99D2CFD8359E3BAD14E4D1B0D5A7B963A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnMessageCallback_Invoke_m19C337A99D2CFD8359E3BAD14E4D1B0D5A7B963A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnMessageCallback_Invoke_m19C337A99D2CFD8359E3BAD14E4D1B0D5A7B963A_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnMessageCallback_Invoke_m19C337A99D2CFD8359E3BAD14E4D1B0D5A7B963A_Multicast;
}
// System.Void NativeWebSocket.WebSocketFactory/OnMessageCallback::Invoke(System.Int32,System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback_Invoke_m19C337A99D2CFD8359E3BAD14E4D1B0D5A7B963A (OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD* __this, int32_t ___0_instanceId, intptr_t ___1_msgPtr, int32_t ___2_msgSize, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_instanceId, ___1_msgPtr, ___2_msgSize, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.WebSocketFactory/OnMessageCallback::BeginInvoke(System.Int32,System.IntPtr,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnMessageCallback_BeginInvoke_m8E969D1C01F3F1F1A33CF87DC2B0C1CEEAB29EFF (OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD* __this, int32_t ___0_instanceId, intptr_t ___1_msgPtr, int32_t ___2_msgSize, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___3_callback, RuntimeObject* ___4_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_instanceId);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_msgPtr);
	__d_args[2] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___2_msgSize);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___3_callback, (RuntimeObject*)___4_object);
}
// System.Void NativeWebSocket.WebSocketFactory/OnMessageCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnMessageCallback_EndInvoke_mD8EE4BFC948BC5466AC93AAEA113911C285BD72B (OnMessageCallback_tEBD932F0E18D316475F115116247E57A3BD76AFD* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnErrorCallback_Invoke_m9E6D55AA5B1DCBE4F1892516FEDC5A2C7CF408E6_Multicast(OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F* __this, int32_t ___0_instanceId, intptr_t ___1_errorPtr, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F* currentDelegate = reinterpret_cast<OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_instanceId, ___1_errorPtr, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnErrorCallback_Invoke_m9E6D55AA5B1DCBE4F1892516FEDC5A2C7CF408E6_OpenInst(OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F* __this, int32_t ___0_instanceId, intptr_t ___1_errorPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instanceId, ___1_errorPtr, method);
}
void OnErrorCallback_Invoke_m9E6D55AA5B1DCBE4F1892516FEDC5A2C7CF408E6_OpenStatic(OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F* __this, int32_t ___0_instanceId, intptr_t ___1_errorPtr, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instanceId, ___1_errorPtr, method);
}
void OnErrorCallback_Invoke_m9E6D55AA5B1DCBE4F1892516FEDC5A2C7CF408E6_OpenStaticInvoker(OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F* __this, int32_t ___0_instanceId, intptr_t ___1_errorPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_instanceId, ___1_errorPtr);
}
void OnErrorCallback_Invoke_m9E6D55AA5B1DCBE4F1892516FEDC5A2C7CF408E6_ClosedStaticInvoker(OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F* __this, int32_t ___0_instanceId, intptr_t ___1_errorPtr, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_instanceId, ___1_errorPtr);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F (OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F* __this, int32_t ___0_instanceId, intptr_t ___1_errorPtr, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_instanceId, ___1_errorPtr);

}
// System.Void NativeWebSocket.WebSocketFactory/OnErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback__ctor_mAA37FB508C376C2A0E28068D81BF83704F670773 (OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnErrorCallback_Invoke_m9E6D55AA5B1DCBE4F1892516FEDC5A2C7CF408E6_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnErrorCallback_Invoke_m9E6D55AA5B1DCBE4F1892516FEDC5A2C7CF408E6_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnErrorCallback_Invoke_m9E6D55AA5B1DCBE4F1892516FEDC5A2C7CF408E6_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnErrorCallback_Invoke_m9E6D55AA5B1DCBE4F1892516FEDC5A2C7CF408E6_Multicast;
}
// System.Void NativeWebSocket.WebSocketFactory/OnErrorCallback::Invoke(System.Int32,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback_Invoke_m9E6D55AA5B1DCBE4F1892516FEDC5A2C7CF408E6 (OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F* __this, int32_t ___0_instanceId, intptr_t ___1_errorPtr, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_instanceId, ___1_errorPtr, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.WebSocketFactory/OnErrorCallback::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnErrorCallback_BeginInvoke_m5C8E02B03449204EECF522E3844B490917198511 (OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F* __this, int32_t ___0_instanceId, intptr_t ___1_errorPtr, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_instanceId);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_errorPtr);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void NativeWebSocket.WebSocketFactory/OnErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnErrorCallback_EndInvoke_m061CE805BEB6E0B2CCC4BD7F42624871557295C2 (OnErrorCallback_t947C35C53EB754E5384600F53276C04F615C379F* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void OnCloseCallback_Invoke_mDDE547C8B539E52533CCB131C119D75CE5CD933F_Multicast(OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B* __this, int32_t ___0_instanceId, int32_t ___1_closeCode, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B* currentDelegate = reinterpret_cast<OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_instanceId, ___1_closeCode, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnCloseCallback_Invoke_mDDE547C8B539E52533CCB131C119D75CE5CD933F_OpenInst(OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B* __this, int32_t ___0_instanceId, int32_t ___1_closeCode, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instanceId, ___1_closeCode, method);
}
void OnCloseCallback_Invoke_mDDE547C8B539E52533CCB131C119D75CE5CD933F_OpenStatic(OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B* __this, int32_t ___0_instanceId, int32_t ___1_closeCode, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_instanceId, ___1_closeCode, method);
}
void OnCloseCallback_Invoke_mDDE547C8B539E52533CCB131C119D75CE5CD933F_OpenStaticInvoker(OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B* __this, int32_t ___0_instanceId, int32_t ___1_closeCode, const RuntimeMethod* method)
{
	InvokerActionInvoker2< int32_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_instanceId, ___1_closeCode);
}
void OnCloseCallback_Invoke_mDDE547C8B539E52533CCB131C119D75CE5CD933F_ClosedStaticInvoker(OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B* __this, int32_t ___0_instanceId, int32_t ___1_closeCode, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, int32_t, int32_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_instanceId, ___1_closeCode);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B (OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B* __this, int32_t ___0_instanceId, int32_t ___1_closeCode, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_instanceId, ___1_closeCode);

}
// System.Void NativeWebSocket.WebSocketFactory/OnCloseCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback__ctor_mCB063C7DAD09AD382E5B4EE62D3E6DC96A2BF875 (OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCloseCallback_Invoke_mDDE547C8B539E52533CCB131C119D75CE5CD933F_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnCloseCallback_Invoke_mDDE547C8B539E52533CCB131C119D75CE5CD933F_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnCloseCallback_Invoke_mDDE547C8B539E52533CCB131C119D75CE5CD933F_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&OnCloseCallback_Invoke_mDDE547C8B539E52533CCB131C119D75CE5CD933F_Multicast;
}
// System.Void NativeWebSocket.WebSocketFactory/OnCloseCallback::Invoke(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback_Invoke_mDDE547C8B539E52533CCB131C119D75CE5CD933F (OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B* __this, int32_t ___0_instanceId, int32_t ___1_closeCode, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_instanceId, ___1_closeCode, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult NativeWebSocket.WebSocketFactory/OnCloseCallback::BeginInvoke(System.Int32,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnCloseCallback_BeginInvoke_m183D271E73B8CFAC709718DAAB65793D73FD6B2A (OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B* __this, int32_t ___0_instanceId, int32_t ___1_closeCode, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___0_instanceId);
	__d_args[1] = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &___1_closeCode);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void NativeWebSocket.WebSocketFactory/OnCloseCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnCloseCallback_EndInvoke_m849C9F7E3BFB8FB6551555A10F1E1228EA6CBAC7 (OnCloseCallback_t7B894652AB3445FA1596350A6E1D1C031D8C240B* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_Instance_mCC9E86FB5D6CA9E9765DA15CEAC40A2097FA7B1D_inline (MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* L_0 = ___0_value;
		((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadUtil_set_synchronizationContext_mCAAE2E112A6B05340E0642270FEBAA1D1912E5F7_inline (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ___0_value;
		((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CsynchronizationContextU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CsynchronizationContextU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* MainThreadUtil_get_synchronizationContext_m2E8C4435E5F339E3F95FB164BFF66EAF654ED43B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static SynchronizationContext synchronizationContext { get; private set; }
		SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* L_0 = ((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CsynchronizationContextU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* MainThreadUtil_get_Instance_mACAAECA4BF768341AD32A92592C6970ED302C4D2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MainThreadUtil Instance { get; private set; }
		MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84* L_0 = ((MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_StaticFields*)il2cpp_codegen_static_fields_for(MainThreadUtil_tFCF960BE241B3DCD0B7024042AA58F48A229AF84_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MainThreadAwaiter_set_IsCompleted_m2CC67562B58AED84A4D52BCB2F848C33414355FF_inline (MainThreadAwaiter_t21AC8FF97E2CF088C69F7D07D36B4260C3874B71* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsCompleted { get; set; }
		bool L_0 = ___0_value;
		__this->___U3CIsCompletedU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 ConfiguredTaskAwaitable_GetAwaiter_m3F163D24211147E68FC5799A7D2D2BE7C07A60B5_inline (ConfiguredTaskAwaitable_tABE012B321A51A20F0D34F8122B9EAE3A054875C* __this, const RuntimeMethod* method) 
{
	{
		ConfiguredTaskAwaiter_t6D4C5E6B82017ED33DAFA1EFC33B0EFBE3137618 L_0 = __this->___m_configuredTaskAwaiter_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler_Invoke_m3081CDDB0296C5336494D7D6A0E74E32D7F5037F_inline (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler_Invoke_mD063E92FF3C1E7FF5C9A672C58C020341665D350_inline (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_data, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler_Invoke_mB37D569F452D31AF71A4649E67D3FA299F37DB50_inline (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, String_t* ___0_errorMsg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_errorMsg, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler_Invoke_m316C55161C4AA11913C69F724913A203E5CBFD0A_inline (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, int32_t ___0_closeCode, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_closeCode, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
