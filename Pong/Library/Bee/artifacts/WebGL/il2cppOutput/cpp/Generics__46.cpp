﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t68F947CFF3E836EB3A2C880E204C2D89F5AEB115;
struct Action_1_tCB2600FFD386071D232B22D0FFBB8989B853DFD5;
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09;
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
struct EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30;
struct EventCallback_1_t7C6768AD962B0B50514570724A38E07DA18FB1FA;
struct EventCallback_1_tE2BCC4FFB156A2716749F7BDD0036A743B039913;
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
struct Func_2_tD62FEF82C38D2F936C4A0BE93BCEEE9CF7A7DB06;
struct Func_2_tB008453FB2AEC254EDA582B30C36A8A98998AAF0;
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA;
struct Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354;
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B;
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
struct Func_2_tAA84235D71BA06591784319703175CFB5E386A7F;
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A;
struct Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF;
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD;
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B;
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0;
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_tC8F648DAC54860B2E32294DCF939576E41EF594A;
struct IEnumerable_1_tE925592D6CE31E7FA5349FCEE9007F3DF53409FD;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t2A9C63083A2E1F3154B162888A0D4FD37ED0C247;
struct IEnumerator_1_t4CA3732E083480E40018894623B3C184576E5EFD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07;
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA;
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0;
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_t42A86FE68C8321F340DE626A644141DAF4A411E7;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF;
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259;
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
struct ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC;
struct VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345;
struct VisualElementScheduledItem_1_tBBBFD9E425D8A2ECE1C614FC867E3D3127B37509;
struct VisualElementScheduledItem_1_tC55C6DAB31FBA21565DAE09DE6BA236327F029E2;
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE;
struct WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA;
struct WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6;
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A;
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4;
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B;
struct WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB;
struct WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0;
struct WhereSelectArrayIterator_2_t250814D5FF34B1F8B88A5E8334436BB633B7B29F;
struct WhereSelectArrayIterator_2_t562C68C2C77B3AA5A84BBA4A0B21DB823E66B703;
struct WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58;
struct WhereSelectArrayIterator_2_t0565EB3033FAD927C35E0B8525D2ABB0F1FECB40;
struct WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB;
struct WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174;
struct WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D;
struct WhereSelectEnumerableIterator_2_t7BA7CE7768E39319636272B29292281AB152E7D6;
struct WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F;
struct WhereSelectEnumerableIterator_2_tDD70C727530B3DBADEB387A0E353F5F829380BF9;
struct WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586;
struct WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C;
struct WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A;
struct WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343;
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A;
struct WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52;
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989;
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336;
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234;
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1;
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D;
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7;
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789;
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0;
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8;
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768;
struct CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
struct IBinding_t02FD99E9C9F2072B28E110F16C157666F5B2DBC7;
struct ICollectionDragAndDropController_t30018C4F1C5ADA75B5E68B48A7BACE33E851168C;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
struct IResolvedStyle_t6A3530BA6147B091C278593F21F86B09CD42BE89;
struct IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7;
struct IVisualElementScheduledItem_t309F1A5445514122A9E3F64182D0D8A4DE34C48F;
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
struct KeyboardNavigationManipulator_t7E9BA3568ADC1660C4E09B924ECD457E33B835B3;
struct ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD;
struct ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
struct ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9;
struct Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8;
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
struct SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB;
struct String_t;
struct StringBuilder_t;
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct Type_t;
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
struct VisualElementPanelActivator_t1CCD740B7D2995A4097A8FCF6ADCDD6B6A51B7DB;
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B;
struct BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A;
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tC8F648DAC54860B2E32294DCF939576E41EF594A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t2A9C63083A2E1F3154B162888A0D4FD37ED0C247_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IResolvedStyle_t6A3530BA6147B091C278593F21F86B09CD42BE89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869;
IL2CPP_EXTERN_C String_t* _stringLiteral491788442E76F5D7830F0DBFCF8EDD98854F636F;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0;
IL2CPP_EXTERN_C String_t* _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7;
IL2CPP_EXTERN_C String_t* _stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085;
IL2CPP_EXTERN_C String_t* _stringLiteralE310274B02A605A3985345944A620D7D2E019A1A;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E  : public RuntimeObject
{
};
struct Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	int32_t ___current;
};
struct Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	RuntimeObject* ___current;
};
struct Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0 : public RuntimeObject {};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF  : public RuntimeObject
{
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259  : public RuntimeObject
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_List;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___m_CreateFunc;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_ActionOnGet;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_ActionOnRelease;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___m_ActionOnDestroy;
	int32_t ___m_MaxSize;
	bool ___m_CollectionCheck;
	int32_t ___U3CCountAllU3Ek__BackingField;
};
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	bool ___isIMGUIContainer;
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry;
};
struct CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768  : public RuntimeObject
{
	BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___m_View;
	RuntimeObject* ___m_ItemsSource;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___itemsSourceChanged;
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___itemIndexChanged;
};
struct CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801  : public RuntimeObject
{
	ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* ___m_ScrollView;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___numberGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___currencyGroupSizes;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___percentGroupSizes;
	String_t* ___positiveSign;
	String_t* ___negativeSign;
	String_t* ___numberDecimalSeparator;
	String_t* ___numberGroupSeparator;
	String_t* ___currencyGroupSeparator;
	String_t* ___currencyDecimalSeparator;
	String_t* ___currencySymbol;
	String_t* ___ansiCurrencySymbol;
	String_t* ___nanSymbol;
	String_t* ___positiveInfinitySymbol;
	String_t* ___negativeInfinitySymbol;
	String_t* ___percentDecimalSeparator;
	String_t* ___percentGroupSeparator;
	String_t* ___percentSymbol;
	String_t* ___perMilleSymbol;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___nativeDigits;
	int32_t ___m_dataItem;
	int32_t ___numberDecimalDigits;
	int32_t ___currencyDecimalDigits;
	int32_t ___currencyPositivePattern;
	int32_t ___currencyNegativePattern;
	int32_t ___numberNegativePattern;
	int32_t ___percentPositivePattern;
	int32_t ___percentNegativePattern;
	int32_t ___percentDecimalDigits;
	int32_t ___digitSubstitution;
	bool ___isReadOnly;
	bool ___m_useUserOverride;
	bool ___m_isInvariant;
	bool ___validForParseAsNumber;
	bool ___validForParseAsCurrency;
};
struct ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086  : public RuntimeObject
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CbindableElementU3Ek__BackingField;
	ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* ___U3CanimatorU3Ek__BackingField;
	int32_t ___U3CindexU3Ek__BackingField;
	int32_t ___U3CidU3Ek__BackingField;
	bool ___U3CisDragGhostU3Ek__BackingField;
	Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09* ___onGeometryChanged;
	EventCallback_1_t435839AFF4474F7EAE0AA8A59F737E798CEAFD30* ___m_GeometryChangedEventCallback;
	Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09* ___onDestroy;
};
struct ScheduledItem_t423152D61DCAD8E5EC98FB4DEFC04FB023EDADE0  : public RuntimeObject
{
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___timerUpdateStopCondition;
	int64_t ___U3CstartMsU3Ek__BackingField;
	int64_t ___U3CdelayMsU3Ek__BackingField;
	int64_t ___U3CintervalMsU3Ek__BackingField;
	int64_t ___U3CendTimeMsU3Ek__BackingField;
};
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types;
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex;
	int32_t ___m_currMember;
	RuntimeObject* ___m_converter;
	String_t* ___m_fullTypeName;
	String_t* ___m_assemName;
	Type_t* ___objectType;
	bool ___isFullTypeNameSetExplicit;
	bool ___isAssemblyNameSetExplicit;
	bool ___requireSameTokenInPartialTrust;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct CustomStyleProperty_1_t6871E5DBF19AB4DC7E1134B32A03B7A458D52E9F 
{
	String_t* ___U3CnameU3Ek__BackingField;
};
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField;
};
#endif
#ifndef CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
#define CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com_define
struct CustomStyleProperty_1_t8315EF5D1C5F5FB5F920B77E40695C07DAAB349A_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField;
};
#endif
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list;
	int32_t ____index;
	int32_t ____version;
	RuntimeObject* ____current;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref;
};
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref;
};
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref;
};
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref;
};
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref;
};
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref;
};
struct VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345  : public CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801
{
	ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* ___m_Pool;
	BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___m_CollectionView;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_ActiveItems;
	RuntimeObject* ___m_DraggedItem;
	int32_t ___m_LastFocusedElementIndex;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_LastFocusedElementTreeChildIndexes;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___m_VisibleItemPredicateDelegate;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_ScrollInsertionList;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_EmptyRows;
};
struct WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	int32_t ___index;
};
struct WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6 : public RuntimeObject {};
struct WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	RuntimeObject* ___source;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	RuntimeObject* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B : public RuntimeObject {};
struct WhereSelectArrayIterator_2_t250814D5FF34B1F8B88A5E8334436BB633B7B29F  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___source;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate;
	Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_t562C68C2C77B3AA5A84BBA4A0B21DB823E66B703  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_t0565EB3033FAD927C35E0B8525D2ABB0F1FECB40  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___source;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate;
	Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___source;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate;
	Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector;
	int32_t ___index;
};
struct WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174 : public RuntimeObject {};
struct WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	RuntimeObject* ___source;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate;
	Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_t7BA7CE7768E39319636272B29292281AB152E7D6  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	RuntimeObject* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	RuntimeObject* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_tDD70C727530B3DBADEB387A0E353F5F829380BF9  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	RuntimeObject* ___source;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate;
	Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	RuntimeObject* ___source;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate;
	Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector;
	RuntimeObject* ___enumerator;
};
struct WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C : public RuntimeObject {};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	bool ___U3CfocusableU3Ek__BackingField;
	int32_t ___U3CtabIndexU3Ek__BackingField;
	bool ___m_DelegatesFocus;
	bool ___m_ExcludeFromFocusRing;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	int32_t ___id;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	int32_t ___m_XMin;
	int32_t ___m_YMin;
	int32_t ___m_Width;
	int32_t ___m_Height;
};
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___byte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_OffsetPadding[1];
			uint8_t ___byte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_OffsetPadding[2];
			uint8_t ___byte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_OffsetPadding[3];
			uint8_t ___byte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_OffsetPadding[4];
			uint8_t ___byte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_OffsetPadding[5];
			uint8_t ___byte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_OffsetPadding[6];
			uint8_t ___byte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_OffsetPadding[7];
			uint8_t ___byte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_OffsetPadding[8];
			uint8_t ___byte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_OffsetPadding[9];
			uint8_t ___byte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_OffsetPadding[10];
			uint8_t ___byte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_OffsetPadding[11];
			uint8_t ___byte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_OffsetPadding[12];
			uint8_t ___byte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_OffsetPadding[13];
			uint8_t ___byte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_OffsetPadding[14];
			uint8_t ___byte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_OffsetPadding[15];
			uint8_t ___byte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___sbyte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_OffsetPadding[1];
			int8_t ___sbyte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_OffsetPadding[2];
			int8_t ___sbyte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_OffsetPadding[3];
			int8_t ___sbyte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_OffsetPadding[4];
			int8_t ___sbyte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_OffsetPadding[5];
			int8_t ___sbyte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_OffsetPadding[6];
			int8_t ___sbyte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_OffsetPadding[7];
			int8_t ___sbyte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_OffsetPadding[8];
			int8_t ___sbyte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_OffsetPadding[9];
			int8_t ___sbyte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_OffsetPadding[10];
			int8_t ___sbyte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_OffsetPadding[11];
			int8_t ___sbyte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_OffsetPadding[12];
			int8_t ___sbyte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_OffsetPadding[13];
			int8_t ___sbyte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_OffsetPadding[14];
			int8_t ___sbyte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_OffsetPadding[15];
			int8_t ___sbyte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___uint16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_OffsetPadding[2];
			uint16_t ___uint16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_OffsetPadding[4];
			uint16_t ___uint16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_OffsetPadding[6];
			uint16_t ___uint16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_OffsetPadding[8];
			uint16_t ___uint16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_OffsetPadding[10];
			uint16_t ___uint16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_OffsetPadding[12];
			uint16_t ___uint16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_OffsetPadding[14];
			uint16_t ___uint16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___int16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_OffsetPadding[2];
			int16_t ___int16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_OffsetPadding[4];
			int16_t ___int16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_OffsetPadding[6];
			int16_t ___int16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_OffsetPadding[8];
			int16_t ___int16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_OffsetPadding[10];
			int16_t ___int16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_OffsetPadding[12];
			int16_t ___int16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_OffsetPadding[14];
			int16_t ___int16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uint32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_OffsetPadding[4];
			uint32_t ___uint32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_OffsetPadding[8];
			uint32_t ___uint32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_OffsetPadding[12];
			uint32_t ___uint32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___int32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_OffsetPadding[4];
			int32_t ___int32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_OffsetPadding[8];
			int32_t ___int32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_OffsetPadding[12];
			int32_t ___int32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___uint64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_OffsetPadding[8];
			uint64_t ___uint64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___int64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_OffsetPadding[8];
			int64_t ___int64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___single_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_OffsetPadding[4];
			float ___single_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_OffsetPadding[8];
			float ___single_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_OffsetPadding[12];
			float ___single_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___double_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_OffsetPadding[8];
			double ___double_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_forAlignmentOnly;
		};
	};
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	int32_t ___m_X;
	int32_t ___m_Y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	int32_t ___m_X;
	int32_t ___m_Y;
	int32_t ___m_Z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
struct BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A  : public ScheduledItem_t423152D61DCAD8E5EC98FB4DEFC04FB023EDADE0
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CelementU3Ek__BackingField;
	bool ___isScheduled;
	VisualElementPanelActivator_t1CCD740B7D2995A4097A8FCF6ADCDD6B6A51B7DB* ___m_Activator;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct VirtualizationChange_tE573AF23BD03F8D14280D918631898C4E6B445A1 
{
	int32_t ___value__;
};
struct VisualElementScheduledItem_1_tBBBFD9E425D8A2ECE1C614FC867E3D3127B37509  : public BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A
{
	RuntimeObject* ___updateEvent;
};
struct VisualElementScheduledItem_1_tC55C6DAB31FBA21565DAE09DE6BA236327F029E2 : public BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A {};
struct WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator;
};
struct WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0 : public RuntimeObject {};
struct WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___source;
	Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___predicate;
	Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___selector;
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC ___enumerator;
};
struct WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___selector;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator;
};
struct WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___source;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector;
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A ___enumerator;
};
struct WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336 : public RuntimeObject {};
struct AlternatingRowBackground_t5970E82515609444BB4F9E993645CA4A9A9803E5 
{
	int32_t ___value__;
};
struct ClipMethod_t576E65D24928AB1D0072DB926DDFA98B84FBCEDB 
{
	int32_t ___value__;
};
struct CollectionVirtualizationMethod_tF4A3B1303302D2B17F74CDB7D8A5287C8B056C88 
{
	int32_t ___value__;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___yogaNode;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___yogaNode;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions;
};
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___yogaNode;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties;
	int64_t ___matchingRulesHash;
	float ___dpiScaling;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct DisplayStyle_t87BEDA2F78F764785ED41FC5E622ECB0091B2459 
{
	int32_t ___value__;
};
struct DragAndDropPosition_tC9A4DD8C1BF3067240258FF2C81E5F31CEE007AF 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	intptr_t ___handle;
};
struct GCHandleType_t4CD45A3495E593D093AB0CE36EF9EC1A1572F82A 
{
	int32_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct LanguageDirection_t30A3B6BBCEE6A6F57641E4E008E0DCC40603558C 
{
	int32_t ___value__;
};
struct OwnedState_t0957CA36E21DE8A443B616EBE83B25CCCA70B5A4 
{
	uint8_t ___value__;
};
struct PickingMode_t5699BF9E5F2587E0D297984D5BF5B63B768E66AC 
{
	int32_t ___value__;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct PseudoStates_tF4AB056E8743741BCE464A0983A060A53AAB7E4D 
{
	int32_t ___value__;
};
struct RenderDataDirtyTypes_tEF0AE4EB7DF790A711AA45103050432B8FEDB907 
{
	int32_t ___value__;
};
struct RenderDataFlags_t5FE970B94CB31B4691C29B856A2A5848BDEACB66 
{
	int32_t ___value__;
};
struct RenderHints_t4032FC4AB3FD946FD2A484865B8861730D9035E7 
{
	int32_t ___value__;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct ScrollViewMode_t6968C4B2BB3C46CF458E96BCE644E88B6893DE17 
{
	int32_t ___value__;
};
struct ScrollerVisibility_t92D9B3B68D98EF2FBB3B743F7D5CF140CA3C0778 
{
	int32_t ___value__;
};
struct SelectionType_t606E5DED60240D7E52388344A8A1EF4EC4E54079 
{
	int32_t ___value__;
};
struct SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB  : public RuntimeObject
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scrollOffset;
	int32_t ___firstVisibleIndex;
	float ___contentPadding;
	float ___contentHeight;
	int32_t ___anchoredItemIndex;
	float ___anchorOffset;
};
struct StreamingContextStates_t5EE358E619B251608A9327618C7BFE8638FC33C1 
{
	int32_t ___value__;
};
struct StyleKeyword_t2812E72266C15CBA8927586972DC2FD27B10E705 
{
	int32_t ___value__;
};
struct StyleSelectorType_t425962DE6D175F785FA2B5554D793B71D39430A3 
{
	int32_t ___value__;
};
struct VisualElementFlags_t4D1066E11400967A1A2DA7331391ACDC4AA14409 
{
	int32_t ___value__;
};
struct DragState_tB14E29E7194B5F86B9F1EE6951E43897A3CB1A89 
{
	int32_t ___value__;
};
struct Unit_t7A9C3ABB0618BEBFDC1813D07080CE0C145448ED 
{
	int32_t ___value__;
};
struct NestedInteractionKind_tB05346E2CBA2B1468842CC149E572071F6BF123A 
{
	int32_t ___value__;
};
struct TouchScrollBehavior_tDFF4DB42BA6E5CFD89F263270DEBDB5E6CF4E66E 
{
	int32_t ___value__;
};
struct RenderTargetMode_tAE75E29BB61A64BDE7646D5CBD353B64BCFA9F3A 
{
	int32_t ___value__;
};
struct StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC 
{
	int32_t ___m_Value;
	int32_t ___m_Keyword;
};
struct VectorSizeHelper_tAB183E4966E0B97A19A75D213EDAE51037A6BF3C 
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ____placeholder;
	uint8_t ____byte;
};
struct WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE  : public RuntimeObject
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___handle;
	bool ___trackResurrection;
};
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	int32_t ___page;
	uint16_t ___pageLine;
	uint8_t ___bitIndex;
	uint8_t ___ownedState;
};
struct DragEventsProcessor_tC4594177C458D0DE91C0A4D1017CEF93DA69C9B6  : public RuntimeObject
{
	bool ___m_IsRegistered;
	int32_t ___m_DragState;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Start;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Target;
};
struct Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 
{
	float ___m_Value;
	int32_t ___m_Unit;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	RuntimeObject* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext;
	int32_t ___m_state;
};
struct StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 
{
	float ___m_Value;
	int32_t ___m_Keyword;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 
{
	String_t* ___m_Value;
	int32_t ___m_Type;
	RuntimeObject* ___tempData;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_pinvoke
{
	char* ___m_Value;
	int32_t ___m_Type;
	Il2CppIUnknown* ___tempData;
};
struct StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470_marshaled_com
{
	Il2CppChar* ___m_Value;
	int32_t ___m_Type;
	Il2CppIUnknown* ___tempData;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660 
{
	int32_t ___insertAtIndex;
	int32_t ___parentId;
	int32_t ___childIndex;
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___recycledItem;
	int32_t ___dropPosition;
};
struct DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshaled_pinvoke
{
	int32_t ___insertAtIndex;
	int32_t ___parentId;
	int32_t ___childIndex;
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___recycledItem;
	int32_t ___dropPosition;
};
struct DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660_marshaled_com
{
	int32_t ___insertAtIndex;
	int32_t ___parentId;
	int32_t ___childIndex;
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___recycledItem;
	int32_t ___dropPosition;
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09  : public MulticastDelegate_t
{
};
struct Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F 
{
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ____list;
	int32_t ____index;
	int32_t ____version;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ____current;
};
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};
struct Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA  : public MulticastDelegate_t
{
};
struct Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354  : public MulticastDelegate_t
{
};
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};
struct Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B  : public MulticastDelegate_t
{
};
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};
struct Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A  : public MulticastDelegate_t
{
};
struct Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF  : public MulticastDelegate_t
{
};
struct Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD  : public MulticastDelegate_t
{
};
struct Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B  : public MulticastDelegate_t
{
};
struct Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0  : public MulticastDelegate_t
{
};
struct WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234  : public MulticastDelegate_t
{
};
struct WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1  : public MulticastDelegate_t
{
};
struct WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D  : public MulticastDelegate_t
{
};
struct WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7  : public MulticastDelegate_t
{
};
struct WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789  : public MulticastDelegate_t
{
};
struct WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0  : public MulticastDelegate_t
{
};
struct WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8  : public MulticastDelegate_t
{
};
struct WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD  : public DragEventsProcessor_tC4594177C458D0DE91C0A4D1017CEF93DA69C9B6
{
	DragPosition_t922FC1F61C1B1A510241E4207B94AA1CD7E94660 ___m_LastDragPosition;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_DragHoverBar;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_DragHoverItemMarker;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_DragHoverSiblingMarker;
	float ___m_LeftIndentation;
	float ___m_SiblingBottom;
	RuntimeObject* ___U3CdragAndDropControllerU3Ek__BackingField;
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand;
	bool ___isInChain;
	bool ___isHierarchyHidden;
	bool ___localFlipsWinding;
	bool ___localTransformScaleZero;
	bool ___worldFlipsWinding;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	bool ___disableNudging;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	int32_t ___displacementUVStart;
	int32_t ___displacementUVEnd;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand;
	int32_t ___isInChain;
	int32_t ___isHierarchyHidden;
	int32_t ___localFlipsWinding;
	int32_t ___localTransformScaleZero;
	int32_t ___worldFlipsWinding;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	int32_t ___disableNudging;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	int32_t ___displacementUVStart;
	int32_t ___displacementUVEnd;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
};
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty;
	int32_t ___flags;
	int32_t ___hierarchyDepth;
	int32_t ___dirtiedValues;
	uint32_t ___dirtyID;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand;
	int32_t ___isInChain;
	int32_t ___isHierarchyHidden;
	int32_t ___localFlipsWinding;
	int32_t ___localTransformScaleZero;
	int32_t ___worldFlipsWinding;
	int32_t ___clipMethod;
	int32_t ___childrenStencilRef;
	int32_t ___childrenMaskDepth;
	int32_t ___disableNudging;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace;
	int32_t ___displacementUVStart;
	int32_t ___displacementUVEnd;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___colorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID;
	float ___compositeOpacity;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures;
};
struct StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 
{
	Length_t90BB06D47DD6DB461ED21BD3E3241FAB6C824256 ___m_Value;
	int32_t ___m_Keyword;
};
struct WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52  : public Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07
{
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate;
	Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___selector;
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator;
};
struct WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989  : public Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA
{
	List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___source;
	Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___predicate;
	Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___selector;
	Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F ___enumerator;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5  : public ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD
{
	int32_t ___m_DragStartIndex;
	int32_t ___m_CurrentIndex;
	float ___m_SelectionHeight;
	float ___m_LocalOffsetOnStart;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_CurrentPointerPosition;
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___m_Item;
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___m_OffsetItem;
	bool ___U3CisDraggingU3Ek__BackingField;
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField;
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField;
	String_t* ___m_Name;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList;
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag;
	int32_t ___m_Flags;
	String_t* ___m_ViewDataKey;
	int32_t ___m_RenderHints;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding;
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup;
	bool ___m_WorldClipIsInfinite;
	int32_t ___triggerPseudoMask;
	int32_t ___dependencyPseudoMask;
	int32_t ___m_PseudoStates;
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField;
	int32_t ___m_PickingMode;
	YogaNode_t9EE7C2B7C0BD1299C28837B1A66CF4660E724C8B* ___U3CyogaNodeU3Ek__BackingField;
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style;
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext;
	int32_t ___inheritedStylesHash;
	uint32_t ___controlid;
	int32_t ___imguiContainerDescendantCount;
	bool ___U3CenabledSelfU3Ek__BackingField;
	int32_t ___m_LanguageDirection;
	int32_t ___m_LocalLanguageDirection;
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField;
	int32_t ___m_SubRenderTargetMode;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial;
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations;
	uint32_t ___m_NextParentCachedVersion;
	uint32_t ___m_NextParentRequiredVersion;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CachedNextParentWithEventCallback;
	int32_t ___m_EventCallbackCategories;
	int32_t ___m_CachedEventCallbackParentCategories;
	int32_t ___m_DefaultActionEventCategories;
	int32_t ___m_DefaultActionAtTargetEventCategories;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField;
	bool ___U3CisRootVisualContainerU3Ek__BackingField;
	bool ___U3CcacheAsBitmapU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField;
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource;
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess;
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList;
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData;
};
struct BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	RuntimeObject* ___U3CbindingU3Ek__BackingField;
	String_t* ___U3CbindingPathU3Ek__BackingField;
};
struct ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9  : public VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115
{
	int32_t ___m_FirstLayoutPass;
	int32_t ___m_HorizontalScrollerVisibility;
	int32_t ___m_VerticalScrollerVisibility;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_AttachedRootVisualContainer;
	float ___m_SingleLineHeight;
	bool ___m_MouseWheelScrollSizeIsInline;
	float ___m_HorizontalPageSize;
	float ___m_VerticalPageSize;
	float ___m_MouseWheelScrollSize;
	float ___m_ScrollDecelerationRate;
	float ___m_Elasticity;
	int32_t ___m_TouchScrollBehavior;
	int32_t ___m_NestedInteractionKind;
	int64_t ___m_ElasticAnimationIntervalMs;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CcontentViewportU3Ek__BackingField;
	Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8* ___U3ChorizontalScrollerU3Ek__BackingField;
	Scroller_tFE2BC2FCB5D2BD623828C332E0BBF95D472D99A8* ___U3CverticalScrollerU3Ek__BackingField;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ContentContainer;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_ContentAndVerticalScrollContainer;
	int32_t ___m_Mode;
	RuntimeObject* ___m_ScheduledLayoutPassResetItem;
	int32_t ___m_ScrollingPointerId;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_StartPosition;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartPosition;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_SpringBackVelocity;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LowBounds;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_HighBounds;
	float ___m_LastVelocityLerpTime;
	bool ___m_StartedMoving;
	bool ___m_TouchStoppedVelocity;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_CapturedTarget;
	EventCallback_1_t7C6768AD962B0B50514570724A38E07DA18FB1FA* ___m_CapturedTargetPointerMoveCallback;
	EventCallback_1_tE2BCC4FFB156A2716749F7BDD0036A743B039913* ___m_CapturedTargetPointerUpCallback;
	RuntimeObject* ___m_PostPointerUpAnimation;
};
struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE  : public BindableElement_t873EFF65032D21AB3B7BFBA21675D1693967435C
{
	Action_1_tCB2600FFD386071D232B22D0FFBB8989B853DFD5* ___itemsChosen;
	Action_1_tCB2600FFD386071D232B22D0FFBB8989B853DFD5* ___selectionChanged;
	Action_1_t68F947CFF3E836EB3A2C880E204C2D89F5AEB115* ___selectedIndicesChanged;
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___itemIndexChanged;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___itemsSourceChanged;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___selectionNotChanged;
	Func_2_tD62FEF82C38D2F936C4A0BE93BCEEE9CF7A7DB06* ___canStartDrag;
	Func_2_tAA84235D71BA06591784319703175CFB5E386A7F* ___setupDragAndDrop;
	Func_2_tB008453FB2AEC254EDA582B30C36A8A98998AAF0* ___dragAndDropUpdate;
	Func_2_tB008453FB2AEC254EDA582B30C36A8A98998AAF0* ___handleDrop;
	int32_t ___m_SelectionType;
	bool ___m_HorizontalScrollingEnabled;
	int32_t ___m_ShowAlternatingRowBackgrounds;
	float ___m_FixedItemHeight;
	bool ___m_ItemHeightIsInline;
	int32_t ___m_VirtualizationMethod;
	ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* ___m_ScrollView;
	CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* ___m_ViewController;
	CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801* ___m_VirtualizationController;
	KeyboardNavigationManipulator_t7E9BA3568ADC1660C4E09B924ECD457E33B835B3* ___m_NavigationManipulator;
	SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* ___serializedVirtualizationData;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_SelectedIds;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_SelectedIndices;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___m_SelectedItems;
	float ___m_LastHeight;
	bool ___m_IsRangeSelectionDirectionUp;
	ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* ___m_Dragger;
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___m_ItemIndexChangedCallback;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_ItemsSourceChangedCallback;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_TouchDownPosition;
};
struct U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields
{
	U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E* ___U3CU3E9;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___U3CU3E9__30_0;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__30_1;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___U3CU3E9__30_2;
};
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray;
};
struct List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF_StaticFields
{
	StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
};
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472_StaticFields
{
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___invariantInfo;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left;
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward;
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	int32_t ___s_count;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields
{
	int32_t ___s_count;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_zero;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_one;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_allOnes;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	uint32_t ___s_NextId;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey;
	String_t* ___disabledUssClassName;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial;
	uint32_t ___s_NextParentVersion;
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList;
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess;
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath;
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey;
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData;
};
struct ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9_StaticFields
{
	float ___k_DefaultScrollDecelerationRate;
	float ___k_DefaultElasticity;
	int64_t ___k_DefaultElasticAnimationInterval;
	String_t* ___ussClassName;
	String_t* ___viewportUssClassName;
	String_t* ___horizontalVariantViewportUssClassName;
	String_t* ___verticalVariantViewportUssClassName;
	String_t* ___verticalHorizontalVariantViewportUssClassName;
	String_t* ___contentAndVerticalScrollUssClassName;
	String_t* ___contentUssClassName;
	String_t* ___horizontalVariantContentUssClassName;
	String_t* ___verticalVariantContentUssClassName;
	String_t* ___verticalHorizontalVariantContentUssClassName;
	String_t* ___hScrollerUssClassName;
	String_t* ___vScrollerUssClassName;
	String_t* ___horizontalVariantUssClassName;
	String_t* ___verticalVariantUssClassName;
	String_t* ___verticalHorizontalVariantUssClassName;
	String_t* ___scrollVariantUssClassName;
};
struct BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_RefreshMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_RebuildMarker;
	List_1_t42A86FE68C8321F340DE626A644141DAF4A411E7* ___k_EmptyItems;
	int32_t ___s_DefaultItemHeight;
	CustomStyleProperty_1_t6871E5DBF19AB4DC7E1134B32A03B7A458D52E9F ___s_ItemHeightProperty;
	String_t* ___ussClassName;
	String_t* ___borderUssClassName;
	String_t* ___itemUssClassName;
	String_t* ___dragHoverBarUssClassName;
	String_t* ___dragHoverMarkerUssClassName;
	String_t* ___itemDragHoverUssClassName;
	String_t* ___itemSelectedVariantUssClassName;
	String_t* ___itemAlternativeBackgroundUssClassName;
	String_t* ___listScrollViewUssClassName;
	String_t* ___backgroundFillUssClassName;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

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
struct StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B  : public RuntimeArray
{
	ALIGN_FIELD (8) StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 m_Items[1];

	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Value), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tempData), (void*)NULL);
		#endif
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Value), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tempData), (void*)NULL);
		#endif
	}
};
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m7540979061ABB2A0A6D57213359B3E83A1B7B4D2_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mAD567DC632B01A95C6F418F1C6265F295D1EB0A9_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1_get_Item_m301D7183D2063DC97710DCD2CEF970E7A67EB21C_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_m1D6500596F9B825F39D474A32D7A6D5E14E22B8F_gshared_inline (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mBC248D1BFF0E4CEA6585C0F10707B1843A4502E8_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_m3ACEDE87318824BACAD7E8CB760798D98D37C4FF_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m212191DE0383E512D8297CE138DB5C06BF1E6F4A_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_mB21C58D9FD6C9A89DF0D786C50F960E551B1FB8F_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_gshared (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC StyleEnum_1_op_Implicit_mD776DEBA28E9493976D039080BBB10FF0DA48362_gshared (int32_t ___0_v, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StyleEnum_1_op_Equality_m7A1EC217638144ACB4F5B46031846AAA3FACEFE5_gshared (StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC ___0_lhs, StyleEnum_1_t3DD2EBD4E359AFE77C2974ECAA1DEE50E0FACEDC ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_LastOrDefault_TisRuntimeObject_mB7B75BD214645D8A79DFF139356112781451A936_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Enumerable_Count_TisRuntimeObject_mF0A3BCDCC75BCD5F4B818C48731347D0ED0EC827_gshared (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* VerticalVirtualizationController_1_get_serializedData_mBAE175BB1331E669FE93C025037ADDE19158A837_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F_gshared (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_createFunc, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_actionOnGet, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_actionOnRelease, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___3_actionOnDestroy, bool ___4_collectionCheck, int32_t ___5_defaultCapacity, int32_t ___6_maxSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_gshared (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, RuntimeObject* ___0_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VerticalVirtualizationController_1_get_itemsCount_m41C7EC9F6A7BC1C8586B50841E845B6414F9801F_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_Setup_mC5415B4D4C6B65EB15FC1EB2EC4C85661E092CEA_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, RuntimeObject* ___0_recycledItem, int32_t ___1_newIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Clear_m1AA2CCDA1BA91BB58C5A4578B03502A034811E4E_gshared (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VerticalVirtualizationController_1_GetDraggedIndex_mD64DED3B14A68F3A59150A7ACFBA2B138F4A7A6A_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_HandleFocus_m6F01FC44F3887D8D8040D558FB41B6CCDECFB0EC_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___0_recycledItem, int32_t ___1_previousIndex, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_gshared (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m99141AB321E022D9933448CDD7139BC9FAA443E8_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, bool ___1_trackResurrection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mC17BAA23BA92C7455512FDA5B1618C6D2B54ACA2_gshared (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* Enumerable_CombinePredicates_TisRuntimeObject_m613479C29B013E8FC2987E22F42A3BC6CC2C9768_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate1, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7_gshared (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1_Dispose_m93D0EFD9DDA495E64D508A05C5065C6AC5C4A3DB_gshared (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_gshared_inline (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* Enumerable_CombinePredicates_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E21210FBAD8C39907D331F6A3BE2E5409690ED0_gshared (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate1, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1_Dispose_m953BCF886C8A63456821023DBA45EBD9AC44EB07_gshared (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mEF8F62B9078E538C1DC46BCB876C2AC5B29EA73B_gshared (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mA5AF3B283A737C737C53F5DB1B4DA4CA9B682003_gshared (WhereSelectArrayIterator_2_t250814D5FF34B1F8B88A5E8334436BB633B7B29F* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_gshared_inline (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m04357D1A96A8C4B96BD7145021AE39DD2C9F2A41_gshared (WhereSelectArrayIterator_2_t562C68C2C77B3AA5A84BBA4A0B21DB823E66B703* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m3660F197ECE4BF2A6F8BC99BC8BEF585C9D7BF97_gshared (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mCFDF5484DEE46045B320C928B40C1DB170ED7221_gshared (WhereSelectArrayIterator_2_t0565EB3033FAD927C35E0B8525D2ABB0F1FECB40* __this, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mC246DFE6E89D80A80900F10D492E7093FF349C47_gshared (WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB* __this, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m96BAED87987DAE93B4E6887AE45943A3E21D4E13_gshared (WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m7BBD99849FABDA48F6D93BCE742C5B8398B5409F_gshared (WhereSelectEnumerableIterator_2_t7BA7CE7768E39319636272B29292281AB152E7D6* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m2E08505C4CB96CC2AD340B4A2B0D3BF0D6DA01F9_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m646AB1CCB6D9D0F7262BFB41A4D35C6C14C6A4D2_gshared (WhereSelectEnumerableIterator_2_tDD70C727530B3DBADEB387A0E353F5F829380BF9* __this, RuntimeObject* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m67E0676B846F7D5D13322DFE2366E000F49CCE01_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, RuntimeObject* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m42B6E206A0E398E45DA94F8109B58ACE1749F6A4_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751_gshared (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA (const RuntimeMethod* method) ;
inline void Vector_1__ctor_m7540979061ABB2A0A6D57213359B3E83A1B7B4D2 (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, Il2CppFullySharedGenericStruct, const RuntimeMethod*))Vector_1__ctor_m7540979061ABB2A0A6D57213359B3E83A1B7B4D2_gshared)((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*)__this, ___0_value, method);
}
inline void Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001 (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, void* ___0_dataPointer, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, void*, const RuntimeMethod*))Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001_gshared)(__this, ___0_dataPointer, method);
}
inline void Vector_1__ctor_mAD567DC632B01A95C6F418F1C6265F295D1EB0A9 (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, void*, int32_t, const RuntimeMethod*))Vector_1__ctor_mAD567DC632B01A95C6F418F1C6265F295D1EB0A9_gshared)(__this, ___0_dataPointer, ___1_offset, method);
}
inline void Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674 (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_gshared)(__this, ___0_existingRegister, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09 (String_t* ___0_resourceFormat, RuntimeObject* ___1_p1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Vector_1_get_Item_m301D7183D2063DC97710DCD2CEF970E7A67EB21C (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, int32_t, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Vector_1_get_Item_m301D7183D2063DC97710DCD2CEF970E7A67EB21C_gshared)((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*)__this, ___0_index, il2cppRetVal, method);
}
inline bool Vector_1_Equals_m1D6500596F9B825F39D474A32D7A6D5E14E22B8F_inline (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, RuntimeObject*, const RuntimeMethod*))Vector_1_Equals_m1D6500596F9B825F39D474A32D7A6D5E14E22B8F_gshared_inline)(__this, ___0_obj, method);
}
inline bool Vector_1_Equals_mBC248D1BFF0E4CEA6585C0F10707B1843A4502E8 (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_other, const RuntimeMethod* method)
{
	return ((  bool (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))Vector_1_Equals_mBC248D1BFF0E4CEA6585C0F10707B1843A4502E8_gshared)(__this, ___0_other, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7 (int32_t ___0_h1, int32_t ___1_h2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF (int8_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200 (uint16_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1 (int16_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC (uint32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496 (int64_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) ;
inline int32_t Vector_1_GetHashCode_m3ACEDE87318824BACAD7E8CB760798D98D37C4FF (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, const RuntimeMethod*))Vector_1_GetHashCode_m3ACEDE87318824BACAD7E8CB760798D98D37C4FF_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
inline String_t* Vector_1_ToString_m212191DE0383E512D8297CE138DB5C06BF1E6F4A (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, const RuntimeMethod*))Vector_1_ToString_m212191DE0383E512D8297CE138DB5C06BF1E6F4A_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F (RuntimeObject* ___0_formatProvider, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
inline String_t* Vector_1_ToString_mB21C58D9FD6C9A89DF0D786C50F960E551B1FB8F (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, String_t*, RuntimeObject*, const RuntimeMethod*))Vector_1_ToString_mB21C58D9FD6C9A89DF0D786C50F960E551B1FB8F_gshared)(__this, ___0_format, ___1_formatProvider, method);
}
inline void Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606 (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_gshared)(__this, ___0_existingRegister, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496 (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
inline StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030 (int32_t ___0_v, const RuntimeMethod* method)
{
	return ((  StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 (*) (int32_t, const RuntimeMethod*))StyleEnum_1_op_Implicit_mD776DEBA28E9493976D039080BBB10FF0DA48362_gshared)(___0_v, method);
}
inline bool StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD (StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 ___0_lhs, StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 ___1_rhs, const RuntimeMethod* method)
{
	return ((  bool (*) (StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69, StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69, const RuntimeMethod*))StyleEnum_1_op_Equality_m7A1EC217638144ACB4F5B46031846AAA3FACEFE5_gshared)(___0_lhs, ___1_rhs, method);
}
inline RuntimeObject* Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994 (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994_gshared)(___0_source, ___1_predicate, method);
}
inline RuntimeObject* Enumerable_LastOrDefault_TisRuntimeObject_mB7B75BD214645D8A79DFF139356112781451A936 (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))Enumerable_LastOrDefault_TisRuntimeObject_mB7B75BD214645D8A79DFF139356112781451A936_gshared)(___0_source, ___1_predicate, method);
}
inline int32_t Enumerable_Count_TisRuntimeObject_mF0A3BCDCC75BCD5F4B818C48731347D0ED0EC827 (RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))Enumerable_Count_TisRuntimeObject_mF0A3BCDCC75BCD5F4B818C48731347D0ED0EC827_gshared)(___0_source, ___1_predicate, method);
}
inline SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* VerticalVirtualizationController_1_get_serializedData_mBAE175BB1331E669FE93C025037ADDE19158A837 (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method)
{
	return ((  SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* (*) (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345*, const RuntimeMethod*))VerticalVirtualizationController_1_get_serializedData_mBAE175BB1331E669FE93C025037ADDE19158A837_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaseVerticalCollectionView_get_lastHeight_mEDABF6845E379DCA0216106F56FAF84B952DA1F2_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
inline void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8 (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___0_object, ___1_method, method);
}
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
inline void ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_createFunc, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_actionOnGet, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___2_actionOnRelease, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___3_actionOnDestroy, bool ___4_collectionCheck, int32_t ___5_defaultCapacity, int32_t ___6_maxSize, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, bool, int32_t, int32_t, const RuntimeMethod*))ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F_gshared)(__this, ___0_createFunc, ___1_actionOnGet, ___2_actionOnRelease, ___3_actionOnDestroy, ___4_collectionCheck, ___5_defaultCapacity, ___6_maxSize, method);
}
inline void List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_gshared)(__this, method);
}
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* BaseVerticalCollectionView_get_scrollView_mB4F44C6276CC57A0D8AD030F3C396650532E83CC_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionVirtualizationController__ctor_m15661787A5CF03B2A2EC3250592571C64A0174D2 (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801* __this, ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* ___0_scrollView, const RuntimeMethod* method) ;
inline void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697 (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_set_disableClipping_m3E786643EBFEE5BDC0778C835140934FF3FF80CB (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, bool ___0_value, const RuntimeMethod* method) ;
inline RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, const RuntimeMethod* method) ;
inline void ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5 (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, RuntimeObject* ___0_element, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, RuntimeObject*, const RuntimeMethod*))ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5_gshared)(__this, ___0_element, method);
}
inline int32_t VerticalVirtualizationController_1_get_itemsCount_m41C7EC9F6A7BC1C8586B50841E845B6414F9801F (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345*, const RuntimeMethod*))VerticalVirtualizationController_1_get_itemsCount_m41C7EC9F6A7BC1C8586B50841E845B6414F9801F_gshared)(__this, method);
}
inline void VerticalVirtualizationController_1_Setup_mC5415B4D4C6B65EB15FC1EB2EC4C85661E092CEA (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, RuntimeObject* ___0_recycledItem, int32_t ___1_newIndex, const RuntimeMethod* method)
{
	((  void (*) (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345*, RuntimeObject*, int32_t, const RuntimeMethod*))VerticalVirtualizationController_1_Setup_mC5415B4D4C6B65EB15FC1EB2EC4C85661E092CEA_gshared)(__this, ___0_recycledItem, ___1_newIndex, method);
}
inline int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
inline void ObjectPool_1_Clear_m1AA2CCDA1BA91BB58C5A4578B03502A034811E4E (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, const RuntimeMethod*))ObjectPool_1_Clear_m1AA2CCDA1BA91BB58C5A4578B03502A034811E4E_gshared)(__this, method);
}
inline void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Clear_m201F95F3031691823F39BAEC5ED378C82F34AC7F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReusableCollectionItem_get_isDragGhost_m3D932E557A3B750E12C3D6406B0DB52C6D63513F_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, const RuntimeMethod* method) ;
inline int32_t VerticalVirtualizationController_1_GetDraggedIndex_mD64DED3B14A68F3A59150A7ACFBA2B138F4A7A6A (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345*, const RuntimeMethod*))VerticalVirtualizationController_1_GetDraggedIndex_mD64DED3B14A68F3A59150A7ACFBA2B138F4A7A6A_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReusableCollectionItem_get_id_m765F123306544777F8B1E273AFB8A0A1E94C4857_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BaseVerticalCollectionView_get_showAlternatingRowBackgrounds_m47BFEE57E56D46D6C705C7F7DD6C8BA5DBB2B97A (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, String_t* ___0_className, bool ___1_enable, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReusableCollectionItem_set_id_m681AB8AB77EE8E8E0B0105C0955B7BCF1FBDE1B7_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_BringToFront_m9E1C19327401C3AC5A62EC6432E0DAC4457BC59E (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_PlaceBehind_m248F49B17935C60E15E4BC5241D68A2713932CFF (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_sibling, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_SendToBack_m5452936AAAEF38D9932278786E0BCCD17BECE511 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
inline void VerticalVirtualizationController_1_HandleFocus_m6F01FC44F3887D8D8040D558FB41B6CCDECFB0EC (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___0_recycledItem, int32_t ___1_previousIndex, const RuntimeMethod* method)
{
	((  void (*) (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345*, ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t, const RuntimeMethod*))VerticalVirtualizationController_1_HandleFocus_m6F01FC44F3887D8D8040D558FB41B6CCDECFB0EC_gshared)(__this, ___0_recycledItem, ___1_previousIndex, method);
}
inline void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VisualElement_FindElementInTree_mE71D464CD81A416B9A09C44392835A80D0895D59 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___1_outChildIndexes, const RuntimeMethod* method) ;
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_gshared)(__this, ___0_index, method);
}
inline void List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* VisualElement_ElementAtTreePath_m83234CBC5C58A6FEB70F3DCB6BF67C9D1D3D1DED (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_childIndexes, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VisualElement_get_resolvedStyle_m3885B7534A94E0BCE024A9621465A0F273DA0AEB (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
inline RuntimeObject* VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659 (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345*, const RuntimeMethod*))VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* VisualElement_get_classList_mF29F87BE5A1BFC82854AD0D6355A713D5AC517C1 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_child, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 StyleFloat_op_Implicit_m534A028510332FD68BBBAF6C96028FAE936A2DDB (float ___0_v, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Hierarchy_get_childCount_mAD31B42C0FF9B64AAF6A8CF23F22024B3F9542D5 (Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* Hierarchy_get_Item_mBA5811C28D9E7FA48D0F10603A95F8CF248C3467 (Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019 (float ___0_v, const RuntimeMethod* method) ;
inline int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___0_item, method);
}
inline void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ListViewDraggerExtension_GetRecycledItemFromIndex_m2DCBCAD63977E19CCB2888783463D3CCB7956F5C (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___0_listView, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VisualElement_IndexOf_m1CC000F2192D5D561AE87B2EC3AB312BD0D714AE (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_element, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElement_Insert_m95ACF6FC7BCF788C955714E8DADF07FACE5C0031 (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, int32_t ___0_index, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___1_element, const RuntimeMethod* method) ;
inline void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, RuntimeObject* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, RuntimeObject*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___0_index, ___1_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline RuntimeObject* ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89 (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*, const RuntimeMethod*))ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89_gshared)(__this, method);
}
inline void Action_1__ctor_mC0F49DD2F8ED1E95FA4D285BFC8AB8185ACAEA4D (Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReusableCollectionItem_add_onDestroy_m409E356FF514F61FFD076178469E829C495DAE01 (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09* ___0_value, const RuntimeMethod* method) ;
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
inline bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReusableCollectionItem_remove_onDestroy_mF9E3F8DCD03F5804E8A886C5D06AA8F945E43097 (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* BaseVerticalCollectionView_get_dragger_m561975581D087B9C51C90CDFC1D68EE6CECD9446_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ListViewDraggerAnimated_get_isDragging_mD3F1699680ED7437E060BABDBC817F537AA0EDF4_inline (ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ListViewDraggerAnimated_get_draggedItem_m883BB528AA8A39239BD882AC45FC24981C45E5EC_inline (ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseVisualElementScheduledItem__ctor_mB5C5818F39CDC5846487311B47B3A5BEEA840E68 (BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_handler, const RuntimeMethod* method) ;
inline void WeakReference_1__ctor_m99141AB321E022D9933448CDD7139BC9FAA443E8 (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, bool ___1_trackResurrection, const RuntimeMethod* method)
{
	((  void (*) (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE*, RuntimeObject*, bool, const RuntimeMethod*))WeakReference_1__ctor_m99141AB321E022D9933448CDD7139BC9FAA443E8_gshared)(__this, ___0_target, ___1_trackResurrection, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___0_value, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034 (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F (SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* __this, String_t* ___0_name, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
inline void Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63 (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63_gshared)(__this, method);
}
inline void WhereArrayIterator_1__ctor_mC17BAA23BA92C7455512FDA5B1618C6D2B54ACA2 (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))WhereArrayIterator_1__ctor_mC17BAA23BA92C7455512FDA5B1618C6D2B54ACA2_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline)(__this, ___0_arg, method);
}
inline Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* Enumerable_CombinePredicates_TisRuntimeObject_m613479C29B013E8FC2987E22F42A3BC6CC2C9768 (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate1, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate2, const RuntimeMethod* method)
{
	return ((  Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))Enumerable_CombinePredicates_TisRuntimeObject_m613479C29B013E8FC2987E22F42A3BC6CC2C9768_gshared)(___0_predicate1, ___1_predicate2, method);
}
inline void Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7 (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*, const RuntimeMethod*))Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7_gshared)(__this, method);
}
inline void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*, RuntimeObject*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1_Dispose_m93D0EFD9DDA495E64D508A05C5065C6AC5C4A3DB (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*, const RuntimeMethod*))Iterator_1_Dispose_m93D0EFD9DDA495E64D508A05C5065C6AC5C4A3DB_gshared)(__this, method);
}
inline bool Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, int32_t, const RuntimeMethod*))Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_gshared_inline)(__this, ___0_arg, method);
}
inline Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* Enumerable_CombinePredicates_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E21210FBAD8C39907D331F6A3BE2E5409690ED0 (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate1, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate2, const RuntimeMethod* method)
{
	return ((  Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* (*) (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, const RuntimeMethod*))Enumerable_CombinePredicates_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E21210FBAD8C39907D331F6A3BE2E5409690ED0_gshared)(___0_predicate1, ___1_predicate2, method);
}
inline void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01 (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1_Dispose_m953BCF886C8A63456821023DBA45EBD9AC44EB07 (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*, const RuntimeMethod*))Iterator_1_Dispose_m953BCF886C8A63456821023DBA45EBD9AC44EB07_gshared)(__this, method);
}
inline void WhereListIterator_1__ctor_mEF8F62B9078E538C1DC46BCB876C2AC5B29EA73B (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))WhereListIterator_1__ctor_mEF8F62B9078E538C1DC46BCB876C2AC5B29EA73B_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
inline void WhereSelectArrayIterator_2__ctor_mA5AF3B283A737C737C53F5DB1B4DA4CA9B682003 (WhereSelectArrayIterator_2_t250814D5FF34B1F8B88A5E8334436BB633B7B29F* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_t250814D5FF34B1F8B88A5E8334436BB633B7B29F*, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_mA5AF3B283A737C737C53F5DB1B4DA4CA9B682003_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline int32_t Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_inline (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*, int32_t, const RuntimeMethod*))Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectArrayIterator_2__ctor_m04357D1A96A8C4B96BD7145021AE39DD2C9F2A41 (WhereSelectArrayIterator_2_t562C68C2C77B3AA5A84BBA4A0B21DB823E66B703* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_t562C68C2C77B3AA5A84BBA4A0B21DB823E66B703*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m04357D1A96A8C4B96BD7145021AE39DD2C9F2A41_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectArrayIterator_2__ctor_m3660F197ECE4BF2A6F8BC99BC8BEF585C9D7BF97 (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_m3660F197ECE4BF2A6F8BC99BC8BEF585C9D7BF97_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectArrayIterator_2__ctor_mCFDF5484DEE46045B320C928B40C1DB170ED7221 (WhereSelectArrayIterator_2_t0565EB3033FAD927C35E0B8525D2ABB0F1FECB40* __this, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_t0565EB3033FAD927C35E0B8525D2ABB0F1FECB40*, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_mCFDF5484DEE46045B320C928B40C1DB170ED7221_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline)(__this, ___0_arg, method);
}
inline int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectArrayIterator_2__ctor_mC246DFE6E89D80A80900F10D492E7093FF349C47 (WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB* __this, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB*, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, const RuntimeMethod*))WhereSelectArrayIterator_2__ctor_mC246DFE6E89D80A80900F10D492E7093FF349C47_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*))Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m96BAED87987DAE93B4E6887AE45943A3E21D4E13 (WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D*, RuntimeObject*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m96BAED87987DAE93B4E6887AE45943A3E21D4E13_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m7BBD99849FABDA48F6D93BCE742C5B8398B5409F (WhereSelectEnumerableIterator_2_t7BA7CE7768E39319636272B29292281AB152E7D6* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_t7BA7CE7768E39319636272B29292281AB152E7D6*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m7BBD99849FABDA48F6D93BCE742C5B8398B5409F_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m2E08505C4CB96CC2AD340B4A2B0D3BF0D6DA01F9 (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F*, RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m2E08505C4CB96CC2AD340B4A2B0D3BF0D6DA01F9_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m646AB1CCB6D9D0F7262BFB41A4D35C6C14C6A4D2 (WhereSelectEnumerableIterator_2_tDD70C727530B3DBADEB387A0E353F5F829380BF9* __this, RuntimeObject* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_tDD70C727530B3DBADEB387A0E353F5F829380BF9*, RuntimeObject*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m646AB1CCB6D9D0F7262BFB41A4D35C6C14C6A4D2_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectEnumerableIterator_2__ctor_m67E0676B846F7D5D13322DFE2366E000F49CCE01 (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, RuntimeObject* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586*, RuntimeObject*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, const RuntimeMethod*))WhereSelectEnumerableIterator_2__ctor_m67E0676B846F7D5D13322DFE2366E000F49CCE01_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectListIterator_2__ctor_m42B6E206A0E398E45DA94F8109B58ACE1749F6A4 (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A*, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA*, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m42B6E206A0E398E45DA94F8109B58ACE1749F6A4_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_gshared)(__this, method);
}
inline int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*, const RuntimeMethod*))Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, Func_2_tACBF5A1656250800CE861707354491F0611F6624*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64 (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751 (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F (*) (List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, const RuntimeMethod*))List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751_gshared)(__this, method);
}
inline StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline)(__this, method);
}
inline bool Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*, const RuntimeMethod*))Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF*, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A*, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline void List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4_gshared)(__this, ___0_item, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m3432B49FF8435F45396666AA8B4724CF478EC0A1_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_0 = ((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_count;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 Vector_1_get_Zero_m3384DC19FF560B5C07194EB2690C6AE65E910311_gshared (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_zero;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_InitializeCount_m504CE8338E1C01BCEFF3CBA1A65D3F27AB0D6E93_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	VectorSizeHelper_tAB183E4966E0B97A19A75D213EDAE51037A6BF3C V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B14_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B19_0 = 0;
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* L_0 = (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*)(&(&V_0)->____placeholder);
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_1 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&L_0->___register);
		uint8_t* L_2 = (uint8_t*)(&L_1->___byte_0);
		V_1 = (uint8_t*)((uintptr_t)L_2);
		uint8_t* L_3 = (uint8_t*)(&(&V_0)->____byte);
		uint8_t* L_4 = V_1;
		V_2 = (-1);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_8, NULL);
		if (!L_9)
		{
			G_B2_0 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uintptr_t)L_3), (intptr_t)L_4))/1))));
			goto IL_0045;
		}
		G_B1_0 = ((int32_t)((int64_t)(intptr_t)((uint8_t*)((intptr_t)((uint8_t*)il2cpp_codegen_subtract((intptr_t)((uintptr_t)L_3), (intptr_t)L_4))/1))));
	}
	{
		V_2 = 1;
		G_B21_0 = G_B1_0;
		goto IL_0176;
	}

IL_0045:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_13, NULL);
		if (!L_14)
		{
			G_B4_0 = G_B2_0;
			goto IL_0067;
		}
		G_B3_0 = G_B2_0;
	}
	{
		V_2 = 1;
		G_B21_0 = G_B3_0;
		goto IL_0176;
	}

IL_0067:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		bool L_19;
		L_19 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_16, L_18, NULL);
		if (!L_19)
		{
			G_B6_0 = G_B4_0;
			goto IL_0089;
		}
		G_B5_0 = G_B4_0;
	}
	{
		V_2 = 2;
		G_B21_0 = G_B5_0;
		goto IL_0176;
	}

IL_0089:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		if (!L_24)
		{
			G_B8_0 = G_B6_0;
			goto IL_00ab;
		}
		G_B7_0 = G_B6_0;
	}
	{
		V_2 = 2;
		G_B21_0 = G_B7_0;
		goto IL_0176;
	}

IL_00ab:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		bool L_29;
		L_29 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_26, L_28, NULL);
		if (!L_29)
		{
			G_B10_0 = G_B8_0;
			goto IL_00cd;
		}
		G_B9_0 = G_B8_0;
	}
	{
		V_2 = 4;
		G_B21_0 = G_B9_0;
		goto IL_0176;
	}

IL_00cd:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		bool L_34;
		L_34 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_31, L_33, NULL);
		if (!L_34)
		{
			G_B12_0 = G_B10_0;
			goto IL_00ef;
		}
		G_B11_0 = G_B10_0;
	}
	{
		V_2 = 4;
		G_B21_0 = G_B11_0;
		goto IL_0176;
	}

IL_00ef:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		bool L_39;
		L_39 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_36, L_38, NULL);
		if (!L_39)
		{
			G_B14_0 = G_B12_0;
			goto IL_010e;
		}
		G_B13_0 = G_B12_0;
	}
	{
		V_2 = 8;
		G_B21_0 = G_B13_0;
		goto IL_0176;
	}

IL_010e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			G_B16_0 = G_B14_0;
			goto IL_012d;
		}
		G_B15_0 = G_B14_0;
	}
	{
		V_2 = 8;
		G_B21_0 = G_B15_0;
		goto IL_0176;
	}

IL_012d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		bool L_49;
		L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
		if (!L_49)
		{
			G_B18_0 = G_B16_0;
			goto IL_014c;
		}
		G_B17_0 = G_B16_0;
	}
	{
		V_2 = 4;
		G_B21_0 = G_B17_0;
		goto IL_0176;
	}

IL_014c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_52 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_53;
		L_53 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_52, NULL);
		bool L_54;
		L_54 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_51, L_53, NULL);
		if (!L_54)
		{
			G_B20_0 = G_B18_0;
			goto IL_016b;
		}
		G_B19_0 = G_B18_0;
	}
	{
		V_2 = 8;
		G_B21_0 = G_B19_0;
		goto IL_0176;
	}

IL_016b:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_55 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_55, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_55, method);
	}

IL_0176:
	{
		int32_t L_56 = V_2;
		return ((int32_t)(G_B21_0/L_56));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m7540979061ABB2A0A6D57213359B3E83A1B7B4D2_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_26 = L_11;
	const Il2CppFullySharedGenericStruct L_41 = L_11;
	const Il2CppFullySharedGenericStruct L_56 = L_11;
	const Il2CppFullySharedGenericStruct L_71 = L_11;
	const Il2CppFullySharedGenericStruct L_86 = L_11;
	const Il2CppFullySharedGenericStruct L_101 = L_11;
	const Il2CppFullySharedGenericStruct L_116 = L_11;
	const Il2CppFullySharedGenericStruct L_131 = L_11;
	const Il2CppFullySharedGenericStruct L_146 = L_11;
	const Il2CppFullySharedGenericStruct L_157 = L_11;
	const Il2CppFullySharedGenericStruct L_210 = L_11;
	const Il2CppFullySharedGenericStruct L_263 = L_11;
	const Il2CppFullySharedGenericStruct L_292 = L_11;
	const Il2CppFullySharedGenericStruct L_321 = L_11;
	const Il2CppFullySharedGenericStruct L_338 = L_11;
	const Il2CppFullySharedGenericStruct L_355 = L_11;
	const Il2CppFullySharedGenericStruct L_366 = L_11;
	const Il2CppFullySharedGenericStruct L_377 = L_11;
	const Il2CppFullySharedGenericStruct L_394 = L_11;
	const Il2CppFullySharedGenericStruct L_160 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_213 = L_160;
	const Il2CppFullySharedGenericStruct L_266 = L_160;
	const Il2CppFullySharedGenericStruct L_295 = L_160;
	const Il2CppFullySharedGenericStruct L_324 = L_160;
	const Il2CppFullySharedGenericStruct L_341 = L_160;
	const Il2CppFullySharedGenericStruct L_358 = L_160;
	const Il2CppFullySharedGenericStruct L_369 = L_160;
	const Il2CppFullySharedGenericStruct L_380 = L_160;
	const Il2CppFullySharedGenericStruct L_397 = L_160;
	const Il2CppFullySharedGenericStruct L_163 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_216 = L_163;
	const Il2CppFullySharedGenericStruct L_269 = L_163;
	const Il2CppFullySharedGenericStruct L_298 = L_163;
	const Il2CppFullySharedGenericStruct L_327 = L_163;
	const Il2CppFullySharedGenericStruct L_344 = L_163;
	const Il2CppFullySharedGenericStruct L_383 = L_163;
	const Il2CppFullySharedGenericStruct L_166 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_219 = L_166;
	const Il2CppFullySharedGenericStruct L_272 = L_166;
	const Il2CppFullySharedGenericStruct L_301 = L_166;
	const Il2CppFullySharedGenericStruct L_330 = L_166;
	const Il2CppFullySharedGenericStruct L_347 = L_166;
	const Il2CppFullySharedGenericStruct L_386 = L_166;
	const Il2CppFullySharedGenericStruct L_169 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_222 = L_169;
	const Il2CppFullySharedGenericStruct L_275 = L_169;
	const Il2CppFullySharedGenericStruct L_304 = L_169;
	const Il2CppFullySharedGenericStruct L_172 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_225 = L_172;
	const Il2CppFullySharedGenericStruct L_278 = L_172;
	const Il2CppFullySharedGenericStruct L_307 = L_172;
	const Il2CppFullySharedGenericStruct L_175 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_228 = L_175;
	const Il2CppFullySharedGenericStruct L_281 = L_175;
	const Il2CppFullySharedGenericStruct L_310 = L_175;
	const Il2CppFullySharedGenericStruct L_178 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_231 = L_178;
	const Il2CppFullySharedGenericStruct L_284 = L_178;
	const Il2CppFullySharedGenericStruct L_313 = L_178;
	const Il2CppFullySharedGenericStruct L_181 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_234 = L_181;
	const Il2CppFullySharedGenericStruct L_184 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_237 = L_184;
	const Il2CppFullySharedGenericStruct L_187 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_240 = L_187;
	const Il2CppFullySharedGenericStruct L_190 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_243 = L_190;
	const Il2CppFullySharedGenericStruct L_193 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_246 = L_193;
	const Il2CppFullySharedGenericStruct L_196 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_249 = L_196;
	const Il2CppFullySharedGenericStruct L_199 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_252 = L_199;
	const Il2CppFullySharedGenericStruct L_202 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_255 = L_202;
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	int32_t V_2 = 0;
	int8_t* V_3 = NULL;
	int8_t* V_4 = NULL;
	int32_t V_5 = 0;
	uint16_t* V_6 = NULL;
	uint16_t* V_7 = NULL;
	int32_t V_8 = 0;
	int16_t* V_9 = NULL;
	int16_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint32_t* V_12 = NULL;
	uint32_t* V_13 = NULL;
	int32_t V_14 = 0;
	int32_t* V_15 = NULL;
	int32_t* V_16 = NULL;
	int32_t V_17 = 0;
	uint64_t* V_18 = NULL;
	uint64_t* V_19 = NULL;
	int32_t V_20 = 0;
	int64_t* V_21 = NULL;
	int64_t* V_22 = NULL;
	int32_t V_23 = 0;
	float* V_24 = NULL;
	float* V_25 = NULL;
	int32_t V_26 = 0;
	double* V_27 = NULL;
	double* V_28 = NULL;
	int32_t V_29 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2));
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0386;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_005e;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_6 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_7 = (uint8_t*)(&L_6->___byte_0);
		V_1 = L_7;
		uint8_t* L_8 = V_1;
		V_0 = (uint8_t*)((uintptr_t)L_8);
		V_2 = 0;
		goto IL_0052;
	}

IL_003f:
	{
		uint8_t* L_9 = V_0;
		int32_t L_10 = V_2;
		il2cpp_codegen_memcpy(L_11, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_12 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_11);
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10))) = (int8_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_12, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_15;
		L_15 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_003f;
		}
	}
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		return;
	}

IL_005e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_00b3;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_21 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_22 = (int8_t*)(&L_21->___sbyte_0);
		V_4 = L_22;
		int8_t* L_23 = V_4;
		V_3 = (int8_t*)((uintptr_t)L_23);
		V_5 = 0;
		goto IL_00a5;
	}

IL_008f:
	{
		int8_t* L_24 = V_3;
		int32_t L_25 = V_5;
		il2cpp_codegen_memcpy(L_26, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_27 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_26);
		*((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_24, L_25))) = (int8_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_27, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		int32_t L_28 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00a5:
	{
		int32_t L_29 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_30;
		L_30 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_008f;
		}
	}
	{
		V_4 = (int8_t*)((uintptr_t)0);
		return;
	}

IL_00b3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		bool L_35;
		L_35 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_32, L_34, NULL);
		if (!L_35)
		{
			goto IL_010d;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_36 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_37 = (uint16_t*)(&L_36->___uint16_0);
		V_7 = L_37;
		uint16_t* L_38 = V_7;
		V_6 = (uint16_t*)((uintptr_t)L_38);
		V_8 = 0;
		goto IL_00ff;
	}

IL_00e5:
	{
		uint16_t* L_39 = V_6;
		int32_t L_40 = V_8;
		il2cpp_codegen_memcpy(L_41, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_42 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_41);
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 2))))) = (int16_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_42, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		int32_t L_43 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00ff:
	{
		int32_t L_44 = V_8;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_45;
		L_45 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_00e5;
		}
	}
	{
		V_7 = (uint16_t*)((uintptr_t)0);
		return;
	}

IL_010d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		bool L_50;
		L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
		if (!L_50)
		{
			goto IL_0167;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_51 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_52 = (int16_t*)(&L_51->___int16_0);
		V_10 = L_52;
		int16_t* L_53 = V_10;
		V_9 = (int16_t*)((uintptr_t)L_53);
		V_11 = 0;
		goto IL_0159;
	}

IL_013f:
	{
		int16_t* L_54 = V_9;
		int32_t L_55 = V_11;
		il2cpp_codegen_memcpy(L_56, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_57 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_56);
		*((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_54, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_55), 2))))) = (int16_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_57, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		int32_t L_58 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_58, 1));
	}

IL_0159:
	{
		int32_t L_59 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_60;
		L_60 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_013f;
		}
	}
	{
		V_10 = (int16_t*)((uintptr_t)0);
		return;
	}

IL_0167:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		bool L_65;
		L_65 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_62, L_64, NULL);
		if (!L_65)
		{
			goto IL_01c1;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_66 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t* L_67 = (uint32_t*)(&L_66->___uint32_0);
		V_13 = L_67;
		uint32_t* L_68 = V_13;
		V_12 = (uint32_t*)((uintptr_t)L_68);
		V_14 = 0;
		goto IL_01b3;
	}

IL_0199:
	{
		uint32_t* L_69 = V_12;
		int32_t L_70 = V_14;
		il2cpp_codegen_memcpy(L_71, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_72 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_71);
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_69, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_70), 4))))) = (int32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_72, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		int32_t L_73 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_01b3:
	{
		int32_t L_74 = V_14;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_75;
		L_75 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_0199;
		}
	}
	{
		V_13 = (uint32_t*)((uintptr_t)0);
		return;
	}

IL_01c1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
		if (!L_80)
		{
			goto IL_021b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_81 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t* L_82 = (int32_t*)(&L_81->___int32_0);
		V_16 = L_82;
		int32_t* L_83 = V_16;
		V_15 = (int32_t*)((uintptr_t)L_83);
		V_17 = 0;
		goto IL_020d;
	}

IL_01f3:
	{
		int32_t* L_84 = V_15;
		int32_t L_85 = V_17;
		il2cpp_codegen_memcpy(L_86, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_87 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_86);
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_84, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_85), 4))))) = (int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_87, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		int32_t L_88 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_88, 1));
	}

IL_020d:
	{
		int32_t L_89 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_90;
		L_90 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_89) < ((int32_t)L_90)))
		{
			goto IL_01f3;
		}
	}
	{
		V_16 = (int32_t*)((uintptr_t)0);
		return;
	}

IL_021b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_93 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_94;
		L_94 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_93, NULL);
		bool L_95;
		L_95 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_92, L_94, NULL);
		if (!L_95)
		{
			goto IL_0275;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_96 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_97 = (uint64_t*)(&L_96->___uint64_0);
		V_19 = L_97;
		uint64_t* L_98 = V_19;
		V_18 = (uint64_t*)((uintptr_t)L_98);
		V_20 = 0;
		goto IL_0267;
	}

IL_024d:
	{
		uint64_t* L_99 = V_18;
		int32_t L_100 = V_20;
		il2cpp_codegen_memcpy(L_101, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_102 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_101);
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_99, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_100), 8))))) = (int64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_102, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))));
		int32_t L_103 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_103, 1));
	}

IL_0267:
	{
		int32_t L_104 = V_20;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_105;
		L_105 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_104) < ((int32_t)L_105)))
		{
			goto IL_024d;
		}
	}
	{
		V_19 = (uint64_t*)((uintptr_t)0);
		return;
	}

IL_0275:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_02cf;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_111 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int64_t* L_112 = (int64_t*)(&L_111->___int64_0);
		V_22 = L_112;
		int64_t* L_113 = V_22;
		V_21 = (int64_t*)((uintptr_t)L_113);
		V_23 = 0;
		goto IL_02c1;
	}

IL_02a7:
	{
		int64_t* L_114 = V_21;
		int32_t L_115 = V_23;
		il2cpp_codegen_memcpy(L_116, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_117 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_116);
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_115), 8))))) = (int64_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_117, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		int32_t L_118 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_118, 1));
	}

IL_02c1:
	{
		int32_t L_119 = V_23;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_120;
		L_120 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_119) < ((int32_t)L_120)))
		{
			goto IL_02a7;
		}
	}
	{
		V_22 = (int64_t*)((uintptr_t)0);
		return;
	}

IL_02cf:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_121 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_122;
		L_122 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_121, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_124;
		L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
		bool L_125;
		L_125 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_122, L_124, NULL);
		if (!L_125)
		{
			goto IL_0329;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_126 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float* L_127 = (float*)(&L_126->___single_0);
		V_25 = L_127;
		float* L_128 = V_25;
		V_24 = (float*)((uintptr_t)L_128);
		V_26 = 0;
		goto IL_031b;
	}

IL_0301:
	{
		float* L_129 = V_24;
		int32_t L_130 = V_26;
		il2cpp_codegen_memcpy(L_131, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_132 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_131);
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_129, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_130), 4))))) = (float)((*(float*)((float*)(float*)UnBox(L_132, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		int32_t L_133 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_133, 1));
	}

IL_031b:
	{
		int32_t L_134 = V_26;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_135;
		L_135 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_134) < ((int32_t)L_135)))
		{
			goto IL_0301;
		}
	}
	{
		V_25 = (float*)((uintptr_t)0);
		return;
	}

IL_0329:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_137;
		L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
		bool L_140;
		L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
		if (!L_140)
		{
			goto IL_0a55;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_141 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		double* L_142 = (double*)(&L_141->___double_0);
		V_28 = L_142;
		double* L_143 = V_28;
		V_27 = (double*)((uintptr_t)L_143);
		V_29 = 0;
		goto IL_0378;
	}

IL_035e:
	{
		double* L_144 = V_27;
		int32_t L_145 = V_29;
		il2cpp_codegen_memcpy(L_146, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_147 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_146);
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_144, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_145), 8))))) = (double)((*(double*)((double*)(double*)UnBox(L_147, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		int32_t L_148 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_148, 1));
	}

IL_0378:
	{
		int32_t L_149 = V_29;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_150;
		L_150 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_149) < ((int32_t)L_150)))
		{
			goto IL_035e;
		}
	}
	{
		V_28 = (double*)((uintptr_t)0);
		return;
	}

IL_0386:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_151 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_152;
		L_152 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_151, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_153 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_154;
		L_154 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_153, NULL);
		bool L_155;
		L_155 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_152, L_154, NULL);
		if (!L_155)
		{
			goto IL_0505;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_156 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_157, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_158 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_157);
		L_156->___byte_0 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_158, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_159 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_160, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_161 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_160);
		L_159->___byte_1 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_161, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_162 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_163, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_164 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_163);
		L_162->___byte_2 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_164, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_165 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_166, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_167 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_166);
		L_165->___byte_3 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_167, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_168 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_169, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_170 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_169);
		L_168->___byte_4 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_170, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_171 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_172, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_173 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_172);
		L_171->___byte_5 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_173, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_174 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_175, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_176 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_175);
		L_174->___byte_6 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_176, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_177 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_178, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_179 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_178);
		L_177->___byte_7 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_179, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_180 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_181, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_182 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_181);
		L_180->___byte_8 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_182, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_183 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_184, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_185 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_184);
		L_183->___byte_9 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_185, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_186 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_187, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_188 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_187);
		L_186->___byte_10 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_188, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_189 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_190, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_191 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_190);
		L_189->___byte_11 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_191, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_192 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_193, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_194 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_193);
		L_192->___byte_12 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_194, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_195 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_196, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_197 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_196);
		L_195->___byte_13 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_197, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_198 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_199, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_200 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_199);
		L_198->___byte_14 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_200, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_201 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_202, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_203 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_202);
		L_201->___byte_15 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_203, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		return;
	}

IL_0505:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_204 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_205;
		L_205 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_204, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_206 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_207;
		L_207 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_206, NULL);
		bool L_208;
		L_208 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_205, L_207, NULL);
		if (!L_208)
		{
			goto IL_0684;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_209 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_210, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_211 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_210);
		L_209->___sbyte_0 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_211, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_212 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_213, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_214 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_213);
		L_212->___sbyte_1 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_214, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_215 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_216, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_217 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_216);
		L_215->___sbyte_2 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_217, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_218 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_219, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_220 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_219);
		L_218->___sbyte_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_220, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_221 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_222, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_223 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_222);
		L_221->___sbyte_4 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_223, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_224 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_225, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_226 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_225);
		L_224->___sbyte_5 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_226, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_227 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_228, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_229 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_228);
		L_227->___sbyte_6 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_229, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_230 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_231, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_232 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_231);
		L_230->___sbyte_7 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_232, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_233 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_234, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_235 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_234);
		L_233->___sbyte_8 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_235, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_236 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_237, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_238 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_237);
		L_236->___sbyte_9 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_238, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_239 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_240, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_241 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_240);
		L_239->___sbyte_10 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_241, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_242 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_243, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_244 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_243);
		L_242->___sbyte_11 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_244, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_245 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_246, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_247 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_246);
		L_245->___sbyte_12 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_247, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_248 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_249, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_250 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_249);
		L_248->___sbyte_13 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_250, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_251 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_252, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_253 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_252);
		L_251->___sbyte_14 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_253, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_254 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_255, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_256 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_255);
		L_254->___sbyte_15 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_256, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		return;
	}

IL_0684:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_257 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_258;
		L_258 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_257, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_259 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_260;
		L_260 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_259, NULL);
		bool L_261;
		L_261 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_258, L_260, NULL);
		if (!L_261)
		{
			goto IL_0753;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_262 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_263, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_264 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_263);
		L_262->___uint16_0 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_264, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_265 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_266, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_267 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_266);
		L_265->___uint16_1 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_267, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_268 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_269, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_270 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_269);
		L_268->___uint16_2 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_270, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_271 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_272, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_273 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_272);
		L_271->___uint16_3 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_273, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_274 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_275, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_276 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_275);
		L_274->___uint16_4 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_276, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_277 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_278, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_279 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_278);
		L_277->___uint16_5 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_279, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_280 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_281, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_282 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_281);
		L_280->___uint16_6 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_282, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_283 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_284, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_285 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_284);
		L_283->___uint16_7 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_285, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		return;
	}

IL_0753:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_286 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_287;
		L_287 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_286, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_288 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_289;
		L_289 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_288, NULL);
		bool L_290;
		L_290 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_287, L_289, NULL);
		if (!L_290)
		{
			goto IL_0822;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_291 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_292, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_293 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_292);
		L_291->___int16_0 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_293, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_294 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_295, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_296 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_295);
		L_294->___int16_1 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_296, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_297 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_298, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_299 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_298);
		L_297->___int16_2 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_299, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_300 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_301, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_302 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_301);
		L_300->___int16_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_302, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_303 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_304, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_305 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_304);
		L_303->___int16_4 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_305, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_306 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_307, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_308 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_307);
		L_306->___int16_5 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_308, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_309 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_310, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_311 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_310);
		L_309->___int16_6 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_311, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_312 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_313, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_314 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_313);
		L_312->___int16_7 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_314, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		return;
	}

IL_0822:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_315 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_316;
		L_316 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_315, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_317 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_318;
		L_318 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_317, NULL);
		bool L_319;
		L_319 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_316, L_318, NULL);
		if (!L_319)
		{
			goto IL_0896;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_320 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_321, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_322 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_321);
		L_320->___uint32_0 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_322, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_323 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_324, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_325 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_324);
		L_323->___uint32_1 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_325, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_326 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_327, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_328 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_327);
		L_326->___uint32_2 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_328, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_329 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_330, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_331 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_330);
		L_329->___uint32_3 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_331, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		return;
	}

IL_0896:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_332 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_333;
		L_333 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_332, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_334 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_335;
		L_335 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_334, NULL);
		bool L_336;
		L_336 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_333, L_335, NULL);
		if (!L_336)
		{
			goto IL_090a;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_337 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_338, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_339 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_338);
		L_337->___int32_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_339, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_340 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_341, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_342 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_341);
		L_340->___int32_1 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_342, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_343 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_344, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_345 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_344);
		L_343->___int32_2 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_345, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_346 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_347, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_348 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_347);
		L_346->___int32_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_348, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		return;
	}

IL_090a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_349 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_350;
		L_350 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_349, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_351 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_352;
		L_352 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_351, NULL);
		bool L_353;
		L_353 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_350, L_352, NULL);
		if (!L_353)
		{
			goto IL_0952;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_354 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_355, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_356 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_355);
		L_354->___uint64_0 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_356, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_357 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_358, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_359 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_358);
		L_357->___uint64_1 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_359, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))));
		return;
	}

IL_0952:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_360 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_361;
		L_361 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_360, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_362 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_363;
		L_363 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_362, NULL);
		bool L_364;
		L_364 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_361, L_363, NULL);
		if (!L_364)
		{
			goto IL_099a;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_365 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_366, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_367 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_366);
		L_365->___int64_0 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_367, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_368 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_369, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_370 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_369);
		L_368->___int64_1 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_370, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		return;
	}

IL_099a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_371 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_372;
		L_372 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_371, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_373 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_374;
		L_374 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_373, NULL);
		bool L_375;
		L_375 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_372, L_374, NULL);
		if (!L_375)
		{
			goto IL_0a0e;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_376 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_377, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_378 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_377);
		L_376->___single_0 = ((*(float*)((float*)(float*)UnBox(L_378, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_379 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_380, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_381 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_380);
		L_379->___single_1 = ((*(float*)((float*)(float*)UnBox(L_381, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_382 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_383, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_384 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_383);
		L_382->___single_2 = ((*(float*)((float*)(float*)UnBox(L_384, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_385 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_386, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_387 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_386);
		L_385->___single_3 = ((*(float*)((float*)(float*)UnBox(L_387, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		return;
	}

IL_0a0e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_388 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_389;
		L_389 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_388, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_390 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_391;
		L_391 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_390, NULL);
		bool L_392;
		L_392 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_389, L_391, NULL);
		if (!L_392)
		{
			goto IL_0a55;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_393 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_394, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_395 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_394);
		L_393->___double_0 = ((*(double*)((double*)(double*)UnBox(L_395, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_396 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		il2cpp_codegen_memcpy(L_397, ___0_value, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_398 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_397);
		L_396->___double_1 = ((*(double*)((double*)(double*)UnBox(L_398, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
	}

IL_0a55:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_m7540979061ABB2A0A6D57213359B3E83A1B7B4D2_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	Vector_1__ctor_m7540979061ABB2A0A6D57213359B3E83A1B7B4D2(_thisAdjusted, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, void* ___0_dataPointer, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_dataPointer;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		((  void (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, void*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)))(__this, L_0, 0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return;
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001_AdjustorThunk (RuntimeObject* __this, void* ___0_dataPointer, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001(_thisAdjusted, ___0_dataPointer, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mAD567DC632B01A95C6F418F1C6265F295D1EB0A9_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	uint8_t* V_1 = NULL;
	uint8_t* V_2 = NULL;
	int32_t V_3 = 0;
	int8_t* V_4 = NULL;
	int8_t* V_5 = NULL;
	int8_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint16_t* V_8 = NULL;
	uint16_t* V_9 = NULL;
	uint16_t* V_10 = NULL;
	int32_t V_11 = 0;
	int16_t* V_12 = NULL;
	int16_t* V_13 = NULL;
	int16_t* V_14 = NULL;
	int32_t V_15 = 0;
	uint32_t* V_16 = NULL;
	uint32_t* V_17 = NULL;
	uint32_t* V_18 = NULL;
	int32_t V_19 = 0;
	int32_t* V_20 = NULL;
	int32_t* V_21 = NULL;
	int32_t* V_22 = NULL;
	int32_t V_23 = 0;
	uint64_t* V_24 = NULL;
	uint64_t* V_25 = NULL;
	uint64_t* V_26 = NULL;
	int32_t V_27 = 0;
	int64_t* V_28 = NULL;
	int64_t* V_29 = NULL;
	int64_t* V_30 = NULL;
	int32_t V_31 = 0;
	float* V_32 = NULL;
	float* V_33 = NULL;
	float* V_34 = NULL;
	int32_t V_35 = 0;
	double* V_36 = NULL;
	double* V_37 = NULL;
	double* V_38 = NULL;
	int32_t V_39 = 0;
	{
		il2cpp_codegen_initobj(__this, sizeof(Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0053;
		}
	}
	{
		void* L_5 = ___0_dataPointer;
		V_0 = (uint8_t*)L_5;
		uint8_t* L_6 = V_0;
		int32_t L_7 = ___1_offset;
		V_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_6, L_7));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_8 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_9 = (uint8_t*)(&L_8->___byte_0);
		V_2 = L_9;
		uint8_t* L_10 = V_2;
		V_1 = (uint8_t*)((uintptr_t)L_10);
		V_3 = 0;
		goto IL_0047;
	}

IL_003b:
	{
		uint8_t* L_11 = V_1;
		int32_t L_12 = V_3;
		uint8_t* L_13 = V_0;
		int32_t L_14 = V_3;
		int32_t L_15 = (*(((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14))));
		*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, L_12))) = (int8_t)L_15;
		int32_t L_16 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0047:
	{
		int32_t L_17 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_18;
		L_18 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_003b;
		}
	}
	{
		V_2 = (uint8_t*)((uintptr_t)0);
		return;
	}

IL_0053:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		bool L_23;
		L_23 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_20, L_22, NULL);
		if (!L_23)
		{
			goto IL_00ae;
		}
	}
	{
		void* L_24 = ___0_dataPointer;
		V_4 = (int8_t*)L_24;
		int8_t* L_25 = V_4;
		int32_t L_26 = ___1_offset;
		V_4 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_25, L_26));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_27 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_28 = (int8_t*)(&L_27->___sbyte_0);
		V_6 = L_28;
		int8_t* L_29 = V_6;
		V_5 = (int8_t*)((uintptr_t)L_29);
		V_7 = 0;
		goto IL_00a0;
	}

IL_008e:
	{
		int8_t* L_30 = V_5;
		int32_t L_31 = V_7;
		int8_t* L_32 = V_4;
		int32_t L_33 = V_7;
		int32_t L_34 = (*(((int8_t*)il2cpp_codegen_add((intptr_t)L_32, L_33))));
		*((int8_t*)((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31))) = (int8_t)L_34;
		int32_t L_35 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00a0:
	{
		int32_t L_36 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_37;
		L_37 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_36) < ((int32_t)L_37)))
		{
			goto IL_008e;
		}
	}
	{
		V_6 = (int8_t*)((uintptr_t)0);
		return;
	}

IL_00ae:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		bool L_42;
		L_42 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_39, L_41, NULL);
		if (!L_42)
		{
			goto IL_0112;
		}
	}
	{
		void* L_43 = ___0_dataPointer;
		V_8 = (uint16_t*)L_43;
		uint16_t* L_44 = V_8;
		int32_t L_45 = ___1_offset;
		V_8 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 2))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_46 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_47 = (uint16_t*)(&L_46->___uint16_0);
		V_10 = L_47;
		uint16_t* L_48 = V_10;
		V_9 = (uint16_t*)((uintptr_t)L_48);
		V_11 = 0;
		goto IL_0104;
	}

IL_00ec:
	{
		uint16_t* L_49 = V_9;
		int32_t L_50 = V_11;
		uint16_t* L_51 = V_8;
		int32_t L_52 = V_11;
		int32_t L_53 = (*(((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2))))));
		*((int16_t*)((uint16_t*)il2cpp_codegen_add((intptr_t)L_49, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_50), 2))))) = (int16_t)L_53;
		int32_t L_54 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0104:
	{
		int32_t L_55 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_56;
		L_56 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_55) < ((int32_t)L_56)))
		{
			goto IL_00ec;
		}
	}
	{
		V_10 = (uint16_t*)((uintptr_t)0);
		return;
	}

IL_0112:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_58;
		L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_60;
		L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
		bool L_61;
		L_61 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_58, L_60, NULL);
		if (!L_61)
		{
			goto IL_0176;
		}
	}
	{
		void* L_62 = ___0_dataPointer;
		V_12 = (int16_t*)L_62;
		int16_t* L_63 = V_12;
		int32_t L_64 = ___1_offset;
		V_12 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_63, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_64), 2))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_65 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_66 = (int16_t*)(&L_65->___int16_0);
		V_14 = L_66;
		int16_t* L_67 = V_14;
		V_13 = (int16_t*)((uintptr_t)L_67);
		V_15 = 0;
		goto IL_0168;
	}

IL_0150:
	{
		int16_t* L_68 = V_13;
		int32_t L_69 = V_15;
		int16_t* L_70 = V_12;
		int32_t L_71 = V_15;
		int32_t L_72 = (*(((int16_t*)il2cpp_codegen_add((intptr_t)L_70, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_71), 2))))));
		*((int16_t*)((int16_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 2))))) = (int16_t)L_72;
		int32_t L_73 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_0168:
	{
		int32_t L_74 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_75;
		L_75 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_74) < ((int32_t)L_75)))
		{
			goto IL_0150;
		}
	}
	{
		V_14 = (int16_t*)((uintptr_t)0);
		return;
	}

IL_0176:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
		if (!L_80)
		{
			goto IL_01da;
		}
	}
	{
		void* L_81 = ___0_dataPointer;
		V_16 = (uint32_t*)L_81;
		uint32_t* L_82 = V_16;
		int32_t L_83 = ___1_offset;
		V_16 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_82, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_83), 4))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_84 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t* L_85 = (uint32_t*)(&L_84->___uint32_0);
		V_18 = L_85;
		uint32_t* L_86 = V_18;
		V_17 = (uint32_t*)((uintptr_t)L_86);
		V_19 = 0;
		goto IL_01cc;
	}

IL_01b4:
	{
		uint32_t* L_87 = V_17;
		int32_t L_88 = V_19;
		uint32_t* L_89 = V_16;
		int32_t L_90 = V_19;
		int32_t L_91 = (*(((uint32_t*)il2cpp_codegen_add((intptr_t)L_89, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_90), 4))))));
		*((int32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_87, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_88), 4))))) = (int32_t)L_91;
		int32_t L_92 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_01cc:
	{
		int32_t L_93 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_94;
		L_94 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_93) < ((int32_t)L_94)))
		{
			goto IL_01b4;
		}
	}
	{
		V_18 = (uint32_t*)((uintptr_t)0);
		return;
	}

IL_01da:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_95 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_96;
		L_96 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_95, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_97 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_98;
		L_98 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_97, NULL);
		bool L_99;
		L_99 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_96, L_98, NULL);
		if (!L_99)
		{
			goto IL_023e;
		}
	}
	{
		void* L_100 = ___0_dataPointer;
		V_20 = (int32_t*)L_100;
		int32_t* L_101 = V_20;
		int32_t L_102 = ___1_offset;
		V_20 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_101, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_102), 4))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_103 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t* L_104 = (int32_t*)(&L_103->___int32_0);
		V_22 = L_104;
		int32_t* L_105 = V_22;
		V_21 = (int32_t*)((uintptr_t)L_105);
		V_23 = 0;
		goto IL_0230;
	}

IL_0218:
	{
		int32_t* L_106 = V_21;
		int32_t L_107 = V_23;
		int32_t* L_108 = V_20;
		int32_t L_109 = V_23;
		int32_t L_110 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_108, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_109), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_106, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_107), 4))))) = (int32_t)L_110;
		int32_t L_111 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_0230:
	{
		int32_t L_112 = V_23;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_113;
		L_113 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_112) < ((int32_t)L_113)))
		{
			goto IL_0218;
		}
	}
	{
		V_22 = (int32_t*)((uintptr_t)0);
		return;
	}

IL_023e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_114 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_115;
		L_115 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_114, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_117;
		L_117 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_116, NULL);
		bool L_118;
		L_118 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_115, L_117, NULL);
		if (!L_118)
		{
			goto IL_02a2;
		}
	}
	{
		void* L_119 = ___0_dataPointer;
		V_24 = (uint64_t*)L_119;
		uint64_t* L_120 = V_24;
		int32_t L_121 = ___1_offset;
		V_24 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_120, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_121), 8))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_122 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_123 = (uint64_t*)(&L_122->___uint64_0);
		V_26 = L_123;
		uint64_t* L_124 = V_26;
		V_25 = (uint64_t*)((uintptr_t)L_124);
		V_27 = 0;
		goto IL_0294;
	}

IL_027c:
	{
		uint64_t* L_125 = V_25;
		int32_t L_126 = V_27;
		uint64_t* L_127 = V_24;
		int32_t L_128 = V_27;
		int64_t L_129 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_127, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_128), 8)))));
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_125, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_126), 8))))) = (int64_t)L_129;
		int32_t L_130 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_130, 1));
	}

IL_0294:
	{
		int32_t L_131 = V_27;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_132;
		L_132 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_131) < ((int32_t)L_132)))
		{
			goto IL_027c;
		}
	}
	{
		V_26 = (uint64_t*)((uintptr_t)0);
		return;
	}

IL_02a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_133 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_134;
		L_134 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_133, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_135 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_136;
		L_136 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_135, NULL);
		bool L_137;
		L_137 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_134, L_136, NULL);
		if (!L_137)
		{
			goto IL_0306;
		}
	}
	{
		void* L_138 = ___0_dataPointer;
		V_28 = (int64_t*)L_138;
		int64_t* L_139 = V_28;
		int32_t L_140 = ___1_offset;
		V_28 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_139, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_140), 8))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_141 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int64_t* L_142 = (int64_t*)(&L_141->___int64_0);
		V_30 = L_142;
		int64_t* L_143 = V_30;
		V_29 = (int64_t*)((uintptr_t)L_143);
		V_31 = 0;
		goto IL_02f8;
	}

IL_02e0:
	{
		int64_t* L_144 = V_29;
		int32_t L_145 = V_31;
		int64_t* L_146 = V_28;
		int32_t L_147 = V_31;
		int64_t L_148 = (*(((int64_t*)il2cpp_codegen_add((intptr_t)L_146, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_147), 8))))));
		*((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_144, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_145), 8))))) = (int64_t)L_148;
		int32_t L_149 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add(L_149, 1));
	}

IL_02f8:
	{
		int32_t L_150 = V_31;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_151;
		L_151 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_150) < ((int32_t)L_151)))
		{
			goto IL_02e0;
		}
	}
	{
		V_30 = (int64_t*)((uintptr_t)0);
		return;
	}

IL_0306:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		bool L_156;
		L_156 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_153, L_155, NULL);
		if (!L_156)
		{
			goto IL_036a;
		}
	}
	{
		void* L_157 = ___0_dataPointer;
		V_32 = (float*)L_157;
		float* L_158 = V_32;
		int32_t L_159 = ___1_offset;
		V_32 = ((float*)il2cpp_codegen_add((intptr_t)L_158, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_159), 4))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_160 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float* L_161 = (float*)(&L_160->___single_0);
		V_34 = L_161;
		float* L_162 = V_34;
		V_33 = (float*)((uintptr_t)L_162);
		V_35 = 0;
		goto IL_035c;
	}

IL_0344:
	{
		float* L_163 = V_33;
		int32_t L_164 = V_35;
		float* L_165 = V_32;
		int32_t L_166 = V_35;
		float L_167 = (*(((float*)il2cpp_codegen_add((intptr_t)L_165, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_166), 4))))));
		*((float*)((float*)il2cpp_codegen_add((intptr_t)L_163, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_164), 4))))) = (float)L_167;
		int32_t L_168 = V_35;
		V_35 = ((int32_t)il2cpp_codegen_add(L_168, 1));
	}

IL_035c:
	{
		int32_t L_169 = V_35;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_170;
		L_170 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_169) < ((int32_t)L_170)))
		{
			goto IL_0344;
		}
	}
	{
		V_34 = (float*)((uintptr_t)0);
		return;
	}

IL_036a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_172;
		L_172 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_171, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_173 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_174;
		L_174 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_173, NULL);
		bool L_175;
		L_175 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_172, L_174, NULL);
		if (!L_175)
		{
			goto IL_03ce;
		}
	}
	{
		void* L_176 = ___0_dataPointer;
		V_36 = (double*)L_176;
		double* L_177 = V_36;
		int32_t L_178 = ___1_offset;
		V_36 = ((double*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 8))));
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_179 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		double* L_180 = (double*)(&L_179->___double_0);
		V_38 = L_180;
		double* L_181 = V_38;
		V_37 = (double*)((uintptr_t)L_181);
		V_39 = 0;
		goto IL_03c0;
	}

IL_03a8:
	{
		double* L_182 = V_37;
		int32_t L_183 = V_39;
		double* L_184 = V_36;
		int32_t L_185 = V_39;
		double L_186 = (*(((double*)il2cpp_codegen_add((intptr_t)L_184, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_185), 8))))));
		*((double*)((double*)il2cpp_codegen_add((intptr_t)L_182, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_183), 8))))) = (double)L_186;
		int32_t L_187 = V_39;
		V_39 = ((int32_t)il2cpp_codegen_add(L_187, 1));
	}

IL_03c0:
	{
		int32_t L_188 = V_39;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_189;
		L_189 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_188) < ((int32_t)L_189)))
		{
			goto IL_03a8;
		}
	}
	{
		V_38 = (double*)((uintptr_t)0);
		return;
	}

IL_03ce:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_190 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_190, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_190, method);
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_mAD567DC632B01A95C6F418F1C6265F295D1EB0A9_AdjustorThunk (RuntimeObject* __this, void* ___0_dataPointer, int32_t ___1_offset, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	Vector_1__ctor_mAD567DC632B01A95C6F418F1C6265F295D1EB0A9(_thisAdjusted, ___0_dataPointer, ___1_offset, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) 
{
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_0 = ___0_existingRegister;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_1 = (*(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)L_0);
		__this->___register = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674_AdjustorThunk (RuntimeObject* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674(_thisAdjusted, ___0_existingRegister, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1_get_Item_m301D7183D2063DC97710DCD2CEF970E7A67EB21C_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	uint8_t* V_0 = NULL;
	int8_t* V_1 = NULL;
	uint16_t* V_2 = NULL;
	int16_t* V_3 = NULL;
	uint32_t* V_4 = NULL;
	int32_t* V_5 = NULL;
	uint64_t* V_6 = NULL;
	int64_t* V_7 = NULL;
	float* V_8 = NULL;
	double* V_9 = NULL;
	{
		int32_t L_0 = ___0_index;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_2 = ___0_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}

IL_000c:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_4);
		String_t* L_6;
		L_6 = SR_Format_m9E8DC9AEFDC34AC67473EFAEAB78C5066C1A0D09(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral491788442E76F5D7830F0DBFCF8EDD98854F636F)), L_5, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_7 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0022:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0059;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_13 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_14 = (uint8_t*)(&L_13->___byte_0);
		V_0 = L_14;
		uint8_t* L_15 = V_0;
		int32_t L_16 = ___0_index;
		int32_t L_17 = *((uint8_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_15), L_16)));
		uint8_t L_18 = ((uint8_t)L_17);
		RuntimeObject* L_19 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_18);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_19, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0059:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_21, L_23, NULL);
		if (!L_24)
		{
			goto IL_0090;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_25 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_26 = (int8_t*)(&L_25->___sbyte_0);
		V_1 = L_26;
		int8_t* L_27 = V_1;
		int32_t L_28 = ___0_index;
		int32_t L_29 = *((int8_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_27), L_28)));
		int8_t L_30 = ((int8_t)L_29);
		RuntimeObject* L_31 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_30);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_31, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0090:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00ca;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_37 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_38 = (uint16_t*)(&L_37->___uint16_0);
		V_2 = L_38;
		uint16_t* L_39 = V_2;
		int32_t L_40 = ___0_index;
		int32_t L_41 = *((uint16_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_39), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 2)))));
		uint16_t L_42 = ((uint16_t)L_41);
		RuntimeObject* L_43 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_42);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_43, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_00ca:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		bool L_48;
		L_48 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_45, L_47, NULL);
		if (!L_48)
		{
			goto IL_0104;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_49 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_50 = (int16_t*)(&L_49->___int16_0);
		V_3 = L_50;
		int16_t* L_51 = V_3;
		int32_t L_52 = ___0_index;
		int32_t L_53 = *((int16_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_51), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2)))));
		int16_t L_54 = ((int16_t)L_53);
		RuntimeObject* L_55 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_54);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_55, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0104:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_0140;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_61 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t* L_62 = (uint32_t*)(&L_61->___uint32_0);
		V_4 = L_62;
		uint32_t* L_63 = V_4;
		int32_t L_64 = ___0_index;
		int32_t L_65 = *((uint32_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_63), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_64), 4)))));
		uint32_t L_66 = ((uint32_t)L_65);
		RuntimeObject* L_67 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_66);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_67, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0140:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_70 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_71;
		L_71 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_70, NULL);
		bool L_72;
		L_72 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_69, L_71, NULL);
		if (!L_72)
		{
			goto IL_017c;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_73 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t* L_74 = (int32_t*)(&L_73->___int32_0);
		V_5 = L_74;
		int32_t* L_75 = V_5;
		int32_t L_76 = ___0_index;
		int32_t L_77 = *((int32_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_75), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_76), 4)))));
		int32_t L_78 = L_77;
		RuntimeObject* L_79 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_78);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_79, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_017c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_80 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_81;
		L_81 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_80, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_82, NULL);
		bool L_84;
		L_84 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_81, L_83, NULL);
		if (!L_84)
		{
			goto IL_01b8;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_85 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_86 = (uint64_t*)(&L_85->___uint64_0);
		V_6 = L_86;
		uint64_t* L_87 = V_6;
		int32_t L_88 = ___0_index;
		int64_t L_89 = *((int64_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_87), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_88), 8)))));
		uint64_t L_90 = ((uint64_t)L_89);
		RuntimeObject* L_91 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_90);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_91, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_01b8:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_92 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_93;
		L_93 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_92, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		bool L_96;
		L_96 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_93, L_95, NULL);
		if (!L_96)
		{
			goto IL_01f4;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_97 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int64_t* L_98 = (int64_t*)(&L_97->___int64_0);
		V_7 = L_98;
		int64_t* L_99 = V_7;
		int32_t L_100 = ___0_index;
		int64_t L_101 = *((int64_t*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_99), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_100), 8)))));
		int64_t L_102 = L_101;
		RuntimeObject* L_103 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_102);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_103, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_01f4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_104 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_105;
		L_105 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_104, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		bool L_108;
		L_108 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_105, L_107, NULL);
		if (!L_108)
		{
			goto IL_0230;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_109 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float* L_110 = (float*)(&L_109->___single_0);
		V_8 = L_110;
		float* L_111 = V_8;
		int32_t L_112 = ___0_index;
		float L_113 = *((float*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_111), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_112), 4)))));
		float L_114 = L_113;
		RuntimeObject* L_115 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_114);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_115, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0230:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_116 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_117;
		L_117 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_116, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_118 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_119;
		L_119 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_118, NULL);
		bool L_120;
		L_120 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_117, L_119, NULL);
		if (!L_120)
		{
			goto IL_026c;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_121 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		double* L_122 = (double*)(&L_121->___double_0);
		V_9 = L_122;
		double* L_123 = V_9;
		int32_t L_124 = ___0_index;
		double L_125 = *((double*)((intptr_t)il2cpp_codegen_add((intptr_t)((uintptr_t)L_123), ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_124), 8)))));
		double L_126 = L_125;
		RuntimeObject* L_127 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_126);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_127, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_026c:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_128 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_128, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_128, method);
	}
}
IL2CPP_EXTERN_C  void Vector_1_get_Item_m301D7183D2063DC97710DCD2CEF970E7A67EB21C_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	Vector_1_get_Item_m301D7183D2063DC97710DCD2CEF970E7A67EB21C(_thisAdjusted, ___0_index, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_m1D6500596F9B825F39D474A32D7A6D5E14E22B8F_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_2;
		L_2 = ((  bool (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, ((*(Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*)((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*)(Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_m1D6500596F9B825F39D474A32D7A6D5E14E22B8F_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector_1_Equals_m1D6500596F9B825F39D474A32D7A6D5E14E22B8F_inline(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_Equals_mBC248D1BFF0E4CEA6585C0F10707B1843A4502E8_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	int32_t V_0 = 0;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		V_0 = 0;
		goto IL_0027;
	}

IL_000b:
	{
		int32_t L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_1, (Il2CppFullySharedGenericStruct*)L_2);
		int32_t L_3 = V_0;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_other), L_3, (Il2CppFullySharedGenericStruct*)L_4);
		bool L_5;
		L_5 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_2, L_4);
		if (L_5)
		{
			goto IL_0023;
		}
	}
	{
		return (bool)0;
	}

IL_0023:
	{
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0027:
	{
		int32_t L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_8;
		L_8 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000b;
		}
	}
	{
		return (bool)1;
	}

IL_0031:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_10, L_12, NULL);
		if (!L_13)
		{
			goto IL_01f0;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_14 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_15 = L_14->___byte_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_16 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_17 = L_16.___register;
		uint8_t L_18 = L_17.___byte_0;
		if ((!(((uint32_t)L_15) == ((uint32_t)L_18))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_19 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_20 = L_19->___byte_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_21 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_22 = L_21.___register;
		uint8_t L_23 = L_22.___byte_1;
		if ((!(((uint32_t)L_20) == ((uint32_t)L_23))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_24 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_25 = L_24->___byte_2;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_26 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_27 = L_26.___register;
		uint8_t L_28 = L_27.___byte_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)L_28))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_29 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_30 = L_29->___byte_3;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_31 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_32 = L_31.___register;
		uint8_t L_33 = L_32.___byte_3;
		if ((!(((uint32_t)L_30) == ((uint32_t)L_33))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_34 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_35 = L_34->___byte_4;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_36 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_37 = L_36.___register;
		uint8_t L_38 = L_37.___byte_4;
		if ((!(((uint32_t)L_35) == ((uint32_t)L_38))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_39 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_40 = L_39->___byte_5;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_41 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_42 = L_41.___register;
		uint8_t L_43 = L_42.___byte_5;
		if ((!(((uint32_t)L_40) == ((uint32_t)L_43))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_44 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_45 = L_44->___byte_6;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_46 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_47 = L_46.___register;
		uint8_t L_48 = L_47.___byte_6;
		if ((!(((uint32_t)L_45) == ((uint32_t)L_48))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_49 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_50 = L_49->___byte_7;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_51 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_52 = L_51.___register;
		uint8_t L_53 = L_52.___byte_7;
		if ((!(((uint32_t)L_50) == ((uint32_t)L_53))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_54 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_55 = L_54->___byte_8;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_56 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_57 = L_56.___register;
		uint8_t L_58 = L_57.___byte_8;
		if ((!(((uint32_t)L_55) == ((uint32_t)L_58))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_59 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_60 = L_59->___byte_9;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_61 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_62 = L_61.___register;
		uint8_t L_63 = L_62.___byte_9;
		if ((!(((uint32_t)L_60) == ((uint32_t)L_63))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_64 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_65 = L_64->___byte_10;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_66 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_67 = L_66.___register;
		uint8_t L_68 = L_67.___byte_10;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_68))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_69 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_70 = L_69->___byte_11;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_71 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_72 = L_71.___register;
		uint8_t L_73 = L_72.___byte_11;
		if ((!(((uint32_t)L_70) == ((uint32_t)L_73))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_74 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_75 = L_74->___byte_12;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_76 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_77 = L_76.___register;
		uint8_t L_78 = L_77.___byte_12;
		if ((!(((uint32_t)L_75) == ((uint32_t)L_78))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_79 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_80 = L_79->___byte_13;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_81 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_82 = L_81.___register;
		uint8_t L_83 = L_82.___byte_13;
		if ((!(((uint32_t)L_80) == ((uint32_t)L_83))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_84 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_85 = L_84->___byte_14;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_86 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_87 = L_86.___register;
		uint8_t L_88 = L_87.___byte_14;
		if ((!(((uint32_t)L_85) == ((uint32_t)L_88))))
		{
			goto IL_01ee;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_89 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t L_90 = L_89->___byte_15;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_91 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_92 = L_91.___register;
		uint8_t L_93 = L_92.___byte_15;
		return (bool)((((int32_t)L_90) == ((int32_t)L_93))? 1 : 0);
	}

IL_01ee:
	{
		return (bool)0;
	}

IL_01f0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_94 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_95;
		L_95 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_94, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_96 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_97;
		L_97 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_96, NULL);
		bool L_98;
		L_98 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_97, NULL);
		if (!L_98)
		{
			goto IL_03af;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_99 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_100 = L_99->___sbyte_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_101 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_102 = L_101.___register;
		int8_t L_103 = L_102.___sbyte_0;
		if ((!(((uint32_t)L_100) == ((uint32_t)L_103))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_104 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_105 = L_104->___sbyte_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_106 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_107 = L_106.___register;
		int8_t L_108 = L_107.___sbyte_1;
		if ((!(((uint32_t)L_105) == ((uint32_t)L_108))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_109 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_110 = L_109->___sbyte_2;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_111 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_112 = L_111.___register;
		int8_t L_113 = L_112.___sbyte_2;
		if ((!(((uint32_t)L_110) == ((uint32_t)L_113))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_114 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_115 = L_114->___sbyte_3;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_116 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_117 = L_116.___register;
		int8_t L_118 = L_117.___sbyte_3;
		if ((!(((uint32_t)L_115) == ((uint32_t)L_118))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_119 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_120 = L_119->___sbyte_4;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_121 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_122 = L_121.___register;
		int8_t L_123 = L_122.___sbyte_4;
		if ((!(((uint32_t)L_120) == ((uint32_t)L_123))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_124 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_125 = L_124->___sbyte_5;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_126 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_127 = L_126.___register;
		int8_t L_128 = L_127.___sbyte_5;
		if ((!(((uint32_t)L_125) == ((uint32_t)L_128))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_129 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_130 = L_129->___sbyte_6;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_131 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_132 = L_131.___register;
		int8_t L_133 = L_132.___sbyte_6;
		if ((!(((uint32_t)L_130) == ((uint32_t)L_133))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_134 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_135 = L_134->___sbyte_7;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_136 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_137 = L_136.___register;
		int8_t L_138 = L_137.___sbyte_7;
		if ((!(((uint32_t)L_135) == ((uint32_t)L_138))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_139 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_140 = L_139->___sbyte_8;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_141 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_142 = L_141.___register;
		int8_t L_143 = L_142.___sbyte_8;
		if ((!(((uint32_t)L_140) == ((uint32_t)L_143))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_144 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_145 = L_144->___sbyte_9;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_146 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_147 = L_146.___register;
		int8_t L_148 = L_147.___sbyte_9;
		if ((!(((uint32_t)L_145) == ((uint32_t)L_148))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_149 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_150 = L_149->___sbyte_10;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_151 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_152 = L_151.___register;
		int8_t L_153 = L_152.___sbyte_10;
		if ((!(((uint32_t)L_150) == ((uint32_t)L_153))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_154 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_155 = L_154->___sbyte_11;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_156 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_157 = L_156.___register;
		int8_t L_158 = L_157.___sbyte_11;
		if ((!(((uint32_t)L_155) == ((uint32_t)L_158))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_159 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_160 = L_159->___sbyte_12;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_161 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_162 = L_161.___register;
		int8_t L_163 = L_162.___sbyte_12;
		if ((!(((uint32_t)L_160) == ((uint32_t)L_163))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_164 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_165 = L_164->___sbyte_13;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_166 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_167 = L_166.___register;
		int8_t L_168 = L_167.___sbyte_13;
		if ((!(((uint32_t)L_165) == ((uint32_t)L_168))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_169 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_170 = L_169->___sbyte_14;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_171 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_172 = L_171.___register;
		int8_t L_173 = L_172.___sbyte_14;
		if ((!(((uint32_t)L_170) == ((uint32_t)L_173))))
		{
			goto IL_03ad;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_174 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t L_175 = L_174->___sbyte_15;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_176 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_177 = L_176.___register;
		int8_t L_178 = L_177.___sbyte_15;
		return (bool)((((int32_t)L_175) == ((int32_t)L_178))? 1 : 0);
	}

IL_03ad:
	{
		return (bool)0;
	}

IL_03af:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_179 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_180;
		L_180 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_179, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_181 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_182;
		L_182 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_181, NULL);
		bool L_183;
		L_183 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_180, L_182, NULL);
		if (!L_183)
		{
			goto IL_0496;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_184 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_185 = L_184->___uint16_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_186 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_187 = L_186.___register;
		uint16_t L_188 = L_187.___uint16_0;
		if ((!(((uint32_t)L_185) == ((uint32_t)L_188))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_189 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_190 = L_189->___uint16_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_191 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_192 = L_191.___register;
		uint16_t L_193 = L_192.___uint16_1;
		if ((!(((uint32_t)L_190) == ((uint32_t)L_193))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_194 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_195 = L_194->___uint16_2;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_196 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_197 = L_196.___register;
		uint16_t L_198 = L_197.___uint16_2;
		if ((!(((uint32_t)L_195) == ((uint32_t)L_198))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_199 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_200 = L_199->___uint16_3;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_201 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_202 = L_201.___register;
		uint16_t L_203 = L_202.___uint16_3;
		if ((!(((uint32_t)L_200) == ((uint32_t)L_203))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_204 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_205 = L_204->___uint16_4;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_206 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_207 = L_206.___register;
		uint16_t L_208 = L_207.___uint16_4;
		if ((!(((uint32_t)L_205) == ((uint32_t)L_208))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_209 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_210 = L_209->___uint16_5;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_211 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_212 = L_211.___register;
		uint16_t L_213 = L_212.___uint16_5;
		if ((!(((uint32_t)L_210) == ((uint32_t)L_213))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_214 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_215 = L_214->___uint16_6;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_216 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_217 = L_216.___register;
		uint16_t L_218 = L_217.___uint16_6;
		if ((!(((uint32_t)L_215) == ((uint32_t)L_218))))
		{
			goto IL_0494;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_219 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t L_220 = L_219->___uint16_7;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_221 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_222 = L_221.___register;
		uint16_t L_223 = L_222.___uint16_7;
		return (bool)((((int32_t)L_220) == ((int32_t)L_223))? 1 : 0);
	}

IL_0494:
	{
		return (bool)0;
	}

IL_0496:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_224 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_225;
		L_225 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_224, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_226 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_227;
		L_227 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_226, NULL);
		bool L_228;
		L_228 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_225, L_227, NULL);
		if (!L_228)
		{
			goto IL_057d;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_229 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t L_230 = L_229->___int16_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_231 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_232 = L_231.___register;
		int16_t L_233 = L_232.___int16_0;
		if ((!(((uint32_t)L_230) == ((uint32_t)L_233))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_234 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t L_235 = L_234->___int16_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_236 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_237 = L_236.___register;
		int16_t L_238 = L_237.___int16_1;
		if ((!(((uint32_t)L_235) == ((uint32_t)L_238))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_239 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t L_240 = L_239->___int16_2;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_241 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_242 = L_241.___register;
		int16_t L_243 = L_242.___int16_2;
		if ((!(((uint32_t)L_240) == ((uint32_t)L_243))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_244 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t L_245 = L_244->___int16_3;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_246 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_247 = L_246.___register;
		int16_t L_248 = L_247.___int16_3;
		if ((!(((uint32_t)L_245) == ((uint32_t)L_248))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_249 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t L_250 = L_249->___int16_4;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_251 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_252 = L_251.___register;
		int16_t L_253 = L_252.___int16_4;
		if ((!(((uint32_t)L_250) == ((uint32_t)L_253))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_254 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t L_255 = L_254->___int16_5;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_256 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_257 = L_256.___register;
		int16_t L_258 = L_257.___int16_5;
		if ((!(((uint32_t)L_255) == ((uint32_t)L_258))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_259 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t L_260 = L_259->___int16_6;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_261 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_262 = L_261.___register;
		int16_t L_263 = L_262.___int16_6;
		if ((!(((uint32_t)L_260) == ((uint32_t)L_263))))
		{
			goto IL_057b;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_264 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t L_265 = L_264->___int16_7;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_266 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_267 = L_266.___register;
		int16_t L_268 = L_267.___int16_7;
		return (bool)((((int32_t)L_265) == ((int32_t)L_268))? 1 : 0);
	}

IL_057b:
	{
		return (bool)0;
	}

IL_057d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_269 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_270;
		L_270 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_269, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_271 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_272;
		L_272 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_271, NULL);
		bool L_273;
		L_273 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_270, L_272, NULL);
		if (!L_273)
		{
			goto IL_05fb;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_274 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t L_275 = L_274->___uint32_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_276 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_277 = L_276.___register;
		uint32_t L_278 = L_277.___uint32_0;
		if ((!(((uint32_t)L_275) == ((uint32_t)L_278))))
		{
			goto IL_05f9;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_279 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t L_280 = L_279->___uint32_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_281 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_282 = L_281.___register;
		uint32_t L_283 = L_282.___uint32_1;
		if ((!(((uint32_t)L_280) == ((uint32_t)L_283))))
		{
			goto IL_05f9;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_284 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t L_285 = L_284->___uint32_2;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_286 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_287 = L_286.___register;
		uint32_t L_288 = L_287.___uint32_2;
		if ((!(((uint32_t)L_285) == ((uint32_t)L_288))))
		{
			goto IL_05f9;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_289 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t L_290 = L_289->___uint32_3;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_291 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_292 = L_291.___register;
		uint32_t L_293 = L_292.___uint32_3;
		return (bool)((((int32_t)L_290) == ((int32_t)L_293))? 1 : 0);
	}

IL_05f9:
	{
		return (bool)0;
	}

IL_05fb:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_294 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_295;
		L_295 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_294, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_296 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_297;
		L_297 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_296, NULL);
		bool L_298;
		L_298 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_295, L_297, NULL);
		if (!L_298)
		{
			goto IL_0679;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_299 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t L_300 = L_299->___int32_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_301 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_302 = L_301.___register;
		int32_t L_303 = L_302.___int32_0;
		if ((!(((uint32_t)L_300) == ((uint32_t)L_303))))
		{
			goto IL_0677;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_304 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t L_305 = L_304->___int32_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_306 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_307 = L_306.___register;
		int32_t L_308 = L_307.___int32_1;
		if ((!(((uint32_t)L_305) == ((uint32_t)L_308))))
		{
			goto IL_0677;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_309 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t L_310 = L_309->___int32_2;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_311 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_312 = L_311.___register;
		int32_t L_313 = L_312.___int32_2;
		if ((!(((uint32_t)L_310) == ((uint32_t)L_313))))
		{
			goto IL_0677;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_314 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t L_315 = L_314->___int32_3;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_316 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_317 = L_316.___register;
		int32_t L_318 = L_317.___int32_3;
		return (bool)((((int32_t)L_315) == ((int32_t)L_318))? 1 : 0);
	}

IL_0677:
	{
		return (bool)0;
	}

IL_0679:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_319 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_320;
		L_320 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_319, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_321 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_322;
		L_322 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_321, NULL);
		bool L_323;
		L_323 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_320, L_322, NULL);
		if (!L_323)
		{
			goto IL_06c7;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_324 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t L_325 = L_324->___uint64_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_326 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_327 = L_326.___register;
		uint64_t L_328 = L_327.___uint64_0;
		if ((!(((uint64_t)L_325) == ((uint64_t)L_328))))
		{
			goto IL_06c5;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_329 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t L_330 = L_329->___uint64_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_331 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_332 = L_331.___register;
		uint64_t L_333 = L_332.___uint64_1;
		return (bool)((((int64_t)L_330) == ((int64_t)L_333))? 1 : 0);
	}

IL_06c5:
	{
		return (bool)0;
	}

IL_06c7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_334 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_335;
		L_335 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_334, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_336 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_337;
		L_337 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_336, NULL);
		bool L_338;
		L_338 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_335, L_337, NULL);
		if (!L_338)
		{
			goto IL_0715;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_339 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int64_t L_340 = L_339->___int64_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_341 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_342 = L_341.___register;
		int64_t L_343 = L_342.___int64_0;
		if ((!(((uint64_t)L_340) == ((uint64_t)L_343))))
		{
			goto IL_0713;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_344 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int64_t L_345 = L_344->___int64_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_346 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_347 = L_346.___register;
		int64_t L_348 = L_347.___int64_1;
		return (bool)((((int64_t)L_345) == ((int64_t)L_348))? 1 : 0);
	}

IL_0713:
	{
		return (bool)0;
	}

IL_0715:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_349 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_350;
		L_350 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_349, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_351 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_352;
		L_352 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_351, NULL);
		bool L_353;
		L_353 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_350, L_352, NULL);
		if (!L_353)
		{
			goto IL_0793;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_354 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float L_355 = L_354->___single_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_356 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_357 = L_356.___register;
		float L_358 = L_357.___single_0;
		if ((!(((float)L_355) == ((float)L_358))))
		{
			goto IL_0791;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_359 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float L_360 = L_359->___single_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_361 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_362 = L_361.___register;
		float L_363 = L_362.___single_1;
		if ((!(((float)L_360) == ((float)L_363))))
		{
			goto IL_0791;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_364 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float L_365 = L_364->___single_2;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_366 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_367 = L_366.___register;
		float L_368 = L_367.___single_2;
		if ((!(((float)L_365) == ((float)L_368))))
		{
			goto IL_0791;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_369 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float L_370 = L_369->___single_3;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_371 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_372 = L_371.___register;
		float L_373 = L_372.___single_3;
		return (bool)((((float)L_370) == ((float)L_373))? 1 : 0);
	}

IL_0791:
	{
		return (bool)0;
	}

IL_0793:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_374 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_375;
		L_375 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_374, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_376 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_377;
		L_377 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_376, NULL);
		bool L_378;
		L_378 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_375, L_377, NULL);
		if (!L_378)
		{
			goto IL_07e1;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_379 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		double L_380 = L_379->___double_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_381 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_382 = L_381.___register;
		double L_383 = L_382.___double_0;
		if ((!(((double)L_380) == ((double)L_383))))
		{
			goto IL_07df;
		}
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_384 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		double L_385 = L_384->___double_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_386 = ___0_other;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_387 = L_386.___register;
		double L_388 = L_387.___double_1;
		return (bool)((((double)L_385) == ((double)L_388))? 1 : 0);
	}

IL_07df:
	{
		return (bool)0;
	}

IL_07e1:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_389 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_389, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_389, method);
	}
}
IL2CPP_EXTERN_C  bool Vector_1_Equals_mBC248D1BFF0E4CEA6585C0F10707B1843A4502E8_AdjustorThunk (RuntimeObject* __this, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_other, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	bool _returnValue;
	_returnValue = Vector_1_Equals_mBC248D1BFF0E4CEA6585C0F10707B1843A4502E8(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector_1_GetHashCode_m3ACEDE87318824BACAD7E8CB760798D98D37C4FF_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_23 = L_8;
	const Il2CppFullySharedGenericStruct L_38 = L_8;
	const Il2CppFullySharedGenericStruct L_53 = L_8;
	const Il2CppFullySharedGenericStruct L_68 = L_8;
	const Il2CppFullySharedGenericStruct L_83 = L_8;
	const Il2CppFullySharedGenericStruct L_98 = L_8;
	const Il2CppFullySharedGenericStruct L_113 = L_8;
	const Il2CppFullySharedGenericStruct L_128 = L_8;
	const Il2CppFullySharedGenericStruct L_143 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint8_t V_2 = 0x0;
	int32_t V_3 = 0;
	int8_t V_4 = 0x0;
	int32_t V_5 = 0;
	uint16_t V_6 = 0;
	int32_t V_7 = 0;
	int16_t V_8 = 0;
	int32_t V_9 = 0;
	uint32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	uint64_t V_14 = 0;
	int32_t V_15 = 0;
	int64_t V_16 = 0;
	int32_t V_17 = 0;
	float V_18 = 0.0f;
	int32_t V_19 = 0;
	double V_20 = 0.0;
	{
		V_0 = 0;
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_034a;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		V_1 = 0;
		goto IL_004f;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_7, (Il2CppFullySharedGenericStruct*)L_8);
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_8);
		V_2 = ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_9, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))));
		int32_t L_10;
		L_10 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678((&V_2), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_11;
		L_11 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_6, L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_004f:
	{
		int32_t L_13 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_14;
		L_14 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}

IL_0059:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_00a7;
		}
	}
	{
		V_3 = 0;
		goto IL_009d;
	}

IL_0078:
	{
		int32_t L_21 = V_0;
		int32_t L_22 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_22, (Il2CppFullySharedGenericStruct*)L_23);
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_23);
		V_4 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_24, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))));
		int32_t L_25;
		L_25 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF((&V_4), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_21, L_25, NULL);
		V_0 = L_26;
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_009d:
	{
		int32_t L_28 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_29;
		L_29 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_30 = V_0;
		return L_30;
	}

IL_00a7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		bool L_35;
		L_35 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_32, L_34, NULL);
		if (!L_35)
		{
			goto IL_00fa;
		}
	}
	{
		V_5 = 0;
		goto IL_00ef;
	}

IL_00c7:
	{
		int32_t L_36 = V_0;
		int32_t L_37 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_37, (Il2CppFullySharedGenericStruct*)L_38);
		RuntimeObject* L_39 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_38);
		V_6 = ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_39, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))));
		int32_t L_40;
		L_40 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200((&V_6), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_41;
		L_41 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_36, L_40, NULL);
		V_0 = L_41;
		int32_t L_42 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00ef:
	{
		int32_t L_43 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_44;
		L_44 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_00c7;
		}
	}
	{
		int32_t L_45 = V_0;
		return L_45;
	}

IL_00fa:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		bool L_50;
		L_50 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_49, NULL);
		if (!L_50)
		{
			goto IL_014d;
		}
	}
	{
		V_7 = 0;
		goto IL_0142;
	}

IL_011a:
	{
		int32_t L_51 = V_0;
		int32_t L_52 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_52, (Il2CppFullySharedGenericStruct*)L_53);
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_53);
		V_8 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_54, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))));
		int32_t L_55;
		L_55 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1((&V_8), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_56;
		L_56 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_51, L_55, NULL);
		V_0 = L_56;
		int32_t L_57 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_0142:
	{
		int32_t L_58 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_59;
		L_59 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_58) < ((int32_t)L_59)))
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_60 = V_0;
		return L_60;
	}

IL_014d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_61, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		bool L_65;
		L_65 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_62, L_64, NULL);
		if (!L_65)
		{
			goto IL_01a0;
		}
	}
	{
		V_9 = 0;
		goto IL_0195;
	}

IL_016d:
	{
		int32_t L_66 = V_0;
		int32_t L_67 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_67, (Il2CppFullySharedGenericStruct*)L_68);
		RuntimeObject* L_69 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_68);
		V_10 = ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_69, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))));
		int32_t L_70;
		L_70 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC((&V_10), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_71;
		L_71 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_66, L_70, NULL);
		V_0 = L_71;
		int32_t L_72 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_72, 1));
	}

IL_0195:
	{
		int32_t L_73 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_74;
		L_74 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_73) < ((int32_t)L_74)))
		{
			goto IL_016d;
		}
	}
	{
		int32_t L_75 = V_0;
		return L_75;
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_76 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_77;
		L_77 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_76, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_78 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_79;
		L_79 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_78, NULL);
		bool L_80;
		L_80 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_79, NULL);
		if (!L_80)
		{
			goto IL_01f3;
		}
	}
	{
		V_11 = 0;
		goto IL_01e8;
	}

IL_01c0:
	{
		int32_t L_81 = V_0;
		int32_t L_82 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_82, (Il2CppFullySharedGenericStruct*)L_83);
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_83);
		V_12 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_84, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
		int32_t L_85;
		L_85 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_12), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_86;
		L_86 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_81, L_85, NULL);
		V_0 = L_86;
		int32_t L_87 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_87, 1));
	}

IL_01e8:
	{
		int32_t L_88 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_89;
		L_89 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_88) < ((int32_t)L_89)))
		{
			goto IL_01c0;
		}
	}
	{
		int32_t L_90 = V_0;
		return L_90;
	}

IL_01f3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_91 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_92;
		L_92 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_91, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_93 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_94;
		L_94 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_93, NULL);
		bool L_95;
		L_95 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_92, L_94, NULL);
		if (!L_95)
		{
			goto IL_0246;
		}
	}
	{
		V_13 = 0;
		goto IL_023b;
	}

IL_0213:
	{
		int32_t L_96 = V_0;
		int32_t L_97 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_97, (Il2CppFullySharedGenericStruct*)L_98);
		RuntimeObject* L_99 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_98);
		V_14 = ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_99, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))));
		int32_t L_100;
		L_100 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92((&V_14), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_101;
		L_101 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_96, L_100, NULL);
		V_0 = L_101;
		int32_t L_102 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_102, 1));
	}

IL_023b:
	{
		int32_t L_103 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_104;
		L_104 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_103) < ((int32_t)L_104)))
		{
			goto IL_0213;
		}
	}
	{
		int32_t L_105 = V_0;
		return L_105;
	}

IL_0246:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_0299;
		}
	}
	{
		V_15 = 0;
		goto IL_028e;
	}

IL_0266:
	{
		int32_t L_111 = V_0;
		int32_t L_112 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_112, (Il2CppFullySharedGenericStruct*)L_113);
		RuntimeObject* L_114 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_113);
		V_16 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_114, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))));
		int32_t L_115;
		L_115 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496((&V_16), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_116;
		L_116 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_111, L_115, NULL);
		V_0 = L_116;
		int32_t L_117 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_117, 1));
	}

IL_028e:
	{
		int32_t L_118 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_119;
		L_119 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_118) < ((int32_t)L_119)))
		{
			goto IL_0266;
		}
	}
	{
		int32_t L_120 = V_0;
		return L_120;
	}

IL_0299:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_121 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_122;
		L_122 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_121, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_123 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_124;
		L_124 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_123, NULL);
		bool L_125;
		L_125 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_122, L_124, NULL);
		if (!L_125)
		{
			goto IL_02ec;
		}
	}
	{
		V_17 = 0;
		goto IL_02e1;
	}

IL_02b9:
	{
		int32_t L_126 = V_0;
		int32_t L_127 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_127, (Il2CppFullySharedGenericStruct*)L_128);
		RuntimeObject* L_129 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_128);
		V_18 = ((*(float*)((float*)(float*)UnBox(L_129, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))));
		int32_t L_130;
		L_130 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_18), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_131;
		L_131 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_126, L_130, NULL);
		V_0 = L_131;
		int32_t L_132 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_132, 1));
	}

IL_02e1:
	{
		int32_t L_133 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_134;
		L_134 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_133) < ((int32_t)L_134)))
		{
			goto IL_02b9;
		}
	}
	{
		int32_t L_135 = V_0;
		return L_135;
	}

IL_02ec:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_136 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_137;
		L_137 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_136, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_139;
		L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
		bool L_140;
		L_140 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_139, NULL);
		if (!L_140)
		{
			goto IL_033f;
		}
	}
	{
		V_19 = 0;
		goto IL_0334;
	}

IL_030c:
	{
		int32_t L_141 = V_0;
		int32_t L_142 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_142, (Il2CppFullySharedGenericStruct*)L_143);
		RuntimeObject* L_144 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_143);
		V_20 = ((*(double*)((double*)(double*)UnBox(L_144, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))));
		int32_t L_145;
		L_145 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline((&V_20), NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_146;
		L_146 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_141, L_145, NULL);
		V_0 = L_146;
		int32_t L_147 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_147, 1));
	}

IL_0334:
	{
		int32_t L_148 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_149;
		L_149 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_148) < ((int32_t)L_149)))
		{
			goto IL_030c;
		}
	}
	{
		int32_t L_150 = V_0;
		return L_150;
	}

IL_033f:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_151 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_151, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_151, method);
	}

IL_034a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_153;
		L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_154 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_155;
		L_155 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_154, NULL);
		bool L_156;
		L_156 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_153, L_155, NULL);
		if (!L_156)
		{
			goto IL_04da;
		}
	}
	{
		int32_t L_157 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_158 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_159 = (uint8_t*)(&L_158->___byte_0);
		int32_t L_160;
		L_160 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_159, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_161;
		L_161 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_157, L_160, NULL);
		V_0 = L_161;
		int32_t L_162 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_163 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_164 = (uint8_t*)(&L_163->___byte_1);
		int32_t L_165;
		L_165 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_164, NULL);
		int32_t L_166;
		L_166 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_162, L_165, NULL);
		V_0 = L_166;
		int32_t L_167 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_168 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_169 = (uint8_t*)(&L_168->___byte_2);
		int32_t L_170;
		L_170 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_169, NULL);
		int32_t L_171;
		L_171 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_167, L_170, NULL);
		V_0 = L_171;
		int32_t L_172 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_173 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_174 = (uint8_t*)(&L_173->___byte_3);
		int32_t L_175;
		L_175 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_174, NULL);
		int32_t L_176;
		L_176 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_172, L_175, NULL);
		V_0 = L_176;
		int32_t L_177 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_178 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_179 = (uint8_t*)(&L_178->___byte_4);
		int32_t L_180;
		L_180 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_179, NULL);
		int32_t L_181;
		L_181 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_177, L_180, NULL);
		V_0 = L_181;
		int32_t L_182 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_183 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_184 = (uint8_t*)(&L_183->___byte_5);
		int32_t L_185;
		L_185 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_184, NULL);
		int32_t L_186;
		L_186 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_182, L_185, NULL);
		V_0 = L_186;
		int32_t L_187 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_188 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_189 = (uint8_t*)(&L_188->___byte_6);
		int32_t L_190;
		L_190 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_189, NULL);
		int32_t L_191;
		L_191 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_187, L_190, NULL);
		V_0 = L_191;
		int32_t L_192 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_193 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_194 = (uint8_t*)(&L_193->___byte_7);
		int32_t L_195;
		L_195 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_194, NULL);
		int32_t L_196;
		L_196 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_192, L_195, NULL);
		V_0 = L_196;
		int32_t L_197 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_198 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_199 = (uint8_t*)(&L_198->___byte_8);
		int32_t L_200;
		L_200 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_199, NULL);
		int32_t L_201;
		L_201 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_197, L_200, NULL);
		V_0 = L_201;
		int32_t L_202 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_203 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_204 = (uint8_t*)(&L_203->___byte_9);
		int32_t L_205;
		L_205 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_204, NULL);
		int32_t L_206;
		L_206 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_202, L_205, NULL);
		V_0 = L_206;
		int32_t L_207 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_208 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_209 = (uint8_t*)(&L_208->___byte_10);
		int32_t L_210;
		L_210 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_209, NULL);
		int32_t L_211;
		L_211 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_207, L_210, NULL);
		V_0 = L_211;
		int32_t L_212 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_213 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_214 = (uint8_t*)(&L_213->___byte_11);
		int32_t L_215;
		L_215 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_214, NULL);
		int32_t L_216;
		L_216 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_212, L_215, NULL);
		V_0 = L_216;
		int32_t L_217 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_218 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_219 = (uint8_t*)(&L_218->___byte_12);
		int32_t L_220;
		L_220 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_219, NULL);
		int32_t L_221;
		L_221 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_217, L_220, NULL);
		V_0 = L_221;
		int32_t L_222 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_223 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_224 = (uint8_t*)(&L_223->___byte_13);
		int32_t L_225;
		L_225 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_224, NULL);
		int32_t L_226;
		L_226 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_222, L_225, NULL);
		V_0 = L_226;
		int32_t L_227 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_228 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_229 = (uint8_t*)(&L_228->___byte_14);
		int32_t L_230;
		L_230 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_229, NULL);
		int32_t L_231;
		L_231 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_227, L_230, NULL);
		V_0 = L_231;
		int32_t L_232 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_233 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint8_t* L_234 = (uint8_t*)(&L_233->___byte_15);
		int32_t L_235;
		L_235 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_234, NULL);
		int32_t L_236;
		L_236 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_232, L_235, NULL);
		V_0 = L_236;
		int32_t L_237 = V_0;
		return L_237;
	}

IL_04da:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_238 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_239;
		L_239 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_238, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_240 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_241;
		L_241 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_240, NULL);
		bool L_242;
		L_242 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_239, L_241, NULL);
		if (!L_242)
		{
			goto IL_066a;
		}
	}
	{
		int32_t L_243 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_244 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_245 = (int8_t*)(&L_244->___sbyte_0);
		int32_t L_246;
		L_246 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_245, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_247;
		L_247 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_243, L_246, NULL);
		V_0 = L_247;
		int32_t L_248 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_249 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_250 = (int8_t*)(&L_249->___sbyte_1);
		int32_t L_251;
		L_251 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_250, NULL);
		int32_t L_252;
		L_252 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_248, L_251, NULL);
		V_0 = L_252;
		int32_t L_253 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_254 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_255 = (int8_t*)(&L_254->___sbyte_2);
		int32_t L_256;
		L_256 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_255, NULL);
		int32_t L_257;
		L_257 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_253, L_256, NULL);
		V_0 = L_257;
		int32_t L_258 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_259 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_260 = (int8_t*)(&L_259->___sbyte_3);
		int32_t L_261;
		L_261 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_260, NULL);
		int32_t L_262;
		L_262 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_258, L_261, NULL);
		V_0 = L_262;
		int32_t L_263 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_264 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_265 = (int8_t*)(&L_264->___sbyte_4);
		int32_t L_266;
		L_266 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_265, NULL);
		int32_t L_267;
		L_267 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_263, L_266, NULL);
		V_0 = L_267;
		int32_t L_268 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_269 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_270 = (int8_t*)(&L_269->___sbyte_5);
		int32_t L_271;
		L_271 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_270, NULL);
		int32_t L_272;
		L_272 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_268, L_271, NULL);
		V_0 = L_272;
		int32_t L_273 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_274 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_275 = (int8_t*)(&L_274->___sbyte_6);
		int32_t L_276;
		L_276 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_275, NULL);
		int32_t L_277;
		L_277 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_273, L_276, NULL);
		V_0 = L_277;
		int32_t L_278 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_279 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_280 = (int8_t*)(&L_279->___sbyte_7);
		int32_t L_281;
		L_281 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_280, NULL);
		int32_t L_282;
		L_282 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_278, L_281, NULL);
		V_0 = L_282;
		int32_t L_283 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_284 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_285 = (int8_t*)(&L_284->___sbyte_8);
		int32_t L_286;
		L_286 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_285, NULL);
		int32_t L_287;
		L_287 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_283, L_286, NULL);
		V_0 = L_287;
		int32_t L_288 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_289 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_290 = (int8_t*)(&L_289->___sbyte_9);
		int32_t L_291;
		L_291 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_290, NULL);
		int32_t L_292;
		L_292 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_288, L_291, NULL);
		V_0 = L_292;
		int32_t L_293 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_294 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_295 = (int8_t*)(&L_294->___sbyte_10);
		int32_t L_296;
		L_296 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_295, NULL);
		int32_t L_297;
		L_297 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_293, L_296, NULL);
		V_0 = L_297;
		int32_t L_298 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_299 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_300 = (int8_t*)(&L_299->___sbyte_11);
		int32_t L_301;
		L_301 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_300, NULL);
		int32_t L_302;
		L_302 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_298, L_301, NULL);
		V_0 = L_302;
		int32_t L_303 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_304 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_305 = (int8_t*)(&L_304->___sbyte_12);
		int32_t L_306;
		L_306 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_305, NULL);
		int32_t L_307;
		L_307 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_303, L_306, NULL);
		V_0 = L_307;
		int32_t L_308 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_309 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_310 = (int8_t*)(&L_309->___sbyte_13);
		int32_t L_311;
		L_311 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_310, NULL);
		int32_t L_312;
		L_312 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_308, L_311, NULL);
		V_0 = L_312;
		int32_t L_313 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_314 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_315 = (int8_t*)(&L_314->___sbyte_14);
		int32_t L_316;
		L_316 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_315, NULL);
		int32_t L_317;
		L_317 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_313, L_316, NULL);
		V_0 = L_317;
		int32_t L_318 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_319 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int8_t* L_320 = (int8_t*)(&L_319->___sbyte_15);
		int32_t L_321;
		L_321 = SByte_GetHashCode_mE61E9B0D1D93EF3E4E2B6282FF940FFA2E471FFF(L_320, NULL);
		int32_t L_322;
		L_322 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_318, L_321, NULL);
		V_0 = L_322;
		int32_t L_323 = V_0;
		return L_323;
	}

IL_066a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_324 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_325;
		L_325 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_324, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_326 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_327;
		L_327 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_326, NULL);
		bool L_328;
		L_328 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_325, L_327, NULL);
		if (!L_328)
		{
			goto IL_0742;
		}
	}
	{
		int32_t L_329 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_330 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_331 = (uint16_t*)(&L_330->___uint16_0);
		int32_t L_332;
		L_332 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_331, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_333;
		L_333 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_329, L_332, NULL);
		V_0 = L_333;
		int32_t L_334 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_335 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_336 = (uint16_t*)(&L_335->___uint16_1);
		int32_t L_337;
		L_337 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_336, NULL);
		int32_t L_338;
		L_338 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_334, L_337, NULL);
		V_0 = L_338;
		int32_t L_339 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_340 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_341 = (uint16_t*)(&L_340->___uint16_2);
		int32_t L_342;
		L_342 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_341, NULL);
		int32_t L_343;
		L_343 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_339, L_342, NULL);
		V_0 = L_343;
		int32_t L_344 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_345 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_346 = (uint16_t*)(&L_345->___uint16_3);
		int32_t L_347;
		L_347 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_346, NULL);
		int32_t L_348;
		L_348 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_344, L_347, NULL);
		V_0 = L_348;
		int32_t L_349 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_350 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_351 = (uint16_t*)(&L_350->___uint16_4);
		int32_t L_352;
		L_352 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_351, NULL);
		int32_t L_353;
		L_353 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_349, L_352, NULL);
		V_0 = L_353;
		int32_t L_354 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_355 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_356 = (uint16_t*)(&L_355->___uint16_5);
		int32_t L_357;
		L_357 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_356, NULL);
		int32_t L_358;
		L_358 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_354, L_357, NULL);
		V_0 = L_358;
		int32_t L_359 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_360 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_361 = (uint16_t*)(&L_360->___uint16_6);
		int32_t L_362;
		L_362 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_361, NULL);
		int32_t L_363;
		L_363 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_359, L_362, NULL);
		V_0 = L_363;
		int32_t L_364 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_365 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint16_t* L_366 = (uint16_t*)(&L_365->___uint16_7);
		int32_t L_367;
		L_367 = UInt16_GetHashCode_m534E5103D0DA9C6FCED4F2F007993D3E38165200(L_366, NULL);
		int32_t L_368;
		L_368 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_364, L_367, NULL);
		V_0 = L_368;
		int32_t L_369 = V_0;
		return L_369;
	}

IL_0742:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_370 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_371;
		L_371 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_370, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_372 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_373;
		L_373 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_372, NULL);
		bool L_374;
		L_374 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_371, L_373, NULL);
		if (!L_374)
		{
			goto IL_081a;
		}
	}
	{
		int32_t L_375 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_376 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_377 = (int16_t*)(&L_376->___int16_0);
		int32_t L_378;
		L_378 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_377, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_379;
		L_379 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_375, L_378, NULL);
		V_0 = L_379;
		int32_t L_380 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_381 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_382 = (int16_t*)(&L_381->___int16_1);
		int32_t L_383;
		L_383 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_382, NULL);
		int32_t L_384;
		L_384 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_380, L_383, NULL);
		V_0 = L_384;
		int32_t L_385 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_386 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_387 = (int16_t*)(&L_386->___int16_2);
		int32_t L_388;
		L_388 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_387, NULL);
		int32_t L_389;
		L_389 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_385, L_388, NULL);
		V_0 = L_389;
		int32_t L_390 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_391 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_392 = (int16_t*)(&L_391->___int16_3);
		int32_t L_393;
		L_393 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_392, NULL);
		int32_t L_394;
		L_394 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_390, L_393, NULL);
		V_0 = L_394;
		int32_t L_395 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_396 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_397 = (int16_t*)(&L_396->___int16_4);
		int32_t L_398;
		L_398 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_397, NULL);
		int32_t L_399;
		L_399 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_395, L_398, NULL);
		V_0 = L_399;
		int32_t L_400 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_401 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_402 = (int16_t*)(&L_401->___int16_5);
		int32_t L_403;
		L_403 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_402, NULL);
		int32_t L_404;
		L_404 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_400, L_403, NULL);
		V_0 = L_404;
		int32_t L_405 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_406 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_407 = (int16_t*)(&L_406->___int16_6);
		int32_t L_408;
		L_408 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_407, NULL);
		int32_t L_409;
		L_409 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_405, L_408, NULL);
		V_0 = L_409;
		int32_t L_410 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_411 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int16_t* L_412 = (int16_t*)(&L_411->___int16_7);
		int32_t L_413;
		L_413 = Int16_GetHashCode_mCD0A167AC8E6ACC2235F12E00C0F9BDC6ED3B6E1(L_412, NULL);
		int32_t L_414;
		L_414 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_410, L_413, NULL);
		V_0 = L_414;
		int32_t L_415 = V_0;
		return L_415;
	}

IL_081a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_416 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_417;
		L_417 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_416, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_418 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_419;
		L_419 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_418, NULL);
		bool L_420;
		L_420 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_417, L_419, NULL);
		if (!L_420)
		{
			goto IL_0893;
		}
	}
	{
		int32_t L_421 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_422 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t* L_423 = (uint32_t*)(&L_422->___uint32_0);
		int32_t L_424;
		L_424 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_423, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_425;
		L_425 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_421, L_424, NULL);
		V_0 = L_425;
		int32_t L_426 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_427 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t* L_428 = (uint32_t*)(&L_427->___uint32_1);
		int32_t L_429;
		L_429 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_428, NULL);
		int32_t L_430;
		L_430 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_426, L_429, NULL);
		V_0 = L_430;
		int32_t L_431 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_432 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t* L_433 = (uint32_t*)(&L_432->___uint32_2);
		int32_t L_434;
		L_434 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_433, NULL);
		int32_t L_435;
		L_435 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_431, L_434, NULL);
		V_0 = L_435;
		int32_t L_436 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_437 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint32_t* L_438 = (uint32_t*)(&L_437->___uint32_3);
		int32_t L_439;
		L_439 = UInt32_GetHashCode_mB9A03A037C079ADF0E61516BECA1AB05F92266BC(L_438, NULL);
		int32_t L_440;
		L_440 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_436, L_439, NULL);
		V_0 = L_440;
		int32_t L_441 = V_0;
		return L_441;
	}

IL_0893:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_442 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_443;
		L_443 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_442, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_444 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_445;
		L_445 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_444, NULL);
		bool L_446;
		L_446 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_443, L_445, NULL);
		if (!L_446)
		{
			goto IL_090c;
		}
	}
	{
		int32_t L_447 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_448 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t* L_449 = (int32_t*)(&L_448->___int32_0);
		int32_t L_450;
		L_450 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_449, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_451;
		L_451 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_447, L_450, NULL);
		V_0 = L_451;
		int32_t L_452 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_453 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t* L_454 = (int32_t*)(&L_453->___int32_1);
		int32_t L_455;
		L_455 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_454, NULL);
		int32_t L_456;
		L_456 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_452, L_455, NULL);
		V_0 = L_456;
		int32_t L_457 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_458 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t* L_459 = (int32_t*)(&L_458->___int32_2);
		int32_t L_460;
		L_460 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_459, NULL);
		int32_t L_461;
		L_461 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_457, L_460, NULL);
		V_0 = L_461;
		int32_t L_462 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_463 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int32_t* L_464 = (int32_t*)(&L_463->___int32_3);
		int32_t L_465;
		L_465 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_464, NULL);
		int32_t L_466;
		L_466 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_462, L_465, NULL);
		V_0 = L_466;
		int32_t L_467 = V_0;
		return L_467;
	}

IL_090c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_468 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_469;
		L_469 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_468, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_470 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_471;
		L_471 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_470, NULL);
		bool L_472;
		L_472 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_469, L_471, NULL);
		if (!L_472)
		{
			goto IL_0957;
		}
	}
	{
		int32_t L_473 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_474 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_475 = (uint64_t*)(&L_474->___uint64_0);
		int32_t L_476;
		L_476 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_475, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_477;
		L_477 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_473, L_476, NULL);
		V_0 = L_477;
		int32_t L_478 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_479 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		uint64_t* L_480 = (uint64_t*)(&L_479->___uint64_1);
		int32_t L_481;
		L_481 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_480, NULL);
		int32_t L_482;
		L_482 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_478, L_481, NULL);
		V_0 = L_482;
		int32_t L_483 = V_0;
		return L_483;
	}

IL_0957:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_484 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_485;
		L_485 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_484, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_486 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_487;
		L_487 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_486, NULL);
		bool L_488;
		L_488 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_485, L_487, NULL);
		if (!L_488)
		{
			goto IL_09a2;
		}
	}
	{
		int32_t L_489 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_490 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int64_t* L_491 = (int64_t*)(&L_490->___int64_0);
		int32_t L_492;
		L_492 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496(L_491, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_493;
		L_493 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_489, L_492, NULL);
		V_0 = L_493;
		int32_t L_494 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_495 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		int64_t* L_496 = (int64_t*)(&L_495->___int64_1);
		int32_t L_497;
		L_497 = Int64_GetHashCode_mDB050BE2AC244D92B14D1DF725AAD279CDC48496(L_496, NULL);
		int32_t L_498;
		L_498 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_494, L_497, NULL);
		V_0 = L_498;
		int32_t L_499 = V_0;
		return L_499;
	}

IL_09a2:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_500 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_501;
		L_501 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_500, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_502 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_503;
		L_503 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_502, NULL);
		bool L_504;
		L_504 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_501, L_503, NULL);
		if (!L_504)
		{
			goto IL_0a1b;
		}
	}
	{
		int32_t L_505 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_506 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float* L_507 = (float*)(&L_506->___single_0);
		int32_t L_508;
		L_508 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_507, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_509;
		L_509 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_505, L_508, NULL);
		V_0 = L_509;
		int32_t L_510 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_511 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float* L_512 = (float*)(&L_511->___single_1);
		int32_t L_513;
		L_513 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_512, NULL);
		int32_t L_514;
		L_514 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_510, L_513, NULL);
		V_0 = L_514;
		int32_t L_515 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_516 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float* L_517 = (float*)(&L_516->___single_2);
		int32_t L_518;
		L_518 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_517, NULL);
		int32_t L_519;
		L_519 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_515, L_518, NULL);
		V_0 = L_519;
		int32_t L_520 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_521 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		float* L_522 = (float*)(&L_521->___single_3);
		int32_t L_523;
		L_523 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_522, NULL);
		int32_t L_524;
		L_524 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_520, L_523, NULL);
		V_0 = L_524;
		int32_t L_525 = V_0;
		return L_525;
	}

IL_0a1b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_526 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_527;
		L_527 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_526, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_528 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_529;
		L_529 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_528, NULL);
		bool L_530;
		L_530 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_527, L_529, NULL);
		if (!L_530)
		{
			goto IL_0a66;
		}
	}
	{
		int32_t L_531 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_532 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		double* L_533 = (double*)(&L_532->___double_0);
		int32_t L_534;
		L_534 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_533, NULL);
		il2cpp_codegen_runtime_class_init_inline(HashHelpers_t285C6E63B4A4E8D837BDBC63DE4E2D23C85467D4_il2cpp_TypeInfo_var);
		int32_t L_535;
		L_535 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_531, L_534, NULL);
		V_0 = L_535;
		int32_t L_536 = V_0;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_537 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&__this->___register);
		double* L_538 = (double*)(&L_537->___double_1);
		int32_t L_539;
		L_539 = Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline(L_538, NULL);
		int32_t L_540;
		L_540 = HashHelpers_Combine_mBE398FF248FE6B082F5E254BCD36E3B3351608D7(L_536, L_539, NULL);
		V_0 = L_540;
		int32_t L_541 = V_0;
		return L_541;
	}

IL_0a66:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_542 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_542, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_542, method);
	}
}
IL2CPP_EXTERN_C  int32_t Vector_1_GetHashCode_m3ACEDE87318824BACAD7E8CB760798D98D37C4FF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = Vector_1_GetHashCode_m3ACEDE87318824BACAD7E8CB760798D98D37C4FF(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_m212191DE0383E512D8297CE138DB5C06BF1E6F4A_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		String_t* L_1;
		L_1 = ((  String_t* (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, String_t*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)))(__this, _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, (RuntimeObject*)L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_m212191DE0383E512D8297CE138DB5C06BF1E6F4A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_m212191DE0383E512D8297CE138DB5C06BF1E6F4A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector_1_ToString_mB21C58D9FD6C9A89DF0D786C50F960E551B1FB8F_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_8 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_24 = L_8;
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___1_formatProvider;
		NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* L_2;
		L_2 = NumberFormatInfo_GetInstance_m705987E5E7D3E5EC5C5DD2D088FBC9BCBA0FC31F(L_1, NULL);
		String_t* L_3;
		L_3 = NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline(L_2, NULL);
		V_1 = L_3;
		StringBuilder_t* L_4 = V_0;
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, (Il2CppChar)((int32_t)60), NULL);
		V_2 = 0;
		goto IL_0053;
	}

IL_001f:
	{
		StringBuilder_t* L_6 = V_0;
		int32_t L_7 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, L_7, (Il2CppFullySharedGenericStruct*)L_8);
		RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_8);
		String_t* L_10 = ___0_format;
		RuntimeObject* L_11 = ___1_formatProvider;
		String_t* L_12;
		L_12 = InterfaceFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(0, IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_9, IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var)), L_10, L_11);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, L_12, NULL);
		StringBuilder_t* L_14 = V_0;
		String_t* L_15 = V_1;
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_14, L_15, NULL);
		StringBuilder_t* L_17 = V_0;
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_17, (Il2CppChar)((int32_t)32), NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0053:
	{
		int32_t L_20 = V_2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_21;
		L_21 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_20) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_21, 1)))))
		{
			goto IL_001f;
		}
	}
	{
		StringBuilder_t* L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_23;
		L_23 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), __this, ((int32_t)il2cpp_codegen_subtract(L_23, 1)), (Il2CppFullySharedGenericStruct*)L_24);
		RuntimeObject* L_25 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_24);
		String_t* L_26 = ___0_format;
		RuntimeObject* L_27 = ___1_formatProvider;
		String_t* L_28;
		L_28 = InterfaceFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(0, IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_25, IFormattable_t235A539BD9771E1E118DB99384BA8385D2F971CA_il2cpp_TypeInfo_var)), L_26, L_27);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, L_28, NULL);
		StringBuilder_t* L_30 = V_0;
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_30, (Il2CppChar)((int32_t)62), NULL);
		StringBuilder_t* L_32 = V_0;
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)L_32);
		return L_33;
	}
}
IL2CPP_EXTERN_C  String_t* Vector_1_ToString_mB21C58D9FD6C9A89DF0D786C50F960E551B1FB8F_AdjustorThunk (RuntimeObject* __this, String_t* ___0_format, RuntimeObject* ___1_formatProvider, const RuntimeMethod* method)
{
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = Vector_1_ToString_mB21C58D9FD6C9A89DF0D786C50F960E551B1FB8F(_thisAdjusted, ___0_format, ___1_formatProvider, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Equality_mD9D7F968EF2059FD426D9AB1B5252CF82BD4F4EF_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_left, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___1_right, const RuntimeMethod* method) 
{
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_1;
		L_1 = ((  bool (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))((&___0_left), L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_op_Inequality_mA9CAF8F4CFD39F3FFFD040F57C0FA7EAD5508999_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_left, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___1_right, const RuntimeMethod* method) 
{
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_left;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_2;
		L_2 = ((  bool (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))(L_0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_mEFC640DAE334AF4ED540F354F6FCDF25F74E95A2_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* L_0 = (Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*)(&(&___0_value)->___register);
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606((&L_1), L_0, Vector_1__ctor_mEA86543744A54FCE590FDBF012FAE9037A5F1606_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 Vector_1_Equals_m96E39C24E7761FC3F454C5A26242AE329FDEFC99_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_left, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_12 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_33 = L_12;
	const Il2CppFullySharedGenericStruct L_54 = L_12;
	const Il2CppFullySharedGenericStruct L_75 = L_12;
	const Il2CppFullySharedGenericStruct L_96 = L_12;
	const Il2CppFullySharedGenericStruct L_117 = L_12;
	const Il2CppFullySharedGenericStruct L_138 = L_12;
	const Il2CppFullySharedGenericStruct L_159 = L_12;
	const Il2CppFullySharedGenericStruct L_180 = L_12;
	const Il2CppFullySharedGenericStruct L_201 = L_12;
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_35 = L_14;
	const Il2CppFullySharedGenericStruct L_56 = L_14;
	const Il2CppFullySharedGenericStruct L_77 = L_14;
	const Il2CppFullySharedGenericStruct L_98 = L_14;
	const Il2CppFullySharedGenericStruct L_119 = L_14;
	const Il2CppFullySharedGenericStruct L_140 = L_14;
	const Il2CppFullySharedGenericStruct L_161 = L_14;
	const Il2CppFullySharedGenericStruct L_182 = L_14;
	const Il2CppFullySharedGenericStruct L_203 = L_14;
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint16_t* V_4 = NULL;
	int32_t V_5 = 0;
	int16_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint32_t* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint64_t* V_12 = NULL;
	int32_t V_13 = 0;
	int64_t* V_14 = NULL;
	int32_t V_15 = 0;
	float* V_16 = NULL;
	int32_t V_17 = 0;
	double* V_18 = NULL;
	int32_t V_19 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A V_20;
	memset((&V_20), 0, sizeof(V_20));
	uint8_t* G_B5_0 = NULL;
	uint8_t* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	uint8_t* G_B6_1 = NULL;
	int8_t* G_B13_0 = NULL;
	int8_t* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	int8_t* G_B14_1 = NULL;
	uint16_t* G_B21_0 = NULL;
	uint16_t* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	uint16_t* G_B22_1 = NULL;
	int16_t* G_B29_0 = NULL;
	int16_t* G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	int16_t* G_B30_1 = NULL;
	uint32_t* G_B37_0 = NULL;
	uint32_t* G_B36_0 = NULL;
	uint32_t G_B38_0 = 0;
	uint32_t* G_B38_1 = NULL;
	int32_t* G_B45_0 = NULL;
	int32_t* G_B44_0 = NULL;
	int32_t G_B46_0 = 0;
	int32_t* G_B46_1 = NULL;
	uint64_t* G_B53_0 = NULL;
	uint64_t* G_B52_0 = NULL;
	uint64_t G_B54_0 = 0;
	uint64_t* G_B54_1 = NULL;
	int64_t* G_B61_0 = NULL;
	int64_t* G_B60_0 = NULL;
	int64_t G_B62_0 = 0;
	int64_t* G_B62_1 = NULL;
	float* G_B69_0 = NULL;
	float* G_B68_0 = NULL;
	float G_B70_0 = 0.0f;
	float* G_B70_1 = NULL;
	double* G_B77_0 = NULL;
	double* G_B76_0 = NULL;
	double G_B78_0 = 0.0;
	double* G_B78_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B85_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B84_0 = NULL;
	int32_t G_B86_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B86_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B88_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B87_0 = NULL;
	int32_t G_B89_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B89_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B91_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B90_0 = NULL;
	int32_t G_B92_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B92_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B94_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B93_0 = NULL;
	int32_t G_B95_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B95_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B97_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B96_0 = NULL;
	int32_t G_B98_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B98_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B100_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B99_0 = NULL;
	int32_t G_B101_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B101_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B103_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B102_0 = NULL;
	int32_t G_B104_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B104_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B106_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B105_0 = NULL;
	int32_t G_B107_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B107_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B109_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B108_0 = NULL;
	int32_t G_B110_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B110_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B112_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B111_0 = NULL;
	int32_t G_B113_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B113_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B115_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B114_0 = NULL;
	int32_t G_B116_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B116_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B118_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B117_0 = NULL;
	int32_t G_B119_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B119_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B121_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B120_0 = NULL;
	int32_t G_B122_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B122_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B124_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B123_0 = NULL;
	int32_t G_B125_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B125_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B127_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B126_0 = NULL;
	int32_t G_B128_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B128_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B130_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B129_0 = NULL;
	int32_t G_B131_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B131_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B135_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B134_0 = NULL;
	int32_t G_B136_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B136_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B138_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B137_0 = NULL;
	int32_t G_B139_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B139_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B141_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B140_0 = NULL;
	int32_t G_B142_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B142_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B144_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B143_0 = NULL;
	int32_t G_B145_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B145_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B147_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B146_0 = NULL;
	int32_t G_B148_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B148_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B150_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B149_0 = NULL;
	int32_t G_B151_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B151_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B153_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B152_0 = NULL;
	int32_t G_B154_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B154_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B156_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B155_0 = NULL;
	int32_t G_B157_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B157_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B159_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B158_0 = NULL;
	int32_t G_B160_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B160_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B162_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B161_0 = NULL;
	int32_t G_B163_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B163_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B165_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B164_0 = NULL;
	int32_t G_B166_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B166_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B168_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B167_0 = NULL;
	int32_t G_B169_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B169_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B171_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B170_0 = NULL;
	int32_t G_B172_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B172_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B174_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B173_0 = NULL;
	int32_t G_B175_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B175_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B177_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B176_0 = NULL;
	int32_t G_B178_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B178_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B180_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B179_0 = NULL;
	int32_t G_B181_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B181_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B185_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B184_0 = NULL;
	int32_t G_B186_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B186_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B188_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B187_0 = NULL;
	int32_t G_B189_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B189_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B191_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B190_0 = NULL;
	int32_t G_B192_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B192_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B194_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B193_0 = NULL;
	int32_t G_B195_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B195_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B197_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B196_0 = NULL;
	int32_t G_B198_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B198_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B200_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B199_0 = NULL;
	int32_t G_B201_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B201_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B203_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B202_0 = NULL;
	int32_t G_B204_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B204_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B206_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B205_0 = NULL;
	int32_t G_B207_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B207_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B211_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B210_0 = NULL;
	int32_t G_B212_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B212_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B214_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B213_0 = NULL;
	int32_t G_B215_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B215_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B217_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B216_0 = NULL;
	int32_t G_B218_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B218_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B220_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B219_0 = NULL;
	int32_t G_B221_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B221_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B223_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B222_0 = NULL;
	int32_t G_B224_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B224_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B226_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B225_0 = NULL;
	int32_t G_B227_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B227_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B229_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B228_0 = NULL;
	int32_t G_B230_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B230_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B232_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B231_0 = NULL;
	int32_t G_B233_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B233_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B237_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B236_0 = NULL;
	uint32_t G_B238_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B238_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B240_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B239_0 = NULL;
	uint32_t G_B241_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B241_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B243_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B242_0 = NULL;
	uint32_t G_B244_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B244_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B246_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B245_0 = NULL;
	uint32_t G_B247_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B247_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B251_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B250_0 = NULL;
	int32_t G_B252_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B252_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B254_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B253_0 = NULL;
	int32_t G_B255_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B255_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B257_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B256_0 = NULL;
	int32_t G_B258_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B258_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B260_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B259_0 = NULL;
	int32_t G_B261_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B261_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B265_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B264_0 = NULL;
	uint64_t G_B266_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B266_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B268_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B267_0 = NULL;
	uint64_t G_B269_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B269_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B273_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B272_0 = NULL;
	int64_t G_B274_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B274_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B276_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B275_0 = NULL;
	int64_t G_B277_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B277_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B281_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B280_0 = NULL;
	float G_B282_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B282_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B284_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B283_0 = NULL;
	float G_B285_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B285_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B287_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B286_0 = NULL;
	float G_B288_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B288_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B290_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B289_0 = NULL;
	float G_B291_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B291_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B295_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B294_0 = NULL;
	double G_B296_0 = 0.0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B296_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B298_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B297_0 = NULL;
	double G_B299_0 = 0.0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B299_1 = NULL;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0447;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0068;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_6;
		L_6 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uintptr_t L_7 = ((uintptr_t)L_6);
		int8_t* L_8 = (int8_t*) (L_7 ? alloca(L_7) : NULL);
		memset(L_8, 0, L_7);
		V_0 = (uint8_t*)(L_8);
		V_1 = 0;
		goto IL_0059;
	}

IL_0032:
	{
		uint8_t* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_11, (Il2CppFullySharedGenericStruct*)L_12);
		int32_t L_13 = V_1;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_13, (Il2CppFullySharedGenericStruct*)L_14);
		bool L_15;
		L_15 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_12, L_14);
		if (L_15)
		{
			G_B5_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10));
			goto IL_004f;
		}
		G_B4_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10));
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0054;
	}

IL_004f:
	{
		uint8_t L_16;
		L_16 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B6_0 = ((int32_t)(L_16));
		G_B6_1 = G_B5_0;
	}

IL_0054:
	{
		*((int8_t*)G_B6_1) = (int8_t)G_B6_0;
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		int32_t L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_19;
		L_19 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0032;
		}
	}
	{
		uint8_t* L_20 = V_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_21), (void*)L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_21;
	}

IL_0068:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_00c6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_27;
		L_27 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uintptr_t L_28 = ((uintptr_t)L_27);
		int8_t* L_29 = (int8_t*) (L_28 ? alloca(L_28) : NULL);
		memset(L_29, 0, L_28);
		V_2 = (L_29);
		V_3 = 0;
		goto IL_00b7;
	}

IL_0090:
	{
		int8_t* L_30 = V_2;
		int32_t L_31 = V_3;
		int32_t L_32 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_32, (Il2CppFullySharedGenericStruct*)L_33);
		int32_t L_34 = V_3;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_34, (Il2CppFullySharedGenericStruct*)L_35);
		bool L_36;
		L_36 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_33, L_35);
		if (L_36)
		{
			G_B13_0 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31));
			goto IL_00ad;
		}
		G_B12_0 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31));
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		goto IL_00b2;
	}

IL_00ad:
	{
		int8_t L_37;
		L_37 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B14_0 = ((int32_t)(L_37));
		G_B14_1 = G_B13_0;
	}

IL_00b2:
	{
		*((int8_t*)G_B14_1) = (int8_t)G_B14_0;
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b7:
	{
		int32_t L_39 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_40;
		L_40 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0090;
		}
	}
	{
		int8_t* L_41 = V_2;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_42), (void*)L_41, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_42;
	}

IL_00c6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		bool L_47;
		L_47 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_44, L_46, NULL);
		if (!L_47)
		{
			goto IL_0133;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_48;
		L_48 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_48) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_49 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_48), 2));
		int8_t* L_50 = (int8_t*) (L_49 ? alloca(L_49) : NULL);
		memset(L_50, 0, L_49);
		V_4 = (uint16_t*)(L_50);
		V_5 = 0;
		goto IL_0122;
	}

IL_00f2:
	{
		uint16_t* L_51 = V_4;
		int32_t L_52 = V_5;
		int32_t L_53 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_53, (Il2CppFullySharedGenericStruct*)L_54);
		int32_t L_55 = V_5;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_55, (Il2CppFullySharedGenericStruct*)L_56);
		bool L_57;
		L_57 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_54, L_56);
		if (L_57)
		{
			G_B21_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2))));
			goto IL_0116;
		}
		G_B20_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2))));
	}
	{
		G_B22_0 = 0;
		G_B22_1 = G_B20_0;
		goto IL_011b;
	}

IL_0116:
	{
		uint16_t L_58;
		L_58 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B22_0 = ((int32_t)(L_58));
		G_B22_1 = G_B21_0;
	}

IL_011b:
	{
		*((int16_t*)G_B22_1) = (int16_t)G_B22_0;
		int32_t L_59 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0122:
	{
		int32_t L_60 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_61;
		L_61 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_00f2;
		}
	}
	{
		uint16_t* L_62 = V_4;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_63), (void*)L_62, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_63;
	}

IL_0133:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		if (!L_68)
		{
			goto IL_01a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_69;
		L_69 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_69) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_70 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_69), 2));
		int8_t* L_71 = (int8_t*) (L_70 ? alloca(L_70) : NULL);
		memset(L_71, 0, L_70);
		V_6 = (int16_t*)(L_71);
		V_7 = 0;
		goto IL_018f;
	}

IL_015f:
	{
		int16_t* L_72 = V_6;
		int32_t L_73 = V_7;
		int32_t L_74 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_74, (Il2CppFullySharedGenericStruct*)L_75);
		int32_t L_76 = V_7;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_76, (Il2CppFullySharedGenericStruct*)L_77);
		bool L_78;
		L_78 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_75, L_77);
		if (L_78)
		{
			G_B29_0 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 2))));
			goto IL_0183;
		}
		G_B28_0 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 2))));
	}
	{
		G_B30_0 = 0;
		G_B30_1 = G_B28_0;
		goto IL_0188;
	}

IL_0183:
	{
		int16_t L_79;
		L_79 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B30_0 = ((int32_t)(L_79));
		G_B30_1 = G_B29_0;
	}

IL_0188:
	{
		*((int16_t*)G_B30_1) = (int16_t)G_B30_0;
		int32_t L_80 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_018f:
	{
		int32_t L_81 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_82;
		L_82 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_81) < ((int32_t)L_82)))
		{
			goto IL_015f;
		}
	}
	{
		int16_t* L_83 = V_6;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_84;
		memset((&L_84), 0, sizeof(L_84));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_84), (void*)L_83, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_84;
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		bool L_89;
		L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
		if (!L_89)
		{
			goto IL_020d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_90;
		L_90 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_90) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_91 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_90), 4));
		int8_t* L_92 = (int8_t*) (L_91 ? alloca(L_91) : NULL);
		memset(L_92, 0, L_91);
		V_8 = (uint32_t*)(L_92);
		V_9 = 0;
		goto IL_01fc;
	}

IL_01cc:
	{
		uint32_t* L_93 = V_8;
		int32_t L_94 = V_9;
		int32_t L_95 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_95, (Il2CppFullySharedGenericStruct*)L_96);
		int32_t L_97 = V_9;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_97, (Il2CppFullySharedGenericStruct*)L_98);
		bool L_99;
		L_99 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_96, L_98);
		if (L_99)
		{
			G_B37_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_94), 4))));
			goto IL_01f0;
		}
		G_B36_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_94), 4))));
	}
	{
		G_B38_0 = ((uint32_t)(0));
		G_B38_1 = G_B36_0;
		goto IL_01f5;
	}

IL_01f0:
	{
		uint32_t L_100;
		L_100 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B38_0 = L_100;
		G_B38_1 = G_B37_0;
	}

IL_01f5:
	{
		*((int32_t*)G_B38_1) = (int32_t)G_B38_0;
		int32_t L_101 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_01fc:
	{
		int32_t L_102 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_103;
		L_103 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_01cc;
		}
	}
	{
		uint32_t* L_104 = V_8;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_105), (void*)L_104, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_105;
	}

IL_020d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_027a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_111;
		L_111 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_111) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_112 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_111), 4));
		int8_t* L_113 = (int8_t*) (L_112 ? alloca(L_112) : NULL);
		memset(L_113, 0, L_112);
		V_10 = (int32_t*)(L_113);
		V_11 = 0;
		goto IL_0269;
	}

IL_0239:
	{
		int32_t* L_114 = V_10;
		int32_t L_115 = V_11;
		int32_t L_116 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_116, (Il2CppFullySharedGenericStruct*)L_117);
		int32_t L_118 = V_11;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_118, (Il2CppFullySharedGenericStruct*)L_119);
		bool L_120;
		L_120 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_117, L_119);
		if (L_120)
		{
			G_B45_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_115), 4))));
			goto IL_025d;
		}
		G_B44_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_115), 4))));
	}
	{
		G_B46_0 = 0;
		G_B46_1 = G_B44_0;
		goto IL_0262;
	}

IL_025d:
	{
		int32_t L_121;
		L_121 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B46_0 = L_121;
		G_B46_1 = G_B45_0;
	}

IL_0262:
	{
		*((int32_t*)G_B46_1) = (int32_t)G_B46_0;
		int32_t L_122 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_0269:
	{
		int32_t L_123 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_124;
		L_124 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_123) < ((int32_t)L_124)))
		{
			goto IL_0239;
		}
	}
	{
		int32_t* L_125 = V_10;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_126;
		memset((&L_126), 0, sizeof(L_126));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_126), (void*)L_125, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_126;
	}

IL_027a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_130;
		L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
		bool L_131;
		L_131 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_128, L_130, NULL);
		if (!L_131)
		{
			goto IL_02e8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_132;
		L_132 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_132) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_133 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_132), 8));
		int8_t* L_134 = (int8_t*) (L_133 ? alloca(L_133) : NULL);
		memset(L_134, 0, L_133);
		V_12 = (uint64_t*)(L_134);
		V_13 = 0;
		goto IL_02d7;
	}

IL_02a6:
	{
		uint64_t* L_135 = V_12;
		int32_t L_136 = V_13;
		int32_t L_137 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_137, (Il2CppFullySharedGenericStruct*)L_138);
		int32_t L_139 = V_13;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_139, (Il2CppFullySharedGenericStruct*)L_140);
		bool L_141;
		L_141 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_138, L_140);
		if (L_141)
		{
			G_B53_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_135, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_136), 8))));
			goto IL_02cb;
		}
		G_B52_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_135, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_136), 8))));
	}
	{
		G_B54_0 = ((uint64_t)(((int64_t)0)));
		G_B54_1 = G_B52_0;
		goto IL_02d0;
	}

IL_02cb:
	{
		uint64_t L_142;
		L_142 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B54_0 = L_142;
		G_B54_1 = G_B53_0;
	}

IL_02d0:
	{
		*((int64_t*)G_B54_1) = (int64_t)G_B54_0;
		int32_t L_143 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_02d7:
	{
		int32_t L_144 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_145;
		L_145 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_02a6;
		}
	}
	{
		uint64_t* L_146 = V_12;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_147;
		memset((&L_147), 0, sizeof(L_147));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_147), (void*)L_146, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_147;
	}

IL_02e8:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_149;
		L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_151;
		L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
		bool L_152;
		L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
		if (!L_152)
		{
			goto IL_0356;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_153;
		L_153 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_153) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_154 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_153), 8));
		int8_t* L_155 = (int8_t*) (L_154 ? alloca(L_154) : NULL);
		memset(L_155, 0, L_154);
		V_14 = (int64_t*)(L_155);
		V_15 = 0;
		goto IL_0345;
	}

IL_0314:
	{
		int64_t* L_156 = V_14;
		int32_t L_157 = V_15;
		int32_t L_158 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_158, (Il2CppFullySharedGenericStruct*)L_159);
		int32_t L_160 = V_15;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_160, (Il2CppFullySharedGenericStruct*)L_161);
		bool L_162;
		L_162 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_159, L_161);
		if (L_162)
		{
			G_B61_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_156, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_157), 8))));
			goto IL_0339;
		}
		G_B60_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_156, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_157), 8))));
	}
	{
		G_B62_0 = ((int64_t)0);
		G_B62_1 = G_B60_0;
		goto IL_033e;
	}

IL_0339:
	{
		int64_t L_163;
		L_163 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B62_0 = L_163;
		G_B62_1 = G_B61_0;
	}

IL_033e:
	{
		*((int64_t*)G_B62_1) = (int64_t)G_B62_0;
		int32_t L_164 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_164, 1));
	}

IL_0345:
	{
		int32_t L_165 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_166;
		L_166 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_165) < ((int32_t)L_166)))
		{
			goto IL_0314;
		}
	}
	{
		int64_t* L_167 = V_14;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_168;
		memset((&L_168), 0, sizeof(L_168));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_168), (void*)L_167, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_168;
	}

IL_0356:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_169 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_170;
		L_170 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_169, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_172;
		L_172 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_171, NULL);
		bool L_173;
		L_173 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_170, L_172, NULL);
		if (!L_173)
		{
			goto IL_03c7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_174;
		L_174 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_174) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_175 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_174), 4));
		int8_t* L_176 = (int8_t*) (L_175 ? alloca(L_175) : NULL);
		memset(L_176, 0, L_175);
		V_16 = (float*)(L_176);
		V_17 = 0;
		goto IL_03b6;
	}

IL_0382:
	{
		float* L_177 = V_16;
		int32_t L_178 = V_17;
		int32_t L_179 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_179, (Il2CppFullySharedGenericStruct*)L_180);
		int32_t L_181 = V_17;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_181, (Il2CppFullySharedGenericStruct*)L_182);
		bool L_183;
		L_183 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_180, L_182);
		if (L_183)
		{
			G_B69_0 = ((float*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 4))));
			goto IL_03aa;
		}
		G_B68_0 = ((float*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 4))));
	}
	{
		G_B70_0 = (0.0f);
		G_B70_1 = G_B68_0;
		goto IL_03af;
	}

IL_03aa:
	{
		float L_184;
		L_184 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B70_0 = L_184;
		G_B70_1 = G_B69_0;
	}

IL_03af:
	{
		*((float*)G_B70_1) = (float)G_B70_0;
		int32_t L_185 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_185, 1));
	}

IL_03b6:
	{
		int32_t L_186 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_187;
		L_187 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_186) < ((int32_t)L_187)))
		{
			goto IL_0382;
		}
	}
	{
		float* L_188 = V_16;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_189;
		memset((&L_189), 0, sizeof(L_189));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_189), (void*)L_188, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_189;
	}

IL_03c7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_190 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_191;
		L_191 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_190, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_193;
		L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
		bool L_194;
		L_194 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_191, L_193, NULL);
		if (!L_194)
		{
			goto IL_043c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_195;
		L_195 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_195) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_196 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_195), 8));
		int8_t* L_197 = (int8_t*) (L_196 ? alloca(L_196) : NULL);
		memset(L_197, 0, L_196);
		V_18 = (double*)(L_197);
		V_19 = 0;
		goto IL_042b;
	}

IL_03f3:
	{
		double* L_198 = V_18;
		int32_t L_199 = V_19;
		int32_t L_200 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___0_left), L_200, (Il2CppFullySharedGenericStruct*)L_201);
		int32_t L_202 = V_19;
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8), (&___1_right), L_202, (Il2CppFullySharedGenericStruct*)L_203);
		bool L_204;
		L_204 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9), NULL, L_201, L_203);
		if (L_204)
		{
			G_B77_0 = ((double*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_199), 8))));
			goto IL_041f;
		}
		G_B76_0 = ((double*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_199), 8))));
	}
	{
		G_B78_0 = (0.0);
		G_B78_1 = G_B76_0;
		goto IL_0424;
	}

IL_041f:
	{
		double L_205;
		L_205 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B78_0 = L_205;
		G_B78_1 = G_B77_0;
	}

IL_0424:
	{
		*((double*)G_B78_1) = (double)G_B78_0;
		int32_t L_206 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_206, 1));
	}

IL_042b:
	{
		int32_t L_207 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_208;
		L_208 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_207) < ((int32_t)L_208)))
		{
			goto IL_03f3;
		}
	}
	{
		double* L_209 = V_18;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_210;
		memset((&L_210), 0, sizeof(L_210));
		Vector_1__ctor_mD3ECCFAE19D970AAEFCC15057E4B90EEA62EB001((&L_210), (void*)L_209, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_210;
	}

IL_043c:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_211 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_211, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_211, method);
	}

IL_0447:
	{
		il2cpp_codegen_initobj((&V_20), sizeof(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_214 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_215;
		L_215 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_214, NULL);
		bool L_216;
		L_216 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_213, L_215, NULL);
		if (!L_216)
		{
			goto IL_06e5;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_217 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_218 = L_217.___register;
		uint8_t L_219 = L_218.___byte_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_220 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_221 = L_220.___register;
		uint8_t L_222 = L_221.___byte_0;
		if ((((int32_t)L_219) == ((int32_t)L_222)))
		{
			G_B85_0 = (&V_20);
			goto IL_048a;
		}
		G_B84_0 = (&V_20);
	}
	{
		G_B86_0 = 0;
		G_B86_1 = G_B84_0;
		goto IL_048f;
	}

IL_048a:
	{
		uint8_t L_223;
		L_223 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B86_0 = ((int32_t)(L_223));
		G_B86_1 = G_B85_0;
	}

IL_048f:
	{
		G_B86_1->___byte_0 = (uint8_t)G_B86_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_224 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_225 = L_224.___register;
		uint8_t L_226 = L_225.___byte_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_227 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_228 = L_227.___register;
		uint8_t L_229 = L_228.___byte_1;
		if ((((int32_t)L_226) == ((int32_t)L_229)))
		{
			G_B88_0 = (&V_20);
			goto IL_04b1;
		}
		G_B87_0 = (&V_20);
	}
	{
		G_B89_0 = 0;
		G_B89_1 = G_B87_0;
		goto IL_04b6;
	}

IL_04b1:
	{
		uint8_t L_230;
		L_230 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B89_0 = ((int32_t)(L_230));
		G_B89_1 = G_B88_0;
	}

IL_04b6:
	{
		G_B89_1->___byte_1 = (uint8_t)G_B89_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_231 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_232 = L_231.___register;
		uint8_t L_233 = L_232.___byte_2;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_234 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_235 = L_234.___register;
		uint8_t L_236 = L_235.___byte_2;
		if ((((int32_t)L_233) == ((int32_t)L_236)))
		{
			G_B91_0 = (&V_20);
			goto IL_04d8;
		}
		G_B90_0 = (&V_20);
	}
	{
		G_B92_0 = 0;
		G_B92_1 = G_B90_0;
		goto IL_04dd;
	}

IL_04d8:
	{
		uint8_t L_237;
		L_237 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B92_0 = ((int32_t)(L_237));
		G_B92_1 = G_B91_0;
	}

IL_04dd:
	{
		G_B92_1->___byte_2 = (uint8_t)G_B92_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_238 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_239 = L_238.___register;
		uint8_t L_240 = L_239.___byte_3;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_241 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_242 = L_241.___register;
		uint8_t L_243 = L_242.___byte_3;
		if ((((int32_t)L_240) == ((int32_t)L_243)))
		{
			G_B94_0 = (&V_20);
			goto IL_04ff;
		}
		G_B93_0 = (&V_20);
	}
	{
		G_B95_0 = 0;
		G_B95_1 = G_B93_0;
		goto IL_0504;
	}

IL_04ff:
	{
		uint8_t L_244;
		L_244 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B95_0 = ((int32_t)(L_244));
		G_B95_1 = G_B94_0;
	}

IL_0504:
	{
		G_B95_1->___byte_3 = (uint8_t)G_B95_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_245 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_246 = L_245.___register;
		uint8_t L_247 = L_246.___byte_4;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_248 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_249 = L_248.___register;
		uint8_t L_250 = L_249.___byte_4;
		if ((((int32_t)L_247) == ((int32_t)L_250)))
		{
			G_B97_0 = (&V_20);
			goto IL_0526;
		}
		G_B96_0 = (&V_20);
	}
	{
		G_B98_0 = 0;
		G_B98_1 = G_B96_0;
		goto IL_052b;
	}

IL_0526:
	{
		uint8_t L_251;
		L_251 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B98_0 = ((int32_t)(L_251));
		G_B98_1 = G_B97_0;
	}

IL_052b:
	{
		G_B98_1->___byte_4 = (uint8_t)G_B98_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_252 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_253 = L_252.___register;
		uint8_t L_254 = L_253.___byte_5;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_255 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_256 = L_255.___register;
		uint8_t L_257 = L_256.___byte_5;
		if ((((int32_t)L_254) == ((int32_t)L_257)))
		{
			G_B100_0 = (&V_20);
			goto IL_054d;
		}
		G_B99_0 = (&V_20);
	}
	{
		G_B101_0 = 0;
		G_B101_1 = G_B99_0;
		goto IL_0552;
	}

IL_054d:
	{
		uint8_t L_258;
		L_258 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B101_0 = ((int32_t)(L_258));
		G_B101_1 = G_B100_0;
	}

IL_0552:
	{
		G_B101_1->___byte_5 = (uint8_t)G_B101_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_259 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_260 = L_259.___register;
		uint8_t L_261 = L_260.___byte_6;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_262 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_263 = L_262.___register;
		uint8_t L_264 = L_263.___byte_6;
		if ((((int32_t)L_261) == ((int32_t)L_264)))
		{
			G_B103_0 = (&V_20);
			goto IL_0574;
		}
		G_B102_0 = (&V_20);
	}
	{
		G_B104_0 = 0;
		G_B104_1 = G_B102_0;
		goto IL_0579;
	}

IL_0574:
	{
		uint8_t L_265;
		L_265 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B104_0 = ((int32_t)(L_265));
		G_B104_1 = G_B103_0;
	}

IL_0579:
	{
		G_B104_1->___byte_6 = (uint8_t)G_B104_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_266 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_267 = L_266.___register;
		uint8_t L_268 = L_267.___byte_7;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_269 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_270 = L_269.___register;
		uint8_t L_271 = L_270.___byte_7;
		if ((((int32_t)L_268) == ((int32_t)L_271)))
		{
			G_B106_0 = (&V_20);
			goto IL_059b;
		}
		G_B105_0 = (&V_20);
	}
	{
		G_B107_0 = 0;
		G_B107_1 = G_B105_0;
		goto IL_05a0;
	}

IL_059b:
	{
		uint8_t L_272;
		L_272 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B107_0 = ((int32_t)(L_272));
		G_B107_1 = G_B106_0;
	}

IL_05a0:
	{
		G_B107_1->___byte_7 = (uint8_t)G_B107_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_273 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_274 = L_273.___register;
		uint8_t L_275 = L_274.___byte_8;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_276 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_277 = L_276.___register;
		uint8_t L_278 = L_277.___byte_8;
		if ((((int32_t)L_275) == ((int32_t)L_278)))
		{
			G_B109_0 = (&V_20);
			goto IL_05c2;
		}
		G_B108_0 = (&V_20);
	}
	{
		G_B110_0 = 0;
		G_B110_1 = G_B108_0;
		goto IL_05c7;
	}

IL_05c2:
	{
		uint8_t L_279;
		L_279 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B110_0 = ((int32_t)(L_279));
		G_B110_1 = G_B109_0;
	}

IL_05c7:
	{
		G_B110_1->___byte_8 = (uint8_t)G_B110_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_280 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_281 = L_280.___register;
		uint8_t L_282 = L_281.___byte_9;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_283 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_284 = L_283.___register;
		uint8_t L_285 = L_284.___byte_9;
		if ((((int32_t)L_282) == ((int32_t)L_285)))
		{
			G_B112_0 = (&V_20);
			goto IL_05e9;
		}
		G_B111_0 = (&V_20);
	}
	{
		G_B113_0 = 0;
		G_B113_1 = G_B111_0;
		goto IL_05ee;
	}

IL_05e9:
	{
		uint8_t L_286;
		L_286 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B113_0 = ((int32_t)(L_286));
		G_B113_1 = G_B112_0;
	}

IL_05ee:
	{
		G_B113_1->___byte_9 = (uint8_t)G_B113_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_287 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_288 = L_287.___register;
		uint8_t L_289 = L_288.___byte_10;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_290 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_291 = L_290.___register;
		uint8_t L_292 = L_291.___byte_10;
		if ((((int32_t)L_289) == ((int32_t)L_292)))
		{
			G_B115_0 = (&V_20);
			goto IL_0610;
		}
		G_B114_0 = (&V_20);
	}
	{
		G_B116_0 = 0;
		G_B116_1 = G_B114_0;
		goto IL_0615;
	}

IL_0610:
	{
		uint8_t L_293;
		L_293 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B116_0 = ((int32_t)(L_293));
		G_B116_1 = G_B115_0;
	}

IL_0615:
	{
		G_B116_1->___byte_10 = (uint8_t)G_B116_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_294 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_295 = L_294.___register;
		uint8_t L_296 = L_295.___byte_11;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_297 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_298 = L_297.___register;
		uint8_t L_299 = L_298.___byte_11;
		if ((((int32_t)L_296) == ((int32_t)L_299)))
		{
			G_B118_0 = (&V_20);
			goto IL_0637;
		}
		G_B117_0 = (&V_20);
	}
	{
		G_B119_0 = 0;
		G_B119_1 = G_B117_0;
		goto IL_063c;
	}

IL_0637:
	{
		uint8_t L_300;
		L_300 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B119_0 = ((int32_t)(L_300));
		G_B119_1 = G_B118_0;
	}

IL_063c:
	{
		G_B119_1->___byte_11 = (uint8_t)G_B119_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_301 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_302 = L_301.___register;
		uint8_t L_303 = L_302.___byte_12;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_304 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_305 = L_304.___register;
		uint8_t L_306 = L_305.___byte_12;
		if ((((int32_t)L_303) == ((int32_t)L_306)))
		{
			G_B121_0 = (&V_20);
			goto IL_065e;
		}
		G_B120_0 = (&V_20);
	}
	{
		G_B122_0 = 0;
		G_B122_1 = G_B120_0;
		goto IL_0663;
	}

IL_065e:
	{
		uint8_t L_307;
		L_307 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B122_0 = ((int32_t)(L_307));
		G_B122_1 = G_B121_0;
	}

IL_0663:
	{
		G_B122_1->___byte_12 = (uint8_t)G_B122_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_308 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_309 = L_308.___register;
		uint8_t L_310 = L_309.___byte_13;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_311 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_312 = L_311.___register;
		uint8_t L_313 = L_312.___byte_13;
		if ((((int32_t)L_310) == ((int32_t)L_313)))
		{
			G_B124_0 = (&V_20);
			goto IL_0685;
		}
		G_B123_0 = (&V_20);
	}
	{
		G_B125_0 = 0;
		G_B125_1 = G_B123_0;
		goto IL_068a;
	}

IL_0685:
	{
		uint8_t L_314;
		L_314 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B125_0 = ((int32_t)(L_314));
		G_B125_1 = G_B124_0;
	}

IL_068a:
	{
		G_B125_1->___byte_13 = (uint8_t)G_B125_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_315 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_316 = L_315.___register;
		uint8_t L_317 = L_316.___byte_14;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_318 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_319 = L_318.___register;
		uint8_t L_320 = L_319.___byte_14;
		if ((((int32_t)L_317) == ((int32_t)L_320)))
		{
			G_B127_0 = (&V_20);
			goto IL_06ac;
		}
		G_B126_0 = (&V_20);
	}
	{
		G_B128_0 = 0;
		G_B128_1 = G_B126_0;
		goto IL_06b1;
	}

IL_06ac:
	{
		uint8_t L_321;
		L_321 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B128_0 = ((int32_t)(L_321));
		G_B128_1 = G_B127_0;
	}

IL_06b1:
	{
		G_B128_1->___byte_14 = (uint8_t)G_B128_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_322 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_323 = L_322.___register;
		uint8_t L_324 = L_323.___byte_15;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_325 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_326 = L_325.___register;
		uint8_t L_327 = L_326.___byte_15;
		if ((((int32_t)L_324) == ((int32_t)L_327)))
		{
			G_B130_0 = (&V_20);
			goto IL_06d3;
		}
		G_B129_0 = (&V_20);
	}
	{
		G_B131_0 = 0;
		G_B131_1 = G_B129_0;
		goto IL_06d8;
	}

IL_06d3:
	{
		uint8_t L_328;
		L_328 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B131_0 = ((int32_t)(L_328));
		G_B131_1 = G_B130_0;
	}

IL_06d8:
	{
		G_B131_1->___byte_15 = (uint8_t)G_B131_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_329;
		memset((&L_329), 0, sizeof(L_329));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_329), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_329;
	}

IL_06e5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_330 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_331;
		L_331 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_330, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_332 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_333;
		L_333 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_332, NULL);
		bool L_334;
		L_334 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_331, L_333, NULL);
		if (!L_334)
		{
			goto IL_097b;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_335 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_336 = L_335.___register;
		int8_t L_337 = L_336.___sbyte_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_338 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_339 = L_338.___register;
		int8_t L_340 = L_339.___sbyte_0;
		if ((((int32_t)L_337) == ((int32_t)L_340)))
		{
			G_B135_0 = (&V_20);
			goto IL_0720;
		}
		G_B134_0 = (&V_20);
	}
	{
		G_B136_0 = 0;
		G_B136_1 = G_B134_0;
		goto IL_0725;
	}

IL_0720:
	{
		int8_t L_341;
		L_341 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B136_0 = ((int32_t)(L_341));
		G_B136_1 = G_B135_0;
	}

IL_0725:
	{
		G_B136_1->___sbyte_0 = (int8_t)G_B136_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_342 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_343 = L_342.___register;
		int8_t L_344 = L_343.___sbyte_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_345 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_346 = L_345.___register;
		int8_t L_347 = L_346.___sbyte_1;
		if ((((int32_t)L_344) == ((int32_t)L_347)))
		{
			G_B138_0 = (&V_20);
			goto IL_0747;
		}
		G_B137_0 = (&V_20);
	}
	{
		G_B139_0 = 0;
		G_B139_1 = G_B137_0;
		goto IL_074c;
	}

IL_0747:
	{
		int8_t L_348;
		L_348 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B139_0 = ((int32_t)(L_348));
		G_B139_1 = G_B138_0;
	}

IL_074c:
	{
		G_B139_1->___sbyte_1 = (int8_t)G_B139_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_349 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_350 = L_349.___register;
		int8_t L_351 = L_350.___sbyte_2;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_352 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_353 = L_352.___register;
		int8_t L_354 = L_353.___sbyte_2;
		if ((((int32_t)L_351) == ((int32_t)L_354)))
		{
			G_B141_0 = (&V_20);
			goto IL_076e;
		}
		G_B140_0 = (&V_20);
	}
	{
		G_B142_0 = 0;
		G_B142_1 = G_B140_0;
		goto IL_0773;
	}

IL_076e:
	{
		int8_t L_355;
		L_355 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B142_0 = ((int32_t)(L_355));
		G_B142_1 = G_B141_0;
	}

IL_0773:
	{
		G_B142_1->___sbyte_2 = (int8_t)G_B142_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_356 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_357 = L_356.___register;
		int8_t L_358 = L_357.___sbyte_3;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_359 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_360 = L_359.___register;
		int8_t L_361 = L_360.___sbyte_3;
		if ((((int32_t)L_358) == ((int32_t)L_361)))
		{
			G_B144_0 = (&V_20);
			goto IL_0795;
		}
		G_B143_0 = (&V_20);
	}
	{
		G_B145_0 = 0;
		G_B145_1 = G_B143_0;
		goto IL_079a;
	}

IL_0795:
	{
		int8_t L_362;
		L_362 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B145_0 = ((int32_t)(L_362));
		G_B145_1 = G_B144_0;
	}

IL_079a:
	{
		G_B145_1->___sbyte_3 = (int8_t)G_B145_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_363 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_364 = L_363.___register;
		int8_t L_365 = L_364.___sbyte_4;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_366 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_367 = L_366.___register;
		int8_t L_368 = L_367.___sbyte_4;
		if ((((int32_t)L_365) == ((int32_t)L_368)))
		{
			G_B147_0 = (&V_20);
			goto IL_07bc;
		}
		G_B146_0 = (&V_20);
	}
	{
		G_B148_0 = 0;
		G_B148_1 = G_B146_0;
		goto IL_07c1;
	}

IL_07bc:
	{
		int8_t L_369;
		L_369 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B148_0 = ((int32_t)(L_369));
		G_B148_1 = G_B147_0;
	}

IL_07c1:
	{
		G_B148_1->___sbyte_4 = (int8_t)G_B148_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_370 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_371 = L_370.___register;
		int8_t L_372 = L_371.___sbyte_5;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_373 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_374 = L_373.___register;
		int8_t L_375 = L_374.___sbyte_5;
		if ((((int32_t)L_372) == ((int32_t)L_375)))
		{
			G_B150_0 = (&V_20);
			goto IL_07e3;
		}
		G_B149_0 = (&V_20);
	}
	{
		G_B151_0 = 0;
		G_B151_1 = G_B149_0;
		goto IL_07e8;
	}

IL_07e3:
	{
		int8_t L_376;
		L_376 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B151_0 = ((int32_t)(L_376));
		G_B151_1 = G_B150_0;
	}

IL_07e8:
	{
		G_B151_1->___sbyte_5 = (int8_t)G_B151_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_377 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_378 = L_377.___register;
		int8_t L_379 = L_378.___sbyte_6;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_380 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_381 = L_380.___register;
		int8_t L_382 = L_381.___sbyte_6;
		if ((((int32_t)L_379) == ((int32_t)L_382)))
		{
			G_B153_0 = (&V_20);
			goto IL_080a;
		}
		G_B152_0 = (&V_20);
	}
	{
		G_B154_0 = 0;
		G_B154_1 = G_B152_0;
		goto IL_080f;
	}

IL_080a:
	{
		int8_t L_383;
		L_383 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B154_0 = ((int32_t)(L_383));
		G_B154_1 = G_B153_0;
	}

IL_080f:
	{
		G_B154_1->___sbyte_6 = (int8_t)G_B154_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_384 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_385 = L_384.___register;
		int8_t L_386 = L_385.___sbyte_7;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_387 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_388 = L_387.___register;
		int8_t L_389 = L_388.___sbyte_7;
		if ((((int32_t)L_386) == ((int32_t)L_389)))
		{
			G_B156_0 = (&V_20);
			goto IL_0831;
		}
		G_B155_0 = (&V_20);
	}
	{
		G_B157_0 = 0;
		G_B157_1 = G_B155_0;
		goto IL_0836;
	}

IL_0831:
	{
		int8_t L_390;
		L_390 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B157_0 = ((int32_t)(L_390));
		G_B157_1 = G_B156_0;
	}

IL_0836:
	{
		G_B157_1->___sbyte_7 = (int8_t)G_B157_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_391 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_392 = L_391.___register;
		int8_t L_393 = L_392.___sbyte_8;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_394 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_395 = L_394.___register;
		int8_t L_396 = L_395.___sbyte_8;
		if ((((int32_t)L_393) == ((int32_t)L_396)))
		{
			G_B159_0 = (&V_20);
			goto IL_0858;
		}
		G_B158_0 = (&V_20);
	}
	{
		G_B160_0 = 0;
		G_B160_1 = G_B158_0;
		goto IL_085d;
	}

IL_0858:
	{
		int8_t L_397;
		L_397 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B160_0 = ((int32_t)(L_397));
		G_B160_1 = G_B159_0;
	}

IL_085d:
	{
		G_B160_1->___sbyte_8 = (int8_t)G_B160_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_398 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_399 = L_398.___register;
		int8_t L_400 = L_399.___sbyte_9;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_401 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_402 = L_401.___register;
		int8_t L_403 = L_402.___sbyte_9;
		if ((((int32_t)L_400) == ((int32_t)L_403)))
		{
			G_B162_0 = (&V_20);
			goto IL_087f;
		}
		G_B161_0 = (&V_20);
	}
	{
		G_B163_0 = 0;
		G_B163_1 = G_B161_0;
		goto IL_0884;
	}

IL_087f:
	{
		int8_t L_404;
		L_404 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B163_0 = ((int32_t)(L_404));
		G_B163_1 = G_B162_0;
	}

IL_0884:
	{
		G_B163_1->___sbyte_9 = (int8_t)G_B163_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_405 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_406 = L_405.___register;
		int8_t L_407 = L_406.___sbyte_10;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_408 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_409 = L_408.___register;
		int8_t L_410 = L_409.___sbyte_10;
		if ((((int32_t)L_407) == ((int32_t)L_410)))
		{
			G_B165_0 = (&V_20);
			goto IL_08a6;
		}
		G_B164_0 = (&V_20);
	}
	{
		G_B166_0 = 0;
		G_B166_1 = G_B164_0;
		goto IL_08ab;
	}

IL_08a6:
	{
		int8_t L_411;
		L_411 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B166_0 = ((int32_t)(L_411));
		G_B166_1 = G_B165_0;
	}

IL_08ab:
	{
		G_B166_1->___sbyte_10 = (int8_t)G_B166_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_412 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_413 = L_412.___register;
		int8_t L_414 = L_413.___sbyte_11;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_415 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_416 = L_415.___register;
		int8_t L_417 = L_416.___sbyte_11;
		if ((((int32_t)L_414) == ((int32_t)L_417)))
		{
			G_B168_0 = (&V_20);
			goto IL_08cd;
		}
		G_B167_0 = (&V_20);
	}
	{
		G_B169_0 = 0;
		G_B169_1 = G_B167_0;
		goto IL_08d2;
	}

IL_08cd:
	{
		int8_t L_418;
		L_418 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B169_0 = ((int32_t)(L_418));
		G_B169_1 = G_B168_0;
	}

IL_08d2:
	{
		G_B169_1->___sbyte_11 = (int8_t)G_B169_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_419 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_420 = L_419.___register;
		int8_t L_421 = L_420.___sbyte_12;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_422 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_423 = L_422.___register;
		int8_t L_424 = L_423.___sbyte_12;
		if ((((int32_t)L_421) == ((int32_t)L_424)))
		{
			G_B171_0 = (&V_20);
			goto IL_08f4;
		}
		G_B170_0 = (&V_20);
	}
	{
		G_B172_0 = 0;
		G_B172_1 = G_B170_0;
		goto IL_08f9;
	}

IL_08f4:
	{
		int8_t L_425;
		L_425 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B172_0 = ((int32_t)(L_425));
		G_B172_1 = G_B171_0;
	}

IL_08f9:
	{
		G_B172_1->___sbyte_12 = (int8_t)G_B172_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_426 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_427 = L_426.___register;
		int8_t L_428 = L_427.___sbyte_13;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_429 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_430 = L_429.___register;
		int8_t L_431 = L_430.___sbyte_13;
		if ((((int32_t)L_428) == ((int32_t)L_431)))
		{
			G_B174_0 = (&V_20);
			goto IL_091b;
		}
		G_B173_0 = (&V_20);
	}
	{
		G_B175_0 = 0;
		G_B175_1 = G_B173_0;
		goto IL_0920;
	}

IL_091b:
	{
		int8_t L_432;
		L_432 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B175_0 = ((int32_t)(L_432));
		G_B175_1 = G_B174_0;
	}

IL_0920:
	{
		G_B175_1->___sbyte_13 = (int8_t)G_B175_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_433 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_434 = L_433.___register;
		int8_t L_435 = L_434.___sbyte_14;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_436 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_437 = L_436.___register;
		int8_t L_438 = L_437.___sbyte_14;
		if ((((int32_t)L_435) == ((int32_t)L_438)))
		{
			G_B177_0 = (&V_20);
			goto IL_0942;
		}
		G_B176_0 = (&V_20);
	}
	{
		G_B178_0 = 0;
		G_B178_1 = G_B176_0;
		goto IL_0947;
	}

IL_0942:
	{
		int8_t L_439;
		L_439 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B178_0 = ((int32_t)(L_439));
		G_B178_1 = G_B177_0;
	}

IL_0947:
	{
		G_B178_1->___sbyte_14 = (int8_t)G_B178_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_440 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_441 = L_440.___register;
		int8_t L_442 = L_441.___sbyte_15;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_443 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_444 = L_443.___register;
		int8_t L_445 = L_444.___sbyte_15;
		if ((((int32_t)L_442) == ((int32_t)L_445)))
		{
			G_B180_0 = (&V_20);
			goto IL_0969;
		}
		G_B179_0 = (&V_20);
	}
	{
		G_B181_0 = 0;
		G_B181_1 = G_B179_0;
		goto IL_096e;
	}

IL_0969:
	{
		int8_t L_446;
		L_446 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B181_0 = ((int32_t)(L_446));
		G_B181_1 = G_B180_0;
	}

IL_096e:
	{
		G_B181_1->___sbyte_15 = (int8_t)G_B181_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_447;
		memset((&L_447), 0, sizeof(L_447));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_447), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_447;
	}

IL_097b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_448 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_449;
		L_449 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_448, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_450 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_451;
		L_451 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_450, NULL);
		bool L_452;
		L_452 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_449, L_451, NULL);
		if (!L_452)
		{
			goto IL_0ad9;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_453 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_454 = L_453.___register;
		uint16_t L_455 = L_454.___uint16_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_456 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_457 = L_456.___register;
		uint16_t L_458 = L_457.___uint16_0;
		if ((((int32_t)L_455) == ((int32_t)L_458)))
		{
			G_B185_0 = (&V_20);
			goto IL_09b6;
		}
		G_B184_0 = (&V_20);
	}
	{
		G_B186_0 = 0;
		G_B186_1 = G_B184_0;
		goto IL_09bb;
	}

IL_09b6:
	{
		uint16_t L_459;
		L_459 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B186_0 = ((int32_t)(L_459));
		G_B186_1 = G_B185_0;
	}

IL_09bb:
	{
		G_B186_1->___uint16_0 = (uint16_t)G_B186_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_460 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_461 = L_460.___register;
		uint16_t L_462 = L_461.___uint16_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_463 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_464 = L_463.___register;
		uint16_t L_465 = L_464.___uint16_1;
		if ((((int32_t)L_462) == ((int32_t)L_465)))
		{
			G_B188_0 = (&V_20);
			goto IL_09dd;
		}
		G_B187_0 = (&V_20);
	}
	{
		G_B189_0 = 0;
		G_B189_1 = G_B187_0;
		goto IL_09e2;
	}

IL_09dd:
	{
		uint16_t L_466;
		L_466 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B189_0 = ((int32_t)(L_466));
		G_B189_1 = G_B188_0;
	}

IL_09e2:
	{
		G_B189_1->___uint16_1 = (uint16_t)G_B189_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_467 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_468 = L_467.___register;
		uint16_t L_469 = L_468.___uint16_2;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_470 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_471 = L_470.___register;
		uint16_t L_472 = L_471.___uint16_2;
		if ((((int32_t)L_469) == ((int32_t)L_472)))
		{
			G_B191_0 = (&V_20);
			goto IL_0a04;
		}
		G_B190_0 = (&V_20);
	}
	{
		G_B192_0 = 0;
		G_B192_1 = G_B190_0;
		goto IL_0a09;
	}

IL_0a04:
	{
		uint16_t L_473;
		L_473 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B192_0 = ((int32_t)(L_473));
		G_B192_1 = G_B191_0;
	}

IL_0a09:
	{
		G_B192_1->___uint16_2 = (uint16_t)G_B192_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_474 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_475 = L_474.___register;
		uint16_t L_476 = L_475.___uint16_3;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_477 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_478 = L_477.___register;
		uint16_t L_479 = L_478.___uint16_3;
		if ((((int32_t)L_476) == ((int32_t)L_479)))
		{
			G_B194_0 = (&V_20);
			goto IL_0a2b;
		}
		G_B193_0 = (&V_20);
	}
	{
		G_B195_0 = 0;
		G_B195_1 = G_B193_0;
		goto IL_0a30;
	}

IL_0a2b:
	{
		uint16_t L_480;
		L_480 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B195_0 = ((int32_t)(L_480));
		G_B195_1 = G_B194_0;
	}

IL_0a30:
	{
		G_B195_1->___uint16_3 = (uint16_t)G_B195_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_481 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_482 = L_481.___register;
		uint16_t L_483 = L_482.___uint16_4;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_484 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_485 = L_484.___register;
		uint16_t L_486 = L_485.___uint16_4;
		if ((((int32_t)L_483) == ((int32_t)L_486)))
		{
			G_B197_0 = (&V_20);
			goto IL_0a52;
		}
		G_B196_0 = (&V_20);
	}
	{
		G_B198_0 = 0;
		G_B198_1 = G_B196_0;
		goto IL_0a57;
	}

IL_0a52:
	{
		uint16_t L_487;
		L_487 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B198_0 = ((int32_t)(L_487));
		G_B198_1 = G_B197_0;
	}

IL_0a57:
	{
		G_B198_1->___uint16_4 = (uint16_t)G_B198_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_488 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_489 = L_488.___register;
		uint16_t L_490 = L_489.___uint16_5;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_491 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_492 = L_491.___register;
		uint16_t L_493 = L_492.___uint16_5;
		if ((((int32_t)L_490) == ((int32_t)L_493)))
		{
			G_B200_0 = (&V_20);
			goto IL_0a79;
		}
		G_B199_0 = (&V_20);
	}
	{
		G_B201_0 = 0;
		G_B201_1 = G_B199_0;
		goto IL_0a7e;
	}

IL_0a79:
	{
		uint16_t L_494;
		L_494 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B201_0 = ((int32_t)(L_494));
		G_B201_1 = G_B200_0;
	}

IL_0a7e:
	{
		G_B201_1->___uint16_5 = (uint16_t)G_B201_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_495 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_496 = L_495.___register;
		uint16_t L_497 = L_496.___uint16_6;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_498 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_499 = L_498.___register;
		uint16_t L_500 = L_499.___uint16_6;
		if ((((int32_t)L_497) == ((int32_t)L_500)))
		{
			G_B203_0 = (&V_20);
			goto IL_0aa0;
		}
		G_B202_0 = (&V_20);
	}
	{
		G_B204_0 = 0;
		G_B204_1 = G_B202_0;
		goto IL_0aa5;
	}

IL_0aa0:
	{
		uint16_t L_501;
		L_501 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B204_0 = ((int32_t)(L_501));
		G_B204_1 = G_B203_0;
	}

IL_0aa5:
	{
		G_B204_1->___uint16_6 = (uint16_t)G_B204_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_502 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_503 = L_502.___register;
		uint16_t L_504 = L_503.___uint16_7;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_505 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_506 = L_505.___register;
		uint16_t L_507 = L_506.___uint16_7;
		if ((((int32_t)L_504) == ((int32_t)L_507)))
		{
			G_B206_0 = (&V_20);
			goto IL_0ac7;
		}
		G_B205_0 = (&V_20);
	}
	{
		G_B207_0 = 0;
		G_B207_1 = G_B205_0;
		goto IL_0acc;
	}

IL_0ac7:
	{
		uint16_t L_508;
		L_508 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B207_0 = ((int32_t)(L_508));
		G_B207_1 = G_B206_0;
	}

IL_0acc:
	{
		G_B207_1->___uint16_7 = (uint16_t)G_B207_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_509;
		memset((&L_509), 0, sizeof(L_509));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_509), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_509;
	}

IL_0ad9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_510 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_511;
		L_511 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_510, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_512 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_513;
		L_513 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_512, NULL);
		bool L_514;
		L_514 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_511, L_513, NULL);
		if (!L_514)
		{
			goto IL_0c37;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_515 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_516 = L_515.___register;
		int16_t L_517 = L_516.___int16_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_518 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_519 = L_518.___register;
		int16_t L_520 = L_519.___int16_0;
		if ((((int32_t)L_517) == ((int32_t)L_520)))
		{
			G_B211_0 = (&V_20);
			goto IL_0b14;
		}
		G_B210_0 = (&V_20);
	}
	{
		G_B212_0 = 0;
		G_B212_1 = G_B210_0;
		goto IL_0b19;
	}

IL_0b14:
	{
		int16_t L_521;
		L_521 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B212_0 = ((int32_t)(L_521));
		G_B212_1 = G_B211_0;
	}

IL_0b19:
	{
		G_B212_1->___int16_0 = (int16_t)G_B212_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_522 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_523 = L_522.___register;
		int16_t L_524 = L_523.___int16_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_525 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_526 = L_525.___register;
		int16_t L_527 = L_526.___int16_1;
		if ((((int32_t)L_524) == ((int32_t)L_527)))
		{
			G_B214_0 = (&V_20);
			goto IL_0b3b;
		}
		G_B213_0 = (&V_20);
	}
	{
		G_B215_0 = 0;
		G_B215_1 = G_B213_0;
		goto IL_0b40;
	}

IL_0b3b:
	{
		int16_t L_528;
		L_528 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B215_0 = ((int32_t)(L_528));
		G_B215_1 = G_B214_0;
	}

IL_0b40:
	{
		G_B215_1->___int16_1 = (int16_t)G_B215_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_529 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_530 = L_529.___register;
		int16_t L_531 = L_530.___int16_2;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_532 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_533 = L_532.___register;
		int16_t L_534 = L_533.___int16_2;
		if ((((int32_t)L_531) == ((int32_t)L_534)))
		{
			G_B217_0 = (&V_20);
			goto IL_0b62;
		}
		G_B216_0 = (&V_20);
	}
	{
		G_B218_0 = 0;
		G_B218_1 = G_B216_0;
		goto IL_0b67;
	}

IL_0b62:
	{
		int16_t L_535;
		L_535 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B218_0 = ((int32_t)(L_535));
		G_B218_1 = G_B217_0;
	}

IL_0b67:
	{
		G_B218_1->___int16_2 = (int16_t)G_B218_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_536 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_537 = L_536.___register;
		int16_t L_538 = L_537.___int16_3;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_539 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_540 = L_539.___register;
		int16_t L_541 = L_540.___int16_3;
		if ((((int32_t)L_538) == ((int32_t)L_541)))
		{
			G_B220_0 = (&V_20);
			goto IL_0b89;
		}
		G_B219_0 = (&V_20);
	}
	{
		G_B221_0 = 0;
		G_B221_1 = G_B219_0;
		goto IL_0b8e;
	}

IL_0b89:
	{
		int16_t L_542;
		L_542 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B221_0 = ((int32_t)(L_542));
		G_B221_1 = G_B220_0;
	}

IL_0b8e:
	{
		G_B221_1->___int16_3 = (int16_t)G_B221_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_543 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_544 = L_543.___register;
		int16_t L_545 = L_544.___int16_4;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_546 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_547 = L_546.___register;
		int16_t L_548 = L_547.___int16_4;
		if ((((int32_t)L_545) == ((int32_t)L_548)))
		{
			G_B223_0 = (&V_20);
			goto IL_0bb0;
		}
		G_B222_0 = (&V_20);
	}
	{
		G_B224_0 = 0;
		G_B224_1 = G_B222_0;
		goto IL_0bb5;
	}

IL_0bb0:
	{
		int16_t L_549;
		L_549 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B224_0 = ((int32_t)(L_549));
		G_B224_1 = G_B223_0;
	}

IL_0bb5:
	{
		G_B224_1->___int16_4 = (int16_t)G_B224_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_550 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_551 = L_550.___register;
		int16_t L_552 = L_551.___int16_5;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_553 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_554 = L_553.___register;
		int16_t L_555 = L_554.___int16_5;
		if ((((int32_t)L_552) == ((int32_t)L_555)))
		{
			G_B226_0 = (&V_20);
			goto IL_0bd7;
		}
		G_B225_0 = (&V_20);
	}
	{
		G_B227_0 = 0;
		G_B227_1 = G_B225_0;
		goto IL_0bdc;
	}

IL_0bd7:
	{
		int16_t L_556;
		L_556 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B227_0 = ((int32_t)(L_556));
		G_B227_1 = G_B226_0;
	}

IL_0bdc:
	{
		G_B227_1->___int16_5 = (int16_t)G_B227_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_557 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_558 = L_557.___register;
		int16_t L_559 = L_558.___int16_6;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_560 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_561 = L_560.___register;
		int16_t L_562 = L_561.___int16_6;
		if ((((int32_t)L_559) == ((int32_t)L_562)))
		{
			G_B229_0 = (&V_20);
			goto IL_0bfe;
		}
		G_B228_0 = (&V_20);
	}
	{
		G_B230_0 = 0;
		G_B230_1 = G_B228_0;
		goto IL_0c03;
	}

IL_0bfe:
	{
		int16_t L_563;
		L_563 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B230_0 = ((int32_t)(L_563));
		G_B230_1 = G_B229_0;
	}

IL_0c03:
	{
		G_B230_1->___int16_6 = (int16_t)G_B230_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_564 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_565 = L_564.___register;
		int16_t L_566 = L_565.___int16_7;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_567 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_568 = L_567.___register;
		int16_t L_569 = L_568.___int16_7;
		if ((((int32_t)L_566) == ((int32_t)L_569)))
		{
			G_B232_0 = (&V_20);
			goto IL_0c25;
		}
		G_B231_0 = (&V_20);
	}
	{
		G_B233_0 = 0;
		G_B233_1 = G_B231_0;
		goto IL_0c2a;
	}

IL_0c25:
	{
		int16_t L_570;
		L_570 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B233_0 = ((int32_t)(L_570));
		G_B233_1 = G_B232_0;
	}

IL_0c2a:
	{
		G_B233_1->___int16_7 = (int16_t)G_B233_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_571;
		memset((&L_571), 0, sizeof(L_571));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_571), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_571;
	}

IL_0c37:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_572 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_573;
		L_573 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_572, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_574 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_575;
		L_575 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_574, NULL);
		bool L_576;
		L_576 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_573, L_575, NULL);
		if (!L_576)
		{
			goto IL_0cf9;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_577 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_578 = L_577.___register;
		uint32_t L_579 = L_578.___uint32_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_580 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_581 = L_580.___register;
		uint32_t L_582 = L_581.___uint32_0;
		if ((((int32_t)L_579) == ((int32_t)L_582)))
		{
			G_B237_0 = (&V_20);
			goto IL_0c72;
		}
		G_B236_0 = (&V_20);
	}
	{
		G_B238_0 = ((uint32_t)(0));
		G_B238_1 = G_B236_0;
		goto IL_0c77;
	}

IL_0c72:
	{
		uint32_t L_583;
		L_583 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B238_0 = L_583;
		G_B238_1 = G_B237_0;
	}

IL_0c77:
	{
		G_B238_1->___uint32_0 = G_B238_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_584 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_585 = L_584.___register;
		uint32_t L_586 = L_585.___uint32_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_587 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_588 = L_587.___register;
		uint32_t L_589 = L_588.___uint32_1;
		if ((((int32_t)L_586) == ((int32_t)L_589)))
		{
			G_B240_0 = (&V_20);
			goto IL_0c99;
		}
		G_B239_0 = (&V_20);
	}
	{
		G_B241_0 = ((uint32_t)(0));
		G_B241_1 = G_B239_0;
		goto IL_0c9e;
	}

IL_0c99:
	{
		uint32_t L_590;
		L_590 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B241_0 = L_590;
		G_B241_1 = G_B240_0;
	}

IL_0c9e:
	{
		G_B241_1->___uint32_1 = G_B241_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_591 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_592 = L_591.___register;
		uint32_t L_593 = L_592.___uint32_2;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_594 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_595 = L_594.___register;
		uint32_t L_596 = L_595.___uint32_2;
		if ((((int32_t)L_593) == ((int32_t)L_596)))
		{
			G_B243_0 = (&V_20);
			goto IL_0cc0;
		}
		G_B242_0 = (&V_20);
	}
	{
		G_B244_0 = ((uint32_t)(0));
		G_B244_1 = G_B242_0;
		goto IL_0cc5;
	}

IL_0cc0:
	{
		uint32_t L_597;
		L_597 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B244_0 = L_597;
		G_B244_1 = G_B243_0;
	}

IL_0cc5:
	{
		G_B244_1->___uint32_2 = G_B244_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_598 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_599 = L_598.___register;
		uint32_t L_600 = L_599.___uint32_3;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_601 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_602 = L_601.___register;
		uint32_t L_603 = L_602.___uint32_3;
		if ((((int32_t)L_600) == ((int32_t)L_603)))
		{
			G_B246_0 = (&V_20);
			goto IL_0ce7;
		}
		G_B245_0 = (&V_20);
	}
	{
		G_B247_0 = ((uint32_t)(0));
		G_B247_1 = G_B245_0;
		goto IL_0cec;
	}

IL_0ce7:
	{
		uint32_t L_604;
		L_604 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B247_0 = L_604;
		G_B247_1 = G_B246_0;
	}

IL_0cec:
	{
		G_B247_1->___uint32_3 = G_B247_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_605;
		memset((&L_605), 0, sizeof(L_605));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_605), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_605;
	}

IL_0cf9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_606 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_607;
		L_607 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_606, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_608 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_609;
		L_609 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_608, NULL);
		bool L_610;
		L_610 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_607, L_609, NULL);
		if (!L_610)
		{
			goto IL_0dbb;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_611 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_612 = L_611.___register;
		int32_t L_613 = L_612.___int32_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_614 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_615 = L_614.___register;
		int32_t L_616 = L_615.___int32_0;
		if ((((int32_t)L_613) == ((int32_t)L_616)))
		{
			G_B251_0 = (&V_20);
			goto IL_0d34;
		}
		G_B250_0 = (&V_20);
	}
	{
		G_B252_0 = 0;
		G_B252_1 = G_B250_0;
		goto IL_0d39;
	}

IL_0d34:
	{
		int32_t L_617;
		L_617 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B252_0 = L_617;
		G_B252_1 = G_B251_0;
	}

IL_0d39:
	{
		G_B252_1->___int32_0 = G_B252_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_618 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_619 = L_618.___register;
		int32_t L_620 = L_619.___int32_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_621 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_622 = L_621.___register;
		int32_t L_623 = L_622.___int32_1;
		if ((((int32_t)L_620) == ((int32_t)L_623)))
		{
			G_B254_0 = (&V_20);
			goto IL_0d5b;
		}
		G_B253_0 = (&V_20);
	}
	{
		G_B255_0 = 0;
		G_B255_1 = G_B253_0;
		goto IL_0d60;
	}

IL_0d5b:
	{
		int32_t L_624;
		L_624 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B255_0 = L_624;
		G_B255_1 = G_B254_0;
	}

IL_0d60:
	{
		G_B255_1->___int32_1 = G_B255_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_625 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_626 = L_625.___register;
		int32_t L_627 = L_626.___int32_2;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_628 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_629 = L_628.___register;
		int32_t L_630 = L_629.___int32_2;
		if ((((int32_t)L_627) == ((int32_t)L_630)))
		{
			G_B257_0 = (&V_20);
			goto IL_0d82;
		}
		G_B256_0 = (&V_20);
	}
	{
		G_B258_0 = 0;
		G_B258_1 = G_B256_0;
		goto IL_0d87;
	}

IL_0d82:
	{
		int32_t L_631;
		L_631 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B258_0 = L_631;
		G_B258_1 = G_B257_0;
	}

IL_0d87:
	{
		G_B258_1->___int32_2 = G_B258_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_632 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_633 = L_632.___register;
		int32_t L_634 = L_633.___int32_3;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_635 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_636 = L_635.___register;
		int32_t L_637 = L_636.___int32_3;
		if ((((int32_t)L_634) == ((int32_t)L_637)))
		{
			G_B260_0 = (&V_20);
			goto IL_0da9;
		}
		G_B259_0 = (&V_20);
	}
	{
		G_B261_0 = 0;
		G_B261_1 = G_B259_0;
		goto IL_0dae;
	}

IL_0da9:
	{
		int32_t L_638;
		L_638 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B261_0 = L_638;
		G_B261_1 = G_B260_0;
	}

IL_0dae:
	{
		G_B261_1->___int32_3 = G_B261_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_639;
		memset((&L_639), 0, sizeof(L_639));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_639), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_639;
	}

IL_0dbb:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_640 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_641;
		L_641 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_640, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_642 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_643;
		L_643 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_642, NULL);
		bool L_644;
		L_644 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_641, L_643, NULL);
		if (!L_644)
		{
			goto IL_0e2e;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_645 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_646 = L_645.___register;
		uint64_t L_647 = L_646.___uint64_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_648 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_649 = L_648.___register;
		uint64_t L_650 = L_649.___uint64_0;
		if ((((int64_t)L_647) == ((int64_t)L_650)))
		{
			G_B265_0 = (&V_20);
			goto IL_0df4;
		}
		G_B264_0 = (&V_20);
	}
	{
		G_B266_0 = ((uint64_t)(((int64_t)0)));
		G_B266_1 = G_B264_0;
		goto IL_0df9;
	}

IL_0df4:
	{
		uint64_t L_651;
		L_651 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B266_0 = L_651;
		G_B266_1 = G_B265_0;
	}

IL_0df9:
	{
		G_B266_1->___uint64_0 = G_B266_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_652 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_653 = L_652.___register;
		uint64_t L_654 = L_653.___uint64_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_655 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_656 = L_655.___register;
		uint64_t L_657 = L_656.___uint64_1;
		if ((((int64_t)L_654) == ((int64_t)L_657)))
		{
			G_B268_0 = (&V_20);
			goto IL_0e1c;
		}
		G_B267_0 = (&V_20);
	}
	{
		G_B269_0 = ((uint64_t)(((int64_t)0)));
		G_B269_1 = G_B267_0;
		goto IL_0e21;
	}

IL_0e1c:
	{
		uint64_t L_658;
		L_658 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B269_0 = L_658;
		G_B269_1 = G_B268_0;
	}

IL_0e21:
	{
		G_B269_1->___uint64_1 = G_B269_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_659;
		memset((&L_659), 0, sizeof(L_659));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_659), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_659;
	}

IL_0e2e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_660 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_661;
		L_661 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_660, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_662 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_663;
		L_663 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_662, NULL);
		bool L_664;
		L_664 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_661, L_663, NULL);
		if (!L_664)
		{
			goto IL_0ea1;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_665 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_666 = L_665.___register;
		int64_t L_667 = L_666.___int64_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_668 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_669 = L_668.___register;
		int64_t L_670 = L_669.___int64_0;
		if ((((int64_t)L_667) == ((int64_t)L_670)))
		{
			G_B273_0 = (&V_20);
			goto IL_0e67;
		}
		G_B272_0 = (&V_20);
	}
	{
		G_B274_0 = ((int64_t)0);
		G_B274_1 = G_B272_0;
		goto IL_0e6c;
	}

IL_0e67:
	{
		int64_t L_671;
		L_671 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B274_0 = L_671;
		G_B274_1 = G_B273_0;
	}

IL_0e6c:
	{
		G_B274_1->___int64_0 = G_B274_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_672 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_673 = L_672.___register;
		int64_t L_674 = L_673.___int64_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_675 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_676 = L_675.___register;
		int64_t L_677 = L_676.___int64_1;
		if ((((int64_t)L_674) == ((int64_t)L_677)))
		{
			G_B276_0 = (&V_20);
			goto IL_0e8f;
		}
		G_B275_0 = (&V_20);
	}
	{
		G_B277_0 = ((int64_t)0);
		G_B277_1 = G_B275_0;
		goto IL_0e94;
	}

IL_0e8f:
	{
		int64_t L_678;
		L_678 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B277_0 = L_678;
		G_B277_1 = G_B276_0;
	}

IL_0e94:
	{
		G_B277_1->___int64_1 = G_B277_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_679;
		memset((&L_679), 0, sizeof(L_679));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_679), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_679;
	}

IL_0ea1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_680 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_681;
		L_681 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_680, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_682 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_683;
		L_683 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_682, NULL);
		bool L_684;
		L_684 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_681, L_683, NULL);
		if (!L_684)
		{
			goto IL_0f73;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_685 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_686 = L_685.___register;
		float L_687 = L_686.___single_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_688 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_689 = L_688.___register;
		float L_690 = L_689.___single_0;
		if ((((float)L_687) == ((float)L_690)))
		{
			G_B281_0 = (&V_20);
			goto IL_0ee0;
		}
		G_B280_0 = (&V_20);
	}
	{
		G_B282_0 = (0.0f);
		G_B282_1 = G_B280_0;
		goto IL_0ee5;
	}

IL_0ee0:
	{
		float L_691;
		L_691 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B282_0 = L_691;
		G_B282_1 = G_B281_0;
	}

IL_0ee5:
	{
		G_B282_1->___single_0 = G_B282_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_692 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_693 = L_692.___register;
		float L_694 = L_693.___single_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_695 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_696 = L_695.___register;
		float L_697 = L_696.___single_1;
		if ((((float)L_694) == ((float)L_697)))
		{
			G_B284_0 = (&V_20);
			goto IL_0f0b;
		}
		G_B283_0 = (&V_20);
	}
	{
		G_B285_0 = (0.0f);
		G_B285_1 = G_B283_0;
		goto IL_0f10;
	}

IL_0f0b:
	{
		float L_698;
		L_698 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B285_0 = L_698;
		G_B285_1 = G_B284_0;
	}

IL_0f10:
	{
		G_B285_1->___single_1 = G_B285_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_699 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_700 = L_699.___register;
		float L_701 = L_700.___single_2;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_702 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_703 = L_702.___register;
		float L_704 = L_703.___single_2;
		if ((((float)L_701) == ((float)L_704)))
		{
			G_B287_0 = (&V_20);
			goto IL_0f36;
		}
		G_B286_0 = (&V_20);
	}
	{
		G_B288_0 = (0.0f);
		G_B288_1 = G_B286_0;
		goto IL_0f3b;
	}

IL_0f36:
	{
		float L_705;
		L_705 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B288_0 = L_705;
		G_B288_1 = G_B287_0;
	}

IL_0f3b:
	{
		G_B288_1->___single_2 = G_B288_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_706 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_707 = L_706.___register;
		float L_708 = L_707.___single_3;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_709 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_710 = L_709.___register;
		float L_711 = L_710.___single_3;
		if ((((float)L_708) == ((float)L_711)))
		{
			G_B290_0 = (&V_20);
			goto IL_0f61;
		}
		G_B289_0 = (&V_20);
	}
	{
		G_B291_0 = (0.0f);
		G_B291_1 = G_B289_0;
		goto IL_0f66;
	}

IL_0f61:
	{
		float L_712;
		L_712 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B291_0 = L_712;
		G_B291_1 = G_B290_0;
	}

IL_0f66:
	{
		G_B291_1->___single_3 = G_B291_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_713;
		memset((&L_713), 0, sizeof(L_713));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_713), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_713;
	}

IL_0f73:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_714 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_715;
		L_715 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_714, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_716 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_717;
		L_717 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_716, NULL);
		bool L_718;
		L_718 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_715, L_717, NULL);
		if (!L_718)
		{
			goto IL_0ff4;
		}
	}
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_719 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_720 = L_719.___register;
		double L_721 = L_720.___double_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_722 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_723 = L_722.___register;
		double L_724 = L_723.___double_0;
		if ((((double)L_721) == ((double)L_724)))
		{
			G_B295_0 = (&V_20);
			goto IL_0fb3;
		}
		G_B294_0 = (&V_20);
	}
	{
		G_B296_0 = (0.0);
		G_B296_1 = G_B294_0;
		goto IL_0fb8;
	}

IL_0fb3:
	{
		double L_725;
		L_725 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B296_0 = L_725;
		G_B296_1 = G_B295_0;
	}

IL_0fb8:
	{
		G_B296_1->___double_0 = G_B296_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_726 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_727 = L_726.___register;
		double L_728 = L_727.___double_1;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_729 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_730 = L_729.___register;
		double L_731 = L_730.___double_1;
		if ((((double)L_728) == ((double)L_731)))
		{
			G_B298_0 = (&V_20);
			goto IL_0fe2;
		}
		G_B297_0 = (&V_20);
	}
	{
		G_B299_0 = (0.0);
		G_B299_1 = G_B297_0;
		goto IL_0fe7;
	}

IL_0fe2:
	{
		double L_732;
		L_732 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B299_0 = L_732;
		G_B299_1 = G_B298_0;
	}

IL_0fe7:
	{
		G_B299_1->___double_1 = G_B299_0;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_733;
		memset((&L_733), 0, sizeof(L_733));
		Vector_1__ctor_mF674294C34FEB07FB44E694358BDA181F564B674((&L_733), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_733;
	}

IL_0ff4:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_734 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_734, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_734, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_mD34044F5519631ED7AA89E35525ABFFA300D7895_gshared (Il2CppFullySharedGenericStruct ___0_left, Il2CppFullySharedGenericStruct ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_14 = L_5;
	const Il2CppFullySharedGenericStruct L_23 = L_5;
	const Il2CppFullySharedGenericStruct L_32 = L_5;
	const Il2CppFullySharedGenericStruct L_41 = L_5;
	const Il2CppFullySharedGenericStruct L_50 = L_5;
	const Il2CppFullySharedGenericStruct L_59 = L_5;
	const Il2CppFullySharedGenericStruct L_68 = L_5;
	const Il2CppFullySharedGenericStruct L_77 = L_5;
	const Il2CppFullySharedGenericStruct L_86 = L_5;
	const Il2CppFullySharedGenericStruct L_7 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_16 = L_7;
	const Il2CppFullySharedGenericStruct L_25 = L_7;
	const Il2CppFullySharedGenericStruct L_34 = L_7;
	const Il2CppFullySharedGenericStruct L_43 = L_7;
	const Il2CppFullySharedGenericStruct L_52 = L_7;
	const Il2CppFullySharedGenericStruct L_61 = L_7;
	const Il2CppFullySharedGenericStruct L_70 = L_7;
	const Il2CppFullySharedGenericStruct L_79 = L_7;
	const Il2CppFullySharedGenericStruct L_88 = L_7;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_memcpy(L_5, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_6 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_5);
		il2cpp_codegen_memcpy(L_7, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_7);
		return (bool)((((int32_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_6, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_8, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0034:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_10, L_12, NULL);
		if (!L_13)
		{
			goto IL_0068;
		}
	}
	{
		il2cpp_codegen_memcpy(L_14, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_15 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_14);
		il2cpp_codegen_memcpy(L_16, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_17 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_16);
		return (bool)((((int32_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_15, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_17, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0068:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_19, L_21, NULL);
		if (!L_22)
		{
			goto IL_009c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_23, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_24 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_23);
		il2cpp_codegen_memcpy(L_25, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_26 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_25);
		return (bool)((((int32_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_24, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_26, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_009c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_27 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_28;
		L_28 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_27, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		bool L_31;
		L_31 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_28, L_30, NULL);
		if (!L_31)
		{
			goto IL_00d0;
		}
	}
	{
		il2cpp_codegen_memcpy(L_32, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_33 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_32);
		il2cpp_codegen_memcpy(L_34, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_35 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_34);
		return (bool)((((int32_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_33, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_35, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_00d0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_36 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_37;
		L_37 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_36, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		bool L_40;
		L_40 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_37, L_39, NULL);
		if (!L_40)
		{
			goto IL_0104;
		}
	}
	{
		il2cpp_codegen_memcpy(L_41, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_42 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_41);
		il2cpp_codegen_memcpy(L_43, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_44 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_43);
		return (bool)((((int32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_42, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_44, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0104:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		bool L_49;
		L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_46, L_48, NULL);
		if (!L_49)
		{
			goto IL_0138;
		}
	}
	{
		il2cpp_codegen_memcpy(L_50, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_51 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_50);
		il2cpp_codegen_memcpy(L_52, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_53 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_52);
		return (bool)((((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_51, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_53, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0138:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_54 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_55;
		L_55 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_54, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		bool L_58;
		L_58 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_55, L_57, NULL);
		if (!L_58)
		{
			goto IL_016c;
		}
	}
	{
		il2cpp_codegen_memcpy(L_59, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_60 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_59);
		il2cpp_codegen_memcpy(L_61, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_61);
		return (bool)((((int64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_60, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))))) == ((int64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_62, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_016c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		bool L_67;
		L_67 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_64, L_66, NULL);
		if (!L_67)
		{
			goto IL_01a0;
		}
	}
	{
		il2cpp_codegen_memcpy(L_68, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_69 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_68);
		il2cpp_codegen_memcpy(L_70, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_71 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_70);
		return (bool)((((int64_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_69, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))))) == ((int64_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_71, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		bool L_76;
		L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
		if (!L_76)
		{
			goto IL_01d4;
		}
	}
	{
		il2cpp_codegen_memcpy(L_77, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_78 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_77);
		il2cpp_codegen_memcpy(L_79, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_80 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_79);
		return (bool)((((float)((*(float*)((float*)(float*)UnBox(L_78, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))))) == ((float)((*(float*)((float*)(float*)UnBox(L_80, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_01d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_81 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_82;
		L_82 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_81, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_83 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_84;
		L_84 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_83, NULL);
		bool L_85;
		L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_82, L_84, NULL);
		if (!L_85)
		{
			goto IL_0208;
		}
	}
	{
		il2cpp_codegen_memcpy(L_86, ___0_left, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_87 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_86);
		il2cpp_codegen_memcpy(L_88, ___1_right, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		RuntimeObject* L_89 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_88);
		return (bool)((((double)((*(double*)((double*)(double*)UnBox(L_87, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))))) == ((double)((*(double*)((double*)(double*)UnBox(L_89, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0208:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_90 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_90, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_90, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1_GetOneValue_mE737616FA904E2C6558D22FEA78098714972060A_gshared (Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0027;
		}
	}
	{
		uint8_t L_5 = ((uint8_t)1);
		RuntimeObject* L_6 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_5);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_6, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0027:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_004e;
		}
	}
	{
		int8_t L_12 = ((int8_t)1);
		RuntimeObject* L_13 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_12);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_13, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_004e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		bool L_18;
		L_18 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_15, L_17, NULL);
		if (!L_18)
		{
			goto IL_0075;
		}
	}
	{
		uint16_t L_19 = ((uint16_t)1);
		RuntimeObject* L_20 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_19);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_20, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0075:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_22;
		L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		bool L_25;
		L_25 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_24, NULL);
		if (!L_25)
		{
			goto IL_009c;
		}
	}
	{
		int16_t L_26 = ((int16_t)1);
		RuntimeObject* L_27 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_26);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_27, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_009c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_29;
		L_29 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_28, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		bool L_32;
		L_32 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_29, L_31, NULL);
		if (!L_32)
		{
			goto IL_00c3;
		}
	}
	{
		uint32_t L_33 = ((uint32_t)1);
		RuntimeObject* L_34 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_33);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_34, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_00c3:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
		bool L_39;
		L_39 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_36, L_38, NULL);
		if (!L_39)
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_40 = 1;
		RuntimeObject* L_41 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_40);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_41, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_00ea:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		bool L_46;
		L_46 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_43, L_45, NULL);
		if (!L_46)
		{
			goto IL_0112;
		}
	}
	{
		uint64_t L_47 = ((uint64_t)((int64_t)1));
		RuntimeObject* L_48 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_47);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_48, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0112:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_52;
		L_52 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_51, NULL);
		bool L_53;
		L_53 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_50, L_52, NULL);
		if (!L_53)
		{
			goto IL_013a;
		}
	}
	{
		int64_t L_54 = ((int64_t)1);
		RuntimeObject* L_55 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_54);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_55, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_013a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_0165;
		}
	}
	{
		float L_61 = (1.0f);
		RuntimeObject* L_62 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_61);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_62, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0165:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_64;
		L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_65 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_66;
		L_66 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_65, NULL);
		bool L_67;
		L_67 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_64, L_66, NULL);
		if (!L_67)
		{
			goto IL_0194;
		}
	}
	{
		double L_68 = (1.0);
		RuntimeObject* L_69 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_68);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_69, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0194:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_70 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_70, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_70, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1_GetAllBitsSetValue_mB4736B3DE9ED10228E2F1991D497A98C9FE3E67B_gshared (Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		uint8_t L_5;
		L_5 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		uint8_t L_6 = L_5;
		RuntimeObject* L_7 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_6);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_7, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_002b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_0056;
		}
	}
	{
		int8_t L_13;
		L_13 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		int8_t L_14 = L_13;
		RuntimeObject* L_15 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_14);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_15, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0056:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		bool L_20;
		L_20 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_17, L_19, NULL);
		if (!L_20)
		{
			goto IL_0081;
		}
	}
	{
		uint16_t L_21;
		L_21 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		uint16_t L_22 = L_21;
		RuntimeObject* L_23 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_22);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_23, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0081:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		bool L_28;
		L_28 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_25, L_27, NULL);
		if (!L_28)
		{
			goto IL_00ac;
		}
	}
	{
		int16_t L_29;
		L_29 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		int16_t L_30 = L_29;
		RuntimeObject* L_31 = Box(Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var, &L_30);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_31, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_00ac:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_35;
		L_35 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_34, NULL);
		bool L_36;
		L_36 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_33, L_35, NULL);
		if (!L_36)
		{
			goto IL_00d7;
		}
	}
	{
		uint32_t L_37;
		L_37 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		uint32_t L_38 = L_37;
		RuntimeObject* L_39 = Box(UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var, &L_38);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_39, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_00d7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_40, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_43;
		L_43 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_42, NULL);
		bool L_44;
		L_44 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_43, NULL);
		if (!L_44)
		{
			goto IL_0102;
		}
	}
	{
		int32_t L_45;
		L_45 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		int32_t L_46 = L_45;
		RuntimeObject* L_47 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_46);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_47, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0102:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_49;
		L_49 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_48, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		bool L_52;
		L_52 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_49, L_51, NULL);
		if (!L_52)
		{
			goto IL_012d;
		}
	}
	{
		uint64_t L_53;
		L_53 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		uint64_t L_54 = L_53;
		RuntimeObject* L_55 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_54);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_55, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_012d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_0158;
		}
	}
	{
		int64_t L_61;
		L_61 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		int64_t L_62 = L_61;
		RuntimeObject* L_63 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_62);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_63, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0158:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		if (!L_68)
		{
			goto IL_0183;
		}
	}
	{
		float L_69;
		L_69 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		float L_70 = L_69;
		RuntimeObject* L_71 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_70);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_71, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_0183:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_72 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_73;
		L_73 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_72, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_74 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_75;
		L_75 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_74, NULL);
		bool L_76;
		L_76 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_73, L_75, NULL);
		if (!L_76)
		{
			goto IL_01ae;
		}
	}
	{
		double L_77;
		L_77 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		double L_78 = L_77;
		RuntimeObject* L_79 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_78);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericStruct)((Il2CppFullySharedGenericStruct)(Il2CppFullySharedGenericStruct*)UnBox(L_79, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4))))), SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
		return;
	}

IL_01ae:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_80 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_80, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_80, method);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__cctor_m5C2E6DBA5BAABD495E2C5E516B928C78DB2A7615_gshared (const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4));
	const Il2CppFullySharedGenericStruct L_1 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE);
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_count = L_0;
		il2cpp_codegen_initobj((&((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_zero), sizeof(Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2));
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15), NULL, (Il2CppFullySharedGenericStruct*)L_1);
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector_1__ctor_m7540979061ABB2A0A6D57213359B3E83A1B7B4D2((&L_3), il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_one = L_3;
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17), NULL, (Il2CppFullySharedGenericStruct*)L_4);
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector_1__ctor_m7540979061ABB2A0A6D57213359B3E83A1B7B4D2((&L_6), il2cpp_codegen_memcpy(L_5, L_4, SizeOf_T_t7D67093BB2FFD728051D825E6ED6B46C110A9BAE), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_allOnes = L_6;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerticalVirtualizationController_1_get_activeItems_m5771BE91B7EE5DD1CD69E13A60D9DAD9F81E8535_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___m_ActiveItems;
		return (RuntimeObject*)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VerticalVirtualizationController_1_get_itemsCount_m41C7EC9F6A7BC1C8586B50841E845B6414F9801F_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_CollectionView;
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(104, L_0);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_2 = __this->___m_CollectionView;
		RuntimeObject* L_3;
		L_3 = BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496(L_2, NULL);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		G_B3_0 = L_4;
		goto IL_0031;
	}

IL_001f:
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_5 = __this->___m_CollectionView;
		RuntimeObject* L_6;
		L_6 = BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496(L_5, NULL);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker0< int32_t >::Invoke(1, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}

IL_0031:
	{
		return G_B3_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VerticalVirtualizationController_1_VisibleItemPredicate_mF74E98CD97471A785AC772347CC1112EE868CBF0_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, RuntimeObject* ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___0_i;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1;
		L_1 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_0);
		RuntimeObject* L_2;
		L_2 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_1, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_3;
		L_3 = InterfaceFuncInvoker0< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(17, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_2);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_4;
		L_4 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		bool L_5;
		L_5 = StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD(L_3, L_4, StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerticalVirtualizationController_1_get_firstVisibleItem_m82CAFF6CE0A7E6C2097640ECD92EE8971182E59C_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___m_ActiveItems;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___m_VisibleItemPredicateDelegate;
		RuntimeObject* L_2;
		L_2 = Enumerable_FirstOrDefault_TisRuntimeObject_mFACC750E4D7AF7B43F5B866C84F613B3ECC41994((RuntimeObject*)L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___m_ActiveItems;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___m_VisibleItemPredicateDelegate;
		RuntimeObject* L_2;
		L_2 = Enumerable_LastOrDefault_TisRuntimeObject_mB7B75BD214645D8A79DFF139356112781451A936((RuntimeObject*)L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VerticalVirtualizationController_1_get_visibleItemCount_m6808CEB4E53AC329802DC87298F99C249C3CF112_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___m_ActiveItems;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___m_VisibleItemPredicateDelegate;
		int32_t L_2;
		L_2 = Enumerable_Count_TisRuntimeObject_mF0A3BCDCC75BCD5F4B818C48731347D0ED0EC827((RuntimeObject*)L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* VerticalVirtualizationController_1_get_serializedData_mBAE175BB1331E669FE93C025037ADDE19158A837_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_CollectionView;
		SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* L_1 = L_0->___serializedVirtualizationData;
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VerticalVirtualizationController_1_get_firstVisibleIndex_m42843C9658F41E32ED1ADC19C8FC6C9061FB6423_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* L_0;
		L_0 = VerticalVirtualizationController_1_get_serializedData_mBAE175BB1331E669FE93C025037ADDE19158A837(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		int32_t L_1 = L_0->___firstVisibleIndex;
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_2 = __this->___m_CollectionView;
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_3;
		L_3 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_2, NULL);
		if (L_3)
		{
			G_B2_0 = L_1;
			goto IL_0025;
		}
		G_B1_0 = L_1;
	}
	{
		SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* L_4;
		L_4 = VerticalVirtualizationController_1_get_serializedData_mBAE175BB1331E669FE93C025037ADDE19158A837(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		int32_t L_5 = L_4->___firstVisibleIndex;
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0037;
	}

IL_0025:
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_6 = __this->___m_CollectionView;
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_7;
		L_7 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_6, NULL);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(9, L_7);
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		G_B3_1 = G_B2_0;
	}

IL_0037:
	{
		int32_t L_9;
		L_9 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(G_B3_1, G_B3_0, NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_set_firstVisibleIndex_mABDC3B8CEFB53554BFEB003AE479DF99A5DC13A2_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		SerializedVirtualizationData_t8EA4D4340BC124E7FC98396C263F0FEC091B53CB* L_0;
		L_0 = VerticalVirtualizationController_1_get_serializedData_mBAE175BB1331E669FE93C025037ADDE19158A837(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		int32_t L_1 = ___0_value;
		L_0->___firstVisibleIndex = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VerticalVirtualizationController_1_get_lastHeight_m2B0E6420EAB9557359C528A459EE84BDC1926D29_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_CollectionView;
		float L_1;
		L_1 = BaseVerticalCollectionView_get_lastHeight_mEDABF6845E379DCA0216106F56FAF84B952DA1F2_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VerticalVirtualizationController_1_get_alwaysRebindOnRefresh_mB9C3A538BD60C07E276B0F753DA8E636CA862AB4_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1__ctor_mDD14CF7DF7586CFCB5E6EF69BC643CF090377096_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* ___0_collectionView, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B2_0 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B2_1 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B1_0 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B1_1 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B4_0 = NULL;
	RuntimeObject* G_B4_1 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B4_2 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B4_3 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B3_0 = NULL;
	RuntimeObject* G_B3_1 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B3_2 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B3_3 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B6_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B6_3 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B6_4 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B5_0 = NULL;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* G_B5_1 = NULL;
	RuntimeObject* G_B5_2 = NULL;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* G_B5_3 = NULL;
	VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* G_B5_4 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_0 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9__30_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0020;
		}
		G_B1_0 = L_1;
		G_B1_1 = __this;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E* L_2 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_3 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 10));
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_3, (RuntimeObject*)L_2, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_4 = L_3;
		((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9__30_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9__30_0), (void*)L_4);
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9__30_1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = L_5;
		if (L_6)
		{
			G_B4_0 = L_6;
			G_B4_1 = NULL;
			G_B4_2 = G_B2_0;
			G_B4_3 = G_B2_1;
			goto IL_0040;
		}
		G_B3_0 = L_6;
		G_B3_1 = NULL;
		G_B3_2 = G_B2_0;
		G_B3_3 = G_B2_1;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E* L_7 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_8 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_8, (RuntimeObject*)L_7, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 15)), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = L_8;
		((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9__30_1 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9__30_1), (void*)L_9);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0040:
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_10 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9__30_2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_11 = L_10;
		if (L_11)
		{
			G_B6_0 = L_11;
			G_B6_1 = G_B4_0;
			G_B6_2 = G_B4_1;
			G_B6_3 = G_B4_2;
			G_B6_4 = G_B4_3;
			goto IL_005f;
		}
		G_B5_0 = L_11;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
		G_B5_4 = G_B4_3;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
		U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E* L_12 = ((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_13 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_13, (RuntimeObject*)L_12, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 17)), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = L_13;
		((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9__30_2 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t039AD5F50469B7DF90804F79B406E0DDE952CC2E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___U3CU3E9__30_2), (void*)L_14);
		G_B6_0 = L_14;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		G_B6_4 = G_B5_4;
	}

IL_005f:
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_15 = (ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 18));
		ObjectPool_1__ctor_m4CED6C10E611A3CC63F3CF84423C183C1412177F(L_15, G_B6_3, (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)G_B6_2, G_B6_1, G_B6_0, (bool)1, ((int32_t)10), ((int32_t)10000), il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		G_B6_4->___m_Pool = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&G_B6_4->___m_Pool), (void*)L_15);
		__this->___m_LastFocusedElementIndex = (-1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8(L_16, List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8_RuntimeMethod_var);
		__this->___m_LastFocusedElementTreeChildIndexes = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LastFocusedElementTreeChildIndexes), (void*)L_16);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_17 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		__this->___m_ScrollInsertionList = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ScrollInsertionList), (void*)L_17);
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_18 = ___0_collectionView;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_19;
		L_19 = BaseVerticalCollectionView_get_scrollView_mB4F44C6276CC57A0D8AD030F3C396650532E83CC_inline(L_18, NULL);
		CollectionVirtualizationController__ctor_m15661787A5CF03B2A2EC3250592571C64A0174D2((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this, L_19, NULL);
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_20 = ___0_collectionView;
		__this->___m_CollectionView = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CollectionView), (void*)L_20);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_21 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		__this->___m_ActiveItems = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ActiveItems), (void*)L_21);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_22 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697(L_22, (RuntimeObject*)__this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 20)), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		__this->___m_VisibleItemPredicateDelegate = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_VisibleItemPredicateDelegate), (void*)L_22);
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_23 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24;
		L_24 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(99, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_23);
		VisualElement_set_disableClipping_m3E786643EBFEE5BDC0778C835140934FF3FF80CB(L_24, (bool)0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_Refresh_mA648D405FBCF47E4BE5AAA5B52116A5811BA2B31_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, bool ___0_rebuild, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B9_0 = 0;
	int32_t G_B15_0 = 0;
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_CollectionView;
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(110, L_0);
		V_0 = L_1;
		V_1 = 0;
		goto IL_0139;
	}

IL_0014:
	{
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(4, (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_2, L_3));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = __this->___m_ActiveItems;
		int32_t L_5 = V_1;
		RuntimeObject* L_6;
		L_6 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_3 = L_6;
		RuntimeObject* L_7 = V_3;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8;
		L_8 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_7);
		RuntimeObject* L_9;
		L_9 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_8, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_10;
		L_10 = InterfaceFuncInvoker0< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(17, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_9);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_11;
		L_11 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		bool L_12;
		L_12 = StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD(L_10, L_11, StyleEnum_1_op_Equality_m0A305FB462EE2B52AD8BBC87CFCDAA27BA4B94CD_RuntimeMethod_var);
		V_4 = L_12;
		bool L_13 = ___0_rebuild;
		V_5 = L_13;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0092;
		}
	}
	{
		bool L_15 = V_0;
		V_6 = L_15;
		bool L_16 = V_6;
		if (!L_16)
		{
			goto IL_0080;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_17 = __this->___m_CollectionView;
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_18;
		L_18 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_17, NULL);
		RuntimeObject* L_19 = V_3;
		RuntimeObject* L_20 = V_3;
		int32_t L_21;
		L_21 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_20, NULL);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(16, L_18, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_19, L_21);
	}

IL_0080:
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_22 = __this->___m_Pool;
		RuntimeObject* L_23 = V_3;
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5(L_22, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		goto IL_0135;
	}

IL_0092:
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_24 = __this->___m_CollectionView;
		RuntimeObject* L_25;
		L_25 = BaseVerticalCollectionView_get_itemsSource_mE1E01CC16339B3B28C6E1198A74AB8DE8E31A496(L_24, NULL);
		if (!L_25)
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_26 = V_2;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_27 = V_2;
		int32_t L_28;
		L_28 = VerticalVirtualizationController_1_get_itemsCount_m41C7EC9F6A7BC1C8586B50841E845B6414F9801F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		G_B9_0 = ((((int32_t)L_27) < ((int32_t)L_28))? 1 : 0);
		goto IL_00af;
	}

IL_00ae:
	{
		G_B9_0 = 0;
	}

IL_00af:
	{
		V_7 = (bool)G_B9_0;
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_011e;
		}
	}
	{
		bool L_30 = V_0;
		V_8 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_00c2;
		}
	}
	{
		goto IL_0135;
	}

IL_00c2:
	{
		bool L_32 = V_4;
		if (L_32)
		{
			goto IL_00ce;
		}
	}
	{
		bool L_33;
		L_33 = VirtualFuncInvoker0< bool >::Invoke(21, __this);
		G_B15_0 = ((int32_t)(L_33));
		goto IL_00cf;
	}

IL_00ce:
	{
		G_B15_0 = 1;
	}

IL_00cf:
	{
		V_9 = (bool)G_B15_0;
		bool L_34 = V_9;
		if (!L_34)
		{
			goto IL_011b;
		}
	}
	{
		RuntimeObject* L_35 = V_3;
		int32_t L_36;
		L_36 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_35, NULL);
		V_10 = (bool)((((int32_t)((((int32_t)L_36) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_0111;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_38 = __this->___m_CollectionView;
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_39;
		L_39 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_38, NULL);
		RuntimeObject* L_40 = V_3;
		RuntimeObject* L_41 = V_3;
		int32_t L_42;
		L_42 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_41, NULL);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(16, L_39, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_40, L_42);
	}

IL_0111:
	{
		RuntimeObject* L_43 = V_3;
		int32_t L_44 = V_2;
		VerticalVirtualizationController_1_Setup_mC5415B4D4C6B65EB15FC1EB2EC4C85661E092CEA(__this, L_43, L_44, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_011b:
	{
		goto IL_0134;
	}

IL_011e:
	{
		bool L_45 = V_4;
		V_11 = L_45;
		bool L_46 = V_11;
		if (!L_46)
		{
			goto IL_0134;
		}
	}
	{
		int32_t L_47 = V_1;
		int32_t L_48 = L_47;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_48, 1));
		VirtualActionInvoker1< int32_t >::Invoke(23, __this, L_48);
	}

IL_0134:
	{
	}

IL_0135:
	{
		int32_t L_49 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0139:
	{
		int32_t L_50 = V_1;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_51 = __this->___m_ActiveItems;
		int32_t L_52;
		L_52 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_51, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_12 = (bool)((((int32_t)L_50) < ((int32_t)L_52))? 1 : 0);
		bool L_53 = V_12;
		if (L_53)
		{
			goto IL_0014;
		}
	}
	{
		bool L_54 = ___0_rebuild;
		V_13 = L_54;
		bool L_55 = V_13;
		if (!L_55)
		{
			goto IL_017d;
		}
	}
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_56 = __this->___m_Pool;
		ObjectPool_1_Clear_m1AA2CCDA1BA91BB58C5A4578B03502A034811E4E(L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_57 = __this->___m_ActiveItems;
		List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_inline(L_57, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_58 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		VisualElement_Clear_m201F95F3031691823F39BAEC5ED378C82F34AC7F((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_58, NULL);
	}

IL_017d:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_Setup_mC5415B4D4C6B65EB15FC1EB2EC4C85661E092CEA_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, RuntimeObject* ___0_recycledItem, int32_t ___1_newIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B21_0 = 0;
	{
		RuntimeObject* L_0 = ___0_recycledItem;
		bool L_1;
		L_1 = ReusableCollectionItem_get_isDragGhost_m3D932E557A3B750E12C3D6406B0DB52C6D63513F_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = VerticalVirtualizationController_1_GetDraggedIndex_mD64DED3B14A68F3A59150A7ACFBA2B138F4A7A6A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_3 = ___1_newIndex;
		V_5 = (bool)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_5;
		if (!L_4)
		{
			goto IL_00a3;
		}
	}
	{
		RuntimeObject* L_5 = ___0_recycledItem;
		int32_t L_6;
		L_6 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_5, NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_6) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_6;
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_8 = __this->___m_CollectionView;
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_9;
		L_9 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_8, NULL);
		RuntimeObject* L_10 = ___0_recycledItem;
		RuntimeObject* L_11 = ___0_recycledItem;
		int32_t L_12;
		L_12 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_11, NULL);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(16, L_9, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_10, L_12);
	}

IL_0059:
	{
		RuntimeObject* L_13 = ___0_recycledItem;
		VirtualActionInvoker1< bool >::Invoke(10, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_13, (bool)1);
		RuntimeObject* L_14 = ___0_recycledItem;
		RuntimeObject* L_15 = __this->___m_DraggedItem;
		int32_t L_16;
		L_16 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_15, NULL);
		ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_14, L_16, NULL);
		RuntimeObject* L_17 = ___0_recycledItem;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18;
		L_18 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_17);
		RuntimeObject* L_19;
		L_19 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_18, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_20;
		L_20 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(18, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_19, L_20);
		goto IL_02d7;
	}

IL_00a3:
	{
		bool L_21 = V_0;
		V_7 = L_21;
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00b9;
		}
	}
	{
		RuntimeObject* L_23 = ___0_recycledItem;
		VirtualActionInvoker1< bool >::Invoke(10, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_23, (bool)0);
	}

IL_00b9:
	{
		int32_t L_24 = ___1_newIndex;
		int32_t L_25;
		L_25 = VerticalVirtualizationController_1_get_itemsCount_m41C7EC9F6A7BC1C8586B50841E845B6414F9801F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		V_8 = (bool)((((int32_t)((((int32_t)L_24) < ((int32_t)L_25))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_8;
		if (!L_26)
		{
			goto IL_0148;
		}
	}
	{
		RuntimeObject* L_27 = ___0_recycledItem;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_28;
		L_28 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_27);
		RuntimeObject* L_29;
		L_29 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_28, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_30;
		L_30 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)1, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(18, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_29, L_30);
		RuntimeObject* L_31 = ___0_recycledItem;
		int32_t L_32;
		L_32 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_31, NULL);
		if ((((int32_t)L_32) < ((int32_t)0)))
		{
			goto IL_010b;
		}
	}
	{
		RuntimeObject* L_33 = ___0_recycledItem;
		int32_t L_34;
		L_34 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_33, NULL);
		int32_t L_35;
		L_35 = VerticalVirtualizationController_1_get_itemsCount_m41C7EC9F6A7BC1C8586B50841E845B6414F9801F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		G_B10_0 = ((((int32_t)L_34) < ((int32_t)L_35))? 1 : 0);
		goto IL_010c;
	}

IL_010b:
	{
		G_B10_0 = 0;
	}

IL_010c:
	{
		V_9 = (bool)G_B10_0;
		bool L_36 = V_9;
		if (!L_36)
		{
			goto IL_0143;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_37 = __this->___m_CollectionView;
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_38;
		L_38 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_37, NULL);
		RuntimeObject* L_39 = ___0_recycledItem;
		RuntimeObject* L_40 = ___0_recycledItem;
		int32_t L_41;
		L_41 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_40, NULL);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(16, L_38, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_39, L_41);
		RuntimeObject* L_42 = ___0_recycledItem;
		ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_42, (-1), NULL);
	}

IL_0143:
	{
		goto IL_02d7;
	}

IL_0148:
	{
		RuntimeObject* L_43 = ___0_recycledItem;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_44;
		L_44 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_43);
		RuntimeObject* L_45;
		L_45 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_44, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_46;
		L_46 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)0, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(18, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_45, L_46);
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_47 = __this->___m_CollectionView;
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_48;
		L_48 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_47, NULL);
		int32_t L_49 = ___1_newIndex;
		int32_t L_50;
		L_50 = VirtualFuncInvoker1< int32_t, int32_t >::Invoke(12, L_48, L_49);
		V_1 = L_50;
		RuntimeObject* L_51 = ___0_recycledItem;
		int32_t L_52;
		L_52 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_51, NULL);
		int32_t L_53 = ___1_newIndex;
		if ((!(((uint32_t)L_52) == ((uint32_t)L_53))))
		{
			goto IL_0194;
		}
	}
	{
		RuntimeObject* L_54 = ___0_recycledItem;
		int32_t L_55;
		L_55 = ReusableCollectionItem_get_id_m765F123306544777F8B1E273AFB8A0A1E94C4857_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_54, NULL);
		int32_t L_56 = V_1;
		G_B16_0 = ((((int32_t)L_55) == ((int32_t)L_56))? 1 : 0);
		goto IL_0195;
	}

IL_0194:
	{
		G_B16_0 = 0;
	}

IL_0195:
	{
		V_10 = (bool)G_B16_0;
		bool L_57 = V_10;
		if (!L_57)
		{
			goto IL_01a0;
		}
	}
	{
		goto IL_02d7;
	}

IL_01a0:
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_58 = __this->___m_CollectionView;
		int32_t L_59;
		L_59 = BaseVerticalCollectionView_get_showAlternatingRowBackgrounds_m47BFEE57E56D46D6C705C7F7DD6C8BA5DBB2B97A(L_58, NULL);
		if (!L_59)
		{
			goto IL_01b5;
		}
	}
	{
		int32_t L_60 = ___1_newIndex;
		G_B21_0 = ((((int32_t)((int32_t)(L_60%2))) == ((int32_t)1))? 1 : 0);
		goto IL_01b6;
	}

IL_01b5:
	{
		G_B21_0 = 0;
	}

IL_01b6:
	{
		V_2 = (bool)G_B21_0;
		RuntimeObject* L_61 = ___0_recycledItem;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_62;
		L_62 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_61);
		il2cpp_codegen_runtime_class_init_inline(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		String_t* L_63 = ((BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_StaticFields*)il2cpp_codegen_static_fields_for(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var))->___itemAlternativeBackgroundUssClassName;
		bool L_64 = V_2;
		VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365(L_62, L_63, L_64, NULL);
		RuntimeObject* L_65 = ___0_recycledItem;
		int32_t L_66;
		L_66 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_65, NULL);
		V_3 = L_66;
		RuntimeObject* L_67 = ___0_recycledItem;
		int32_t L_68;
		L_68 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_67, NULL);
		V_11 = (bool)((((int32_t)((((int32_t)L_68) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_69 = V_11;
		if (!L_69)
		{
			goto IL_0213;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_70 = __this->___m_CollectionView;
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_71;
		L_71 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_70, NULL);
		RuntimeObject* L_72 = ___0_recycledItem;
		RuntimeObject* L_73 = ___0_recycledItem;
		int32_t L_74;
		L_74 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_73, NULL);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(16, L_71, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_72, L_74);
	}

IL_0213:
	{
		RuntimeObject* L_75 = ___0_recycledItem;
		int32_t L_76 = ___1_newIndex;
		ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_75, L_76, NULL);
		RuntimeObject* L_77 = ___0_recycledItem;
		int32_t L_78 = V_1;
		ReusableCollectionItem_set_id_m681AB8AB77EE8E8E0B0105C0955B7BCF1FBDE1B7_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_77, L_78, NULL);
		int32_t L_79 = ___1_newIndex;
		int32_t L_80;
		L_80 = VirtualFuncInvoker0< int32_t >::Invoke(4, (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_79, L_80));
		int32_t L_81 = V_4;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_82 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_83;
		L_83 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(99, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_82);
		int32_t L_84;
		L_84 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_83, NULL);
		V_12 = (bool)((((int32_t)((((int32_t)L_81) < ((int32_t)L_84))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_85 = V_12;
		if (!L_85)
		{
			goto IL_0269;
		}
	}
	{
		RuntimeObject* L_86 = ___0_recycledItem;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_87;
		L_87 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_86);
		VisualElement_BringToFront_m9E1C19327401C3AC5A62EC6432E0DAC4457BC59E(L_87, NULL);
		goto IL_02b1;
	}

IL_0269:
	{
		int32_t L_88 = V_4;
		V_13 = (bool)((((int32_t)((((int32_t)L_88) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_89 = V_13;
		if (!L_89)
		{
			goto IL_029e;
		}
	}
	{
		RuntimeObject* L_90 = ___0_recycledItem;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_91;
		L_91 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_90);
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_92 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_93;
		L_93 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(99, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_92);
		int32_t L_94 = V_4;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_95;
		L_95 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_93, L_94, NULL);
		VisualElement_PlaceBehind_m248F49B17935C60E15E4BC5241D68A2713932CFF(L_91, L_95, NULL);
		goto IL_02b1;
	}

IL_029e:
	{
		RuntimeObject* L_96 = ___0_recycledItem;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_97;
		L_97 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_96);
		VisualElement_SendToBack_m5452936AAAEF38D9932278786E0BCCD17BECE511(L_97, NULL);
	}

IL_02b1:
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_98 = __this->___m_CollectionView;
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_99;
		L_99 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_98, NULL);
		RuntimeObject* L_100 = ___0_recycledItem;
		int32_t L_101 = ___1_newIndex;
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(15, L_99, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_100, L_101);
		RuntimeObject* L_102 = ___0_recycledItem;
		int32_t L_103 = V_3;
		VerticalVirtualizationController_1_HandleFocus_m6F01FC44F3887D8D8040D558FB41B6CCDECFB0EC(__this, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_102, L_103, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
	}

IL_02d7:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_OnFocus_m6A0CFE10225E6DF432E1A83349FD0D3338E2E2C8_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_leafTarget, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tC8F648DAC54860B2E32294DCF939576E41EF594A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t2A9C63083A2E1F3154B162888A0D4FD37ED0C247_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* V_4 = NULL;
	bool V_5 = false;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_leafTarget;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_1 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_2;
		L_2 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(99, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_1);
		V_0 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_0) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_2))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0018;
		}
	}
	{
		goto IL_00c4;
	}

IL_0018:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = __this->___m_LastFocusedElementTreeChildIndexes;
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_4, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_5 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_6;
		L_6 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(99, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_5);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7 = ___0_leafTarget;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = __this->___m_LastFocusedElementTreeChildIndexes;
		bool L_9;
		L_9 = VisualElement_FindElementInTree_mE71D464CD81A416B9A09C44392835A80D0895D59(L_6, L_7, L_8, NULL);
		V_1 = L_9;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_00bb;
		}
	}
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_11 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_12;
		L_12 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(99, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_11);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_13 = __this->___m_LastFocusedElementTreeChildIndexes;
		int32_t L_14;
		L_14 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_13, 0, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15;
		L_15 = VisualElement_get_Item_m84C0E356F6D66363D97482DC4EFC17060060C693(L_12, L_14, NULL);
		V_2 = L_15;
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(17, (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_tC8F648DAC54860B2E32294DCF939576E41EF594A_il2cpp_TypeInfo_var, L_16);
		V_3 = L_17;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a0:
			{
				{
					RuntimeObject* L_18 = V_3;
					if (!L_18)
					{
						goto IL_00aa;
					}
				}
				{
					RuntimeObject* L_19 = V_3;
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_19);
				}

IL_00aa:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0096_1;
			}

IL_006c_1:
			{
				RuntimeObject* L_20 = V_3;
				ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_21;
				L_21 = InterfaceFuncInvoker0< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* >::Invoke(0, IEnumerator_1_t2A9C63083A2E1F3154B162888A0D4FD37ED0C247_il2cpp_TypeInfo_var, L_20);
				V_4 = L_21;
				ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_22 = V_4;
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_23;
				L_23 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, L_22);
				VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24 = V_2;
				V_5 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_23) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_24))? 1 : 0);
				bool L_25 = V_5;
				if (!L_25)
				{
					goto IL_0095_1;
				}
			}
			{
				ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_26 = V_4;
				int32_t L_27;
				L_27 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline(L_26, NULL);
				__this->___m_LastFocusedElementIndex = L_27;
				goto IL_009e_1;
			}

IL_0095_1:
			{
			}

IL_0096_1:
			{
				RuntimeObject* L_28 = V_3;
				bool L_29;
				L_29 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_28);
				if (L_29)
				{
					goto IL_006c_1;
				}
			}

IL_009e_1:
			{
				goto IL_00ab;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00ab:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_30 = __this->___m_LastFocusedElementTreeChildIndexes;
		List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004(L_30, 0, List_1_RemoveAt_m76C4CDACF47BA529BAFADFC8D5E13DB9587F4004_RuntimeMethod_var);
		goto IL_00c4;
	}

IL_00bb:
	{
		__this->___m_LastFocusedElementIndex = (-1);
	}

IL_00c4:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_OnBlur_m4F2963E229865EF1B63E2D5BA5C26B4D417C049E_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_willFocus, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_willFocus;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_1 = ___0_willFocus;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_2 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3;
		L_3 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(99, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_2);
		G_B3_0 = ((((int32_t)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_1) == ((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = __this->___m_LastFocusedElementTreeChildIndexes;
		List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_inline(L_5, List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_RuntimeMethod_var);
		__this->___m_LastFocusedElementIndex = (-1);
	}

IL_0031:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_HandleFocus_m6F01FC44F3887D8D8040D558FB41B6CCDECFB0EC_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___0_recycledItem, int32_t ___1_previousIndex, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B5_0 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B4_0 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B10_0 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B9_0 = NULL;
	{
		int32_t L_0 = __this->___m_LastFocusedElementIndex;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)(-1)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0081;
	}

IL_0010:
	{
		int32_t L_2 = __this->___m_LastFocusedElementIndex;
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_3 = ___0_recycledItem;
		int32_t L_4;
		L_4 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline(L_3, NULL);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_6 = ___0_recycledItem;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_7;
		L_7 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, L_6);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = __this->___m_LastFocusedElementTreeChildIndexes;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9;
		L_9 = VisualElement_ElementAtTreePath_m83234CBC5C58A6FEB70F3DCB6BF67C9D1D3D1DED(L_7, L_8, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_10 = L_9;
		if (L_10)
		{
			G_B5_0 = L_10;
			goto IL_0039;
		}
		G_B4_0 = L_10;
	}
	{
		goto IL_003f;
	}

IL_0039:
	{
		VirtualActionInvoker0::Invoke(17, (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)G_B5_0);
	}

IL_003f:
	{
		goto IL_0081;
	}

IL_0041:
	{
		int32_t L_11 = __this->___m_LastFocusedElementIndex;
		int32_t L_12 = ___1_previousIndex;
		V_2 = (bool)((((int32_t)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_14 = ___0_recycledItem;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15;
		L_15 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, L_14);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_16 = __this->___m_LastFocusedElementTreeChildIndexes;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_17;
		L_17 = VisualElement_ElementAtTreePath_m83234CBC5C58A6FEB70F3DCB6BF67C9D1D3D1DED(L_15, L_16, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_18 = L_17;
		if (L_18)
		{
			G_B10_0 = L_18;
			goto IL_0068;
		}
		G_B9_0 = L_18;
	}
	{
		goto IL_006e;
	}

IL_0068:
	{
		VirtualActionInvoker0::Invoke(18, (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)G_B10_0);
	}

IL_006e:
	{
		goto IL_0081;
	}

IL_0070:
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_19 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20;
		L_20 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(99, (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_19);
		VirtualActionInvoker0::Invoke(17, (Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0*)L_20);
	}

IL_0081:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_UpdateBackground_mD418E786890EBB5E1CA8804BCACBD97448C22033_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IResolvedStyle_t6A3530BA6147B091C278593F21F86B09CD42BE89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_12 = NULL;
	bool V_13 = false;
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* V_16 = NULL;
	bool V_17 = false;
	int32_t G_B3_0 = 0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B6_0 = NULL;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* G_B5_0 = NULL;
	RuntimeObject* G_B21_0 = NULL;
	RuntimeObject* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_CollectionView;
		int32_t L_1;
		L_1 = BaseVerticalCollectionView_get_showAlternatingRowBackgrounds_m47BFEE57E56D46D6C705C7F7DD6C8BA5DBB2B97A(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0039;
		}
	}
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_2 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3;
		L_3 = ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline(L_2, NULL);
		RuntimeObject* L_4;
		L_4 = VisualElement_get_resolvedStyle_m3885B7534A94E0BCE024A9621465A0F273DA0AEB(L_3, NULL);
		float L_5;
		L_5 = InterfaceFuncInvoker0< float >::Invoke(19, IResolvedStyle_t6A3530BA6147B091C278593F21F86B09CD42BE89_il2cpp_TypeInfo_var, L_4);
		float L_6;
		L_6 = VirtualFuncInvoker0< float >::Invoke(13, (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this);
		float L_7 = ((float)il2cpp_codegen_subtract(L_5, L_6));
		V_0 = L_7;
		G_B3_0 = ((((int32_t)((!(((float)L_7) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003a;
	}

IL_0039:
	{
		G_B3_0 = 1;
	}

IL_003a:
	{
		V_5 = (bool)G_B3_0;
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0058;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_9 = __this->___m_EmptyRows;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_10 = L_9;
		if (L_10)
		{
			G_B6_0 = L_10;
			goto IL_004d;
		}
		G_B5_0 = L_10;
	}
	{
		goto IL_0053;
	}

IL_004d:
	{
		VisualElement_RemoveFromHierarchy_m5F43EA9B8CBA47EA2AEC2D75180713395AEECF64(G_B6_0, NULL);
	}

IL_0053:
	{
		goto IL_01cf;
	}

IL_0058:
	{
		RuntimeObject* L_11;
		L_11 = VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		V_6 = (bool)((((RuntimeObject*)(RuntimeObject*)L_11) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0071;
		}
	}
	{
		goto IL_01cf;
	}

IL_0071:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13 = __this->___m_EmptyRows;
		V_7 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_13) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_14 = V_7;
		if (!L_14)
		{
			goto IL_009e;
		}
	}
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_15 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)il2cpp_codegen_object_new(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(L_15, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_16 = L_15;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17;
		L_17 = VisualElement_get_classList_mF29F87BE5A1BFC82854AD0D6355A713D5AC517C1(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		String_t* L_18 = ((BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_StaticFields*)il2cpp_codegen_static_fields_for(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var))->___backgroundFillUssClassName;
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_17, L_18, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		__this->___m_EmptyRows = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_EmptyRows), (void*)L_16);
	}

IL_009e:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_19 = __this->___m_EmptyRows;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_20;
		L_20 = VisualElement_get_parent_m80978E6D0A928AB4885EE4CD0E2295C72AA73000(L_19, NULL);
		V_8 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_20) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_21 = V_8;
		if (!L_21)
		{
			goto IL_00c9;
		}
	}
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_22 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_23;
		L_23 = ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline(L_22, NULL);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_24 = __this->___m_EmptyRows;
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_23, L_24, NULL);
	}

IL_00c9:
	{
		float L_25;
		L_25 = VirtualFuncInvoker1< float, int32_t >::Invoke(12, (CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this, (-1));
		V_1 = L_25;
		float L_26 = V_0;
		float L_27 = V_1;
		int32_t L_28;
		L_28 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)(L_26/L_27)), NULL);
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
		int32_t L_29 = V_2;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_30 = __this->___m_EmptyRows;
		int32_t L_31;
		L_31 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_30, NULL);
		V_9 = (bool)((((int32_t)L_29) > ((int32_t)L_31))? 1 : 0);
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_0146;
		}
	}
	{
		int32_t L_33 = V_2;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_34 = __this->___m_EmptyRows;
		int32_t L_35;
		L_35 = VisualElement_get_childCount_m411C1EAE0E8B660CF0F831B38D5AEEBC200F277A(L_34, NULL);
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_33, L_35));
		V_11 = 0;
		goto IL_0139;
	}

IL_0105:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_36 = (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)il2cpp_codegen_object_new(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_il2cpp_TypeInfo_var);
		VisualElement__ctor_m4C59A7BA0CE74223A61F07C39A60071DD0207E2D(L_36, NULL);
		V_12 = L_36;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_37 = V_12;
		RuntimeObject* L_38;
		L_38 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_37, NULL);
		StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 L_39;
		L_39 = StyleFloat_op_Implicit_m534A028510332FD68BBBAF6C96028FAE936A2DDB((0.0f), NULL);
		InterfaceActionInvoker1< StyleFloat_t4A100BCCDC275C2302517C5858C9BE9EC43D4841 >::Invoke(22, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_38, L_39);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_40 = __this->___m_EmptyRows;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_41 = V_12;
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F(L_40, L_41, NULL);
		int32_t L_42 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_0139:
	{
		int32_t L_43 = V_11;
		int32_t L_44 = V_10;
		V_13 = (bool)((((int32_t)L_43) < ((int32_t)L_44))? 1 : 0);
		bool L_45 = V_13;
		if (L_45)
		{
			goto IL_0105;
		}
	}
	{
	}

IL_0146:
	{
		RuntimeObject* L_46;
		L_46 = VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		RuntimeObject* L_47 = L_46;
		if (L_47)
		{
			G_B21_0 = ((RuntimeObject*)(L_47));
			goto IL_0158;
		}
		G_B20_0 = ((RuntimeObject*)(L_47));
	}
	{
		G_B22_0 = (-1);
		goto IL_015d;
	}

IL_0158:
	{
		int32_t L_48;
		L_48 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)G_B21_0, NULL);
		G_B22_0 = L_48;
	}

IL_015d:
	{
		V_3 = G_B22_0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_49 = __this->___m_EmptyRows;
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_50;
		L_50 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_49, NULL);
		V_14 = L_50;
		int32_t L_51;
		L_51 = Hierarchy_get_childCount_mAD31B42C0FF9B64AAF6A8CF23F22024B3F9542D5((&V_14), NULL);
		V_4 = L_51;
		V_15 = 0;
		goto IL_01c3;
	}

IL_0179:
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_52 = __this->___m_EmptyRows;
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_53;
		L_53 = VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline(L_52, NULL);
		V_14 = L_53;
		int32_t L_54 = V_15;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_55;
		L_55 = Hierarchy_get_Item_mBA5811C28D9E7FA48D0F10603A95F8CF248C3467((&V_14), L_54, NULL);
		V_16 = L_55;
		int32_t L_56 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_56, 1));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_57 = V_16;
		RuntimeObject* L_58;
		L_58 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_57, NULL);
		float L_59 = V_1;
		StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 L_60;
		L_60 = StyleLength_op_Implicit_mA1ED6E9AD696C34231A35B83084B1298A700B019(L_59, NULL);
		InterfaceActionInvoker1< StyleLength_tF02B24735FC88BE29BEB36F7A87709CA28AF72D8 >::Invoke(24, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_58, L_60);
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_61 = V_16;
		il2cpp_codegen_runtime_class_init_inline(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var);
		String_t* L_62 = ((BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_StaticFields*)il2cpp_codegen_static_fields_for(BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE_il2cpp_TypeInfo_var))->___itemAlternativeBackgroundUssClassName;
		int32_t L_63 = V_3;
		VisualElement_EnableInClassList_m8576D29AB2E6772EBAAA0E0EC2698244C8C87365(L_61, L_62, (bool)((((int32_t)((int32_t)(L_63%2))) == ((int32_t)1))? 1 : 0), NULL);
		int32_t L_64 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_01c3:
	{
		int32_t L_65 = V_15;
		int32_t L_66 = V_4;
		V_17 = (bool)((((int32_t)L_65) < ((int32_t)L_66))? 1 : 0);
		bool L_67 = V_17;
		if (L_67)
		{
			goto IL_0179;
		}
	}

IL_01cf:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_StartDragItem_m90D34ED5F87156BF50817976D0FE5784A22A0CCC_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_0 = ___0_item;
		__this->___m_DraggedItem = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))), il2cpp_rgctx_data(method->klass->rgctx_data, 2)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DraggedItem), (void*)((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 2))), il2cpp_rgctx_data(method->klass->rgctx_data, 2))));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_1 = __this->___m_ActiveItems;
		RuntimeObject* L_2 = __this->___m_DraggedItem;
		int32_t L_3;
		L_3 = List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		V_0 = L_3;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = __this->___m_ActiveItems;
		int32_t L_5 = V_0;
		List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54(L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 36));
		int32_t L_6 = V_0;
		int32_t L_7 = V_0;
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker2< RuntimeObject*, int32_t, int32_t >::Invoke(22, __this, L_6, L_7);
		V_1 = L_8;
		RuntimeObject* L_9 = V_1;
		RuntimeObject* L_10 = __this->___m_DraggedItem;
		int32_t L_11;
		L_11 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_10, NULL);
		VerticalVirtualizationController_1_Setup_mC5415B4D4C6B65EB15FC1EB2EC4C85661E092CEA(__this, L_9, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_EndDrag_mE4C2F065B00C1FA3E9A6CBF083672FF7B734CF4A_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, int32_t ___0_dropIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B3_0 = 0;
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_CollectionView;
		int32_t L_1 = ___0_dropIndex;
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_2;
		L_2 = ListViewDraggerExtension_GetRecycledItemFromIndex_m2DCBCAD63977E19CCB2888783463D3CCB7956F5C(L_0, L_1, NULL);
		V_0 = L_2;
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_3 = V_0;
		if (L_3)
		{
			goto IL_001e;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_4 = __this->___m_ActiveItems;
		int32_t L_5;
		L_5 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		G_B3_0 = L_5;
		goto IL_002f;
	}

IL_001e:
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_6 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_7 = V_0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_8;
		L_8 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, L_7);
		int32_t L_9;
		L_9 = VisualElement_IndexOf_m1CC000F2192D5D561AE87B2EC3AB312BD0D714AE((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_6, L_8, NULL);
		G_B3_0 = L_9;
	}

IL_002f:
	{
		V_1 = G_B3_0;
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_10 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		int32_t L_11 = V_1;
		RuntimeObject* L_12 = __this->___m_DraggedItem;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_13;
		L_13 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_12);
		VisualElement_Insert_m95ACF6FC7BCF788C955714E8DADF07FACE5C0031((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_10, L_11, L_13, NULL);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_14 = __this->___m_ActiveItems;
		int32_t L_15 = V_1;
		RuntimeObject* L_16 = __this->___m_DraggedItem;
		List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094(L_14, L_15, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		V_2 = 0;
		goto IL_00a3;
	}

IL_0064:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_17 = __this->___m_ActiveItems;
		int32_t L_18 = V_2;
		RuntimeObject* L_19;
		L_19 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_17, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_3 = L_19;
		RuntimeObject* L_20 = V_3;
		bool L_21;
		L_21 = ReusableCollectionItem_get_isDragGhost_m3D932E557A3B750E12C3D6406B0DB52C6D63513F_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_20, NULL);
		V_4 = L_21;
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_009e;
		}
	}
	{
		RuntimeObject* L_23 = V_3;
		ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_23, (-1), NULL);
		int32_t L_24 = V_2;
		VirtualActionInvoker1< int32_t >::Invoke(23, __this, L_24);
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_25, 1));
	}

IL_009e:
	{
		int32_t L_26 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_00a3:
	{
		int32_t L_27 = V_2;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_28 = __this->___m_ActiveItems;
		int32_t L_29;
		L_29 = List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_inline(L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		V_5 = (bool)((((int32_t)L_27) < ((int32_t)L_29))? 1 : 0);
		bool L_30 = V_5;
		if (L_30)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_31 = ___0_dropIndex;
		int32_t L_32;
		L_32 = VerticalVirtualizationController_1_get_itemsCount_m41C7EC9F6A7BC1C8586B50841E845B6414F9801F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_33;
		L_33 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_31, ((int32_t)il2cpp_codegen_subtract(L_32, 1)), NULL);
		RuntimeObject* L_34 = __this->___m_DraggedItem;
		int32_t L_35;
		L_35 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_34, NULL);
		V_6 = (bool)((((int32_t)((((int32_t)L_33) == ((int32_t)L_35))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_6;
		if (!L_36)
		{
			goto IL_01a1;
		}
	}
	{
		RuntimeObject* L_37;
		L_37 = VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_37) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_38 = V_7;
		if (!L_38)
		{
			goto IL_0119;
		}
	}
	{
		RuntimeObject* L_39;
		L_39 = VerticalVirtualizationController_1_get_lastVisibleItem_mAB27E476457270B251979B2A73DE8B419E587659(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_40;
		L_40 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_39);
		RuntimeObject* L_41;
		L_41 = VisualElement_get_style_mDCFF8D835BE0AFE412905E108F48B32A83734224(L_40, NULL);
		StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 L_42;
		L_42 = StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030((int32_t)1, StyleEnum_1_op_Implicit_mE2664CDFC678F602380EED12BA228071E6F49030_RuntimeMethod_var);
		InterfaceActionInvoker1< StyleEnum_1_t3B02FFF55849C9C8E6A7C0AA9C7E5F65F10C9C69 >::Invoke(18, IStyle_t4FD66C97CA5F46BFE328FED0C65277A37E0A89F7_il2cpp_TypeInfo_var, L_41, L_42);
	}

IL_0119:
	{
		RuntimeObject* L_43 = __this->___m_DraggedItem;
		int32_t L_44;
		L_44 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_43, NULL);
		int32_t L_45 = ___0_dropIndex;
		V_8 = (bool)((((int32_t)L_44) < ((int32_t)L_45))? 1 : 0);
		bool L_46 = V_8;
		if (!L_46)
		{
			goto IL_0174;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_47 = __this->___m_CollectionView;
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_48;
		L_48 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_47, NULL);
		RuntimeObject* L_49 = __this->___m_DraggedItem;
		RuntimeObject* L_50 = __this->___m_DraggedItem;
		int32_t L_51;
		L_51 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_50, NULL);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(16, L_48, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_49, L_51);
		RuntimeObject* L_52 = __this->___m_DraggedItem;
		ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_52, (-1), NULL);
		goto IL_01a0;
	}

IL_0174:
	{
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_53 = V_0;
		V_9 = (bool)((!(((RuntimeObject*)(ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_53) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_54 = V_9;
		if (!L_54)
		{
			goto IL_01a0;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_55 = __this->___m_CollectionView;
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_56;
		L_56 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_55, NULL);
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_57 = V_0;
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_58 = V_0;
		int32_t L_59;
		L_59 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline(L_58, NULL);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(16, L_56, L_57, L_59);
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_60 = V_0;
		ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline(L_60, (-1), NULL);
	}

IL_01a0:
	{
	}

IL_01a1:
	{
		RuntimeObject** L_61 = (RuntimeObject**)(&__this->___m_DraggedItem);
		il2cpp_codegen_initobj(L_61, sizeof(RuntimeObject*));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VerticalVirtualizationController_1_GetOrMakeItemAtIndex_m73EFFD0367510D9487186D58ECBBFEC9BC9C70AC_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, int32_t ___0_activeItemIndex, int32_t ___1_scrollViewIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	RuntimeObject* V_4 = NULL;
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_0 = __this->___m_Pool;
		RuntimeObject* L_1;
		L_1 = ObjectPool_1_Get_m239BB169D8FEF3A2694E9A961C473D3807D67D89(L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_3;
		L_3 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_2);
		V_1 = (bool)((((RuntimeObject*)(VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_3) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0050;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_5 = __this->___m_CollectionView;
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_6;
		L_6 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_5, NULL);
		RuntimeObject* L_7 = V_0;
		VirtualActionInvoker1< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* >::Invoke(14, L_6, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_7);
		RuntimeObject* L_8 = V_0;
		Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09* L_9 = (Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09*)il2cpp_codegen_object_new(Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09_il2cpp_TypeInfo_var);
		Action_1__ctor_mC0F49DD2F8ED1E95FA4D285BFC8AB8185ACAEA4D(L_9, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 40)), NULL);
		ReusableCollectionItem_add_onDestroy_m409E356FF514F61FFD076178469E829C495DAE01((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_8, L_9, NULL);
	}

IL_0050:
	{
		RuntimeObject* L_10 = V_0;
		VirtualActionInvoker0::Invoke(6, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_10);
		int32_t L_11 = ___0_activeItemIndex;
		V_2 = (bool)((((int32_t)L_11) == ((int32_t)(-1)))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_13 = __this->___m_ActiveItems;
		RuntimeObject* L_14 = V_0;
		List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		goto IL_0085;
	}

IL_0075:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_15 = __this->___m_ActiveItems;
		int32_t L_16 = ___0_activeItemIndex;
		RuntimeObject* L_17 = V_0;
		List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094(L_15, L_16, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
	}

IL_0085:
	{
		int32_t L_18 = ___1_scrollViewIndex;
		V_3 = (bool)((((int32_t)L_18) == ((int32_t)(-1)))? 1 : 0);
		bool L_19 = V_3;
		if (!L_19)
		{
			goto IL_00a8;
		}
	}
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_20 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		RuntimeObject* L_21 = V_0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_22;
		L_22 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_21);
		VisualElement_Add_mE2571CCB23C09103F8732EEC73833683F7236A7F((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_20, L_22, NULL);
		goto IL_00c2;
	}

IL_00a8:
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_23 = ((CollectionVirtualizationController_t55D4B8A3B70A7C50AC8BEF90F18EF888017E7801*)__this)->___m_ScrollView;
		int32_t L_24 = ___1_scrollViewIndex;
		RuntimeObject* L_25 = V_0;
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_26;
		L_26 = VirtualFuncInvoker0< VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* >::Invoke(4, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_25);
		VisualElement_Insert_m95ACF6FC7BCF788C955714E8DADF07FACE5C0031((VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115*)L_23, L_24, L_26, NULL);
	}

IL_00c2:
	{
		RuntimeObject* L_27 = V_0;
		V_4 = L_27;
		goto IL_00c7;
	}

IL_00c7:
	{
		RuntimeObject* L_28 = V_4;
		return L_28;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_ReleaseItem_m1246B549EF5072DDD898308480867E71EEC27874_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, int32_t ___0_activeItemsIndex, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___m_ActiveItems;
		int32_t L_1 = ___0_activeItemsIndex;
		RuntimeObject* L_2;
		L_2 = List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_2;
		RuntimeObject* L_3 = V_0;
		int32_t L_4;
		L_4 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_3, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_4) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_6 = __this->___m_CollectionView;
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_7;
		L_7 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_6, NULL);
		RuntimeObject* L_8 = V_0;
		RuntimeObject* L_9 = V_0;
		int32_t L_10;
		L_10 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline((ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_9, NULL);
		VirtualActionInvoker2< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*, int32_t >::Invoke(16, L_7, (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086*)L_8, L_10);
	}

IL_0047:
	{
		ObjectPool_1_t13378E8CD14858BB05EA28BAB9CC49EDB91BA259* L_11 = __this->___m_Pool;
		RuntimeObject* L_12 = V_0;
		ObjectPool_1_Release_m71F1CADB7AD9CC20BD824583A3675A4260965DB5(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_13 = __this->___m_ActiveItems;
		RuntimeObject* L_14 = V_0;
		bool L_15;
		L_15 = List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7(L_13, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalVirtualizationController_1_OnDestroyItem_m151419DCA568852879B1E73E241819CAD834D85F_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ___0_item, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_CollectionView;
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_1;
		L_1 = BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline(L_0, NULL);
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_2 = ___0_item;
		VirtualActionInvoker1< ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* >::Invoke(17, L_1, L_2);
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_3 = ___0_item;
		Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09* L_4 = (Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09*)il2cpp_codegen_object_new(Action_1_t6043513E89820190529C82ABBDD8FD0BB2A9AC09_il2cpp_TypeInfo_var);
		Action_1__ctor_mC0F49DD2F8ED1E95FA4D285BFC8AB8185ACAEA4D(L_4, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 40)), NULL);
		ReusableCollectionItem_remove_onDestroy_mF9E3F8DCD03F5804E8A886C5D06AA8F945E43097(L_3, L_4, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VerticalVirtualizationController_1_GetDraggedIndex_mD64DED3B14A68F3A59150A7ACFBA2B138F4A7A6A_gshared (VerticalVirtualizationController_1_t9E15DCA430B4BA0FF230AC5A5E026167325EA345* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* L_0 = __this->___m_CollectionView;
		ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* L_1;
		L_1 = BaseVerticalCollectionView_get_dragger_m561975581D087B9C51C90CDFC1D68EE6CECD9446_inline(L_0, NULL);
		V_0 = ((ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5*)IsInstClass((RuntimeObject*)L_1, ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5_il2cpp_TypeInfo_var));
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_3 = V_0;
		bool L_4;
		L_4 = ListViewDraggerAnimated_get_isDragging_mD3F1699680ED7437E060BABDBC817F537AA0EDF4_inline(L_3, NULL);
		G_B3_0 = ((int32_t)(L_4));
		goto IL_001e;
	}

IL_001d:
	{
		G_B3_0 = 0;
	}

IL_001e:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* L_6 = V_0;
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_7;
		L_7 = ListViewDraggerAnimated_get_draggedItem_m883BB528AA8A39239BD882AC45FC24981C45E5EC_inline(L_6, NULL);
		int32_t L_8;
		L_8 = ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline(L_7, NULL);
		V_2 = L_8;
		goto IL_0034;
	}

IL_0030:
	{
		V_2 = (-1);
		goto IL_0034;
	}

IL_0034:
	{
		int32_t L_9 = V_2;
		return L_9;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementScheduledItem_1__ctor_m3183DE9799B58C12B141B2A6E26641C1C7C8223B_gshared (VisualElementScheduledItem_1_tBBBFD9E425D8A2ECE1C614FC867E3D3127B37509* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_handler, RuntimeObject* ___1_upEvent, const RuntimeMethod* method) 
{
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_handler;
		BaseVisualElementScheduledItem__ctor_mB5C5818F39CDC5846487311B47B3A5BEEA840E68((BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A*)__this, L_0, NULL);
		RuntimeObject* L_1 = ___1_upEvent;
		__this->___updateEvent = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___updateEvent), (void*)L_1);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualElementScheduledItem_1__ctor_m2D2983F18BB4C00D47151DC5F5AAF5C6F55124AA_gshared (VisualElementScheduledItem_1_tC55C6DAB31FBA21565DAE09DE6BA236327F029E2* __this, VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___0_handler, Il2CppFullySharedGenericAny ___1_upEvent, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_ActionType_tEF1C91A72186B11FE7B43AAE1C149BA05063A289 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_ActionType_tEF1C91A72186B11FE7B43AAE1C149BA05063A289);
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = ___0_handler;
		BaseVisualElementScheduledItem__ctor_mB5C5818F39CDC5846487311B47B3A5BEEA840E68((BaseVisualElementScheduledItem_t376DB199D747CB803406E18D7605C71CF5051C3A*)__this, L_0, NULL);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 0)) ? ___1_upEvent : &___1_upEvent), SizeOf_ActionType_tEF1C91A72186B11FE7B43AAE1C149BA05063A289);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 1),0), L_1, SizeOf_ActionType_tEF1C91A72186B11FE7B43AAE1C149BA05063A289);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m932665C8861A22B177DC1ACF1EDAA87E1624B5AC_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_target;
		WeakReference_1__ctor_m99141AB321E022D9933448CDD7139BC9FAA443E8(__this, L_0, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m99141AB321E022D9933448CDD7139BC9FAA443E8_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, RuntimeObject* ___0_target, bool ___1_trackResurrection, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		bool L_0 = ___1_trackResurrection;
		__this->___trackResurrection = L_0;
		bool L_1 = ___1_trackResurrection;
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_0 = (int32_t)G_B3_0;
		RuntimeObject* L_2 = ___0_target;
		int32_t L_3 = V_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4;
		L_4 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_2, L_3, NULL);
		__this->___handle = L_4;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1__ctor_m2289DC7F3597E1BA77555086A86F91807FDC96E2_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B5_0 = 0;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		bool L_3;
		L_3 = SerializationInfo_GetBoolean_m8335F8E11B572AB6B5BF85A9355D6888D5847EF5(L_2, _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, NULL);
		__this->___trackResurrection = L_3;
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_4 = ___0_info;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		RuntimeObject* L_7;
		L_7 = SerializationInfo_GetValue_mE6091C2E906E113455D05E734C86F43B8E1D1034(L_4, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, L_6, NULL);
		V_0 = L_7;
		bool L_8 = __this->___trackResurrection;
		if (L_8)
		{
			goto IL_0046;
		}
	}
	{
		G_B5_0 = 0;
		goto IL_0047;
	}

IL_0046:
	{
		G_B5_0 = 1;
	}

IL_0047:
	{
		V_1 = (int32_t)G_B5_0;
		RuntimeObject* L_9 = V_0;
		int32_t L_10 = V_1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_11;
		L_11 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_9, L_10, NULL);
		__this->___handle = L_11;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_GetObjectData_m6F2E12AF126FAE536995F52F9501498BDA5917A7_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___0_info, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___1_context, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_0 = ___0_info;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA7B00F7F25C375B2501A6ADBC86D092B23977085)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_2 = ___0_info;
		bool L_3 = __this->___trackResurrection;
		SerializationInfo_AddValue_mC52253CB19C98F82A26E32C941F8F20E106D4C0D(L_2, _stringLiteral7D20B8219CA0491872B2E811B262066A5DD875A7, L_3, NULL);
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_4 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
		bool L_5;
		L_5 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843(L_4, NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_6 = ___0_info;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_7 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
		RuntimeObject* L_8;
		L_8 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5(L_7, NULL);
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_6, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, L_8, NULL);
		return;
	}

IL_0043:
	{
		SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* L_9 = ___0_info;
		SerializationInfo_AddValue_m28FE9B110F21DDB8FF5F5E35A0EABD659DB22C2F(L_9, _stringLiteral5CA6E7C0AE72196B2817D93A78C719652EC691C0, NULL, NULL);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference_1_Finalize_m22CABA82C1F2B17A77E275483306A0DADECAF151_gshared (WeakReference_1_tED795563AD26F795CED3BBCD488AB1694E385BCE* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000d:
			{
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2((RuntimeObject*)__this, NULL);
				return;
			}
		});
		try
		{
			GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* L_0 = (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC*)(&__this->___handle);
			GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3(L_0, NULL);
			goto IL_0014;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0014:
	{
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mC17BAA23BA92C7455512FDA5B1618C6D2B54ACA2_gshared (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereArrayIterator_1_Clone_m23B21F0E17F85746DFAF09C90772262DF3B707AF_gshared (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* L_2 = (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereArrayIterator_1__ctor_mC17BAA23BA92C7455512FDA5B1618C6D2B54ACA2(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m205D669337F73902F61F7BBFD6165B9005890564_gshared (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_6 = __this->___predicate;
		RuntimeObject* L_7 = V_0;
		bool L_8;
		L_8 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject* L_9 = V_0;
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = __this->___index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = __this->___source;
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m00D679C5996A876F2AF50976C1F93D89F8F42C62_gshared (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___0_predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3;
		L_3 = Enumerable_CombinePredicates_TisRuntimeObject_m613479C29B013E8FC2987E22F42A3BC6CC2C9768(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA* L_4 = (WhereArrayIterator_1_t027D2511F9B69346688FE3E5623EF2BEE81E9FAA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereArrayIterator_1__ctor_mC17BAA23BA92C7455512FDA5B1618C6D2B54ACA2(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mD8BDE04F9897AAED299EE4DC32BF3879F2CBB668_gshared (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereArrayIterator_1_Clone_m1D80001794E47D2DF00A77273FD71D61987E8A44_gshared (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* L_2 = (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m42FC055181A1CDD12BBB46A9EE9ED76C6048BA07_gshared (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	const Il2CppFullySharedGenericAny L_9 = L_4;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	memset(V_0, 0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_7, V_0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, V_0, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),2), L_9, SizeOf_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mB2C59E78355E518D359A6D5035BCD6254337B84E_gshared (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___0_predicate;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = ((  Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* (*) (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6* L_4 = (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereArrayIterator_1_tA7187088CE8DF4724576F6B7F633203C144505F6*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE_gshared (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereEnumerableIterator_1_Clone_mAFEC8AC144406F3887B35086067C91941529099D_gshared (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = __this->___predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_2 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m046EF6284565F4F5AF409A4B5E0B1FB2C7804928_gshared (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		Iterator_1_Dispose_m93D0EFD9DDA495E64D508A05C5065C6AC5C4A3DB((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m2649D49B9944BB42677F9293529BB274537F69C2_gshared (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state = 2;
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_7 = __this->___predicate;
		int32_t L_8 = V_1;
		bool L_9;
		L_9 = Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_10 = V_1;
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current = L_10;
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___enumerator;
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m778E7EFD3E0BB0A2A0BE3B4898FB24EAA000FDC1_gshared (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = __this->___predicate;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_2 = ___0_predicate;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_3;
		L_3 = Enumerable_CombinePredicates_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6E21210FBAD8C39907D331F6A3BE2E5409690ED0(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_4 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereEnumerableIterator_1_Clone_m25DBF44FABBFE76AB4314BD7F62334FE2A74F5CA_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_2 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m7EB3C00CC0ED06056CF70FE322BF44A93F0C4136_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		Iterator_1_Dispose_m953BCF886C8A63456821023DBA45EBD9AC44EB07((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m7F8C3A8E4FC2835971FF35C1F4C51A061483BEDD_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state = 2;
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5);
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate;
		RuntimeObject* L_8 = V_1;
		bool L_9;
		L_9 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = __this->___enumerator;
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m48ED4EDDA686615E779F1400A17479B243C85100_gshared (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___0_predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3;
		L_3 = Enumerable_CombinePredicates_TisRuntimeObject_m613479C29B013E8FC2987E22F42A3BC6CC2C9768(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_4 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2DD2BB86C5517EDD8C051BBF8CE38C43D712A8D6_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereEnumerableIterator_1_Clone_m0317D203B88386A9A479C72FA9D62763FD0A91D3_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_2 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m2583FECFDC8EDFE66C959C7C386F99E287C5763E_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), (RuntimeObject*)NULL);
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m1A18D4050C069B6C4310DAB9857281E37DCB2C69_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	const Il2CppFullySharedGenericAny L_10 = L_6;
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	memset(V_1, 0, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1), 2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 7), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_10, V_1, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),2), L_10, SizeOf_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mC623267514B4299E409A01161DBBDA5362CEDFC2_gshared (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___0_predicate;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = ((  Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* (*) (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_4 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mEF8F62B9078E538C1DC46BCB876C2AC5B29EA73B_gshared (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereListIterator_1_Clone_mB7087945B135AFA9D70F30479082AD370DDDB66A_gshared (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* L_2 = (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereListIterator_1__ctor_mEF8F62B9078E538C1DC46BCB876C2AC5B29EA73B(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mEE70CAE79424880884D3CD6947167DEDB297FB47_gshared (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = __this->___source;
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____current), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state = 2;
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate;
		RuntimeObject* L_8 = V_1;
		bool L_9;
		L_9 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject* L_10 = V_1;
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_11 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator);
		bool L_12;
		L_12 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mD1D1F307DE1E555A5F7237BCA2C32947BCF6A14D_gshared (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___0_predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3;
		L_3 = Enumerable_CombinePredicates_TisRuntimeObject_m613479C29B013E8FC2987E22F42A3BC6CC2C9768(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB* L_4 = (WhereListIterator_1_t1F40F08BAF8586F2C09294085BC605CC2FA432EB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereListIterator_1__ctor_mEF8F62B9078E538C1DC46BCB876C2AC5B29EA73B(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_mC075454926AF320E4679335A1B81D3F56ACEFC0C_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereListIterator_1_Clone_mAA3ED56493E5FF2F49FE37EB7CDF6C0A957698B5_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* L_2 = (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mB5E4EB089AD8CF7156B8972C7FB61739C466ED5E_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const uint32_t SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	const Il2CppFullySharedGenericAny L_9 = L_5;
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	memset(V_1, 0, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_4, SizeOf_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),1), 2);
		goto IL_004e;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_7, V_1, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		bool L_8;
		L_8 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11)) ? L_7: *(void**)L_7));
		if (!L_8)
		{
			goto IL_004e;
		}
	}
	{
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6),2), L_9, SizeOf_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956);
		return (bool)1;
	}

IL_004e:
	{
		bool L_10;
		L_10 = ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2)))), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (L_10)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mC767815DE2249E70B38D6D172A0C61B028D7A44B_gshared (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_2 = ___0_predicate;
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_3;
		L_3 = ((  Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* (*) (Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0* L_4 = (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereListIterator_1_tD37742ECD2F53395BA8B668C2671C4C82E8E85F0*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_4, L_0, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		return (RuntimeObject*)L_4;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mA5AF3B283A737C737C53F5DB1B4DA4CA9B682003_gshared (WhereSelectArrayIterator_2_t250814D5FF34B1F8B88A5E8334436BB633B7B29F* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectArrayIterator_2_Clone_m8C792A51CA247F98A02981FF4012268F569521E3_gshared (WhereSelectArrayIterator_2_t250814D5FF34B1F8B88A5E8334436BB633B7B29F* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___source;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = __this->___predicate;
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_t250814D5FF34B1F8B88A5E8334436BB633B7B29F* L_3 = (WhereSelectArrayIterator_2_t250814D5FF34B1F8B88A5E8334436BB633B7B29F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_mA5AF3B283A737C737C53F5DB1B4DA4CA9B682003(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m5EC62B5404A4E884D74BA4308DBEC2E2A1ECCFDE_gshared (WhereSelectArrayIterator_2_t250814D5FF34B1F8B88A5E8334436BB633B7B29F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_7 = __this->___predicate;
		int32_t L_8 = V_0;
		bool L_9;
		L_9 = Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_10 = __this->___selector;
		int32_t L_11 = V_0;
		int32_t L_12;
		L_12 = Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current = L_12;
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->___source;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mF0C74EFB57C1E84DDC5D33232715B110348B6A21_gshared (WhereSelectArrayIterator_2_t250814D5FF34B1F8B88A5E8334436BB633B7B29F* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m04357D1A96A8C4B96BD7145021AE39DD2C9F2A41_gshared (WhereSelectArrayIterator_2_t562C68C2C77B3AA5A84BBA4A0B21DB823E66B703* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectArrayIterator_2_Clone_m16E741269BE3A7B4433982BC91570D271F7E5596_gshared (WhereSelectArrayIterator_2_t562C68C2C77B3AA5A84BBA4A0B21DB823E66B703* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_t562C68C2C77B3AA5A84BBA4A0B21DB823E66B703* L_3 = (WhereSelectArrayIterator_2_t562C68C2C77B3AA5A84BBA4A0B21DB823E66B703*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m04357D1A96A8C4B96BD7145021AE39DD2C9F2A41(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mC860F5837EEE113DBAE2259DF696D9A8FA2F0DFA_gshared (WhereSelectArrayIterator_2_t562C68C2C77B3AA5A84BBA4A0B21DB823E66B703* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = ((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate;
		RuntimeObject* L_8 = V_0;
		bool L_9;
		L_9 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_10 = __this->___selector;
		RuntimeObject* L_11 = V_0;
		int32_t L_12;
		L_12 = Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current = L_12;
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->___source;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m024D09309EC9944FE71020A6CAC6F766910A7B5B_gshared (WhereSelectArrayIterator_2_t562C68C2C77B3AA5A84BBA4A0B21DB823E66B703* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m3660F197ECE4BF2A6F8BC99BC8BEF585C9D7BF97_gshared (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectArrayIterator_2_Clone_mDABFA8CCAFDC157CCF8428160F29DA90F22FCBD0_gshared (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* __this, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* L_3 = (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_m3660F197ECE4BF2A6F8BC99BC8BEF585C9D7BF97(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m4A8194EF96624D7C6656C87F6058990E389F6290_gshared (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate;
		RuntimeObject* L_8 = V_0;
		bool L_9;
		L_9 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_10 = __this->___selector;
		RuntimeObject* L_11 = V_0;
		RuntimeObject* L_12;
		L_12 = Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->___source;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m14341A500E696138BE1356922F31FA3E16E131D7_gshared (WhereSelectArrayIterator_2_tC80EB6F425911E71B4D4712B7DA01244DF6E7C58* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mCFDF5484DEE46045B320C928B40C1DB170ED7221_gshared (WhereSelectArrayIterator_2_t0565EB3033FAD927C35E0B8525D2ABB0F1FECB40* __this, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectArrayIterator_2_Clone_mE692EDCE0B99BC732F4CACD51F11BE1EEE374A81_gshared (WhereSelectArrayIterator_2_t0565EB3033FAD927C35E0B8525D2ABB0F1FECB40* __this, const RuntimeMethod* method) 
{
	{
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_0 = __this->___source;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = __this->___predicate;
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_t0565EB3033FAD927C35E0B8525D2ABB0F1FECB40* L_3 = (WhereSelectArrayIterator_2_t0565EB3033FAD927C35E0B8525D2ABB0F1FECB40*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_mCFDF5484DEE46045B320C928B40C1DB170ED7221(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mBD5F957C9042812D79CBE41A404B4B1877D9B57B_gshared (WhereSelectArrayIterator_2_t0565EB3033FAD927C35E0B8525D2ABB0F1FECB40* __this, const RuntimeMethod* method) 
{
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		int32_t L_3 = L_2;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = __this->___predicate;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_8 = V_0;
		bool L_9;
		L_9 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_10 = __this->___selector;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_11 = V_0;
		int32_t L_12;
		L_12 = Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current = L_12;
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_14 = __this->___source;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m91E5F85357F179E8A1AD355DF734DE64669E6208_gshared (WhereSelectArrayIterator_2_t0565EB3033FAD927C35E0B8525D2ABB0F1FECB40* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mC246DFE6E89D80A80900F10D492E7093FF349C47_gshared (WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB* __this, StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectArrayIterator_2_Clone_mC58B097CD37B6E685B1E0FCBEBA7A4090AC38B1C_gshared (WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB* __this, const RuntimeMethod* method) 
{
	{
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_0 = __this->___source;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = __this->___predicate;
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = __this->___selector;
		WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB* L_3 = (WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectArrayIterator_2__ctor_mC246DFE6E89D80A80900F10D492E7093FF349C47(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m7DECB795E90F03B26EED3D176C5AE451F79FFB70_gshared (WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB* __this, const RuntimeMethod* method) 
{
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_1 = __this->___source;
		int32_t L_2 = __this->___index;
		int32_t L_3 = L_2;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		int32_t L_5 = __this->___index;
		__this->___index = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_6 = __this->___predicate;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = __this->___predicate;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_8 = V_0;
		bool L_9;
		L_9 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_10 = __this->___selector;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_11 = V_0;
		RuntimeObject* L_12;
		L_12 = Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_inline(L_10, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = __this->___index;
		StyleSelectorPartU5BU5D_tBA574FB3E75E94E52874FDB7B05B9048E8A5421B* L_14 = __this->___source;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mB937F9BD8E5AD7BE8381B407B28D772D3323B4B3_gshared (WhereSelectArrayIterator_2_tF795401649F680CCD3CB35E5CF5B073D7D6B03CB* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mB15DB27A8DC3B4E00BCA6E8F63F00F7E374F76A4_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectArrayIterator_2_Clone_mFBF81AE0E2B6F7A7A79FC98398E7A6AC0FD330E9_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* L_3 = (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mEF7E8E7B117D6D1147C53CAE838836974171392C_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const uint32_t SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 11));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	const Il2CppFullySharedGenericAny L_8 = L_4;
	const Il2CppFullySharedGenericAny L_11 = L_4;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	memset(V_0, 0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		int32_t L_2 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAtUnchecked(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		il2cpp_codegen_memcpy(V_0, L_4, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		int32_t L_5 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), ((int32_t)il2cpp_codegen_add(L_5, 1)));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_TSource_t21BF09076F270DC063711DE3ABB52B001A331F78);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t278B55150BC17BB45D33B605F011F4D96EFE5425);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = *(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mD81DB59B1D07BC8DDB099A652B22BA9C1538D7A3_gshared (WhereSelectArrayIterator_2_tBE026CE497BB8F36E31685722BBD7CB567570174* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 14));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 15)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m96BAED87987DAE93B4E6887AE45943A3E21D4E13_gshared (WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D* __this, RuntimeObject* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectEnumerableIterator_2_Clone_mC7E56BD61B2455925C350C460F2649317EA766E7_gshared (WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = __this->___predicate;
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D* L_3 = (WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m96BAED87987DAE93B4E6887AE45943A3E21D4E13(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m8E1E6EC7D7A52BC4CCF587115E0C3DEDB1D68D09_gshared (WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		Iterator_1_Dispose_m93D0EFD9DDA495E64D508A05C5065C6AC5C4A3DB((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mAFA6BD49EF447B55B348AE2F161C05BFE92FC7F6_gshared (WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_8 = __this->___predicate;
		int32_t L_9 = V_1;
		bool L_10;
		L_10 = Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_11 = __this->___selector;
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mCA64407851D78E9202A2FF794D8B0AFA724F8263_gshared (WhereSelectEnumerableIterator_2_tB03350F7AB4B216F4FAF54A3032ACA3E746AF29D* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m7BBD99849FABDA48F6D93BCE742C5B8398B5409F_gshared (WhereSelectEnumerableIterator_2_t7BA7CE7768E39319636272B29292281AB152E7D6* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectEnumerableIterator_2_Clone_m4B36594513DB9C2DBA924AAF739AC72A69AB27D8_gshared (WhereSelectEnumerableIterator_2_t7BA7CE7768E39319636272B29292281AB152E7D6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_t7BA7CE7768E39319636272B29292281AB152E7D6* L_3 = (WhereSelectEnumerableIterator_2_t7BA7CE7768E39319636272B29292281AB152E7D6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m7BBD99849FABDA48F6D93BCE742C5B8398B5409F(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mC12A42F6C76D71F9AFF6E1DEAE90F894570F25B9_gshared (WhereSelectEnumerableIterator_2_t7BA7CE7768E39319636272B29292281AB152E7D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		Iterator_1_Dispose_m93D0EFD9DDA495E64D508A05C5065C6AC5C4A3DB((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mC431839D47615578A26F4BA58347C3DDD142D7DA_gshared (WhereSelectEnumerableIterator_2_t7BA7CE7768E39319636272B29292281AB152E7D6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = __this->___predicate;
		RuntimeObject* L_9 = V_1;
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_11 = __this->___selector;
		RuntimeObject* L_12 = V_1;
		int32_t L_13;
		L_13 = Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m2B6930F0E1F6019D3862F399109622D7D0877D6F_gshared (WhereSelectEnumerableIterator_2_t7BA7CE7768E39319636272B29292281AB152E7D6* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m2E08505C4CB96CC2AD340B4A2B0D3BF0D6DA01F9_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectEnumerableIterator_2_Clone_m2ED927CF2549A759AE2454F97E33F05FA19B552E_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* L_3 = (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m2E08505C4CB96CC2AD340B4A2B0D3BF0D6DA01F9(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mD2A476DDFBA6E23D20625E4C1C35AC98DE5F19F2_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		Iterator_1_Dispose_m953BCF886C8A63456821023DBA45EBD9AC44EB07((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mC68F6626ADFD57493351521CE15400BBD158BC68_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = __this->___predicate;
		RuntimeObject* L_9 = V_1;
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = __this->___selector;
		RuntimeObject* L_12 = V_1;
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mA93AACD32DB1D01903967A4CD1F5D74E84AA5F96_gshared (WhereSelectEnumerableIterator_2_t585674E4C2106F965D6B51B3B1068924FC97CE0F* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m646AB1CCB6D9D0F7262BFB41A4D35C6C14C6A4D2_gshared (WhereSelectEnumerableIterator_2_tDD70C727530B3DBADEB387A0E353F5F829380BF9* __this, RuntimeObject* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectEnumerableIterator_2_Clone_mD30F529FA8B647CBBA40A65D23303FEF34EE1894_gshared (WhereSelectEnumerableIterator_2_tDD70C727530B3DBADEB387A0E353F5F829380BF9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = __this->___predicate;
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_tDD70C727530B3DBADEB387A0E353F5F829380BF9* L_3 = (WhereSelectEnumerableIterator_2_tDD70C727530B3DBADEB387A0E353F5F829380BF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m646AB1CCB6D9D0F7262BFB41A4D35C6C14C6A4D2(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m1B072DB2262D5BCCC2AC1631021D83B762BB9FEB_gshared (WhereSelectEnumerableIterator_2_tDD70C727530B3DBADEB387A0E353F5F829380BF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		Iterator_1_Dispose_m93D0EFD9DDA495E64D508A05C5065C6AC5C4A3DB((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m0A34BD808DE51E67A332F51F39948D36D06D9CC5_gshared (WhereSelectEnumerableIterator_2_tDD70C727530B3DBADEB387A0E353F5F829380BF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = InterfaceFuncInvoker0< StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = __this->___predicate;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_11 = __this->___selector;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		int32_t L_13;
		L_13 = Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mC57788BE1F1B0BD7D1D2FCAF01EC182D83C0906E_gshared (WhereSelectEnumerableIterator_2_tDD70C727530B3DBADEB387A0E353F5F829380BF9* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m67E0676B846F7D5D13322DFE2366E000F49CCE01_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, RuntimeObject* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectEnumerableIterator_2_Clone_m79D0125A1A65347F4522C73EA7D684850A856150_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___source;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = __this->___predicate;
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = __this->___selector;
		WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* L_3 = (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectEnumerableIterator_2__ctor_m67E0676B846F7D5D13322DFE2366E000F49CCE01(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m4059A77B770FEFC2E069A60DF9EE649B4D3C4DE5_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___enumerator;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = __this->___enumerator;
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->___enumerator = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)(RuntimeObject*)NULL);
		Iterator_1_Dispose_m953BCF886C8A63456821023DBA45EBD9AC44EB07((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mF9058AE915E95BB4D1B6852E177B962E5C72041C_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = __this->___source;
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator), (void*)L_4);
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = __this->___enumerator;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = InterfaceFuncInvoker0< StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5);
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = __this->___predicate;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_11 = __this->___selector;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = __this->___enumerator;
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m7F40A08064DE17F179D3D40D6F7D38500D7167FE_gshared (WhereSelectEnumerableIterator_2_tE9E39B5B3920248DC542D84A8CFB82C524F6E586* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m9A4AF54DC527FA1CEF8B803C8DDA5E632838B06F_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, RuntimeObject* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectEnumerableIterator_2_Clone_mD773B8B24D1459B11BA4462A6DD68865514ADC9E_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* L_3 = (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m640FAC111BC786414B40480BB03E4F84B2FFB179_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), (RuntimeObject*)NULL);
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mB384EFAF6366166F28EDFDBA272EEC1089E1A115_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	const Il2CppFullySharedGenericAny L_9 = L_6;
	const Il2CppFullySharedGenericAny L_12 = L_6;
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	memset(V_1, 0, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_3);
		il2cpp_codegen_write_instance_field_data<RuntimeObject*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), L_4);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy(V_1, L_6, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_8 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_9, V_1, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		bool L_10;
		L_10 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_9: *(void**)L_9));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_11 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_12, V_1, SizeOf_TSource_t5B0D27614F68D07DB050466831DEDC1DDEFFC093);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_12: *(void**)L_12), (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_13, SizeOf_TResult_t33CDF94D13BEBA6908E84F958D63A95F7466E520);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = *(RuntimeObject**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3));
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_mB8ACBBFA48460E67B18647EF16E6EE4D0BE08679_gshared (WhereSelectEnumerableIterator_2_t1FBA58379B31F544881FB4C45B2D102F32A71E1C* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 17));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 18)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m42B6E206A0E398E45DA94F8109B58ACE1749F6A4_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___0_source, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___1_predicate, Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m89B70C1B596662479F7844116D9B99FE501BFD84_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, const RuntimeMethod* method) 
{
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_0 = __this->___source;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_1 = __this->___predicate;
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_2 = __this->___selector;
		WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* L_3 = (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m42B6E206A0E398E45DA94F8109B58ACE1749F6A4(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mA4673028DAC84866E54385B22CBEFC22D92BC9CD_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3 = __this->___source;
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_4;
		L_4 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_5 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator);
		int32_t L_6;
		L_6 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_8 = __this->___predicate;
		int32_t L_9 = V_1;
		bool L_10;
		L_10 = Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* L_11 = __this->___selector;
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* L_14 = (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m2B1D8127CD81AE6BA9FA935CA573327EACB64820_gshared (WhereSelectListIterator_2_t770A927BE7E150C131946093084804F846AF241A* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_m62045FC9E5DDF7C34F754695E9EBF13C4326DCE8_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_2 = __this->___selector;
		WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* L_3 = (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m5658691CD6D5E52B8CB4D7BF7728DF1A36AD99BF(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE97A1BC013242BE83F2417B94F433533ECA0BE17_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = __this->___source;
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____current), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = __this->___predicate;
		RuntimeObject* L_9 = V_1;
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* L_11 = __this->___selector;
		RuntimeObject* L_12 = V_1;
		int32_t L_13;
		L_13 = Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m3FE0D83DC912C8134BC2E276A0BBBF78E7CCDFF2_gshared (WhereSelectListIterator_2_tFA8E9A90E251C243AA65C041D7421667E9920343* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_mF22589DABD608C024E039C0F5DE9F457967EC3E8_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = __this->___source;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = __this->___predicate;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = __this->___selector;
		WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* L_3 = (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m9CC6A34DCA0012E593221AFBACC4F20664BD876A(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m4609B745A7644E640F319C2651F1A97C2D304458_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = __this->___source;
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_4;
		L_4 = List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____current), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_5 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator);
		RuntimeObject* L_6;
		L_6 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_8 = __this->___predicate;
		RuntimeObject* L_9 = V_1;
		bool L_10;
		L_10 = Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_11 = __this->___selector;
		RuntimeObject* L_12 = V_1;
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* L_14 = (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA37F84C07852A5760237B9A50C373846A6528477_gshared (WhereSelectListIterator_2_tC97775A217B6CD43A5FD2A085EE12720F7C3808A* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m426D8BD95B00FDA5C5E8FAE956FCB74E54BC7CC7((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07* WhereSelectListIterator_2_Clone_mD7DFE8C6AD3458E99FCBEA0751FF7C4043732CD4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = __this->___source;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = __this->___predicate;
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_2 = __this->___selector;
		WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* L_3 = (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m6D88E3712F21C182AA3200920A4231559C7E8C64(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m2F302C62B7FF8D42DDE74A666313CDC858137AC4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = __this->___source;
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___m_Value), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___tempData), (void*)NULL);
		#endif
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = __this->___predicate;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* L_11 = __this->___selector;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		int32_t L_13;
		L_13 = Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tCCB165DB1184FCEC531345224E55B98DDF04BD07*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m98B6BE2F15454CBA305692F230C66425836665F4_gshared (WhereSelectListIterator_2_tB360A4830EF7E0F0829573AE66B167A7996E0E52* __this, Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A* L_1 = (WhereEnumerableIterator_1_t5DBA717695B8C7E60489C86AEB1FF673F50E293A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_mA7F4C6508A043D99B8288E43867D576F4697E4EE(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* ___0_source, Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* ___1_predicate, Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* ___2_selector, const RuntimeMethod* method) 
{
	{
		Iterator_1__ctor_m3E47867714E05673E54C6B73D9242F5FFADA1F63((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA* WhereSelectListIterator_2_Clone_m6D285DDC28CFAF8BDCF8C2ED06F9982D33D0342A_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_0 = __this->___source;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_1 = __this->___predicate;
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_2 = __this->___selector;
		WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* L_3 = (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		WhereSelectListIterator_2__ctor_m15AA54F3B60B64CEFB048CD88E3A1BD06AC2C62E(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m9DBE2E1EDA00E9EBE1A6E90D5DA81A39E1CEBF37_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t85FF16594D5F70EECC5855882558F8E26EF6BAFF* L_3 = __this->___source;
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F L_4;
		L_4 = List_1_GetEnumerator_m171CCAFC24F3096494C02B26FB8B10C408952751(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___m_Value), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___tempData), (void*)NULL);
		#endif
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_5 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator);
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_6;
		L_6 = Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		V_1 = L_6;
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* L_8 = __this->___predicate;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_9 = V_1;
		bool L_10;
		L_10 = Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_inline(L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* L_11 = __this->___selector;
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_12 = V_1;
		RuntimeObject* L_13;
		L_13 = Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_inline(L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* L_14 = (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6A369A40774C06803D46E3D1DBA2874ECFF63E9E(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t99A1802EE86A3D5BF71B2DDB37F159C4AFA448EA*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mE0E3E8BE8176B317F5FF0D03313F7D4DFE68681E_gshared (WhereSelectListIterator_2_t60681EEE1A6CB8E9C8EE807AA2E2BDA68B9B6989* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4* L_1 = (WhereEnumerableIterator_1_t1E787D13759F5A31C94B3FAED181402B25C278F4*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		WhereEnumerableIterator_1__ctor_m8C0DA4CDA5431C03561F67C4393BB18CDD891F01(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m6BFCBB5460270ED1896D24DC7E3B83F4950D2140_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* ___0_source, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___1_predicate, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* ___2_selector, const RuntimeMethod* method) 
{
	{
		((  void (*) (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = ___0_source;
		il2cpp_codegen_write_instance_field_data<List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0), L_0);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = ___1_predicate;
		il2cpp_codegen_write_instance_field_data<Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1), L_1);
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = ___2_selector;
		il2cpp_codegen_write_instance_field_data<Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2), L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0* WhereSelectListIterator_2_Clone_m8EC8E684FFDC3BC579DF37C08993B7F80966639D_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_0 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_1 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_2 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* L_3 = (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		((  void (*) (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336*, List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		return (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBB81EEF5DFFEBDDB1AC24116FAD1D13505525569_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12));
	const uint32_t SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 9));
	const uint32_t SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 15));
	const Il2CppFullySharedGenericAny L_5 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	const Il2CppFullySharedGenericAny L_8 = L_5;
	const Il2CppFullySharedGenericAny L_11 = L_5;
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
	const Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF L_4 = alloca(SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	memset(V_1, 0, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = *(List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),0));
		InvokerActionInvoker1< Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)), il2cpp_rgctx_method(method->klass->rgctx_data, 8), L_3, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)L_4);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3), L_4, SizeOf_Enumerator_t8A622325AF1352D3AB0ECDBB45A0AFB7AF959716);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),1), 2);
		goto IL_0061;
	}

IL_002b:
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)), il2cpp_rgctx_method(method->klass->rgctx_data, 10), (((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), (Il2CppFullySharedGenericAny*)L_5);
		il2cpp_codegen_memcpy(V_1, L_5, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_6 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		if (!L_6)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_7 = *(Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),1));
		il2cpp_codegen_memcpy(L_8, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		bool L_9;
		L_9 = InvokerFuncInvoker1< bool, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)), il2cpp_rgctx_method(method->klass->rgctx_data, 13), L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_8: *(void**)L_8));
		if (!L_9)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0* L_10 = *(Func_2_t7F5F5324CE2DDB7001B68FFE29A5D9F907139FB0**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),2));
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_TSource_tEB7490DB2885922B8C60E28873F5DB811BD9CEB3);
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), L_10, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 12)) ? L_11: *(void**)L_11), (Il2CppFullySharedGenericAny*)L_12);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 7),2), L_12, SizeOf_TResult_t11AC9139084FDCB528CAF75FE5166467D3329A05);
		return (bool)1;
	}

IL_0061:
	{
		bool L_13;
		L_13 = ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 16)))((((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 3),3)))), il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		if (L_13)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t0F1D8198E840368AC82131EC1FF03EB76BCE73B0*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1739BDD134D3AF5A55DBB06AEE130B0C58E47014_gshared (WhereSelectListIterator_2_t86EE6817E8A1706688C6D82D82C9D44BC99CC336* __this, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* ___0_predicate, const RuntimeMethod* method) 
{
	{
		Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B* L_1 = (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 19));
		((  void (*) (WhereEnumerableIterator_1_t8B24528558F527941435C4FE1D046216FE4F277B*, RuntimeObject*, Func_2_t19E50C11C3E1F20B5A8FDB85D7DD353B6DFF868B*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 20)))(L_1, (RuntimeObject*)__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 20));
		return (RuntimeObject*)L_1;
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
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* currentDelegate = reinterpret_cast<WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic(WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m630834333CB7AE51AB01F7713157EE57991D03D7_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mE86A5384298CF3DF2344D386DC4CA589E42DE399_gshared (WriteDelegate_t6A0EB21668C92D873ACB875924DE54518D8B7234* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* currentDelegate = reinterpret_cast<WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic(WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m2AA9BE88F67A2DA68720D6B5F2AFFA89E23BB597_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86BA7048E52732500448764B50B058BBB1AB029A_gshared (WriteDelegate_t737D0DA8D96562AD76BB67D9C5A5199EDB0171E1* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* currentDelegate = reinterpret_cast<WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic(WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m4F33ED7C62B9E61B33CC81A7B5C739D0396BC209_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m6DAF352FCBE9E4A508A3AB7056209E9DEDCE6ACC_gshared (WriteDelegate_t907C2DAF3A619B832C6D9441AF1C4CDA7914AF1D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* currentDelegate = reinterpret_cast<WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic(WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m1067E857FEE330354C23F3DB8C7B30143BCA679D_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mDCBB3FCC716BDB01FBB6A93055CB254FEFF466CA_gshared (WriteDelegate_tE9F20B5E1A664D239EFDD91143B963A216AAB1C7* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* currentDelegate = reinterpret_cast<WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic(WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mC9073752A9F993A89037EB0FCF8968BCB14AE3A3_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m78604525C7D756C919B71D80FE8B7C42684A0F60_gshared (WriteDelegate_t023838BBDB83C818E9FDC98ABFA9A9396823E789* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* currentDelegate = reinterpret_cast<WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic(WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mAA1CB4066F7346F24DA38ED5A1240309F0C4BC60_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m86B402A7CEAB3ADDAB046D1975023F53BFB4E878_gshared (WriteDelegate_t98EF2EAAD5827503FF2F0213C32A4961968D75A0* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* ___0_val, int32_t ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376*, int32_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* currentDelegate = reinterpret_cast<WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic(WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr)(___0_val, ___1_fieldValue, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_m6165AFE856EC0CC9CDE8A145B404312481261696_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenStatic;
		else
			{
				__this->___invoke_impl = __this->___method_ptr;
				__this->___method_code = (intptr_t)__this->___m_target;
			}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_OpenInst;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = __this->___method_ptr;
			__this->___method_code = (intptr_t)__this->___m_target;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_mCB317932D29E39DF2768AD06B5DA7A84CD3A2C16_gshared (WriteDelegate_t055D02BADD3A5DFA009116D80BC93C235313CAE8* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* ___0_val, float ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* currentDelegate = reinterpret_cast<WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl)((Il2CppObject*)currentDelegate->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method));
	}
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, NULL, __this->___m_target, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker2< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, __this->___m_target, ___0_val, ___1_fieldValue);
}
void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker(WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method)
{
	InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke((Il2CppMethodPointer)__this->___method_ptr, method, ___0_val, ___1_fieldValue);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate__ctor_mCE6F306923A685DD2E41E1BAABB666E0F7B4E137_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr = (intptr_t)il2cpp_codegen_get_method_pointer((RuntimeMethod*)___1_method);
	__this->___method = ___1_method;
	__this->___m_target = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (isOpen)
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenStaticInvoker;
		else
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedStaticInvoker;
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_OpenInstInvoker;
		}
		else
		{
			if (___0_object == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_ClosedInstInvoker;
		}
	}
	__this->___extra_arg = (intptr_t)&WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_Multicast;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriteDelegate_Invoke_m314AB1F8889F277917B21F5F09093D797490FE93_gshared (WriteDelegate_tCC7EDE8329D3D4B81ABF643CABCC600B2CC335D7* __this, Il2CppFullySharedGenericAny* ___0_val, Il2CppFullySharedGenericAny ___1_fieldValue, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_val, ___1_fieldValue, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Double_GetHashCode_m3761FC05AD24D97A68FA1E8412A9454DF3880E32_inline (double* __this, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		double L_0 = *((double*)__this);
		int64_t L_1;
		L_1 = BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline(L_0, NULL);
		V_0 = L_1;
		int64_t L_2 = V_0;
		if ((((int64_t)((int64_t)(((int64_t)il2cpp_codegen_subtract(L_2, ((int64_t)1)))&((int64_t)(std::numeric_limits<int64_t>::max)())))) < ((int64_t)((int64_t)9218868437227405312LL))))
		{
			goto IL_002d;
		}
	}
	{
		int64_t L_3 = V_0;
		V_0 = ((int64_t)(L_3&((int64_t)9218868437227405312LL)));
	}

IL_002d:
	{
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		return ((int32_t)(((int32_t)L_4)^((int32_t)((int64_t)(L_5>>((int32_t)32))))));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NumberFormatInfo_get_NumberGroupSeparator_m0556B092AA471513B1EDC31C047712226D39BEB6_inline (NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___numberGroupSeparator;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline (const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		*((int8_t*)((uintptr_t)(&V_0))) = (int8_t)((int32_t)255);
		uint8_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline (const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
		V_0 = (int8_t)0;
		*((int8_t*)((uintptr_t)(&V_0))) = (int8_t)(-1);
		int8_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		V_0 = (uint16_t)0;
		*((int16_t*)((uintptr_t)(&V_0))) = (int16_t)((int32_t)65535);
		uint16_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline (const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		V_0 = (int16_t)0;
		*((int16_t*)((uintptr_t)(&V_0))) = (int16_t)(-1);
		int16_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline (const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		V_0 = 0;
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		uint32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		int32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		uint64_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline (const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		int64_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline (const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		float L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline (const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		V_0 = (0.0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		double L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* BaseVerticalCollectionView_get_viewController_m31FB4608049318BAFF48CA9C922797A0CA59264F_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) 
{
	{
		CollectionViewController_t89D7C4989B72B4127DF82DC97FED5D7FE01D9768* L_0 = __this->___m_ViewController;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float BaseVerticalCollectionView_get_lastHeight_mEDABF6845E379DCA0216106F56FAF84B952DA1F2_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___m_LastHeight;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* BaseVerticalCollectionView_get_scrollView_mB4F44C6276CC57A0D8AD030F3C396650532E83CC_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) 
{
	{
		ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* L_0 = __this->___m_ScrollView;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReusableCollectionItem_get_index_m39FCB0A8975CC57CBF964AB494B171CCA507CCB0_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CindexU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ReusableCollectionItem_get_isDragGhost_m3D932E557A3B750E12C3D6406B0DB52C6D63513F_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CisDragGhostU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReusableCollectionItem_set_index_mBE6E436EF78A151186FE66E59E1F032B653BBF1E_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CindexU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ReusableCollectionItem_get_id_m765F123306544777F8B1E273AFB8A0A1E94C4857_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CidU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ReusableCollectionItem_set_id_m681AB8AB77EE8E8E0B0105C0955B7BCF1FBDE1B7_inline (ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___U3CidU3Ek__BackingField = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ScrollView_get_contentViewport_mC91CCE63C249B77A5D192BEBC9C600C212C724B8_inline (ScrollView_t7CE209084E084FAA0E8DF3CD8E3B8BB9EB27E8D9* __this, const RuntimeMethod* method) 
{
	{
		VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* L_0 = __this->___U3CcontentViewportU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 VisualElement_get_hierarchy_m2E897DE4CFD349E65CFA38EFF6BAAFECE2F4E3E4_inline (VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* __this, const RuntimeMethod* method) 
{
	{
		Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 L_0 = __this->___U3ChierarchyU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* BaseVerticalCollectionView_get_dragger_m561975581D087B9C51C90CDFC1D68EE6CECD9446_inline (BaseVerticalCollectionView_t2BCDC86B9E301E46CFB2500A834D640F0B96ADAE* __this, const RuntimeMethod* method) 
{
	{
		ListViewDragger_t692E8911568C27949D7B443C4B82CB7925111BBD* L_0 = __this->___m_Dragger;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool ListViewDraggerAnimated_get_isDragging_mD3F1699680ED7437E060BABDBC817F537AA0EDF4_inline (ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CisDraggingU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* ListViewDraggerAnimated_get_draggedItem_m883BB528AA8A39239BD882AC45FC24981C45E5EC_inline (ListViewDraggerAnimated_t819F6A24CE088841BF9410C14EDE598E9237EBA5* __this, const RuntimeMethod* method) 
{
	{
		ReusableCollectionItem_t58A07E0E19A545B24DBE7711A46490EF5E239086* L_0 = __this->___m_Item;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_Equals_m1D6500596F9B825F39D474A32D7A6D5E14E22B8F_gshared_inline (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_obj;
		if (((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = ___0_obj;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		bool L_2;
		L_2 = ((  bool (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)))(__this, ((*(Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*)((Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*)(Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2*)UnBox(L_1, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
	}
	{
		int32_t L_1 = __this->____size;
		V_0 = L_1;
		__this->____size = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____items;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_mF6795DE5F49C1D0B91D6A0955F448B22970D67A9_gshared_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		goto IL_0035;
	}

IL_0035:
	{
		__this->____size = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items;
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		List_1_AddWithResize_m79A9BF770BEF9C06BE40D5401E55E375F2726CC4(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m2014423FB900F135C8FF994125604FF9E6AAE829_gshared_inline (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m1543D7041BADF87D1F63EBF838B0DDCB40340C7E_gshared_inline (Func_2_t63A057E8762189D8C22BF71360D00C1047680DFA* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m1F8EE2DF137BE5132901C0297848BC7A373A676B_gshared_inline (Func_2_t2FDA873D8482C79555CFB05233D610E8F1C7C354* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m5216F6C7BCECCCED81384876C2968E0D4358618B_gshared_inline (Func_2_t9A0D493A82DCC47C9C819A3B045E02D9B5DDCE1B* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m7C54973F594216484A4F81A59CDF821AF554339D_gshared_inline (Func_2_t7E7216694EE7A991563EC30D68D86C597BF2A56A* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_m57961B138A397ADAB0DC71E56519ADBD63327D27_gshared_inline (Func_2_t12F902B64E731F36B1BC057F3AF13BF1D833E1DF* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) 
{
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_m1F78C6C79382EA6E74D62E31DD00A9378266A518_gshared_inline (Func_2_tFD36EA818BBCBD1EDE1E1540FC3EF156A6ADCCAD* __this, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 ___0_arg, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_gshared_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 Enumerator_get_Current_m4E279E6389EB06C5DBE88A74E3BD3F23FB2B17E4_gshared_inline (Enumerator_t55FB90597665ED8BB37C633F6FD72EFAD48FE20F* __this, const RuntimeMethod* method) 
{
	{
		StyleSelectorPart_tEE5B8ADC7D114C7486CC8301FF96C114FF3C9470 L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t BitConverter_DoubleToInt64Bits_m4F42741818550F9956B5FBAF88C051F4DE5B0AE6_inline (double ___0_value, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___0_value)));
		return L_0;
	}
}
