#ifndef CONST_H
#define CONST_H

#include "mcu.h"
#include "iqmath.h"

//---------------------------------------------------------------------------
#define count(x)  (sizeof(x)/sizeof(x[0]))

//-------------------------------------------------------------------
#define FCPU          SystemCoreClock
#define FCPU_DIV2     (SystemCoreClock>>1)

//-------------------------------------------------------------------
// intentionally left as float, not IQ
// may be used as floats in macros at compile time
#define PI                  3.141592654
#define PIx2                6.283185307
#define PIx2div3            2.094395102
#define PIx4div3            4.188790205
#define DEG30               0.523598775
#define PIdiv2              1.570796326

//-------------------------------------------------------------------
#define DIV_2PI(x)          IQmpy(x, IQ(0.1591549430))

//-------------------------------------------------------------------
#define W2F(omega)          IQmpy(omega, IQ(0.1591549430))
#define F2W(frequency)      IQmpy(frequency, IQ(6.2831853))

#define DEGREES(radians)    IQmpy(radians, IQ(57.29577951))
#define RADIANS(degrees)    IQmpy(degrees, IQ(0.0174532925))

#endif // CONST_H
