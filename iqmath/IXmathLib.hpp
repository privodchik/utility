/**
 @file
 @date         20.11.2023
 @copyright    NPT
 @author       ID  
*/


#pragma once

#include <type_traits>
#include "arm_math.h"
#include <cmath>
#include "tailor.h"


extern "C" {
    //*****************************************************************************
    //
    // Convert an IQ number to a floating point value.
    //
    //*****************************************************************************
    extern float _IQ30toF(int32_t A);
    extern float _IQ29toF(int32_t A);
    extern float _IQ28toF(int32_t A);
    extern float _IQ27toF(int32_t A);
    extern float _IQ26toF(int32_t A);
    extern float _IQ25toF(int32_t A);
    extern float _IQ24toF(int32_t A);
    extern float _IQ23toF(int32_t A);
    extern float _IQ22toF(int32_t A);
    extern float _IQ21toF(int32_t A);
    extern float _IQ20toF(int32_t A);
    extern float _IQ19toF(int32_t A);
    extern float _IQ18toF(int32_t A);
    extern float _IQ17toF(int32_t A);
    extern float _IQ16toF(int32_t A);
    extern float _IQ15toF(int32_t A);
    extern float _IQ14toF(int32_t A);
    extern float _IQ13toF(int32_t A);
    extern float _IQ12toF(int32_t A);
    extern float _IQ11toF(int32_t A);
    extern float _IQ10toF(int32_t A);
    extern float _IQ9toF(int32_t A);
    extern float _IQ8toF(int32_t A);
    extern float _IQ7toF(int32_t A);
    extern float _IQ6toF(int32_t A);
    extern float _IQ5toF(int32_t A);
    extern float _IQ4toF(int32_t A);
    extern float _IQ3toF(int32_t A);
    extern float _IQ2toF(int32_t A);
    extern float _IQ1toF(int32_t A);
    
    
    //*****************************************************************************
    //
    // Divides two IQ numbers.
    //
    //*****************************************************************************
    extern int32_t _IQ30div(int32_t A, int32_t B);
    extern int32_t _IQ29div(int32_t A, int32_t B);
    extern int32_t _IQ28div(int32_t A, int32_t B);
    extern int32_t _IQ27div(int32_t A, int32_t B);
    extern int32_t _IQ26div(int32_t A, int32_t B);
    extern int32_t _IQ25div(int32_t A, int32_t B);
    extern int32_t _IQ24div(int32_t A, int32_t B);
    extern int32_t _IQ23div(int32_t A, int32_t B);
    extern int32_t _IQ22div(int32_t A, int32_t B);
    extern int32_t _IQ21div(int32_t A, int32_t B);
    extern int32_t _IQ20div(int32_t A, int32_t B);
    extern int32_t _IQ19div(int32_t A, int32_t B);
    extern int32_t _IQ18div(int32_t A, int32_t B);
    extern int32_t _IQ17div(int32_t A, int32_t B);
    extern int32_t _IQ16div(int32_t A, int32_t B);
    extern int32_t _IQ15div(int32_t A, int32_t B);
    extern int32_t _IQ14div(int32_t A, int32_t B);
    extern int32_t _IQ13div(int32_t A, int32_t B);
    extern int32_t _IQ12div(int32_t A, int32_t B);
    extern int32_t _IQ11div(int32_t A, int32_t B);
    extern int32_t _IQ10div(int32_t A, int32_t B);
    extern int32_t _IQ9div(int32_t A, int32_t B);
    extern int32_t _IQ8div(int32_t A, int32_t B);
    extern int32_t _IQ7div(int32_t A, int32_t B);
    extern int32_t _IQ6div(int32_t A, int32_t B);
    extern int32_t _IQ5div(int32_t A, int32_t B);
    extern int32_t _IQ4div(int32_t A, int32_t B);
    extern int32_t _IQ3div(int32_t A, int32_t B);
    extern int32_t _IQ2div(int32_t A, int32_t B);
    extern int32_t _IQ1div(int32_t A, int32_t B);
    
    
    //*****************************************************************************
    //
    // Multiplies two IQ numbers.
    //
    //*****************************************************************************
    extern int32_t _IQ30mpy(int32_t A, int32_t B);
    extern int32_t _IQ29mpy(int32_t A, int32_t B);
    extern int32_t _IQ28mpy(int32_t A, int32_t B);
    extern int32_t _IQ27mpy(int32_t A, int32_t B);
    extern int32_t _IQ26mpy(int32_t A, int32_t B);
    extern int32_t _IQ25mpy(int32_t A, int32_t B);
    extern int32_t _IQ24mpy(int32_t A, int32_t B);
    extern int32_t _IQ23mpy(int32_t A, int32_t B);
    extern int32_t _IQ22mpy(int32_t A, int32_t B);
    extern int32_t _IQ21mpy(int32_t A, int32_t B);
    extern int32_t _IQ20mpy(int32_t A, int32_t B);
    extern int32_t _IQ19mpy(int32_t A, int32_t B);
    extern int32_t _IQ18mpy(int32_t A, int32_t B);
    extern int32_t _IQ17mpy(int32_t A, int32_t B);
    extern int32_t _IQ16mpy(int32_t A, int32_t B);
    extern int32_t _IQ15mpy(int32_t A, int32_t B);
    extern int32_t _IQ14mpy(int32_t A, int32_t B);
    extern int32_t _IQ13mpy(int32_t A, int32_t B);
    extern int32_t _IQ12mpy(int32_t A, int32_t B);
    extern int32_t _IQ11mpy(int32_t A, int32_t B);
    extern int32_t _IQ10mpy(int32_t A, int32_t B);
    extern int32_t _IQ9mpy(int32_t A, int32_t B);
    extern int32_t _IQ8mpy(int32_t A, int32_t B);
    extern int32_t _IQ7mpy(int32_t A, int32_t B);
    extern int32_t _IQ6mpy(int32_t A, int32_t B);
    extern int32_t _IQ5mpy(int32_t A, int32_t B);
    extern int32_t _IQ4mpy(int32_t A, int32_t B);
    extern int32_t _IQ3mpy(int32_t A, int32_t B);
    extern int32_t _IQ2mpy(int32_t A, int32_t B);
    extern int32_t _IQ1mpy(int32_t A, int32_t B);
    
    
    //*****************************************************************************
    //
    // Multiplies two IQ numbers, with rounding.
    //
    //*****************************************************************************
    extern int32_t _IQ30rmpy(int32_t A, int32_t B);
    extern int32_t _IQ29rmpy(int32_t A, int32_t B);
    extern int32_t _IQ28rmpy(int32_t A, int32_t B);
    extern int32_t _IQ27rmpy(int32_t A, int32_t B);
    extern int32_t _IQ26rmpy(int32_t A, int32_t B);
    extern int32_t _IQ25rmpy(int32_t A, int32_t B);
    extern int32_t _IQ24rmpy(int32_t A, int32_t B);
    extern int32_t _IQ23rmpy(int32_t A, int32_t B);
    extern int32_t _IQ22rmpy(int32_t A, int32_t B);
    extern int32_t _IQ21rmpy(int32_t A, int32_t B);
    extern int32_t _IQ20rmpy(int32_t A, int32_t B);
    extern int32_t _IQ19rmpy(int32_t A, int32_t B);
    extern int32_t _IQ18rmpy(int32_t A, int32_t B);
    extern int32_t _IQ17rmpy(int32_t A, int32_t B);
    extern int32_t _IQ16rmpy(int32_t A, int32_t B);
    extern int32_t _IQ15rmpy(int32_t A, int32_t B);
    extern int32_t _IQ14rmpy(int32_t A, int32_t B);
    extern int32_t _IQ13rmpy(int32_t A, int32_t B);
    extern int32_t _IQ12rmpy(int32_t A, int32_t B);
    extern int32_t _IQ11rmpy(int32_t A, int32_t B);
    extern int32_t _IQ10rmpy(int32_t A, int32_t B);
    extern int32_t _IQ9rmpy(int32_t A, int32_t B);
    extern int32_t _IQ8rmpy(int32_t A, int32_t B);
    extern int32_t _IQ7rmpy(int32_t A, int32_t B);
    extern int32_t _IQ6rmpy(int32_t A, int32_t B);
    extern int32_t _IQ5rmpy(int32_t A, int32_t B);
    extern int32_t _IQ4rmpy(int32_t A, int32_t B);
    extern int32_t _IQ3rmpy(int32_t A, int32_t B);
    extern int32_t _IQ2rmpy(int32_t A, int32_t B);
    extern int32_t _IQ1rmpy(int32_t A, int32_t B);
    
    
    //*****************************************************************************
    //
    // Multiplies two IQ numbers, with rounding and saturation.
    //
    //*****************************************************************************
    extern int32_t _IQ30rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ29rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ28rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ27rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ26rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ25rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ24rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ23rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ22rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ21rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ20rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ19rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ18rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ17rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ16rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ15rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ14rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ13rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ12rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ11rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ10rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ9rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ8rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ7rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ6rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ5rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ4rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ3rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ2rsmpy(int32_t A, int32_t B);
    extern int32_t _IQ1rsmpy(int32_t A, int32_t B);
    
    
    
    
    //*****************************************************************************
    //
    // Computes the sin of an IQ number.
    //
    //*****************************************************************************
    extern int32_t _IQ29sin(int32_t A);
    extern int32_t _IQ28sin(int32_t A);
    extern int32_t _IQ27sin(int32_t A);
    extern int32_t _IQ26sin(int32_t A);
    extern int32_t _IQ25sin(int32_t A);
    extern int32_t _IQ24sin(int32_t A);
    extern int32_t _IQ23sin(int32_t A);
    extern int32_t _IQ22sin(int32_t A);
    extern int32_t _IQ21sin(int32_t A);
    extern int32_t _IQ20sin(int32_t A);
    extern int32_t _IQ19sin(int32_t A);
    extern int32_t _IQ18sin(int32_t A);
    extern int32_t _IQ17sin(int32_t A);
    extern int32_t _IQ16sin(int32_t A);
    extern int32_t _IQ15sin(int32_t A);
    extern int32_t _IQ14sin(int32_t A);
    extern int32_t _IQ13sin(int32_t A);
    extern int32_t _IQ12sin(int32_t A);
    extern int32_t _IQ11sin(int32_t A);
    extern int32_t _IQ10sin(int32_t A);
    extern int32_t _IQ9sin(int32_t A);
    extern int32_t _IQ8sin(int32_t A);
    extern int32_t _IQ7sin(int32_t A);
    extern int32_t _IQ6sin(int32_t A);
    extern int32_t _IQ5sin(int32_t A);
    extern int32_t _IQ4sin(int32_t A);
    extern int32_t _IQ3sin(int32_t A);
    extern int32_t _IQ2sin(int32_t A);
    extern int32_t _IQ1sin(int32_t A);
    
    
    //*****************************************************************************
    //
    // Computes the sin of an IQ number, using cycles per unit instead of radians.
    //
    //*****************************************************************************
    extern int32_t _IQ30sinPU(int32_t A);
    extern int32_t _IQ29sinPU(int32_t A);
    extern int32_t _IQ28sinPU(int32_t A);
    extern int32_t _IQ27sinPU(int32_t A);
    extern int32_t _IQ26sinPU(int32_t A);
    extern int32_t _IQ25sinPU(int32_t A);
    extern int32_t _IQ24sinPU(int32_t A);
    extern int32_t _IQ23sinPU(int32_t A);
    extern int32_t _IQ22sinPU(int32_t A);
    extern int32_t _IQ21sinPU(int32_t A);
    extern int32_t _IQ20sinPU(int32_t A);
    extern int32_t _IQ19sinPU(int32_t A);
    extern int32_t _IQ18sinPU(int32_t A);
    extern int32_t _IQ17sinPU(int32_t A);
    extern int32_t _IQ16sinPU(int32_t A);
    extern int32_t _IQ15sinPU(int32_t A);
    extern int32_t _IQ14sinPU(int32_t A);
    extern int32_t _IQ13sinPU(int32_t A);
    extern int32_t _IQ12sinPU(int32_t A);
    extern int32_t _IQ11sinPU(int32_t A);
    extern int32_t _IQ10sinPU(int32_t A);
    extern int32_t _IQ9sinPU(int32_t A);
    extern int32_t _IQ8sinPU(int32_t A);
    extern int32_t _IQ7sinPU(int32_t A);
    extern int32_t _IQ6sinPU(int32_t A);
    extern int32_t _IQ5sinPU(int32_t A);
    extern int32_t _IQ4sinPU(int32_t A);
    extern int32_t _IQ3sinPU(int32_t A);
    extern int32_t _IQ2sinPU(int32_t A);
    extern int32_t _IQ1sinPU(int32_t A);
    
    
    //*****************************************************************************
    //
    // Computes the arcsin of an IQ number.
    //
    //*****************************************************************************
    extern int32_t _IQ29asin(int32_t A);
    extern int32_t _IQ28asin(int32_t A);
    extern int32_t _IQ27asin(int32_t A);
    extern int32_t _IQ26asin(int32_t A);
    extern int32_t _IQ25asin(int32_t A);
    extern int32_t _IQ24asin(int32_t A);
    extern int32_t _IQ23asin(int32_t A);
    extern int32_t _IQ22asin(int32_t A);
    extern int32_t _IQ21asin(int32_t A);
    extern int32_t _IQ20asin(int32_t A);
    extern int32_t _IQ19asin(int32_t A);
    extern int32_t _IQ18asin(int32_t A);
    extern int32_t _IQ17asin(int32_t A);
    extern int32_t _IQ16asin(int32_t A);
    extern int32_t _IQ15asin(int32_t A);
    extern int32_t _IQ14asin(int32_t A);
    extern int32_t _IQ13asin(int32_t A);
    extern int32_t _IQ12asin(int32_t A);
    extern int32_t _IQ11asin(int32_t A);
    extern int32_t _IQ10asin(int32_t A);
    extern int32_t _IQ9asin(int32_t A);
    extern int32_t _IQ8asin(int32_t A);
    extern int32_t _IQ7asin(int32_t A);
    extern int32_t _IQ6asin(int32_t A);
    extern int32_t _IQ5asin(int32_t A);
    extern int32_t _IQ4asin(int32_t A);
    extern int32_t _IQ3asin(int32_t A);
    extern int32_t _IQ2asin(int32_t A);
    extern int32_t _IQ1asin(int32_t A);
    
    
    //*****************************************************************************
    //
    // Computes the cos of an IQ number.
    //
    //*****************************************************************************
    extern int32_t _IQ29cos(int32_t A);
    extern int32_t _IQ28cos(int32_t A);
    extern int32_t _IQ27cos(int32_t A);
    extern int32_t _IQ26cos(int32_t A);
    extern int32_t _IQ25cos(int32_t A);
    extern int32_t _IQ24cos(int32_t A);
    extern int32_t _IQ23cos(int32_t A);
    extern int32_t _IQ22cos(int32_t A);
    extern int32_t _IQ21cos(int32_t A);
    extern int32_t _IQ20cos(int32_t A);
    extern int32_t _IQ19cos(int32_t A);
    extern int32_t _IQ18cos(int32_t A);
    extern int32_t _IQ17cos(int32_t A);
    extern int32_t _IQ16cos(int32_t A);
    extern int32_t _IQ15cos(int32_t A);
    extern int32_t _IQ14cos(int32_t A);
    extern int32_t _IQ13cos(int32_t A);
    extern int32_t _IQ12cos(int32_t A);
    extern int32_t _IQ11cos(int32_t A);
    extern int32_t _IQ10cos(int32_t A);
    extern int32_t _IQ9cos(int32_t A);
    extern int32_t _IQ8cos(int32_t A);
    extern int32_t _IQ7cos(int32_t A);
    extern int32_t _IQ6cos(int32_t A);
    extern int32_t _IQ5cos(int32_t A);
    extern int32_t _IQ4cos(int32_t A);
    extern int32_t _IQ3cos(int32_t A);
    extern int32_t _IQ2cos(int32_t A);
    extern int32_t _IQ1cos(int32_t A);
    
    
    //*****************************************************************************
    //
    // Computes the cos of an IQ number, using cycles per unit instead of radians.
    //
    //*****************************************************************************
    extern int32_t _IQ30cosPU(int32_t A);
    extern int32_t _IQ29cosPU(int32_t A);
    extern int32_t _IQ28cosPU(int32_t A);
    extern int32_t _IQ27cosPU(int32_t A);
    extern int32_t _IQ26cosPU(int32_t A);
    extern int32_t _IQ25cosPU(int32_t A);
    extern int32_t _IQ24cosPU(int32_t A);
    extern int32_t _IQ23cosPU(int32_t A);
    extern int32_t _IQ22cosPU(int32_t A);
    extern int32_t _IQ21cosPU(int32_t A);
    extern int32_t _IQ20cosPU(int32_t A);
    extern int32_t _IQ19cosPU(int32_t A);
    extern int32_t _IQ18cosPU(int32_t A);
    extern int32_t _IQ17cosPU(int32_t A);
    extern int32_t _IQ16cosPU(int32_t A);
    extern int32_t _IQ15cosPU(int32_t A);
    extern int32_t _IQ14cosPU(int32_t A);
    extern int32_t _IQ13cosPU(int32_t A);
    extern int32_t _IQ12cosPU(int32_t A);
    extern int32_t _IQ11cosPU(int32_t A);
    extern int32_t _IQ10cosPU(int32_t A);
    extern int32_t _IQ9cosPU(int32_t A);
    extern int32_t _IQ8cosPU(int32_t A);
    extern int32_t _IQ7cosPU(int32_t A);
    extern int32_t _IQ6cosPU(int32_t A);
    extern int32_t _IQ5cosPU(int32_t A);
    extern int32_t _IQ4cosPU(int32_t A);
    extern int32_t _IQ3cosPU(int32_t A);
    extern int32_t _IQ2cosPU(int32_t A);
    extern int32_t _IQ1cosPU(int32_t A);
    
    
    //*****************************************************************************
    //
    // Computes the arctan of a coordinate specified by two IQ numbers.
    //
    //*****************************************************************************
    extern int32_t _IQ29atan2(int32_t A, int32_t B);
    extern int32_t _IQ28atan2(int32_t A, int32_t B);
    extern int32_t _IQ27atan2(int32_t A, int32_t B);
    extern int32_t _IQ26atan2(int32_t A, int32_t B);
    extern int32_t _IQ25atan2(int32_t A, int32_t B);
    extern int32_t _IQ24atan2(int32_t A, int32_t B);
    extern int32_t _IQ23atan2(int32_t A, int32_t B);
    extern int32_t _IQ22atan2(int32_t A, int32_t B);
    extern int32_t _IQ21atan2(int32_t A, int32_t B);
    extern int32_t _IQ20atan2(int32_t A, int32_t B);
    extern int32_t _IQ19atan2(int32_t A, int32_t B);
    extern int32_t _IQ18atan2(int32_t A, int32_t B);
    extern int32_t _IQ17atan2(int32_t A, int32_t B);
    extern int32_t _IQ16atan2(int32_t A, int32_t B);
    extern int32_t _IQ15atan2(int32_t A, int32_t B);
    extern int32_t _IQ14atan2(int32_t A, int32_t B);
    extern int32_t _IQ13atan2(int32_t A, int32_t B);
    extern int32_t _IQ12atan2(int32_t A, int32_t B);
    extern int32_t _IQ11atan2(int32_t A, int32_t B);
    extern int32_t _IQ10atan2(int32_t A, int32_t B);
    extern int32_t _IQ9atan2(int32_t A, int32_t B);
    extern int32_t _IQ8atan2(int32_t A, int32_t B);
    extern int32_t _IQ7atan2(int32_t A, int32_t B);
    extern int32_t _IQ6atan2(int32_t A, int32_t B);
    extern int32_t _IQ5atan2(int32_t A, int32_t B);
    extern int32_t _IQ4atan2(int32_t A, int32_t B);
    extern int32_t _IQ3atan2(int32_t A, int32_t B);
    extern int32_t _IQ2atan2(int32_t A, int32_t B);
    extern int32_t _IQ1atan2(int32_t A, int32_t B);
    
    
    //*****************************************************************************
    //
    // Computes the arctan of a coordinate specified by two IQ numbers, returning
    // the value in cycles per unit instead of radians.
    //
    //*****************************************************************************
    extern int32_t _IQ30atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ29atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ28atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ27atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ26atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ25atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ24atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ23atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ22atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ21atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ20atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ19atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ18atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ17atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ16atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ15atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ14atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ13atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ12atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ11atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ10atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ9atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ8atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ7atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ6atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ5atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ4atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ3atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ2atan2PU(int32_t A, int32_t B);
    extern int32_t _IQ1atan2PU(int32_t A, int32_t B);
    
    
    //*****************************************************************************
    //
    // Computes the square root of an IQ number.
    //
    //*****************************************************************************
    extern int32_t _IQ30sqrt(int32_t A);
    extern int32_t _IQ29sqrt(int32_t A);
    extern int32_t _IQ28sqrt(int32_t A);
    extern int32_t _IQ27sqrt(int32_t A);
    extern int32_t _IQ26sqrt(int32_t A);
    extern int32_t _IQ25sqrt(int32_t A);
    extern int32_t _IQ24sqrt(int32_t A);
    extern int32_t _IQ23sqrt(int32_t A);
    extern int32_t _IQ22sqrt(int32_t A);
    extern int32_t _IQ21sqrt(int32_t A);
    extern int32_t _IQ20sqrt(int32_t A);
    extern int32_t _IQ19sqrt(int32_t A);
    extern int32_t _IQ18sqrt(int32_t A);
    extern int32_t _IQ17sqrt(int32_t A);
    extern int32_t _IQ16sqrt(int32_t A);
    extern int32_t _IQ15sqrt(int32_t A);
    extern int32_t _IQ14sqrt(int32_t A);
    extern int32_t _IQ13sqrt(int32_t A);
    extern int32_t _IQ12sqrt(int32_t A);
    extern int32_t _IQ11sqrt(int32_t A);
    extern int32_t _IQ10sqrt(int32_t A);
    extern int32_t _IQ9sqrt(int32_t A);
    extern int32_t _IQ8sqrt(int32_t A);
    extern int32_t _IQ7sqrt(int32_t A);
    extern int32_t _IQ6sqrt(int32_t A);
    extern int32_t _IQ5sqrt(int32_t A);
    extern int32_t _IQ4sqrt(int32_t A);
    extern int32_t _IQ3sqrt(int32_t A);
    extern int32_t _IQ2sqrt(int32_t A);
    extern int32_t _IQ1sqrt(int32_t A);
    
    
    //*****************************************************************************
    //
    // Computes 1 over the square root of an IQ number.
    //
    //*****************************************************************************
    extern int32_t _IQ30isqrt(int32_t A);
    extern int32_t _IQ29isqrt(int32_t A);
    extern int32_t _IQ28isqrt(int32_t A);
    extern int32_t _IQ27isqrt(int32_t A);
    extern int32_t _IQ26isqrt(int32_t A);
    extern int32_t _IQ25isqrt(int32_t A);
    extern int32_t _IQ24isqrt(int32_t A);
    extern int32_t _IQ23isqrt(int32_t A);
    extern int32_t _IQ22isqrt(int32_t A);
    extern int32_t _IQ21isqrt(int32_t A);
    extern int32_t _IQ20isqrt(int32_t A);
    extern int32_t _IQ19isqrt(int32_t A);
    extern int32_t _IQ18isqrt(int32_t A);
    extern int32_t _IQ17isqrt(int32_t A);
    extern int32_t _IQ16isqrt(int32_t A);
    extern int32_t _IQ15isqrt(int32_t A);
    extern int32_t _IQ14isqrt(int32_t A);
    extern int32_t _IQ13isqrt(int32_t A);
    extern int32_t _IQ12isqrt(int32_t A);
    extern int32_t _IQ11isqrt(int32_t A);
    extern int32_t _IQ10isqrt(int32_t A);
    extern int32_t _IQ9isqrt(int32_t A);
    extern int32_t _IQ8isqrt(int32_t A);
    extern int32_t _IQ7isqrt(int32_t A);
    extern int32_t _IQ6isqrt(int32_t A);
    extern int32_t _IQ5isqrt(int32_t A);
    extern int32_t _IQ4isqrt(int32_t A);
    extern int32_t _IQ3isqrt(int32_t A);
    extern int32_t _IQ2isqrt(int32_t A);
    extern int32_t _IQ1isqrt(int32_t A);
    
    
    //*****************************************************************************
    //
    // Computes e^x of an IQ number.
    //
    //*****************************************************************************
    extern int32_t _IQ30exp(int32_t A);
    extern int32_t _IQ29exp(int32_t A);
    extern int32_t _IQ28exp(int32_t A);
    extern int32_t _IQ27exp(int32_t A);
    extern int32_t _IQ26exp(int32_t A);
    extern int32_t _IQ25exp(int32_t A);
    extern int32_t _IQ24exp(int32_t A);
    extern int32_t _IQ23exp(int32_t A);
    extern int32_t _IQ22exp(int32_t A);
    extern int32_t _IQ21exp(int32_t A);
    extern int32_t _IQ20exp(int32_t A);
    extern int32_t _IQ19exp(int32_t A);
    extern int32_t _IQ18exp(int32_t A);
    extern int32_t _IQ17exp(int32_t A);
    extern int32_t _IQ16exp(int32_t A);
    extern int32_t _IQ15exp(int32_t A);
    extern int32_t _IQ14exp(int32_t A);
    extern int32_t _IQ13exp(int32_t A);
    extern int32_t _IQ12exp(int32_t A);
    extern int32_t _IQ11exp(int32_t A);
    extern int32_t _IQ10exp(int32_t A);
    extern int32_t _IQ9exp(int32_t A);
    extern int32_t _IQ8exp(int32_t A);
    extern int32_t _IQ7exp(int32_t A);
    extern int32_t _IQ6exp(int32_t A);
    extern int32_t _IQ5exp(int32_t A);
    extern int32_t _IQ4exp(int32_t A);
    extern int32_t _IQ3exp(int32_t A);
    extern int32_t _IQ2exp(int32_t A);
    extern int32_t _IQ1exp(int32_t A);
    
    
    //*****************************************************************************
    //
    // Computes 2^x of an IQ number.
    //
    //*****************************************************************************
    extern int32_t _IQ30exp2(int32_t A);
    extern int32_t _IQ29exp2(int32_t A);
    extern int32_t _IQ28exp2(int32_t A);
    extern int32_t _IQ27exp2(int32_t A);
    extern int32_t _IQ26exp2(int32_t A);
    extern int32_t _IQ25exp2(int32_t A);
    extern int32_t _IQ24exp2(int32_t A);
    extern int32_t _IQ23exp2(int32_t A);
    extern int32_t _IQ22exp2(int32_t A);
    extern int32_t _IQ21exp2(int32_t A);
    extern int32_t _IQ20exp2(int32_t A);
    extern int32_t _IQ19exp2(int32_t A);
    extern int32_t _IQ18exp2(int32_t A);
    extern int32_t _IQ17exp2(int32_t A);
    extern int32_t _IQ16exp2(int32_t A);
    extern int32_t _IQ15exp2(int32_t A);
    extern int32_t _IQ14exp2(int32_t A);
    extern int32_t _IQ13exp2(int32_t A);
    extern int32_t _IQ12exp2(int32_t A);
    extern int32_t _IQ11exp2(int32_t A);
    extern int32_t _IQ10exp2(int32_t A);
    extern int32_t _IQ9exp2(int32_t A);
    extern int32_t _IQ8exp2(int32_t A);
    extern int32_t _IQ7exp2(int32_t A);
    extern int32_t _IQ6exp2(int32_t A);
    extern int32_t _IQ5exp2(int32_t A);
    extern int32_t _IQ4exp2(int32_t A);
    extern int32_t _IQ3exp2(int32_t A);
    extern int32_t _IQ2exp2(int32_t A);
    extern int32_t _IQ1exp2(int32_t A);


} //extern "C"












