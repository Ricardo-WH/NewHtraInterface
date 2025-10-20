#include <iostream>
#include "htra_api.h"
#include "../inc/harogic_revicer.h"
#include "../inc/htrainterface.hpp"

//inc / harogic_revicer.h
int main()
{

	//std::cout << "ready" << std::endl;

	void* device;
	BootProfile_TypeDef BootProfile;
	BootInfo_TypeDef BootInfo;
	BootProfile.PhysicalInterface = USB;
	int status = Device_Open(&device, 0, &BootProfile, &BootInfo);

	std::cout << status << std::endl;

	absReciver revicer(&device);

	DeviceClock_TypeDef deviceClk, deviceClk_o;

	//deviceClk.refClkFreq = 8e6;
	deviceClk.refClkSrc = ReferenceClockSource_External;

	// 假设我只配freq，我还需要其他参数的默认值
	revicer.setDeviceClock(&device, &deviceClk, &deviceClk_o);
	//revicer.activeDevice(&device);
	//revicer.getConfiguationInfo()

}