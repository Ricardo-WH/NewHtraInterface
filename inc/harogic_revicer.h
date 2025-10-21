#pragma once
#include "htra_api.h"

struct DeviceClock_TypeDef
{
	ReferenceClockSource_TypeDef refClkSrc;	 //	参考时钟源
	double refClkFreq;						 //	参考时钟频率
	uint8_t refClkOut;						 // 使能参考时钟输出
	SystemClockSource_TypeDef sysClkSrc; 	// 系统时钟源
	double sysClkFreq; 					    // 外部系统时钟频率，Hz
};
