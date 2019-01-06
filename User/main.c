#include "stm32f10x.h"
#include "./oled/delay.h"
#include "./oled/OLED.h"
#include "./font/fonts.h"
#include "./flash/bsp_spi_flash.h"

int main(void)
{	
	uint16_t usCh;
	char * pStr;
	
	//OLED ≥ı ºªØ
	DelayInit();
	I2C_Configuration();
	OLED_Init();
	OLED_CLS();
	
	
	OLED_ShowStr(0, 0, "What does the fox say?");
	while ( 1 );
}


/* ------------------------------------------end of file---------------------------------------- */

