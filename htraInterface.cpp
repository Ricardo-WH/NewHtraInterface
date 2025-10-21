#include "inc/htraInterface.hpp"

/* 把用户设定的设备始终映射给IQS结构体  */
void absReciver::mapDeviceClock_IQS(IQS_Profile_TypeDef* IQS_Profile, DeviceClock_TypeDef* deviceClk)
{
	//IQS_Profile->ReferenceClockFrequency = deviceClk->refClkFreq;
	IQS_Profile->ReferenceClockSource = deviceClk->refClkSrc;
	//IQS_Profile->EnableReferenceClockOut = deviceClk->refClkOut;
	//IQS_Profile->ExternalSystemClockFrequency = deviceClk->sysClkFreq;
	//IQS_Profile->SystemClockSource = deviceClk->sysClkSrc;
}

// 可以直接映射进去，限值回写用另一条函数
void absReciver::setDeviceClock(void** device, DeviceClock_TypeDef* deviceClk, DeviceClock_TypeDef* deviceClk_o)
{
	int status = -1;


	//switch (currentMode)
	//{
	//	case IQstream: mapDeviceClock_IQS(IQS_Profile, deviceClk); break;
	//	default:break;
	//}


	mapDeviceClock_IQS(&IQS_Profile, deviceClk);



	status = activeDevice(device);

}

int absReciver::activeDevice(void** device)
{
	int status = -1;

	//switch (currentMode)
	//{
	//	case IQstream: status = IQS_Configuration(device, IQS_Profile, IQS_ProfileOut, IQS_StreamInfo); break;
	//	default:break;
	//}


	status = IQS_Configuration(device, &IQS_Profile, &IQS_ProfileOut, &IQS_StreamInfo);


	return status;
}

//void absReciver::getConfiguationInfo(IQS_Profile_TypeDef* profileOut, IQS_StreamInfo_TypeDef* streamInfo)
//{
//	*profileOut = *IQS_ProfileOut;
//	*streamInfo = *IQS_StreamInfo;
//
//}

absReciver::absReciver(void** device)
{

	IQS_ProfileDeInit(device, &IQS_Profile);





}