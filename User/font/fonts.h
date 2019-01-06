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

#define      WIDTH_EN_CHAR		                 8	    //英文字符宽度 
#define      HEIGHT_EN_CHAR		              	16		//英文字符高度 

#define      WIDTH_CH_CHAR		                16	    //中文字符宽度 
#define      HEIGHT_CH_CHAR		              	16		//中文字符高度 

//LINEY统一使用汉字字模的高度
#define LINEY(y) ((y) * (WIDTH_CH_CHAR/8))
#define LINEX(x) ((x) * (HEIGHT_CH_CHAR))

/*使用FLASH字模*/
/*中文字库存储在FLASH的起始地址*/
#define GBKCODE_START_ADDRESS   387*4096


/*获取字库的函数*/
//定义获取中文字符字模数组的函数名，ucBuffer为存放字模数组名，usChar为中文字符（国标码）
#define      GetGBKCode( ucBuffer, usChar )  GetGBKCode_from_EXFlash( ucBuffer, usChar )  
int GetGBKCode_from_EXFlash( uint8_t * pBuffer, uint16_t c);

#endif /*end of __FONT_H    */