namespace ix_ns{
    constexpr const float PIx2 = 3.14159265358979 * 2.0;
} //namespace ix_ns



template<typename T, int I = 0>
struct IX{
    
  struct ix_t{};  
    
  using Type = T;
  enum {fractional = I};  
  
  
  T val;
  
  constexpr IX() : val(0){}
  
  template<typename U>
  constexpr IX(U A) : val(static_cast<T>(A * (1 << I))){}
  
  constexpr IX(const IX& A) : val(A.val){}
  
  //
  // Assignment operator
  //
  constexpr IX& operator=(const IX& A){
      val = A.val;
      return(*this);
  };
  
  
  //
  // Arithmetic operators +=, -=, *=, /= 
  //
  constexpr IX& operator+=(const IX& A){
    val += A.val;
    return (*this);
  }
  
  constexpr IX& operator-=(const IX& A){
    val -= A.val;
    return (*this);
  }
  
  
  template<typename U, std::enable_if_t<std::is_integral_v<typename U::Type>, bool> = true>
  constexpr U& operator*=(const U& A){
      val = mul_op_helper<U, U::fractional>::handler(*this, A);
      return (*this);
  }
  
  template<typename U, std::enable_if_t<std::is_floating_point_v<typename U::Type>, bool> = true>
  constexpr U& operator*=(const U& A){
      val *= A.val;
      return (*this);
  }
  
  
  template<typename U, std::enable_if_t<std::is_integral_v<typename U::Type>, bool> = true>
  constexpr U& operator/=(const U& A){
      val = div_op_helper<U, U::fractional>::handler(*this, A);
      return (*this);
  }
  
