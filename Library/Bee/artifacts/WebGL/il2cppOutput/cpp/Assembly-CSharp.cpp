#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
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
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// JSListener
struct JSListener_t88795E3F4F908289FF645042D371623B954ACEF2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// NativeTest
struct NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042;
// RTCIceCandidate
struct RTCIceCandidate_tF42599C06FC374EC141C8E2FC2076DA8E20E4C1B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
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
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// NativeWebSocket.WebSocket
struct WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F;
// NativeWebSocket.WebSocketCloseEventHandler
struct WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466;
// NativeWebSocket.WebSocketErrorEventHandler
struct WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3;
// NativeWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C;
// NativeWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E;
// NativeTest/<>c
struct U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RTCIceCandidate_tF42599C06FC374EC141C8E2FC2076DA8E20E4C1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0431F907B45E040496EAAECD04B7DA3E76527829;
IL2CPP_EXTERN_C String_t* _stringLiteral056DBBB35E34E089BA266E93343E3F4AF1F25CD4;
IL2CPP_EXTERN_C String_t* _stringLiteral07400DAC3AB22A8F12920AAE88E7DB7A7C2CB68D;
IL2CPP_EXTERN_C String_t* _stringLiteral1370B4F9DE45DC9A5AB74EA5B69949264A2D5F28;
IL2CPP_EXTERN_C String_t* _stringLiteral270AE07022CA81907463E166EF30BF0F2BB20360;
IL2CPP_EXTERN_C String_t* _stringLiteral2F6E01A8E04F0F286E9EE7D48AA5C7D58B1B1C4A;
IL2CPP_EXTERN_C String_t* _stringLiteral3AD7E578430F8B768F833E1AE4B29FAF526BF73B;
IL2CPP_EXTERN_C String_t* _stringLiteral593881AA79C96D2186D92A8531251B690E1E65B9;
IL2CPP_EXTERN_C String_t* _stringLiteral61CF23863C8023E37B5DA507DBAF52F511B24CB3;
IL2CPP_EXTERN_C String_t* _stringLiteral7113039B8C7A9D0635451CD8553F4195ECC270CC;
IL2CPP_EXTERN_C String_t* _stringLiteral94CDC3D1D9487C90CB1458E429E6C143E2AE69BB;
IL2CPP_EXTERN_C String_t* _stringLiteral9CFF93B42CCC2E7AC483E9C35820EB98B37532D3;
IL2CPP_EXTERN_C String_t* _stringLiteral9FCC6A7DB16624C33A29FDED36AF32B60B7F81B6;
IL2CPP_EXTERN_C String_t* _stringLiteralB33515E16502B0D075CCB1359D83595370D89637;
IL2CPP_EXTERN_C String_t* _stringLiteralBC9F9433FEA766E0D2E849E7C229DFEFC6B075ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCD2E53FDB5F5974A0C6BD5FE07B53568E035A86D;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE56A055ADD365F679EB5EE36CE42502E80C542;
IL2CPP_EXTERN_C String_t* _stringLiteralD87A1194E5C9DB653AE717A80BD5D159A410F770;
IL2CPP_EXTERN_C String_t* _stringLiteralE07E5C6930A7CBCEC9B42280FD198AF2F476C79D;
IL2CPP_EXTERN_C String_t* _stringLiteralE1840CCCAE0FAB74CA96DEBF154F79DEB8DB5CA9;
IL2CPP_EXTERN_C String_t* _stringLiteralE97E201CDE7225D0F16403F3B8659313746AFE6A;
IL2CPP_EXTERN_C String_t* _stringLiteralFF6D838A6AA654B3EE03A598FC9BE564BC0485A6;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2_m0F3FAA455C29C3CC18680D8E199B5925022B9F53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2_mA015941E272BD4133A4BBA70223B0BD57BAD2418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeTest_U3CInitializeWebSocketU3Eb__9_3_mCB3BBF217A1627F5EF2CE6160725CCBCFFB921F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisNativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042_mFF4807C8672DE96E1DE09D557886EC308A758BAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitializeWebSocketU3Eb__9_0_mD69BC22AD3A414EF4E30B2FC8051F0C8FD82819B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitializeWebSocketU3Eb__9_1_mEC62C50F45A192A805C25A88A3C991FD87798BC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CInitializeWebSocketU3Eb__9_2_m2923F0B2043AD2203910EA4D79C2799B4B5A67C2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

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

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// RTCIceCandidate
struct RTCIceCandidate_tF42599C06FC374EC141C8E2FC2076DA8E20E4C1B  : public RuntimeObject
{
	// System.String RTCIceCandidate::candidate
	String_t* ___candidate_0;
	// System.String RTCIceCandidate::sdpMid
	String_t* ___sdpMid_1;
	// System.Int32 RTCIceCandidate::sdpMLineIndex
	int32_t ___sdpMLineIndex_2;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// NativeTest/<>c
struct U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F  : public RuntimeObject
{
};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
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

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
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

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
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

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// NativeTest/<InitializeWebSocket>d__9
struct U3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2 
{
	// System.Int32 NativeTest/<InitializeWebSocket>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder NativeTest/<InitializeWebSocket>d__9::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// NativeTest NativeTest/<InitializeWebSocket>d__9::<>4__this
	NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter NativeTest/<InitializeWebSocket>d__9::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
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

// NativeWebSocket.WebSocketMessageEventHandler
struct WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C  : public MulticastDelegate_t
{
};

// NativeWebSocket.WebSocketOpenEventHandler
struct WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// JSListener
struct JSListener_t88795E3F4F908289FF645042D371623B954ACEF2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// NativeTest JSListener::_nativeTest
	NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* ____nativeTest_4;
};

// NativeTest
struct NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 NativeTest::clientID
	int32_t ___clientID_4;
	// NativeWebSocket.WebSocket NativeTest::websocket
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* ___websocket_5;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// RTCIceCandidate

// RTCIceCandidate

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

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

// NativeWebSocket.WebSocket

// NativeWebSocket.WebSocket

// NativeTest/<>c
struct U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_StaticFields
{
	// NativeTest/<>c NativeTest/<>c::<>9
	U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F* ___U3CU3E9_0;
	// NativeWebSocket.WebSocketOpenEventHandler NativeTest/<>c::<>9__9_0
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* ___U3CU3E9__9_0_1;
	// NativeWebSocket.WebSocketErrorEventHandler NativeTest/<>c::<>9__9_1
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* ___U3CU3E9__9_1_2;
	// NativeWebSocket.WebSocketCloseEventHandler NativeTest/<>c::<>9__9_2
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* ___U3CU3E9__9_2_3;
};

// NativeTest/<>c

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

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// System.Void

// System.Void

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// NativeTest/<InitializeWebSocket>d__9

// NativeTest/<InitializeWebSocket>d__9

// NativeWebSocket.WebSocketCloseEventHandler

// NativeWebSocket.WebSocketCloseEventHandler

// NativeWebSocket.WebSocketErrorEventHandler

// NativeWebSocket.WebSocketErrorEventHandler

// NativeWebSocket.WebSocketMessageEventHandler

// NativeWebSocket.WebSocketMessageEventHandler

// NativeWebSocket.WebSocketOpenEventHandler

// NativeWebSocket.WebSocketOpenEventHandler

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// JSListener

// JSListener

// NativeTest

// NativeTest
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<NativeTest/<InitializeWebSocket>d__9>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisU3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2_mA015941E272BD4133A4BBA70223B0BD57BAD2418_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NativeTest/<InitializeWebSocket>d__9>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2_m0F3FAA455C29C3CC18680D8E199B5925022B9F53_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2* ___1_stateMachine, const RuntimeMethod* method) ;

