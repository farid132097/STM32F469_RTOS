

#include "stm32f469xx.h"
#include "kernel.h"
#include "gpio.h"

__attribute__((noreturn)) void Task_PD4_Toggle(void){
	
	//orange
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
	GPIOD->MODER &=~GPIO_MODER_MODE4_Msk;
	GPIOD->MODER |= GPIO_MODER_MODE4_0;
	
	while(1){
		GPIOD->BSRR |= GPIO_BSRR_BR4;
		Kernel_Task_Sleep(1000);
		GPIOD->BSRR |= GPIO_BSRR_BS4;
		Kernel_Task_Sleep(1000);
	}

}

__attribute__((noreturn)) void Task_PD5_Toggle(void){
	
	//red led
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN;
	GPIOD->MODER &=~GPIO_MODER_MODE5_Msk;
	GPIOD->MODER |= GPIO_MODER_MODE5_0;
	
	while(1){
		GPIOD->BSRR |= GPIO_BSRR_BR5;
		Kernel_Task_Sleep(500);
		GPIOD->BSRR |= GPIO_BSRR_BS5;
		Kernel_Task_Sleep(500);
	}
}

__attribute__((noreturn)) void Task_PG6_Toggle(void){
	
	//green
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOGEN;
	GPIOG->MODER &=~GPIO_MODER_MODE6_Msk;
	GPIOG->MODER |= GPIO_MODER_MODE6_0;
	
	while(1){
		GPIOG->BSRR |= GPIO_BSRR_BR6;
		Kernel_Task_Sleep(2000);
		GPIOG->BSRR |= GPIO_BSRR_BS6;
		Kernel_Task_Sleep(2000);
	}
}


__attribute__((noreturn)) void Task_Dummy(void){
	
	
	while(1){
		
	}
}

