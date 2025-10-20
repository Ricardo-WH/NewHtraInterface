#pragma once
#include "htra_api.h"

struct DeviceClock_TypeDef
{
	ReferenceClockSource_TypeDef refClkSrc;	 //	�ο�ʱ��Դ
	double refClkFreq;						 //	�ο�ʱ��Ƶ��
	uint8_t refClkOut;						 // ʹ�ܲο�ʱ�����
	SystemClockSource_TypeDef sysClkSrc; 	// ϵͳʱ��Դ
	double sysClkFreq; 					    // �ⲿϵͳʱ��Ƶ�ʣ�Hz
};
