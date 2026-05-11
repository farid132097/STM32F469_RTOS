
#include "stm32f469xx.h"
#include "kernel.h"
#include "gpio.h"


int main(void){
	
	Kernel_Init();
	Kernel_Task_Create(Task_PD4_Toggle, 3);
	Kernel_Task_Create(Task_PD5_Toggle, 0);
	Kernel_Task_Create(Task_PG6_Toggle, 2);
	Kernel_Start_Tasks();
	
	while(1){
		
		
	}
	
}