  template<typename U, std::enable_if_t<std::is_floating_point_v<typename U::Type>, bool> = true>
  constexpr U& operator/=(const U& A){
      val /= A.val;
      return (*this);
  }
  
  
  //
  // Bitwise operators &=, |=, ^=
  //
  
  template<typename U = T, std::enable_if_t<std::is_integral_v<U>, bool> = true>
  constexpr IX& operator&=(const long& A){
     val &= A;
     return (*this);
  }
  
  template<typename U = T, std::enable_if_t<std::is_integral_v<U>, bool> = true>
  constexpr IX& operator&=(const IX& A){
     val &= A.val;
     return (*this);
  }
  
  template<typename U = T, std::enable_if_t<std::is_integral_v<U>, bool> = true>
  constexpr IX& operator|=(const long& A){
      val |= A;
      return (*this);
  }
  
  template<typename U = T, std::enable_if_t<std::is_integral_v<U>, bool> = true>
  constexpr IX& operator|=(const IX& A){
      val |= A.val;
      return (*this);
  }
  
  
  template<typename U = T, std::enable_if_t<std::is_integral_v<U>, bool> = true>
  constexpr IX& operator^=(const long& A){
      val ^= A;
      return (*this);
  }
  
  template<typename U = T, std::enable_if_t<std::is_integral_v<U>, bool> = true>
  constexpr IX& operator^=(const IX& A){
      val ^= A.val;
      return (*this);
  }
  
  
   private:
    
