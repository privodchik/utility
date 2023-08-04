/**
  ******************************************************************************
  * @file    Dev_bootuart.c
  * @author  Tyagushev Sergey
  * @version V0.0.2
  * @date    22/12/2017
  * @brief   Uart bootloader for 1986VE91
  ******************************************************************************/


#include "MDR32F9Qx_uart.h"
#include "MDR32F9Qx_port.h"
#include "MDR32F9Qx_rst_clk.h"
#include "MDR32F9Qx_eeprom.h"
#include "Dev_bootuart.h"


//#pragma default_function_attributes = @ "MY_FUNC"

#define UART_DEV        MDR_UART1
#define RS485_PIN_PORT  MDR_PORTA
#define RS485_PIN_NO    PORT_Pin_5

#define RS485_TX_DISABLE()      {RS485_PIN_PORT->RXTX &= ~RS485_PIN_NO;}
#define RS485_TX_ENABLE()       {RS485_PIN_PORT->RXTX |= RS485_PIN_NO;}
#define RS485_RX_ENABLE()       RS485_TX_DISABLE()
#define RS485_RX_DISABLE()      RS485_TX_ENABLE()


#define UART_ENABLE()   {UART_DEV->CR |= 1;}
#define UART_DISABLE()  {UART_DEV->CR &= ~1;}

#define UART_RX_ENABLE()   {UART_DEV->CR |= (1 << 9);}
#define UART_RX_DISABLE()  {UART_DEV->CR &= ~(1 << 9);}

#define UART_TX_ENABLE()   {UART_DEV->CR |= (1 << 8);}
#define UART_TX_DISABLE()  {UART_DEV->CR &= ~(1 << 8);}







void reconfig_all(void);
void bootuart(void);
void sleep(int id);
uint8_t GetByteRX(void);
void OutByteTX(unsigned char chout);
void OutIntTX(unsigned int iout);
void Erase(void);
void Program(void);
void Verify(void);
unsigned int GetIntRX(void);
void Getbufdata(void);


unsigned int bufdata[64];
const unsigned char id_str[13] = "MPCBOOT_1.0";
unsigned int adr,ibuf;
unsigned char ks;

uint8_t i1;


__RAMFUNC void vBootloader_run(void)
{
    
    reconfig_all();
    bootuart();
    
}


__RAMFUNC void reconfig_all(void)
{
  
__disable_irq();
  UART_DISABLE();
  UART_RX_ENABLE();
  while (!(UART_DEV->FR & UART_FLAG_RXFE)) UART_DEV->DR;
  UART_TX_DISABLE();
  UART_ENABLE();
  MDR_RST_CLK->PER_CLOCK |= RST_CLK_PCLK_EEPROM;
     /* WDG -DISABLE */  
  RST_CLK_PCLKcmd(RST_CLK_PCLK_WWDG, DISABLE);
  MDR_RST_CLK->PER_CLOCK &= ~RST_CLK_PCLK_WWDG;
}


__RAMFUNC uint8_t GetByteRX(void)
{
        UART_TX_DISABLE();
        UART_RX_ENABLE();
        RS485_RX_ENABLE();
        
        while ( UART_DEV->FR & UART_FLAG_RXFE );
	return UART_DEV->DR;
}


__RAMFUNC void OutByteTX(unsigned char chout)
{
	while ( UART_DEV->FR & UART_FLAG_TXFF );
        
        RS485_TX_ENABLE();
        UART_RX_DISABLE();
        UART_TX_ENABLE();
        
	UART_DEV->DR = (chout & (uint16_t)0x01FF);
	while(UART_DEV->FR &  UART_FLAG_BUSY );
        RS485_TX_DISABLE();
}


__RAMFUNC void bootuart(void)
{
    uint8_t temp_bootmode = 0;  
    int32_t i1 = 0, i2 = 0;
    while(1)
    {									         
        i1 = GetByteRX();
        switch(i1){
            case	'I':
              for (i2 = 0; i2 < 10000; i2++);
              for (i1 = 0; i1 < 12; i1++)
                  OutByteTX(id_str[i1]);
              break;
              
              case	'E':
                if(temp_bootmode) Erase();
                temp_bootmode=0;
                break;
                
                case	'P':
                  if(temp_bootmode) Program();
                  break;
                  
                  case	'V':
                    if(temp_bootmode)  Verify();
                    break;
                    
                    case	'A':
                      ks = 0;
                      adr = GetIntRX();
                      ibuf = 0;
                      OutByteTX(ks);
                      temp_bootmode=1;
                      break;
                      
                      case	'R':
                        OutByteTX('R');
                        sleep(200);
                        NVIC_SystemReset();
                        break;
                        
        }
        i1 = 0;
    }
}


__RAMFUNC void sleep(int id)
{
    do
    {
        id++;
        id -= 2;
    } 
    while (id!=0);
}


__RAMFUNC void OutIntTX(unsigned int iout)
{
    int i1;
    for(i1=0;i1<4;i1++)
    {
        OutByteTX(iout&0xff);
        iout >>= 8;
    }	
    return;
}


__RAMFUNC void Erase(void)
{
    EEPROM_EraseAllPages(0);
    OutByteTX('E');
    OutByteTX('O');
    OutByteTX('K');
    return;
}


__RAMFUNC void Program(void)
{
    unsigned int i1;//,i2;
    ks =0;
    for(i1=0;i1<64;i1++)
        bufdata[i1] = GetIntRX();   
    
    for(i1=0;i1<64;i1++)
        EEPROM_ProgramWord (adr+i1*4, 0,  bufdata[i1]);   
    
    adr += 0x100;
    OutByteTX(ks);   
}


__RAMFUNC void Verify(void)
{
    uint8_t i1,i2;
    
    i1 = ibuf; 
    if(i1 == 0) Getbufdata();
    for(i2=0;i2<64;i2++){ OutIntTX(bufdata[i1]);i1++;};
    ibuf = i1 & 0x3f;
    
}


__RAMFUNC unsigned int GetIntRX(void)
{
    unsigned int i1,i2,i3;
    i3 = 0;
    for(i1=0;i1<4;i1++)
    {
        i2 = GetByteRX();
        ks += i2;
        i3 >>= 8;
        i2 <<= 24;
        i3 += i2;
    }	
    return i3; 
}


__RAMFUNC void Getbufdata(void)
{
    int i1;
    
    for(i1=0;i1<64;i1++)
    {
        
        bufdata[i1] = EEPROM_ReadWord (adr,0);;
        adr += 4;
    }
}



