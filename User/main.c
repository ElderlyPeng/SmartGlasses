#include "stm32f10x.h"
#include "./oled/delay.h"
#include "./oled/OLED.h"
#include "./font/fonts.h"
#include "./flash/bsp_spi_flash.h"
#include "./usart/bsp_usart.h"

int main(void)
{		
	//OLED 初始化
	DelayInit();
	I2C_Configuration();
	OLED_Init();
	OLED_CLS();
	//usart1初始化
	USART_Config();
	
	while ( 1 );
}


/* ------------------------------------------end of file---------------------------------------- */