    template<typename U, int N>
    struct mul_op_helper;
    
    template<typename U>
    struct mul_op_helper<U, 21>{        
      static T handler(const IX<T, I>& cl, const U& A){
          T B;
          B = _IQ21mpy(cl.val, A.val);
          return B;
      }
    };
    
    
    template<typename U, int N>
    struct div_op_helper;
    
    template<typename U>
    struct div_op_helper<U, 21>{        
      static T handler(const IX<T, I>& cl, const U& A){
          T B;
          B = _IQ21div(cl.val, A.val);
          return B;
      }
    };
  
};



//
// Arithmetic operators
//
//
// +
//
template<typename T, int I>
constexpr IX<T, I> operator+(const IX<T, I>& A, const IX<T, I>& B){
  IX<T, I> C = A;
  C += B;
  return C;
}

//
// -
//
template<typename T, int I>
constexpr IX<T, I> operator-(const IX<T, I>& A, const IX<T, I>& B){
  IX<T, I> C = A;
  C -= B;
  return C;
}


template<typename T, int I>
constexpr IX<T, I> operator-(const IX<T, I>& A){
  IX<T, I> B;
  B.val = - A.val;
  return B;
}


//
// *
//
template<typename T, int I>
constexpr IX<T, I> operator*(const IX<T, I>& A, const IX<T, I>& B){
    IX<T, I> C = A;
    C *= B;
    return C;
}


