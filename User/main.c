#include "stm32f10x.h"
#include "./oled/delay.h"
#include "./oled/OLED.h"
#include "./font/fonts.h"
#include "./flash/bsp_spi_flash.h"

int main(void)
{	
	uint16_t usCh;
	char * pStr;
	
	//OLED ��ʼ��
	DelayInit();
	I2C_Configuration();
	OLED_Init();
	OLED_CLS();
	
	OLED_ShowStr(8, 0, "����һ����˲����͹ر���ɶ���ϲ�ȥ��");
	OLED_DispChar_EN(0, 0, 'm');
	while ( 1 );
}


/* ------------------------------------------end of file---------------------------------------- */

