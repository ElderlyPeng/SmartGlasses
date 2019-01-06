#include "stm32f10x.h"
#include "./oled/delay.h"
#include "./oled/OLED.h"
#include "./font/fonts.h"
#include "./flash/bsp_spi_flash.h"
#include "./usart/bsp_usart.h"

int main(void)
{		
	//OLED ��ʼ��
	DelayInit();
	I2C_Configuration();
	OLED_Init();
	OLED_CLS();
	//usart1��ʼ��
	USART_Config();
	
	while ( 1 );
}


/* ------------------------------------------end of file---------------------------------------- */

