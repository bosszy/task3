#include "timer.h"
#include "delay.h"
#include "led.h"

int main(void)
{
	delay_init();
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); 
	LED_Init();
	TIM3_Int_Init(19999,7199);
	while(1)
	{

	}
} 
/*Tout=((arr+1)*(psc+1))/Tclk ; 
Tclk����ʱ��������ʱ��Ƶ�ʣ���λMHZ��
Tout����ʱ�����ʱ�䣨��λΪus��
Tout=((19999+1)*(7199+1))/72=20000*7200/72=2000000us=2000ms=2s*/