// T UnityEngine.Object::FindObjectOfType<NativeTest>()
inline NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* Object_FindObjectOfType_TisNativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042_mFF4807C8672DE96E1DE09D557886EC308A758BAC (const RuntimeMethod* method)
{
	return ((  NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Void NativeTest::OnOfferReceivedFromListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTest_OnOfferReceivedFromListener_mE5D798893DD33ABFA60B1DCEA7E60FD789A0CAA7 (NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* __this, String_t* ___0_offer, const RuntimeMethod* method) ;
// System.Void NativeTest::OnAnswerReceivedFromListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTest_OnAnswerReceivedFromListener_m6E531D130EFB6E39BA2E29ACED4946E39E6FA9DD (NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* __this, String_t* ___0_answer, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void NativeTest::OnCandidateReceivedFromListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTest_OnCandidateReceivedFromListener_mA997724F71F299C9AE06CE93FA8F5F3BE633A12F (NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* __this, String_t* ___0_candidate, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void NativeTest::InitializeWebSocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTest_InitializeWebSocket_m00EBA34C248151D657302EECF41AA30C4787A205 (NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<NativeTest/<InitializeWebSocket>d__9>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2_mA015941E272BD4133A4BBA70223B0BD57BAD2418 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, U3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisU3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2_mA015941E272BD4133A4BBA70223B0BD57BAD2418_gshared)(__this, ___0_stateMachine, method);
}
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::SendText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_SendText_m084ADA70E9B407C3211185FD17F7F50251F5245C (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void RTCIceCandidate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCIceCandidate__ctor_m5D3A6671C1BCE15D567A4D3D263FCF69D72C7DB7 (RTCIceCandidate_tF42599C06FC374EC141C8E2FC2076DA8E20E4C1B* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.JsonUtility::FromJsonOverwrite(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonUtility_FromJsonOverwrite_mF60C8238431C1A42F7F482BB717757B281570D56 (String_t* ___0_json, RuntimeObject* ___1_objectToOverwrite, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.String,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB (String_t* __this, String_t* ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.String NativeTest::InitPeerConnection(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeTest_InitPeerConnection_m30CE71BC4CB3BEC842FE4BD8165B4BB939EB391A (int32_t ___0_clientID, const RuntimeMethod* method) ;
// System.String NativeTest::CreateOffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeTest_CreateOffer_m7F31DE31EEFA29253179B804D7DBBC11EEB15EB7 (const RuntimeMethod* method) ;
// System.String NativeTest::OnOfferReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeTest_OnOfferReceived_mA3FEF5D33D5B7CEFAE5A45754FC113AD3FE2E561 (String_t* ___0_sdp, const RuntimeMethod* method) ;
// System.String NativeTest::OnAnswerReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeTest_OnAnswerReceived_mE8453164EEEF479A1069C16736D66A9CCA2F83B3 (String_t* ___0_sdp, const RuntimeMethod* method) ;
// System.String NativeTest::OnCandidateReceived(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeTest_OnCandidateReceived_m45FBA536186CC43D60B1ABFB13454B1B22C865DE (String_t* ___0_candidate, String_t* ___1_sdpMid, int32_t ___2_sdpMLineIndex, const RuntimeMethod* method) ;
// System.Void NativeTest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4043534A20A91081D335714719B4DC440EF67A1E (U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::.ctor(System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_mE82FA607D6E3E45BA219738196DA152651677B24 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, String_t* ___0_url, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___1_headers, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketOpenEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketOpenEventHandler__ctor_m9C0F1F9240E959710FE2E7F9F1F97AF5D3D440AF (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::add_OnOpen(NativeWebSocket.WebSocketOpenEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnOpen_mE4848C3EB53A6CF346B790895D636D7A8BA4DDA3 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* ___0_value, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketErrorEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketErrorEventHandler__ctor_m57F2C1BA800F30F50FD411F8461AAA24D40FBAF9 (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::add_OnError(NativeWebSocket.WebSocketErrorEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnError_mA10F34789A6C13F5AA64EC0F35D45ED4EDCDABA0 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* ___0_value, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketCloseEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketCloseEventHandler__ctor_mCF39CA9F24C0F9804D5B6E51EF946CEB60142764 (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::add_OnClose(NativeWebSocket.WebSocketCloseEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnClose_m5D0A672A02F5BF6252DA825D7AB7EFC1020C2B4A (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* ___0_value, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocketMessageEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketMessageEventHandler__ctor_m15BC0672C78EDC192A2ECACCD3B9762149A5A7A8 (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void NativeWebSocket.WebSocket::add_OnMessage(NativeWebSocket.WebSocketMessageEventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_add_OnMessage_mB2D438685DB29D57498A0AC6BEF756F5FEB0BDE5 (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* ___0_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task NativeWebSocket.WebSocket::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* WebSocket_Connect_m6668D9F07FE1BFD16D5391B1AB8980FA740E705A (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,NativeTest/<InitializeWebSocket>d__9>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2_m0F3FAA455C29C3CC18680D8E199B5925022B9F53 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2* ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*, U3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2_m0F3FAA455C29C3CC18680D8E199B5925022B9F53_gshared)(__this, ___0_awaiter, ___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void NativeTest/<InitializeWebSocket>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeWebSocketU3Ed__9_MoveNext_m3CBFD3366665864782D2DE344BF37F6B2030ECE1 (U3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void NativeTest/<InitializeWebSocket>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeWebSocketU3Ed__9_SetStateMachine_mC146BA476BB8395871E0FD234515D86C34ED3ED7 (U3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C char* DEFAULT_CALL InitPeerConnection(int32_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL CreateOffer();
IL2CPP_EXTERN_C char* DEFAULT_CALL OnOfferReceived(char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL OnAnswerReceived(char*);
IL2CPP_EXTERN_C char* DEFAULT_CALL OnCandidateReceived(char*, char*, int32_t);
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
// System.Void JSListener::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSListener_Awake_m90D1CC265DF5CE5D08F5DBC35E754B2B16A8FA48 (JSListener_t88795E3F4F908289FF645042D371623B954ACEF2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisNativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042_mFF4807C8672DE96E1DE09D557886EC308A758BAC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _nativeTest = FindObjectOfType<NativeTest>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* L_0;
		L_0 = Object_FindObjectOfType_TisNativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042_mFF4807C8672DE96E1DE09D557886EC308A758BAC(Object_FindObjectOfType_TisNativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042_mFF4807C8672DE96E1DE09D557886EC308A758BAC_RuntimeMethod_var);
		__this->____nativeTest_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nativeTest_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void JSListener::OnOfferReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSListener_OnOfferReceived_mCA0F876ECF4207D312F1D1B8093F5A825D16AFE2 (JSListener_t88795E3F4F908289FF645042D371623B954ACEF2* __this, String_t* ___0_offer, const RuntimeMethod* method) 
{
	{
		// _nativeTest.OnOfferReceivedFromListener(offer);
		NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* L_0 = __this->____nativeTest_4;
		String_t* L_1 = ___0_offer;
		NativeTest_OnOfferReceivedFromListener_mE5D798893DD33ABFA60B1DCEA7E60FD789A0CAA7(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void JSListener::OnAnswerReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSListener_OnAnswerReceived_m810D680EB48DCDB4E5F15690013C7EAE293F9396 (JSListener_t88795E3F4F908289FF645042D371623B954ACEF2* __this, String_t* ___0_sdp, const RuntimeMethod* method) 
{
	{
		// _nativeTest.OnAnswerReceivedFromListener(sdp);
		NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* L_0 = __this->____nativeTest_4;
		String_t* L_1 = ___0_sdp;
		NativeTest_OnAnswerReceivedFromListener_m6E531D130EFB6E39BA2E29ACED4946E39E6FA9DD(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void JSListener::OnCandidateReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSListener_OnCandidateReceived_m293F18C7B47963740E49F677993578D16932D007 (JSListener_t88795E3F4F908289FF645042D371623B954ACEF2* __this, String_t* ___0_candidate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1370B4F9DE45DC9A5AB74EA5B69949264A2D5F28);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("OnCandidateReceived = " + candidate);
		String_t* L_0 = ___0_candidate;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral1370B4F9DE45DC9A5AB74EA5B69949264A2D5F28, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// _nativeTest.OnCandidateReceivedFromListener(candidate);
		NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* L_2 = __this->____nativeTest_4;
		String_t* L_3 = ___0_candidate;
		NativeTest_OnCandidateReceivedFromListener_mA997724F71F299C9AE06CE93FA8F5F3BE633A12F(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void JSListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSListener__ctor_m0C44F01DB586DA78EADFC2B40EA8E3C4850A62A0 (JSListener_t88795E3F4F908289FF645042D371623B954ACEF2* __this, const RuntimeMethod* method) 
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
// System.String NativeTest::InitPeerConnection(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeTest_InitPeerConnection_m30CE71BC4CB3BEC842FE4BD8165B4BB939EB391A (int32_t ___0_clientID, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (int32_t);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(InitPeerConnection)(___0_clientID);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeTest::CreateOffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeTest_CreateOffer_m7F31DE31EEFA29253179B804D7DBBC11EEB15EB7 (const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(CreateOffer)();

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeTest::OnOfferReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeTest_OnOfferReceived_mA3FEF5D33D5B7CEFAE5A45754FC113AD3FE2E561 (String_t* ___0_sdp, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_sdp' to native representation
	char* ____0_sdp_marshaled = NULL;
	____0_sdp_marshaled = il2cpp_codegen_marshal_string(___0_sdp);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(OnOfferReceived)(____0_sdp_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_sdp' native representation
	il2cpp_codegen_marshal_free(____0_sdp_marshaled);
	____0_sdp_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeTest::OnAnswerReceived(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeTest_OnAnswerReceived_mE8453164EEEF479A1069C16736D66A9CCA2F83B3 (String_t* ___0_sdp, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___0_sdp' to native representation
	char* ____0_sdp_marshaled = NULL;
	____0_sdp_marshaled = il2cpp_codegen_marshal_string(___0_sdp);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(OnAnswerReceived)(____0_sdp_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_sdp' native representation
	il2cpp_codegen_marshal_free(____0_sdp_marshaled);
	____0_sdp_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.String NativeTest::OnCandidateReceived(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NativeTest_OnCandidateReceived_m45FBA536186CC43D60B1ABFB13454B1B22C865DE (String_t* ___0_candidate, String_t* ___1_sdpMid, int32_t ___2_sdpMLineIndex, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (char*, char*, int32_t);

	// Marshaling of parameter '___0_candidate' to native representation
	char* ____0_candidate_marshaled = NULL;
	____0_candidate_marshaled = il2cpp_codegen_marshal_string(___0_candidate);

	// Marshaling of parameter '___1_sdpMid' to native representation
	char* ____1_sdpMid_marshaled = NULL;
	____1_sdpMid_marshaled = il2cpp_codegen_marshal_string(___1_sdpMid);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(OnCandidateReceived)(____0_candidate_marshaled, ____1_sdpMid_marshaled, ___2_sdpMLineIndex);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___0_candidate' native representation
	il2cpp_codegen_marshal_free(____0_candidate_marshaled);
	____0_candidate_marshaled = NULL;

	// Marshaling cleanup of parameter '___1_sdpMid' native representation
	il2cpp_codegen_marshal_free(____1_sdpMid_marshaled);
	____1_sdpMid_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void NativeTest::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTest_Awake_mBE251B9354FA8AFECEF1FE262B30A5BDAF5A327A (NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* __this, const RuntimeMethod* method) 
{
	{
		// clientID = 1;
		__this->___clientID_4 = 1;
		// }
		return;
	}
}
// System.Void NativeTest::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTest_Start_mE577A23327CD8B70BC7A2917D7342DF5E31779AD (NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* __this, const RuntimeMethod* method) 
{
	{
		// InitializeWebSocket();
		NativeTest_InitializeWebSocket_m00EBA34C248151D657302EECF41AA30C4787A205(__this, NULL);
		// }
		return;
	}
}
// System.Void NativeTest::InitializeWebSocket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTest_InitializeWebSocket_m00EBA34C248151D657302EECF41AA30C4787A205 (NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2_mA015941E272BD4133A4BBA70223B0BD57BAD2418_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_0;
		L_0 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&(&V_0)->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_1 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2_mA015941E272BD4133A4BBA70223B0BD57BAD2418(L_1, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2_mA015941E272BD4133A4BBA70223B0BD57BAD2418_RuntimeMethod_var);
		return;
	}
}
// System.Void NativeTest::OnOfferReceivedFromListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTest_OnOfferReceivedFromListener_mE5D798893DD33ABFA60B1DCEA7E60FD789A0CAA7 (NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* __this, String_t* ___0_offer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94CDC3D1D9487C90CB1458E429E6C143E2AE69BB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// websocket.SendText("OnOfferReceived:," + offer);
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_0 = __this->___websocket_5;
		String_t* L_1 = ___0_offer;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral94CDC3D1D9487C90CB1458E429E6C143E2AE69BB, L_1, NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = WebSocket_SendText_m084ADA70E9B407C3211185FD17F7F50251F5245C(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void NativeTest::OnAnswerReceivedFromListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTest_OnAnswerReceivedFromListener_m6E531D130EFB6E39BA2E29ACED4946E39E6FA9DD (NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* __this, String_t* ___0_answer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD87A1194E5C9DB653AE717A80BD5D159A410F770);
		s_Il2CppMethodInitialized = true;
	}
	{
		// websocket.SendText("OnAnswerReceived:," + answer);
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_0 = __this->___websocket_5;
		String_t* L_1 = ___0_answer;
		String_t* L_2;
		L_2 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralD87A1194E5C9DB653AE717A80BD5D159A410F770, L_1, NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = WebSocket_SendText_m084ADA70E9B407C3211185FD17F7F50251F5245C(L_0, L_2, NULL);
		// }
		return;
	}
}
// System.Void NativeTest::OnCandidateReceivedFromListener(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTest_OnCandidateReceivedFromListener_mA997724F71F299C9AE06CE93FA8F5F3BE633A12F (NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* __this, String_t* ___0_candidate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RTCIceCandidate_tF42599C06FC374EC141C8E2FC2076DA8E20E4C1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0431F907B45E040496EAAECD04B7DA3E76527829);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		s_Il2CppMethodInitialized = true;
	}
	RTCIceCandidate_tF42599C06FC374EC141C8E2FC2076DA8E20E4C1B* V_0 = NULL;
	{
		// RTCIceCandidate remoteCandidate = new RTCIceCandidate();
		RTCIceCandidate_tF42599C06FC374EC141C8E2FC2076DA8E20E4C1B* L_0 = (RTCIceCandidate_tF42599C06FC374EC141C8E2FC2076DA8E20E4C1B*)il2cpp_codegen_object_new(RTCIceCandidate_tF42599C06FC374EC141C8E2FC2076DA8E20E4C1B_il2cpp_TypeInfo_var);
		RTCIceCandidate__ctor_m5D3A6671C1BCE15D567A4D3D263FCF69D72C7DB7(L_0, NULL);
		V_0 = L_0;
		// JsonUtility.FromJsonOverwrite(candidate, remoteCandidate);
		String_t* L_1 = ___0_candidate;
		RTCIceCandidate_tF42599C06FC374EC141C8E2FC2076DA8E20E4C1B* L_2 = V_0;
		JsonUtility_FromJsonOverwrite_mF60C8238431C1A42F7F482BB717757B281570D56(L_1, L_2, NULL);
		// websocket.SendText("OnCandidateReceived:," + remoteCandidate.candidate+ ","+ remoteCandidate.sdpMid + ","+ remoteCandidate.sdpMLineIndex);
		WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_3 = __this->___websocket_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		ArrayElementTypeCheck (L_5, _stringLiteral0431F907B45E040496EAAECD04B7DA3E76527829);
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0431F907B45E040496EAAECD04B7DA3E76527829);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		RTCIceCandidate_tF42599C06FC374EC141C8E2FC2076DA8E20E4C1B* L_7 = V_0;
		String_t* L_8 = L_7->___candidate_0;
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		ArrayElementTypeCheck (L_9, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		RTCIceCandidate_tF42599C06FC374EC141C8E2FC2076DA8E20E4C1B* L_11 = V_0;
		String_t* L_12 = L_11->___sdpMid_1;
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_10;
		ArrayElementTypeCheck (L_13, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		RTCIceCandidate_tF42599C06FC374EC141C8E2FC2076DA8E20E4C1B* L_15 = V_0;
		int32_t* L_16 = (int32_t*)(&L_15->___sdpMLineIndex_2);
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_16, NULL);
		ArrayElementTypeCheck (L_14, L_17);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)L_17);
		String_t* L_18;
		L_18 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_14, NULL);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_19;
		L_19 = WebSocket_SendText_m084ADA70E9B407C3211185FD17F7F50251F5245C(L_3, L_18, NULL);
		// }
		return;
	}
}
// System.Void NativeTest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTest__ctor_mE02853E38BCA8A57739986FAAE420FC973FCEE65 (NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void NativeTest::<InitializeWebSocket>b__9_3(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeTest_U3CInitializeWebSocketU3Eb__9_3_mCB3BBF217A1627F5EF2CE6160725CCBCFFB921F7 (NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_bytes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral056DBBB35E34E089BA266E93343E3F4AF1F25CD4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07400DAC3AB22A8F12920AAE88E7DB7A7C2CB68D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral270AE07022CA81907463E166EF30BF0F2BB20360);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral593881AA79C96D2186D92A8531251B690E1E65B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61CF23863C8023E37B5DA507DBAF52F511B24CB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7113039B8C7A9D0635451CD8553F4195ECC270CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CFF93B42CCC2E7AC483E9C35820EB98B37532D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FCC6A7DB16624C33A29FDED36AF32B60B7F81B6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB33515E16502B0D075CCB1359D83595370D89637);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC9F9433FEA766E0D2E849E7C229DFEFC6B075ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD2E53FDB5F5974A0C6BD5FE07B53568E035A86D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1840CCCAE0FAB74CA96DEBF154F79DEB8DB5CA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE97E201CDE7225D0F16403F3B8659313746AFE6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF6D838A6AA654B3EE03A598FC9BE564BC0485A6);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// var message = System.Text.Encoding.UTF8.GetString(bytes);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_bytes;
		String_t* L_2;
		L_2 = VirtualFuncInvoker1< String_t*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(32 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_0, L_1);
		V_0 = L_2;
		// if (message.Contains("ClientID"))
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_3, _stringLiteral61CF23863C8023E37B5DA507DBAF52F511B24CB3, NULL);
		if (!L_4)
		{
			goto IL_0059;
		}
	}
	{
		// clientID = int.Parse(message.Split(",")[1]);
		String_t* L_5 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_5, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, 0, NULL);
		int32_t L_7 = 1;
		String_t* L_8 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		int32_t L_9;
		L_9 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_8, NULL);
		__this->___clientID_4 = L_9;
		// Debug.Log("clientID = " + clientID);
		int32_t* L_10 = (int32_t*)(&__this->___clientID_4);
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9CFF93B42CCC2E7AC483E9C35820EB98B37532D3, L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_12, NULL);
		// InitPeerConnection(clientID);
		int32_t L_13 = __this->___clientID_4;
		String_t* L_14;
		L_14 = NativeTest_InitPeerConnection_m30CE71BC4CB3BEC842FE4BD8165B4BB939EB391A(L_13, NULL);
		return;
	}

IL_0059:
	{
		// else if (message.Contains("CreateOffer"))
		String_t* L_15 = V_0;
		bool L_16;
		L_16 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_15, _stringLiteralE97E201CDE7225D0F16403F3B8659313746AFE6A, NULL);
		if (!L_16)
		{
			goto IL_0087;
		}
	}
	{
		// Debug.Log("CreateOffer ClientID = " + clientID);
		int32_t* L_17 = (int32_t*)(&__this->___clientID_4);
		String_t* L_18;
		L_18 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_17, NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBC9F9433FEA766E0D2E849E7C229DFEFC6B075ED, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_19, NULL);
		// CreateOffer();
		String_t* L_20;
		L_20 = NativeTest_CreateOffer_m7F31DE31EEFA29253179B804D7DBBC11EEB15EB7(NULL);
		return;
	}

IL_0087:
	{
		// else if (message.Contains("OnOfferReceived"))
		String_t* L_21 = V_0;
		bool L_22;
		L_22 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_21, _stringLiteral07400DAC3AB22A8F12920AAE88E7DB7A7C2CB68D, NULL);
		if (!L_22)
		{
			goto IL_00c3;
		}
	}
	{
		// Debug.Log("OnOfferReceived ClientID = " + clientID);
		int32_t* L_23 = (int32_t*)(&__this->___clientID_4);
		String_t* L_24;
		L_24 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_23, NULL);
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral056DBBB35E34E089BA266E93343E3F4AF1F25CD4, L_24, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_25, NULL);
		// string val = message.Split(",")[1];
		String_t* L_26 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27;
		L_27 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_26, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, 0, NULL);
		int32_t L_28 = 1;
		String_t* L_29 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		// OnOfferReceived(val);
		String_t* L_30;
		L_30 = NativeTest_OnOfferReceived_mA3FEF5D33D5B7CEFAE5A45754FC113AD3FE2E561(L_29, NULL);
		return;
	}

IL_00c3:
	{
		// else if (message.Contains("OnAnswerReceived"))
		String_t* L_31 = V_0;
		bool L_32;
		L_32 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_31, _stringLiteralFF6D838A6AA654B3EE03A598FC9BE564BC0485A6, NULL);
		if (!L_32)
		{
			goto IL_0111;
		}
	}
	{
		// Debug.Log("OnAnswerReceived ClientID = " + clientID);
		int32_t* L_33 = (int32_t*)(&__this->___clientID_4);
		String_t* L_34;
		L_34 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_33, NULL);
		String_t* L_35;
		L_35 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7113039B8C7A9D0635451CD8553F4195ECC270CC, L_34, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_35, NULL);
		// string val = message.Split(",")[1];
		String_t* L_36 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_37;
		L_37 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_36, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, 0, NULL);
		int32_t L_38 = 1;
		String_t* L_39 = (L_37)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		V_1 = L_39;
		// Debug.Log("OnAnswerReceived Contents  = " + val);
		String_t* L_40 = V_1;
		String_t* L_41;
		L_41 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral593881AA79C96D2186D92A8531251B690E1E65B9, L_40, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_41, NULL);
		// OnAnswerReceived(val);
		String_t* L_42 = V_1;
		String_t* L_43;
		L_43 = NativeTest_OnAnswerReceived_mE8453164EEEF479A1069C16736D66A9CCA2F83B3(L_42, NULL);
		return;
	}

