#ifndef TIME_DEFS_H
#define TIME_DEFS_H

#include <time.h> // gives time_t

//-------------------------------------------------------------------
// note: float is for TI TMS compiler
//#define TIME_SEC(s)         (time_t)((float)(s)*1000000.0)
//#define TIME_MSEC(ms)       (time_t)((float)(ms)*1000.0)
#define TIME_SEC(s)         (time_t)((s)*1000000.0)
#define TIME_MSEC(ms)       (time_t)((ms)*1000.0)
#define TIME_USEC(us)       (time_t)(us)

#define time2FLOAT(T)       ((float)(T)*1e-6f)

#endif // TIME_DEFS_H