//
// /
//
template<typename T, int I>
constexpr IX<T, I> operator/(const IX<T, I>& A, const IX<T, I>& B){
    IX<T, I> C = A;
    C /= B;
    return C;
}
//
//  Logical operators
//
template<typename T, int I>
constexpr bool operator==(const IX<T, I>& A, const IX<T, I>& B){
    return A.val == B.val;
}

template<typename T, int I>
constexpr bool operator!=(const IX<T, I>& A, const IX<T, I>& B){
    return !(A.val == B.val);
}

template<typename T, int I>
constexpr bool operator<(const IX<T, I>& A, const IX<T, I>& B){
    return A.val < B.val;
}

template<typename T, int I>
constexpr bool operator>(const IX<T, I>& A, const IX<T, I>& B){
    return B < A;
}

template<typename T, int I>
constexpr bool operator<=(const IX<T, I>& A, const IX<T, I>& B){
    return B > A;
}

template<typename T, int I>
constexpr bool operator>=(const IX<T, I>& A, const IX<T, I>& B){
    return B < A;
}

template<typename T, int I>
constexpr bool operator&&(const IX<T, I>& A, const IX<T, I>& B){
    return A.val && B.val;
}

template<typename T, int I>
constexpr bool operator||(const IX<T, I>& A, const IX<T, I>& B){
    return A.val || B.val;
}