IL_0111:
	{
		// else if (message.Contains("OnCandidateReceived"))
		String_t* L_44 = V_0;
		bool L_45;
		L_45 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_44, _stringLiteralE1840CCCAE0FAB74CA96DEBF154F79DEB8DB5CA9, NULL);
		if (!L_45)
		{
			goto IL_01ae;
		}
	}
	{
		// Debug.Log("OnCandidateReceived ClientID = " + clientID);
		int32_t* L_46 = (int32_t*)(&__this->___clientID_4);
		String_t* L_47;
		L_47 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_46, NULL);
		String_t* L_48;
		L_48 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral9FCC6A7DB16624C33A29FDED36AF32B60B7F81B6, L_47, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_48, NULL);
		// string candidate = message.Split(",")[1];
		String_t* L_49 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_50;
		L_50 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_49, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, 0, NULL);
		int32_t L_51 = 1;
		String_t* L_52 = (L_50)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_51));
		V_2 = L_52;
		// Debug.Log("OnCandidateReceived candidate  = " + candidate);
		String_t* L_53 = V_2;
		String_t* L_54;
		L_54 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCD2E53FDB5F5974A0C6BD5FE07B53568E035A86D, L_53, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_54, NULL);
		// string sdpMid = message.Split(",")[2];
		String_t* L_55 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_56;
		L_56 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_55, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, 0, NULL);
		int32_t L_57 = 2;
		String_t* L_58 = (L_56)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_57));
		V_3 = L_58;
		// Debug.Log("OnCandidateReceived sdpMid  = " + sdpMid);
		String_t* L_59 = V_3;
		String_t* L_60;
		L_60 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral270AE07022CA81907463E166EF30BF0F2BB20360, L_59, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_60, NULL);
		// int sdpMLineIndex = int.Parse(message.Split(",")[3]);
		String_t* L_61 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62;
		L_62 = String_Split_m15EB0AE498D606D2ABC49FC5F1EC3E29121F8AFB(L_61, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, 0, NULL);
		int32_t L_63 = 3;
		String_t* L_64 = (L_62)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_63));
		int32_t L_65;
		L_65 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_64, NULL);
		V_4 = L_65;
		// Debug.Log("OnCandidateReceived sdpMLineIndex  = " + sdpMLineIndex);
		String_t* L_66;
		L_66 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_67;
		L_67 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralB33515E16502B0D075CCB1359D83595370D89637, L_66, NULL);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_67, NULL);
		// OnCandidateReceived(candidate, sdpMid, sdpMLineIndex);
		String_t* L_68 = V_2;
		String_t* L_69 = V_3;
		int32_t L_70 = V_4;
		String_t* L_71;
		L_71 = NativeTest_OnCandidateReceived_m45FBA536186CC43D60B1ABFB13454B1B22C865DE(L_68, L_69, L_70, NULL);
	}

