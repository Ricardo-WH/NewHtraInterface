#include <iostream>
#include "htra_api.h"




int main()
{

	//std::cout << "ready" << std::endl;

	void* device;
	BootProfile_TypeDef BootProfile;
	BootInfo_TypeDef BootInfo;
	BootProfile.PhysicalInterface = USB;
	int status = Device_Open(&device, 0, &BootProfile, &BootInfo);

	std::cout << status << std::endl;



}