//
// Bitwise operators &, |, ^
//
template<typename T, int I, std::enable_if_t<std::is_integral_v<T>, bool> =true>
constexpr IX<T, I> operator&(const IX<T, I>& A, const long& B){
  IX<T, I> C = A;
  C &= B;
  return C;
}

template<typename T, int I, std::enable_if_t<std::is_integral_v<T>, bool> =true>
constexpr IX<T, I> operator|(const IX<T, I>& A, const long& B){
  IX<T, I> C = A;
  C |= B;
  return C;
}

template<typename T, int I, std::enable_if_t<std::is_integral_v<T>, bool> =true>
constexpr IX<T, I> operator^(const IX<T, I>& A, const long& B){
  IX<T, I> C = A;
  C ^= B;
  return C;
}


//*****************************************************************************
//
// Convert a IQ number to a floating point value.
//
//*****************************************************************************

template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
constexpr float IXtoF(const T& A){
    return A.val;
}

template<typename T, int I>
struct fxdpt2float_helper{
  constexpr static float handler(const T& v){
      return v.val / (1 << I);
  }
};

// Partial specialization for frac = 21
template<typename T>
struct fxdpt2float_helper<T, 21>{
  constexpr static float handler(const T& A){
      float t_ = _IQ21toF(A.val);
      return  t_;
  }
};

template<typename T>
struct fxdpt2float_helper<T, 22>{
  constexpr static float handler(const T& A){
      float t_ = _IQ22toF(A.val);
      return  t_;
  }
};

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr float IXtoF(const T& A){
    return fxdpt2float_helper<T, T::fractional>::handler(A);
}


//*****************************************************************************
//
// Saturates an IQ number in a given range.
//
//*****************************************************************************

template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
constexpr auto IXsat(const T& A, const T& Pos, const T& Neg){
    return A > Pos ? Pos : (A < Neg ? Neg : A);
}

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr auto IXsat(const T& A, const T& Pos, const T& Neg){
    T B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return B;
}


//*****************************************************************************
//
// Returns the integer portion of an IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
constexpr long IXint(const T& A){
    return A.val; 
}

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr long IXint(const T& A){
    return A.val >> T::fractional; 
}


//*****************************************************************************
//
// Computes the fractional portion of an IQ number.
//
//*****************************************************************************

template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
constexpr float IXfrac(const T& A){
     return static_cast<float>(A.val - static_cast<long>(A.val));
}

template<typename T, int I>
struct IXfrac_helper{
    static auto handler(const T& A);
};


template<typename T>
struct IXfrac_helper<T, 21>{
    static auto handler(const T& A){
        T B;
        B.val = _IQ21frac(A);
        return B;
    }
};

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr float IXfrac(const T& A){
    return IXfrac_helper<T, T::fractional>::handler(A);
}