IL_01ae:
	{
		// };
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
// System.Void NativeTest/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m6B1EE2CF052879C5A69C578E8E37EBFDEFF6F86E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F* L_0 = (U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F*)il2cpp_codegen_object_new(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4043534A20A91081D335714719B4DC440EF67A1E(L_0, NULL);
		((U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void NativeTest/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4043534A20A91081D335714719B4DC440EF67A1E (U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void NativeTest/<>c::<InitializeWebSocket>b__9_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CInitializeWebSocketU3Eb__9_0_mD69BC22AD3A414EF4E30B2FC8051F0C8FD82819B (U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F6E01A8E04F0F286E9EE7D48AA5C7D58B1B1C4A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Websocket open ");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral2F6E01A8E04F0F286E9EE7D48AA5C7D58B1B1C4A, NULL);
		// };
		return;
	}
}
// System.Void NativeTest/<>c::<InitializeWebSocket>b__9_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CInitializeWebSocketU3Eb__9_1_mEC62C50F45A192A805C25A88A3C991FD87798BC3 (U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F* __this, String_t* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEE56A055ADD365F679EB5EE36CE42502E80C542);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Error! " + e);
		String_t* L_0 = ___0_e;
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralCEE56A055ADD365F679EB5EE36CE42502E80C542, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		// };
		return;
	}
}
// System.Void NativeTest/<>c::<InitializeWebSocket>b__9_2(NativeWebSocket.WebSocketCloseCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CInitializeWebSocketU3Eb__9_2_m2923F0B2043AD2203910EA4D79C2799B4B5A67C2 (U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F* __this, int32_t ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3AD7E578430F8B768F833E1AE4B29FAF526BF73B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Connection closed!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral3AD7E578430F8B768F833E1AE4B29FAF526BF73B, NULL);
		// };
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
// System.Void NativeTest/<InitializeWebSocket>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeWebSocketU3Ed__9_MoveNext_m3CBFD3366665864782D2DE344BF37F6B2030ECE1 (U3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2_m0F3FAA455C29C3CC18680D8E199B5925022B9F53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeTest_U3CInitializeWebSocketU3Eb__9_3_mCB3BBF217A1627F5EF2CE6160725CCBCFFB921F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitializeWebSocketU3Eb__9_0_mD69BC22AD3A414EF4E30B2FC8051F0C8FD82819B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitializeWebSocketU3Eb__9_1_mEC62C50F45A192A805C25A88A3C991FD87798BC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CInitializeWebSocketU3Eb__9_2_m2923F0B2043AD2203910EA4D79C2799B4B5A67C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE07E5C6930A7CBCEC9B42280FD198AF2F476C79D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* V_1 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* G_B4_0 = NULL;
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* G_B4_1 = NULL;
	WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* G_B3_0 = NULL;
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* G_B3_1 = NULL;
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* G_B6_0 = NULL;
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* G_B6_1 = NULL;
	WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* G_B5_0 = NULL;
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* G_B5_1 = NULL;
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* G_B8_0 = NULL;
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* G_B8_1 = NULL;
	WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* G_B7_0 = NULL;
	WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* G_B7_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_2 = V_0;
			if (!L_2)
			{
				goto IL_00f4_1;
			}
		}
		{
			// websocket = new WebSocket("ws://localhost:443");
			NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* L_3 = V_1;
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_4 = (WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F*)il2cpp_codegen_object_new(WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F_il2cpp_TypeInfo_var);
			WebSocket__ctor_mE82FA607D6E3E45BA219738196DA152651677B24(L_4, _stringLiteralE07E5C6930A7CBCEC9B42280FD198AF2F476C79D, (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)NULL, NULL);
			L_3->___websocket_5 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&L_3->___websocket_5), (void*)L_4);
			// websocket.OnOpen += () =>
			// {
			//     Debug.Log("Websocket open ");
			// 
			// };
			NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* L_5 = V_1;
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_6 = L_5->___websocket_5;
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var);
			WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_7 = ((U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1;
			WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_8 = L_7;
			G_B3_0 = L_8;
			G_B3_1 = L_6;
			if (L_8)
			{
				G_B4_0 = L_8;
				G_B4_1 = L_6;
				goto IL_004a_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var);
			U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F* L_9 = ((U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_10 = (WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E*)il2cpp_codegen_object_new(WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E_il2cpp_TypeInfo_var);
			WebSocketOpenEventHandler__ctor_m9C0F1F9240E959710FE2E7F9F1F97AF5D3D440AF(L_10, L_9, (intptr_t)((void*)U3CU3Ec_U3CInitializeWebSocketU3Eb__9_0_mD69BC22AD3A414EF4E30B2FC8051F0C8FD82819B_RuntimeMethod_var), NULL);
			WebSocketOpenEventHandler_t0241D6C4719F6CD56F1FE610A9371AC15FDCC93E* L_11 = L_10;
			((U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1 = L_11;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var))->___U3CU3E9__9_0_1), (void*)L_11);
			G_B4_0 = L_11;
			G_B4_1 = G_B3_1;
		}

IL_004a_1:
		{
			WebSocket_add_OnOpen_mE4848C3EB53A6CF346B790895D636D7A8BA4DDA3(G_B4_1, G_B4_0, NULL);
			// websocket.OnError += (e) =>
			// {
			//     Debug.Log("Error! " + e);
			// };
			NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* L_12 = V_1;
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_13 = L_12->___websocket_5;
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var);
			WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_14 = ((U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var))->___U3CU3E9__9_1_2;
			WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_15 = L_14;
			G_B5_0 = L_15;
			G_B5_1 = L_13;
			if (L_15)
			{
				G_B6_0 = L_15;
				G_B6_1 = L_13;
				goto IL_0074_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var);
			U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F* L_16 = ((U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_17 = (WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3*)il2cpp_codegen_object_new(WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3_il2cpp_TypeInfo_var);
			WebSocketErrorEventHandler__ctor_m57F2C1BA800F30F50FD411F8461AAA24D40FBAF9(L_17, L_16, (intptr_t)((void*)U3CU3Ec_U3CInitializeWebSocketU3Eb__9_1_mEC62C50F45A192A805C25A88A3C991FD87798BC3_RuntimeMethod_var), NULL);
			WebSocketErrorEventHandler_t6121C1087F8242428F801B27D293CE78597A75C3* L_18 = L_17;
			((U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var))->___U3CU3E9__9_1_2 = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var))->___U3CU3E9__9_1_2), (void*)L_18);
			G_B6_0 = L_18;
			G_B6_1 = G_B5_1;
		}

