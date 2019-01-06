#ifndef __FONT_H
#define __FONT_H       

#include "stm32f10x.h"
#include "./font/fonts.h"

/** @defgroup FONTS_Exported_Types
  * @{
  */ 
typedef struct _tFont
{    
  const uint8_t *table;
  uint16_t Width;
  uint16_t Height;
  
} sFONT;
extern sFONT Font8x16;

#define      WIDTH_EN_CHAR		                 8	    //Ӣ���ַ���� 
#define      HEIGHT_EN_CHAR		              	16		//Ӣ���ַ��߶� 

#define      WIDTH_CH_CHAR		                16	    //�����ַ���� 
#define      HEIGHT_CH_CHAR		              	16		//�����ַ��߶� 

//LINEYͳһʹ�ú�����ģ�ĸ߶�
#define LINEY(y) ((y) * (WIDTH_CH_CHAR/8))
#define LINEX(x) ((x) * (HEIGHT_CH_CHAR))

/*ʹ��FLASH��ģ*/
/*�����ֿ�洢��FLASH����ʼ��ַ*/
#define GBKCODE_START_ADDRESS   387*4096


/*��ȡ�ֿ�ĺ���*/
//�����ȡ�����ַ���ģ����ĺ�������ucBufferΪ�����ģ��������usCharΪ�����ַ��������룩
#define      GetGBKCode( ucBuffer, usChar )  GetGBKCode_from_EXFlash( ucBuffer, usChar )  
int GetGBKCode_from_EXFlash( uint8_t * pBuffer, uint16_t c);

#endif /*end of __FONT_H    */