//*****************************************************************************
//
// Multiplies two IQ numbers, with rounding.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
constexpr auto IXrmpy(const T& A, const T& B){
    return A * B;
}


template<typename T, int I>
struct IXrmpy_helper{
  static auto handler(const T& A, const T& B);
};

// Partial specialization for frac = 21
template<typename T>
struct IXrmpy_helper<T, 21>{
  static auto handler(const T& A, const T& B){
      T C;
      C.val = _IQ21rmpy(A.val, B.val);
      return C;
  }
};


template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr auto IXrmpy(const T& A, const T& B){
    return IXrmpy_helper<T, T::fractional>::handler(A, B);
}


//*****************************************************************************
//
// Multiplies two IQ numbers, with rounding and saturation.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
constexpr auto IXrsmpy(const T& A, const T& B);


template<typename T, int I>
struct IXrsmpy_helper{
  static auto handler(const T& A, const T& B);
};

// Partial specialization for frac = 21
template<typename T>
struct IXrsmpy_helper<T, 21>{
  static auto handler(const T& A, const T& B){
      T C;
      C.val = _IQ21rsmpy(A.val, B.val);
      return C;
  }
};


template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr auto IXrsmpy(const T& A, const T& B){
    return IXrsmpy_helper<T, T::fractional>::handler(A, B);
}


//*****************************************************************************
//
// Multiplies an IQ number by an integer.
//
//*****************************************************************************

template<typename T>
constexpr auto IXmpyI32(const T& A, long B){
    T C;
    C.val = A.val * static_cast<typename T::Type>(B);
    return C;
}

//*****************************************************************************
//
// Multiplies an IQ number by an integer, and returns the integer portion.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
constexpr long IXmpyI32int(const T& A, long B){
    return static_cast<long>(A.val * static_cast<typename T::Type>(B));
}


template<typename T, int I>
struct IXmpyI32int_helper{
  static long handler(const T& A, long B);
};

// Partial specialization for frac = 21
template<typename T>
struct IXmpyI32int_helper<T, 21>{
  static long handler(const T& A, long B){
      return _IQ21mpyI32int(A.val, B);;
  }
};


template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr long IXmpyI32int(const T& A, long B){
    return IXmpyI32int_helper<T, T::fractional>::handler(A, B);
}



//*****************************************************************************
//
// Multiplies an IQ number by an integer, and returns the fractional portion.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
constexpr auto IXmpyI32frac(const T& A, long B){
    auto c = A.val * static_cast<typename T::Type>(B); 
    return c - static_cast<typename T::Type>(static_cast<long>(c)); 
}


template<typename T, int I>
struct IXmpyI32frac_helper{
  static auto handler(const T& A, long B);
};

// Partial specialization for frac = 21
template<typename T>
struct IXmpyI32frac_helper<T, 21>{
  static auto handler(const T& A, long B){
      return _IQ21mpyI32frac(A.val, B);
  }
};


template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr auto IXmpyI32frac(const T& A, long B){
    return IXmpyI32frac_helper<T, T::fractional>::handler(A, B);
}


//*****************************************************************************
//
// Computes the sin of an IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, double>, bool> = true >
constexpr auto IXsin(const T& A){
    T C;
    C.val = std::sin(A.val);
    return C;
}


template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, float>, bool> = true >
constexpr auto IXsin(const T& A){
    T C;
    C.val = arm_sin_f32(A.val);
    return C;
}


template<typename T, int I>
struct IXsin_helper{
    static auto handler(const T& A);
};

template<typename T>
struct IXsin_helper<T, 21>{
    static auto handler(const T& A){
        T B;
        B.val = _IQ21sin(A.val);
        return B;
    }
};

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr auto IXsin(const T& A){
    return IXsin_helper<T, T::fractional>::handler(A);
}


//*****************************************************************************
//
// Computes the sin of an IQ number, using cycles per unit instead of radians.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, double>, bool> = true >
constexpr auto IXsinPU(const T& A){
    T C;
    C.val = std::sin(A.val * ix_ns::PIx2);
    return C;
}


template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, float>, bool> = true >
constexpr auto IXsinPU(const T& A){
    T C;
    C.val = arm_sin_f32(A.val * ix_ns::PIx2);
    return C;
}


template<typename T, int I>
struct IXsinPU_helper{
    static auto handler(const T& A);
};

template<typename T>
struct IXsinPU_helper<T, 21>{
    static auto handler(const T& A){
        T B;
        B.val = _IQ21sinPU(A.val);
        return B;
    }
};

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr auto IXsinPU(const T& A){
    return IXsinPU_helper<T, T::fractional>::handler(A);
}



//*****************************************************************************
//
// Computes the arcsin of an CPP_IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
constexpr auto IXasin(const T& A){
    T B;
    B.val = std::asin(A.val);
    return B;
}

template<typename T, int I>
struct IXasin_helper{
    static auto handler(const T& A);
};

template<typename T>
struct IXasin_helper<T, 21>{
    static auto handler(const T& A){
        T B;
        B.val = _IQ21asin(A.val);
        return B;
    }
};

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr auto IXasin(const T& A){
    return IXasin_helper<T, T::fractional>::handler(A);
}


//*****************************************************************************
//
// Computes the cos of an IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, double>, bool> = true >
constexpr auto IXcos(const T& A){
    T C;
    C.val = std::cos(A.val);
    return C;
}


template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, float>, bool> = true >
constexpr auto IXcos(const T& A){
    T C;
    C.val = arm_cos_f32(A.val);
    return C;
}


template<typename T, int I>
struct IXcos_helper{
    static auto handler(const T& A);
};

template<typename T>
struct IXcos_helper<T, 21>{
    static auto handler(const T& A){
        T B;
        B.val = _IQ21cos(A.val);
        return B;
    }
};

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr auto IXcos(const T& A){
    return IXcos_helper<T, T::fractional>::handler(A);
}

//*****************************************************************************
//
// Computes the cos of an IQ number, using cycles per unit instead of radians.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, double>, bool> = true >
constexpr auto IXcosPU(const T& A){
    T C;
    C.val = std::cos(A.val * ix_ns::PIx2);
    return C;
}


template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, float>, bool> = true >
constexpr auto IXcosPU(const T& A){
    T C;
    C.val = arm_cos_f32(A.val * ix_ns::PIx2);
    return C;
}