IL_0074_1:
		{
			WebSocket_add_OnError_mA10F34789A6C13F5AA64EC0F35D45ED4EDCDABA0(G_B6_1, G_B6_0, NULL);
			// websocket.OnClose += (e) =>
			// {
			//     Debug.Log("Connection closed!");
			// };
			NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* L_19 = V_1;
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_20 = L_19->___websocket_5;
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var);
			WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_21 = ((U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var))->___U3CU3E9__9_2_3;
			WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_22 = L_21;
			G_B7_0 = L_22;
			G_B7_1 = L_20;
			if (L_22)
			{
				G_B8_0 = L_22;
				G_B8_1 = L_20;
				goto IL_009e_1;
			}
		}
		{
			il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var);
			U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F* L_23 = ((U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
			WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_24 = (WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466*)il2cpp_codegen_object_new(WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466_il2cpp_TypeInfo_var);
			WebSocketCloseEventHandler__ctor_mCF39CA9F24C0F9804D5B6E51EF946CEB60142764(L_24, L_23, (intptr_t)((void*)U3CU3Ec_U3CInitializeWebSocketU3Eb__9_2_m2923F0B2043AD2203910EA4D79C2799B4B5A67C2_RuntimeMethod_var), NULL);
			WebSocketCloseEventHandler_tC02B2B8CA126489D18F9F48805A3C7460661E466* L_25 = L_24;
			((U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var))->___U3CU3E9__9_2_3 = L_25;
			Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9F643B7B0E8E916C45FB00B959913BDA83B3EC7F_il2cpp_TypeInfo_var))->___U3CU3E9__9_2_3), (void*)L_25);
			G_B8_0 = L_25;
			G_B8_1 = G_B7_1;
		}

