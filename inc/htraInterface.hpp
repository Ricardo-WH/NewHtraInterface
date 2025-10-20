#pragma once
#include "htra_api.h"
#include "../inc/harogic_revicer.h"



class absReciver
{
	private:
		enum revicerMode {spectrum,IQstream,powerStream,realtimeSpectrum};
		revicerMode currentMode;

		IQS_Profile_TypeDef IQS_Profile, IQS_ProfileOut;
		IQS_StreamInfo_TypeDef IQS_StreamInfo;

		void mapDeviceClock_IQS(IQS_Profile_TypeDef* IQS_Profile, DeviceClock_TypeDef* deviceClk);

		int activeDevice(void** device);



	public:
		void setDeviceClock(void** device, DeviceClock_TypeDef* deviceClk, DeviceClock_TypeDef* deviceClk_o);

		absReciver(void** device);

		//void getConfiguationInfo(IQS_Profile_TypeDef* profileOut, IQS_StreamInfo_TypeDef* streamInfo);




};


