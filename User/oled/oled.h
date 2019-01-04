#ifndef __OLED_I2C_H
#define	__OLED_I2C_H

#include "stm32f10x.h"

#define OLED_ADDRESS  0x78 //ͨ������0R����,������0x78��0x7A������ַ -- Ĭ��0x78
#define I2C_DELAY     254 

void I2C_Configuration(void);
void I2C_WriteByte(uint8_t addr,uint8_t data);
void WriteCmd(unsigned char I2C_Command);
void WriteDat(unsigned char I2C_Data);
void OLED_Init(void);
void OLED_SetPos(unsigned char x, unsigned char y);
void OLED_Fill(unsigned char fill_Data);//ȫ������(0XFF)   ȫ����(0x00)
void OLED_CLS(void);//����
void OLED_ON(void);//����OLED���ߺ���
void OLED_OFF(void);//����OLED����
void OLED_ShowStr(unsigned char x, unsigned char y, unsigned char ch[], unsigned char TextSize);//����6*8�ַ�(1)  ����8*16�ַ�(2) 
void OLED_ShowCN(unsigned char x, unsigned char y, unsigned char N);//������ʾ����
void OLED_DrawBMP(unsigned char x0,unsigned char y0,unsigned char x1,unsigned char y1,unsigned char BMP[]);//����BMPλͼ��ʾ

#endif