IL_009e_1:
		{
			WebSocket_add_OnClose_m5D0A672A02F5BF6252DA825D7AB7EFC1020C2B4A(G_B8_1, G_B8_0, NULL);
			// websocket.OnMessage += (bytes) =>
			// {
			//     var message = System.Text.Encoding.UTF8.GetString(bytes);
			//     if (message.Contains("ClientID"))
			//     {
			//         clientID = int.Parse(message.Split(",")[1]);
			//         Debug.Log("clientID = " + clientID);
			// 
			//         InitPeerConnection(clientID);
			//     }
			//     else if (message.Contains("CreateOffer"))
			//     {
			//         Debug.Log("CreateOffer ClientID = " + clientID);
			//         CreateOffer();
			//     }
			//     else if (message.Contains("OnOfferReceived"))
			//     {
			//         Debug.Log("OnOfferReceived ClientID = " + clientID);
			//         string val = message.Split(",")[1];
			//         OnOfferReceived(val);
			//     }
			//     else if (message.Contains("OnAnswerReceived"))
			//     {
			//         Debug.Log("OnAnswerReceived ClientID = " + clientID);
			//         string val = message.Split(",")[1];
			//         Debug.Log("OnAnswerReceived Contents  = " + val);
			//         OnAnswerReceived(val);
			//     }
			//     else if (message.Contains("OnCandidateReceived"))
			//     {
			//         Debug.Log("OnCandidateReceived ClientID = " + clientID);
			//         string candidate = message.Split(",")[1];
			//         Debug.Log("OnCandidateReceived candidate  = " + candidate);
			//         string sdpMid = message.Split(",")[2];
			//         Debug.Log("OnCandidateReceived sdpMid  = " + sdpMid);
			//         int sdpMLineIndex = int.Parse(message.Split(",")[3]);
			//         Debug.Log("OnCandidateReceived sdpMLineIndex  = " + sdpMLineIndex);
			//         OnCandidateReceived(candidate, sdpMid, sdpMLineIndex);
			//     }
			// 
			// };
			NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* L_26 = V_1;
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_27 = L_26->___websocket_5;
			NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* L_28 = V_1;
			WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C* L_29 = (WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C*)il2cpp_codegen_object_new(WebSocketMessageEventHandler_tE2C6EB24566102E15F0474D745557485BA17496C_il2cpp_TypeInfo_var);
			WebSocketMessageEventHandler__ctor_m15BC0672C78EDC192A2ECACCD3B9762149A5A7A8(L_29, L_28, (intptr_t)((void*)NativeTest_U3CInitializeWebSocketU3Eb__9_3_mCB3BBF217A1627F5EF2CE6160725CCBCFFB921F7_RuntimeMethod_var), NULL);
			WebSocket_add_OnMessage_mB2D438685DB29D57498A0AC6BEF756F5FEB0BDE5(L_27, L_29, NULL);
			// await websocket.Connect();
			NativeTest_t48F9D77D53EB0B25C705B6EAE378A974B29A9042* L_30 = V_1;
			WebSocket_tA854BC697D5FA80EB48E9217EF622E0F9B0E325F* L_31 = L_30->___websocket_5;
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_32;
			L_32 = WebSocket_Connect_m6668D9F07FE1BFD16D5391B1AB8980FA740E705A(L_31, NULL);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_33;
			L_33 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_32, NULL);
			V_2 = L_33;
			bool L_34;
			L_34 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_34)
			{
				goto IL_0110_1;
			}
		}
		{
			int32_t L_35 = 0;
			V_0 = L_35;
			__this->___U3CU3E1__state_0 = L_35;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_36 = V_2;
			__this->___U3CU3Eu__1_3 = L_36;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_37 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2_m0F3FAA455C29C3CC18680D8E199B5925022B9F53(L_37, (&V_2), __this, AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2_m0F3FAA455C29C3CC18680D8E199B5925022B9F53_RuntimeMethod_var);
			goto IL_0143;
		}