template<typename T, int I>
struct IXcosPU_helper{
    static auto handler(const T& A);
};

template<typename T>
struct IXcosPU_helper<T, 21>{
    static auto handler(const T& A){
        T B;
        B.val = _IQ21cosPU(A.val);
        return B;
    }
};

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr auto IXcosPU(const T& A){
    return IXcosPU_helper<T, T::fractional>::handler(A);
}


//*****************************************************************************
//
// Computes the arccos of an CPP_IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
constexpr auto IXacos(const T& A){
    T B;
    B.val = std::acos(A.val);
    return B;
}

template<typename T, int I>
struct IXacos_helper{
    static auto handler(const T& A);
};

template<typename T>
struct IXacos_helper<T, 21>{
    static auto handler(const T& A){
        T B;
        B.val = _IQ21acos(A.val);
        return B;
    }
};

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr auto IXacos(const T& A){
    return IXacos_helper<T, T::fractional>::handler(A);
}


//*****************************************************************************
//
// Computes the arctan of a coordinate specified by two IQ numbers.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
constexpr auto IXatan2(const T& A, const T& B){
    T C;
    C.val = std::atan2(A.val, B.val);
    return C;
}

template<typename T, int I>
struct IXatan2_helper{
    static auto handler(const T& A, const T& B);
};

template<typename T>
struct IXatan2_helper<T, 21>{
    static auto handler(const T& A, const T& B){
        T C;
        C.val = _IQ21atan2(A.val, B.val);
        return C;
    }
};

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr auto IXatan2(const T& A, const T& B){
    return IXatan2_helper<T, T::fractional>::handler(A, B);
}


//*****************************************************************************
//
// Computes the arctan of a coordinate specified by two IQ numbers, returning
// the value in cycles per unit instead of radians.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
constexpr auto IXatan2PU(const T& A, const T& B){
    T C;
    C.val = std::atan2(A.val * ix_ns::PIx2, B.val * ix_ns::PIx2);
    return C;
}

template<typename T, int I>
struct IXatan2PU_helper{
    static auto handler(const T& A, const T& B);
};

template<typename T>
struct IXatan2PU_helper<T, 21>{
    static auto handler(const T& A, const T& B){
        T C;
        C.val = _IQ21atan2PU(A.val, B.val);
        return C;
    }
};

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr auto IXatan2PU(const T& A, const T& B){
    return IXatan2PU_helper<T, T::fractional>::handler(A, B);
}


//*****************************************************************************
//
// Computes the square root of an IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, double>, bool> = true >
constexpr auto IXsqrt(const T& A){
    T B;
    B.val = std::sqrt(A.val);
    return B;
}

template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, float>, bool> = true >
constexpr auto IXsqrt(const T& A){
    T B;
    B.val = arm_sqrt_f32(A.val);
    return B;
}

template<typename T, int I>
struct IXsqrt_helper{
    static auto handler(const T& A);
};

template<typename T>
struct IXsqrt_helper<T, 21>{
    static auto handler(const T& A){
        T B;
        B.val = _IQ21sqrt(A.val);
        return B;
    }
};

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr auto IXsqrt(const T& A){
    return IXsqrt_helper<T, T::fractional>::handler(A);
}



//*****************************************************************************
//
// Computes 1 over the square root of an IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, double>, bool> = true >
constexpr auto IXisqrt(const T& A){
    T B;
    B.val = std::sqrt(static_cast<typename T::Type>(1.0) / A.val);
    return B;
}

template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, float>, bool> = true >
constexpr auto IXisqrt(const T& A){
    T B;
    B.val = arm_sqrt_f32(A.val);
    B.val = 1.0f / B.val;
    return B;
}

template<typename T, int I>
struct IXisqrt_helper{
    static auto handler(const T& A);
};

template<typename T>
struct IXisqrt_helper<T, 21>{
    static auto handler(const T& A){
        T B;
        B.val = _IQ21isqrt(A.val);
        return B;
    }
};

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr auto IXisqrt(const T& A){
    return IXisqrt_helper<T, T::fractional>::handler(A);
}


//*****************************************************************************
//
// Computes e^x of an CPP_IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
constexpr auto IXexp(const T& A){
    T B;
    B.val = std::exp(A.val);
    return B;
}

template<typename T, int I>
struct IXexp_helper{
    static auto handler(const T& A);
};

template<typename T>
struct IXexp_helper<T, 21>{
    static auto handler(const T& A){
        T B;
        B.val = _IQ21exp(A.val);
        return B;
    }
};

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr auto IXexp(const T& A){
    return IXexp_helper<T, T::fractional>::handler(A);
}


//*****************************************************************************
//
// Computes 2^x of an IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
constexpr auto IXexp2(const T& A){
    T B;
    B.val = std::exp(A.val);
    return B;
}

template<typename T, int I>
struct IXexp2_helper{
    static auto handler(const T& A);
};

template<typename T>
struct IXexp2_helper<T, 21>{
    static auto handler(const T& A){
        T B;
        B.val = _IQ21exp(A.val);
        return B;
    }
};

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr auto IXexp2(const T& A){
    return IXexp2_helper<T, T::fractional>::handler(A);
}



//*****************************************************************************
//
// Computes the square root of A^2 + B^2 using IQ numbers.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
constexpr auto IXmag(const T& A, const T& B){
    T C;
    C.val = std::sqrt(A.val * A.val, B.val * B.val);
    return C;
}

template<typename T, int I>
struct IXmag_helper{
    static auto handler(const T& A, const T& B);
};

template<typename T>
struct IXmag_helper<T, 21>{
    static auto handler(const T& A, const T& B){
        T C;
        C.val = _IQ21mag(A.val, B.val);
        return C;
    }
};

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr auto IXmag(const T& A){
    return IXmag_helper<T, T::fractional>::handler(A);
}


//*****************************************************************************
//
// Computes the absolute value of an IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
constexpr auto IXabs(const T& A){
    T B;
    B.val = std::abs(A.val);
    return B;
}


template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
constexpr auto IXabs(const T& A){
    T B;
    B.val = A.val < 0 ? -A.val : A.val;
    return B;
}








  









