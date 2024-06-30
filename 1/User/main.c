#include "stm32f10x.h"                  // Device header
#include "Delay.h"

int main(void)
{
	
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA,ENABLE);
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_All;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	/*
	
	
	// GPIO_ResetBits(GPIOA, GPIO_Pin_0);
	// GPIO_SetBits(GPIOA, GPIO_Pin_0);
	// GPIO_WriteBit(GPIOA, GPIO_Pin_0, Bit_RESET);
	// GPIO_WriteBit(GPIOA, GPIO_Pin_0, Bit_SET);
	
	
	
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);
	
	// 
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC, &GPIO_InitStructure);
	// 高电平
	GPIO_SetBits(GPIOC, GPIO_Pin_13);
	
	// 低电平
	// GPIO_ResetBits(GPIOC, GPIO_Pin_13);
	RCC->APB2ENR = 0x00000010;
	GPIOC->CRH = 0x00300000;
	GPIOC->ODR = 0x00002000;
	// GPIOC->ODR = 0x00000000;
	*/
	
	
	while(1)
	{
		GPIO_Write(GPIOA, ~0x0001);
		Delay_ms(100);
		
		GPIO_Write(GPIOA, ~0x0002);
		Delay_ms(100);
		
		GPIO_Write(GPIOA, ~0x0004);
		Delay_ms(100);
		
		GPIO_Write(GPIOA, ~0x0008);
		Delay_ms(100);
		
		GPIO_Write(GPIOA, ~0x0010);
		Delay_ms(100);
		
		GPIO_Write(GPIOA, ~0x0020);
		Delay_ms(100);
		
		GPIO_Write(GPIOA, ~0x0040);
		Delay_ms(100);
		
		GPIO_Write(GPIOA, ~0x0080);
		Delay_ms(100);
		
	}
}