IL_00f4_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_38 = __this->___U3CU3Eu__1_3;
			V_2 = L_38;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_39 = (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833*)(&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_39, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_40 = (-1);
			V_0 = L_40;
			__this->___U3CU3E1__state_0 = L_40;
		}

IL_0110_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_0130;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0119;
		}
		throw e;
	}

CATCH_0119:
	{// begin catch(System.Exception)
		Exception_t* L_41 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_3 = L_41;
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_42 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		Exception_t* L_43 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_42, L_43, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0143;
	}// end catch (depth: 1)

IL_0130:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_44 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_44, NULL);
	}

IL_0143:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeWebSocketU3Ed__9_MoveNext_m3CBFD3366665864782D2DE344BF37F6B2030ECE1_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	U3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2*>(__this + _offset);
	U3CInitializeWebSocketU3Ed__9_MoveNext_m3CBFD3366665864782D2DE344BF37F6B2030ECE1(_thisAdjusted, method);
}
// System.Void NativeTest/<InitializeWebSocket>d__9::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeWebSocketU3Ed__9_SetStateMachine_mC146BA476BB8395871E0FD234515D86C34ED3ED7 (U3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_0 = (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)(&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_1 = ___0_stateMachine;
		AsyncVoidMethodBuilder_SetStateMachine_m48640FB81C34D4C2B5A5BBA7F5AE17DC50BF1A25(L_0, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void U3CInitializeWebSocketU3Ed__9_SetStateMachine_mC146BA476BB8395871E0FD234515D86C34ED3ED7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method)
{
	U3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<U3CInitializeWebSocketU3Ed__9_t8A895BE5749A4F5DE539E4532B8F7CC82E3706C2*>(__this + _offset);
	U3CInitializeWebSocketU3Ed__9_SetStateMachine_mC146BA476BB8395871E0FD234515D86C34ED3ED7(_thisAdjusted, ___0_stateMachine, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void RTCIceCandidate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RTCIceCandidate__ctor_m5D3A6671C1BCE15D567A4D3D263FCF69D72C7DB7 (RTCIceCandidate_tF42599C06FC374EC141C8E2FC2076DA8E20E4C1B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
