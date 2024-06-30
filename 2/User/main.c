#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "Buzzer.h"
#include "LightSensor.h"


uint8_t KeyNum;

int main(void)
{
	BUZZER_Init();
	LigthSensor_Init();
	
	while(1)
	{
	
		if(GetLightSensor())
		{
			BUZZER_ON();
		}
		else
		{
			BUZZER_OFF();
		}
		
	}
}
