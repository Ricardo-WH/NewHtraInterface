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

/* 对于配置来讲，每个项都有 deinit set get 三个基本函数 */

// 现在设备的配置参数解耦了，不再由一个大结构体赋了，所以只能每个初始化都分开
int deinitReferenceClock(ReferenceClockSource_TypeDef *refClkSrc, double *refClkFreq, uint8_t *refClkOut);
int setReferenceClock(ReferenceClockSource_TypeDef refClkSrc, double refClkFreq, uint8_t refClkOut);
int getRefenenceClock(ReferenceClockSource_TypeDef *refClkSrc, double *refClkFreq, uint8_t *refClkOut);

int setTriggerIn(IQS_TriggerSource_TypeDef trgSrc, TriggerEdge_TypeDef trgEdge, uint8_t trgInType, double preTrigger, double delayTrigger); // freerun 1hop 1trace

int setTriggerOut(TriggerOutMode_TypeDef trgOutType, TriggerOutPulsePolarity_TypeDef trgOutPulse);

int setTimerTrigger(TriggerTimerSync_TypeDef sync, double period);

int setLevelTrigger(double level, double safeTime);



// 采样类型
int setAcquisition(uint8_t acqType, double acqTime, uint64_t acqLength, uint16_t acqCounts, double acqInterval, double timeout);

