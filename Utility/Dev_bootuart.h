/*
 * Dev_bootuart.h
 *
 *  Created on: 4 июл. 2019 г.
 *      Author: NPT
 */

#ifndef SOURCE_HEADERS_DEV_BOOTUART_H_
#define SOURCE_HEADERS_DEV_BOOTUART_H_

#include "MDR32F9Qx_eeprom.h"


extern "C" {


__RAMFUNC void vBootloader_run(void);
__RAMFUNC void reconfig_all(void);
__RAMFUNC void bootuart(void);
__RAMFUNC void Getbufdata(void);
__RAMFUNC unsigned int GetIntRX(void);
__RAMFUNC void sleep(int id);
__RAMFUNC void Erase(void);
__RAMFUNC void Program(void);
__RAMFUNC void Verify(void);



} // extern "C" block end


#endif /* SOURCE_HEADERS_DEV_BOOTUART_H_ */
