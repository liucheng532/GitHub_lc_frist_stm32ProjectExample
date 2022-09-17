#include "stm32f10x.h"                  // Device header



int main(void)
{
//	RCC->APB2ENR= 0X00000010; //配置GPIO时钟
//	GPIOC->CRH=0X00300000;  //打开GPIO
//	GPIOC->ODR=0X00002000;  //配置PC13，点灯
	GPIO_InitTypeDef GPIO_InitStructure;
	GPIO_InitStructure.GPIO_Mode=GPIO_Mode_Out_PP;
	GPIO_InitStructure.GPIO_Pin=GPIO_Pin_13;
	GPIO_InitStructure.GPIO_Speed=GPIO_Speed_50MHz;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC,ENABLE);//配置GPIO外设时钟
	GPIO_Init(GPIOC,&GPIO_InitStructure);//配置端口模式
	//GPIO_SetBits(GPIOC,GPIO_Pin_13);
	GPIO_ResetBits(GPIOC,GPIO_Pin_13);
	while (1)
	{
	
	}

}