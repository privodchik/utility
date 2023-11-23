//*****************************************************************************
//
// IQmathCPP.h - IQmath library C++ language function definitions.
//
// Copyright (c) 2010 Texas Instruments Incorporated.  All rights reserved.
// TI Information - Selective Disclosure
//
//*****************************************************************************

#ifndef __IQMATHCPP_H__
#define __IQMATHCPP_H__

//*****************************************************************************
//
// Include some standard headers, as required based on the math type.
//
//*****************************************************************************
#include "IQmathLib.h"
#include <stdlib.h>
#if MATH_TYPE == FLOAT_MATH
#include <cmath>
#include <stdio.h>
#include <type_traits>
#include <utility>
#endif



//*****************************************************************************
//
// See if IQmath or floating point is being used.
//
//*****************************************************************************
#if MATH_TYPE == IQ_MATH

//*****************************************************************************
//
// The C++ class for the various IQ formats.
//
//*****************************************************************************
struct iq
{
    //
    // Constructors.
    //
    iq() : val(0)
    {
    }
    
    iq(_iq A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq(const iq &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq &operator=(const iq &A);
    
    //
    // Arithmetic operators.
    //
    inline iq &operator+=(const iq &A);
    inline iq &operator-=(const iq &A);
    inline iq &operator*=(const iq &A);
    inline iq &operator/=(const iq &A);
    
    //
    // Bitwise operators.
    //
    inline iq &operator&=(const _iq &A);
    inline iq &operator|=(const _iq &A);
    inline iq &operator^=(const _iq &A);
    
    //
    // The IQ number.
    //
    _iq val;
};

struct iq30
{
    //
    // Constructors.
    //
    iq30() : val(0)
    {
    }
    
    iq30(_iq30 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq30(const iq30 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq30 &operator=(const iq30 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq30 &operator+=(const iq30 &A);
    inline iq30 &operator-=(const iq30 &A);
    inline iq30 &operator*=(const iq30 &A);
    inline iq30 &operator/=(const iq30 &A);
    
    //
    // Bitwise operators.
    //
    inline iq30 &operator&=(const _iq30 &A);
    inline iq30 &operator|=(const _iq30 &A);
    inline iq30 &operator^=(const _iq30 &A);
    
    //
    // The IQ number.
    //
    _iq30 val;
};

struct iq29
{
    //
    // Constructors.
    //
    iq29() : val(0)
    {
    }
    
    iq29(_iq29 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq29(const iq29 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq29 &operator=(const iq29 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq29 &operator+=(const iq29 &A);
    inline iq29 &operator-=(const iq29 &A);
    inline iq29 &operator*=(const iq29 &A);
    inline iq29 &operator/=(const iq29 &A);
    
    //
    // Bitwise operators.
    //
    inline iq29 &operator&=(const _iq29 &A);
    inline iq29 &operator|=(const _iq29 &A);
    inline iq29 &operator^=(const _iq29 &A);
    
    //
    // The IQ number.
    //
    _iq29 val;
};

struct iq28
{
    //
    // Constructors.
    //
    iq28() : val(0)
    {
    }
    
    iq28(_iq28 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq28(const iq28 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq28 &operator=(const iq28 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq28 &operator+=(const iq28 &A);
    inline iq28 &operator-=(const iq28 &A);
    inline iq28 &operator*=(const iq28 &A);
    inline iq28 &operator/=(const iq28 &A);
    
    //
    // Bitwise operators.
    //
    inline iq28 &operator&=(const _iq28 &A);
    inline iq28 &operator|=(const _iq28 &A);
    inline iq28 &operator^=(const _iq28 &A);
    
    //
    // The IQ number.
    //
    _iq28 val;
};

struct iq27
{
    //
    // Constructors.
    //
    iq27() : val(0)
    {
    }
    
    iq27(_iq27 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq27(const iq27 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq27 &operator=(const iq27 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq27 &operator+=(const iq27 &A);
    inline iq27 &operator-=(const iq27 &A);
    inline iq27 &operator*=(const iq27 &A);
    inline iq27 &operator/=(const iq27 &A);
    
    //
    // Bitwise operators.
    //
    inline iq27 &operator&=(const _iq27 &A);
    inline iq27 &operator|=(const _iq27 &A);
    inline iq27 &operator^=(const _iq27 &A);
    
    //
    // The IQ number.
    //
    _iq27 val;
};

struct iq26
{
    //
    // Constructors.
    //
    iq26() : val(0)
    {
    }
    
    iq26(_iq26 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq26(const iq26 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq26 &operator=(const iq26 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq26 &operator+=(const iq26 &A);
    inline iq26 &operator-=(const iq26 &A);
    inline iq26 &operator*=(const iq26 &A);
    inline iq26 &operator/=(const iq26 &A);
    
    //
    // Bitwise operators.
    //
    inline iq26 &operator&=(const _iq26 &A);
    inline iq26 &operator|=(const _iq26 &A);
    inline iq26 &operator^=(const _iq26 &A);
    
    //
    // The IQ number.
    //
    _iq26 val;
};

struct iq25
{
    //
    // Constructors.
    //
    iq25() : val(0)
    {
    }
    
    iq25(_iq25 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq25(const iq25 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq25 &operator=(const iq25 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq25 &operator+=(const iq25 &A);
    inline iq25 &operator-=(const iq25 &A);
    inline iq25 &operator*=(const iq25 &A);
    inline iq25 &operator/=(const iq25 &A);
    
    //
    // Bitwise operators.
    //
    inline iq25 &operator&=(const _iq25 &A);
    inline iq25 &operator|=(const _iq25 &A);
    inline iq25 &operator^=(const _iq25 &A);
    
    //
    // The IQ number.
    //
    _iq25 val;
};

struct iq24
{
    //
    // Constructors.
    //
    iq24() : val(0)
    {
    }
    
    iq24(_iq24 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq24(const iq24 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq24 &operator=(const iq24 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq24 &operator+=(const iq24 &A);
    inline iq24 &operator-=(const iq24 &A);
    inline iq24 &operator*=(const iq24 &A);
    inline iq24 &operator/=(const iq24 &A);
    
    //
    // Bitwise operators.
    //
    inline iq24 &operator&=(const _iq24 &A);
    inline iq24 &operator|=(const _iq24 &A);
    inline iq24 &operator^=(const _iq24 &A);
    
    //
    // The IQ number.
    //
    _iq24 val;
};

struct iq23
{
    //
    // Constructors.
    //
    iq23() : val(0)
    {
    }
    
    iq23(_iq23 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq23(const iq23 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq23 &operator=(const iq23 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq23 &operator+=(const iq23 &A);
    inline iq23 &operator-=(const iq23 &A);
    inline iq23 &operator*=(const iq23 &A);
    inline iq23 &operator/=(const iq23 &A);
    
    //
    // Bitwise operators.
    //
    inline iq23 &operator&=(const _iq23 &A);
    inline iq23 &operator|=(const _iq23 &A);
    inline iq23 &operator^=(const _iq23 &A);
    
    //
    // The IQ number.
    //
    _iq23 val;
};

struct iq22
{
    //
    // Constructors.
    //
    iq22() : val(0)
    {
    }
    
    iq22(_iq22 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq22(const iq22 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq22 &operator=(const iq22 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq22 &operator+=(const iq22 &A);
    inline iq22 &operator-=(const iq22 &A);
    inline iq22 &operator*=(const iq22 &A);
    inline iq22 &operator/=(const iq22 &A);
    
    //
    // Bitwise operators.
    //
    inline iq22 &operator&=(const _iq22 &A);
    inline iq22 &operator|=(const _iq22 &A);
    inline iq22 &operator^=(const _iq22 &A);
    
    //
    // The IQ number.
    //
    _iq22 val;
};

struct iq21
{
    //
    // Constructors.
    //
    iq21() : val(0)
    {
    }
    
    iq21(_iq21 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq21(const iq21 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq21 &operator=(const iq21 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq21 &operator+=(const iq21 &A);
    inline iq21 &operator-=(const iq21 &A);
    inline iq21 &operator*=(const iq21 &A);
    inline iq21 &operator/=(const iq21 &A);
    
    //
    // Bitwise operators.
    //
    inline iq21 &operator&=(const _iq21 &A);
    inline iq21 &operator|=(const _iq21 &A);
    inline iq21 &operator^=(const _iq21 &A);
    
    //
    // The IQ number.
    //
    _iq21 val;
};

struct iq20
{
    //
    // Constructors.
    //
    iq20() : val(0)
    {
    }
    
    iq20(_iq20 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq20(const iq20 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq20 &operator=(const iq20 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq20 &operator+=(const iq20 &A);
    inline iq20 &operator-=(const iq20 &A);
    inline iq20 &operator*=(const iq20 &A);
    inline iq20 &operator/=(const iq20 &A);
    
    //
    // Bitwise operators.
    //
    inline iq20 &operator&=(const _iq20 &A);
    inline iq20 &operator|=(const _iq20 &A);
    inline iq20 &operator^=(const _iq20 &A);
    
    //
    // The IQ number.
    //
    _iq20 val;
};

struct iq19
{
    //
    // Constructors.
    //
    iq19() : val(0)
    {
    }
    
    iq19(_iq19 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq19(const iq19 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq19 &operator=(const iq19 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq19 &operator+=(const iq19 &A);
    inline iq19 &operator-=(const iq19 &A);
    inline iq19 &operator*=(const iq19 &A);
    inline iq19 &operator/=(const iq19 &A);
    
    //
    // Bitwise operators.
    //
    inline iq19 &operator&=(const _iq19 &A);
    inline iq19 &operator|=(const _iq19 &A);
    inline iq19 &operator^=(const _iq19 &A);
    
    //
    // The IQ number.
    //
    _iq19 val;
};

struct iq18
{
    //
    // Constructors.
    //
    iq18() : val(0)
    {
    }
    
    iq18(_iq18 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq18(const iq18 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq18 &operator=(const iq18 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq18 &operator+=(const iq18 &A);
    inline iq18 &operator-=(const iq18 &A);
    inline iq18 &operator*=(const iq18 &A);
    inline iq18 &operator/=(const iq18 &A);
    
    //
    // Bitwise operators.
    //
    inline iq18 &operator&=(const _iq18 &A);
    inline iq18 &operator|=(const _iq18 &A);
    inline iq18 &operator^=(const _iq18 &A);
    
    //
    // The IQ number.
    //
    _iq18 val;
};

struct iq17
{
    //
    // Constructors.
    //
    iq17() : val(0)
    {
    }
    
    iq17(_iq17 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq17(const iq17 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq17 &operator=(const iq17 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq17 &operator+=(const iq17 &A);
    inline iq17 &operator-=(const iq17 &A);
    inline iq17 &operator*=(const iq17 &A);
    inline iq17 &operator/=(const iq17 &A);
    
    //
    // Bitwise operators.
    //
    inline iq17 &operator&=(const _iq17 &A);
    inline iq17 &operator|=(const _iq17 &A);
    inline iq17 &operator^=(const _iq17 &A);
    
    //
    // The IQ number.
    //
    _iq17 val;
};

struct iq16
{
    //
    // Constructors.
    //
    iq16() : val(0)
    {
    }
    
    iq16(_iq16 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq16(const iq16 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq16 &operator=(const iq16 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq16 &operator+=(const iq16 &A);
    inline iq16 &operator-=(const iq16 &A);
    inline iq16 &operator*=(const iq16 &A);
    inline iq16 &operator/=(const iq16 &A);
    
    //
    // Bitwise operators.
    //
    inline iq16 &operator&=(const _iq16 &A);
    inline iq16 &operator|=(const _iq16 &A);
    inline iq16 &operator^=(const _iq16 &A);
    
    //
    // The IQ number.
    //
    _iq16 val;
};

struct iq15
{
    //
    // Constructors.
    //
    iq15() : val(0)
    {
    }
    
    iq15(_iq15 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq15(const iq15 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq15 &operator=(const iq15 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq15 &operator+=(const iq15 &A);
    inline iq15 &operator-=(const iq15 &A);
    inline iq15 &operator*=(const iq15 &A);
    inline iq15 &operator/=(const iq15 &A);
    
    //
    // Bitwise operators.
    //
    inline iq15 &operator&=(const _iq15 &A);
    inline iq15 &operator|=(const _iq15 &A);
    inline iq15 &operator^=(const _iq15 &A);
    
    //
    // The IQ number.
    //
    _iq15 val;
};

struct iq14
{
    //
    // Constructors.
    //
    iq14() : val(0)
    {
    }
    
    iq14(_iq14 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq14(const iq14 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq14 &operator=(const iq14 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq14 &operator+=(const iq14 &A);
    inline iq14 &operator-=(const iq14 &A);
    inline iq14 &operator*=(const iq14 &A);
    inline iq14 &operator/=(const iq14 &A);
    
    //
    // Bitwise operators.
    //
    inline iq14 &operator&=(const _iq14 &A);
    inline iq14 &operator|=(const _iq14 &A);
    inline iq14 &operator^=(const _iq14 &A);
    
    //
    // The IQ number.
    //
    _iq14 val;
};

struct iq13
{
    //
    // Constructors.
    //
    iq13() : val(0)
    {
    }
    
    iq13(_iq13 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq13(const iq13 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq13 &operator=(const iq13 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq13 &operator+=(const iq13 &A);
    inline iq13 &operator-=(const iq13 &A);
    inline iq13 &operator*=(const iq13 &A);
    inline iq13 &operator/=(const iq13 &A);
    
    //
    // Bitwise operators.
    //
    inline iq13 &operator&=(const _iq13 &A);
    inline iq13 &operator|=(const _iq13 &A);
    inline iq13 &operator^=(const _iq13 &A);
    
    //
    // The IQ number.
    //
    _iq13 val;
};

struct iq12
{
    //
    // Constructors.
    //
    iq12() : val(0)
    {
    }
    
    iq12(_iq12 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq12(const iq12 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq12 &operator=(const iq12 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq12 &operator+=(const iq12 &A);
    inline iq12 &operator-=(const iq12 &A);
    inline iq12 &operator*=(const iq12 &A);
    inline iq12 &operator/=(const iq12 &A);
    
    //
    // Bitwise operators.
    //
    inline iq12 &operator&=(const _iq12 &A);
    inline iq12 &operator|=(const _iq12 &A);
    inline iq12 &operator^=(const _iq12 &A);
    
    //
    // The IQ number.
    //
    _iq12 val;
};

struct iq11
{
    //
    // Constructors.
    //
    iq11() : val(0)
    {
    }
    
    iq11(_iq11 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq11(const iq11 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq11 &operator=(const iq11 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq11 &operator+=(const iq11 &A);
    inline iq11 &operator-=(const iq11 &A);
    inline iq11 &operator*=(const iq11 &A);
    inline iq11 &operator/=(const iq11 &A);
    
    //
    // Bitwise operators.
    //
    inline iq11 &operator&=(const _iq11 &A);
    inline iq11 &operator|=(const _iq11 &A);
    inline iq11 &operator^=(const _iq11 &A);
    
    //
    // The IQ number.
    //
    _iq11 val;
};

struct iq10
{
    //
    // Constructors.
    //
    iq10() : val(0)
    {
    }
    
    iq10(_iq10 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq10(const iq10 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq10 &operator=(const iq10 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq10 &operator+=(const iq10 &A);
    inline iq10 &operator-=(const iq10 &A);
    inline iq10 &operator*=(const iq10 &A);
    inline iq10 &operator/=(const iq10 &A);
    
    //
    // Bitwise operators.
    //
    inline iq10 &operator&=(const _iq10 &A);
    inline iq10 &operator|=(const _iq10 &A);
    inline iq10 &operator^=(const _iq10 &A);
    
    //
    // The IQ number.
    //
    _iq10 val;
};

struct iq9
{
    //
    // Constructors.
    //
    iq9() : val(0)
    {
    }
    
    iq9(_iq9 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq9(const iq9 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq9 &operator=(const iq9 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq9 &operator+=(const iq9 &A);
    inline iq9 &operator-=(const iq9 &A);
    inline iq9 &operator*=(const iq9 &A);
    inline iq9 &operator/=(const iq9 &A);
    
    //
    // Bitwise operators.
    //
    inline iq9 &operator&=(const _iq9 &A);
    inline iq9 &operator|=(const _iq9 &A);
    inline iq9 &operator^=(const _iq9 &A);
    
    //
    // The IQ number.
    //
    _iq9 val;
};

struct iq8
{
    //
    // Constructors.
    //
    iq8() : val(0)
    {
    }
    
    iq8(_iq8 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq8(const iq8 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq8 &operator=(const iq8 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq8 &operator+=(const iq8 &A);
    inline iq8 &operator-=(const iq8 &A);
    inline iq8 &operator*=(const iq8 &A);
    inline iq8 &operator/=(const iq8 &A);
    
    //
    // Bitwise operators.
    //
    inline iq8 &operator&=(const _iq8 &A);
    inline iq8 &operator|=(const _iq8 &A);
    inline iq8 &operator^=(const _iq8 &A);
    
    //
    // The IQ number.
    //
    _iq8 val;
};

struct iq7
{
    //
    // Constructors.
    //
    iq7() : val(0)
    {
    }
    
    iq7(_iq7 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq7(const iq7 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq7 &operator=(const iq7 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq7 &operator+=(const iq7 &A);
    inline iq7 &operator-=(const iq7 &A);
    inline iq7 &operator*=(const iq7 &A);
    inline iq7 &operator/=(const iq7 &A);
    
    //
    // Bitwise operators.
    //
    inline iq7 &operator&=(const _iq7 &A);
    inline iq7 &operator|=(const _iq7 &A);
    inline iq7 &operator^=(const _iq7 &A);
    
    //
    // The IQ number.
    //
    _iq7 val;
};

struct iq6
{
    //
    // Constructors.
    //
    iq6() : val(0)
    {
    }
    
    iq6(_iq6 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq6(const iq6 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq6 &operator=(const iq6 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq6 &operator+=(const iq6 &A);
    inline iq6 &operator-=(const iq6 &A);
    inline iq6 &operator*=(const iq6 &A);
    inline iq6 &operator/=(const iq6 &A);
    
    //
    // Bitwise operators.
    //
    inline iq6 &operator&=(const _iq6 &A);
    inline iq6 &operator|=(const _iq6 &A);
    inline iq6 &operator^=(const _iq6 &A);
    
    //
    // The IQ number.
    //
    _iq6 val;
};

struct iq5
{
    //
    // Constructors.
    //
    iq5() : val(0)
    {
    }
    
    iq5(_iq5 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq5(const iq5 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq5 &operator=(const iq5 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq5 &operator+=(const iq5 &A);
    inline iq5 &operator-=(const iq5 &A);
    inline iq5 &operator*=(const iq5 &A);
    inline iq5 &operator/=(const iq5 &A);
    
    //
    // Bitwise operators.
    //
    inline iq5 &operator&=(const _iq5 &A);
    inline iq5 &operator|=(const _iq5 &A);
    inline iq5 &operator^=(const _iq5 &A);
    
    //
    // The IQ number.
    //
    _iq5 val;
};

struct iq4
{
    //
    // Constructors.
    //
    iq4() : val(0)
    {
    }
    
    iq4(_iq4 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq4(const iq4 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq4 &operator=(const iq4 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq4 &operator+=(const iq4 &A);
    inline iq4 &operator-=(const iq4 &A);
    inline iq4 &operator*=(const iq4 &A);
    inline iq4 &operator/=(const iq4 &A);
    
    //
    // Bitwise operators.
    //
    inline iq4 &operator&=(const _iq4 &A);
    inline iq4 &operator|=(const _iq4 &A);
    inline iq4 &operator^=(const _iq4 &A);
    
    //
    // The IQ number.
    //
    _iq4 val;
};

struct iq3
{
    //
    // Constructors.
    //
    iq3() : val(0)
    {
    }
    
    iq3(_iq3 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq3(const iq3 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq3 &operator=(const iq3 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq3 &operator+=(const iq3 &A);
    inline iq3 &operator-=(const iq3 &A);
    inline iq3 &operator*=(const iq3 &A);
    inline iq3 &operator/=(const iq3 &A);
    
    //
    // Bitwise operators.
    //
    inline iq3 &operator&=(const _iq3 &A);
    inline iq3 &operator|=(const _iq3 &A);
    inline iq3 &operator^=(const _iq3 &A);
    
    //
    // The IQ number.
    //
    _iq3 val;
};

struct iq2
{
    //
    // Constructors.
    //
    iq2() : val(0)
    {
    }
    
    iq2(_iq2 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq2(const iq2 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq2 &operator=(const iq2 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq2 &operator+=(const iq2 &A);
    inline iq2 &operator-=(const iq2 &A);
    inline iq2 &operator*=(const iq2 &A);
    inline iq2 &operator/=(const iq2 &A);
    
    //
    // Bitwise operators.
    //
    inline iq2 &operator&=(const _iq2 &A);
    inline iq2 &operator|=(const _iq2 &A);
    inline iq2 &operator^=(const _iq2 &A);
    
    //
    // The IQ number.
    //
    _iq2 val;
};

struct iq1
{
    //
    // Constructors.
    //
    iq1() : val(0)
    {
    }
    
    iq1(_iq1 A) : val(A)
    {
    }
    
    //
    // Copy constructor.
    //
    iq1(const iq1 &A) : val(A.val)
    {
    }
    
    //
    // Assignment operator.
    //
    inline iq1 &operator=(const iq1 &A);
    
    //
    // Arithmetic operators.
    //
    inline iq1 &operator+=(const iq1 &A);
    inline iq1 &operator-=(const iq1 &A);
    inline iq1 &operator*=(const iq1 &A);
    inline iq1 &operator/=(const iq1 &A);
    
    //
    // Bitwise operators.
    //
    inline iq1 &operator&=(const _iq1 &A);
    inline iq1 &operator|=(const _iq1 &A);
    inline iq1 &operator^=(const _iq1 &A);
    
    //
    // The IQ number.
    //
    _iq1 val;
};

//*****************************************************************************
//
// Convert a value into a IQ number.
//
//*****************************************************************************
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq30 CPP_IQ30(T A)   {return _IQ30(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq29 CPP_IQ29(T A)   {return _IQ29(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq28 CPP_IQ28(T A)   {return _IQ28(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq27 CPP_IQ27(T A)   {return _IQ27(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq26 CPP_IQ26(T A)   {return _IQ26(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq25 CPP_IQ25(T A)   {return _IQ25(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq24 CPP_IQ24(T A)   {return _IQ24(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq23 CPP_IQ23(T A)   {return _IQ23(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq22 CPP_IQ22(T A)   {return _IQ22(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq21 CPP_IQ21(T A)   {return _IQ21(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq20 CPP_IQ20(T A)   {return _IQ20(A);}

template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq19 CPP_IQ19(T A)   {return _IQ19(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq18 CPP_IQ18(T A)   {return _IQ18(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq17 CPP_IQ17(T A)   {return _IQ17(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq16 CPP_IQ16(T A)   {return _IQ16(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq15 CPP_IQ15(T A)   {return _IQ15(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq14 CPP_IQ14(T A)   {return _IQ14(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq13 CPP_IQ13(T A)   {return _IQ13(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq12 CPP_IQ12(T A)   {return _IQ12(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq11 CPP_IQ11(T A)   {return _IQ11(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq10 CPP_IQ10(T A)   {return _IQ10(A);}

template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq9 CPP_IQ9(T A)   {return _IQ9(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq8 CPP_IQ8(T A)   {return _IQ8(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq7 CPP_IQ7(T A)   {return _IQ7(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq6 CPP_IQ6(T A)   {return _IQ6(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq5 CPP_IQ5(T A)   {return _IQ5(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq4 CPP_IQ4(T A)   {return _IQ4(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq3 CPP_IQ3(T A)   {return _IQ3(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq2 CPP_IQ2(T A)   {return _IQ2(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq1 CPP_IQ1(T A)   {return _IQ1(A);}
template <typename T, std::enable_if_t<std::is_integral<T>::value || std::is_floating_point<T>::value, bool> = true>
inline iq CPP_IQ(T A)   {return _IQ(A);}


/*    
#define CPP_IQ30(A)                 (iq30)_IQ30(A)
#define CPP_IQ29(A)                 (iq29)_IQ29(A)
#define CPP_IQ28(A)                 (iq28)_IQ28(A)
#define CPP_IQ27(A)                 (iq27)_IQ27(A)
#define CPP_IQ26(A)                 (iq26)_IQ26(A)
#define CPP_IQ25(A)                 (iq25)_IQ25(A)
#define CPP_IQ24(A)                 (iq24)_IQ24(A)
#define CPP_IQ23(A)                 (iq23)_IQ23(A)
#define CPP_IQ22(A)                 (iq22)_IQ22(A)
#define CPP_IQ21(A)                 (iq21)_IQ21(A)
#define CPP_IQ20(A)                 (iq20)_IQ20(A)
#define CPP_IQ19(A)                 (iq19)_IQ19(A)
#define CPP_IQ18(A)                 (iq18)_IQ18(A)
#define CPP_IQ17(A)                 (iq17)_IQ17(A)
#define CPP_IQ16(A)                 (iq16)_IQ16(A)
#define CPP_IQ15(A)                 (iq15)_IQ15(A)
#define CPP_IQ14(A)                 (iq14)_IQ14(A)
#define CPP_IQ13(A)                 (iq13)_IQ13(A)
#define CPP_IQ12(A)                 (iq12)_IQ12(A)
#define CPP_IQ11(A)                 (iq11)_IQ11(A)
#define CPP_IQ10(A)                 (iq10)_IQ10(A)
#define CPP_IQ9(A)                  (iq9)_IQ9(A)
#define CPP_IQ8(A)                  (iq8)_IQ8(A)
#define CPP_IQ7(A)                  (iq7)_IQ7(A)
#define CPP_IQ6(A)                  (iq6)_IQ6(A)
#define CPP_IQ5(A)                  (iq5)_IQ5(A)
#define CPP_IQ4(A)                  (iq4)_IQ4(A)
#define CPP_IQ3(A)                  (iq3)_IQ3(A)
#define CPP_IQ2(A)                  (iq2)_IQ2(A)
#define CPP_IQ1(A)                  (iq1)_IQ1(A)
#define CPP_IQ(A)                   (iq)_IQ(A)
*/

//*****************************************************************************
//
// Convert a IQ number to a floating point value.
//
//*****************************************************************************
inline float CPP_IQ30toF(const iq30 &A) { return _IQ30toF(A.val); }
inline float CPP_IQ29toF(const iq29 &A) { return(_IQ29toF(A.val)); }
inline float CPP_IQ28toF(const iq28 &A) { return(_IQ28toF(A.val)); }
inline float CPP_IQ27toF(const iq27 &A) { return(_IQ27toF(A.val)); }
inline float CPP_IQ26toF(const iq26 &A) { return(_IQ26toF(A.val)); }
inline float CPP_IQ25toF(const iq25 &A) { return(_IQ25toF(A.val)); }
inline float CPP_IQ24toF(const iq24 &A) { return(_IQ24toF(A.val)); }
inline float CPP_IQ23toF(const iq23 &A) { return(_IQ23toF(A.val)); }
inline float CPP_IQ22toF(const iq22 &A) { return(_IQ22toF(A.val)); }
inline float CPP_IQ21toF(const iq21 &A) { return(_IQ21toF(A.val)); }
inline float CPP_IQ20toF(const iq20 &A) { return(_IQ20toF(A.val)); }
inline float CPP_IQ19toF(const iq19 &A) { return(_IQ19toF(A.val)); }
inline float CPP_IQ18toF(const iq18 &A) { return(_IQ18toF(A.val)); }
inline float CPP_IQ17toF(const iq17 &A) { return(_IQ17toF(A.val)); }
inline float CPP_IQ16toF(const iq16 &A) { return(_IQ16toF(A.val)); }
inline float CPP_IQ15toF(const iq15 &A) { return(_IQ15toF(A.val)); }
inline float CPP_IQ14toF(const iq14 &A) { return(_IQ14toF(A.val)); }
inline float CPP_IQ13toF(const iq13 &A) { return(_IQ13toF(A.val)); }
inline float CPP_IQ12toF(const iq12 &A) { return(_IQ12toF(A.val)); }
inline float CPP_IQ11toF(const iq11 &A) { return(_IQ11toF(A.val)); }
inline float CPP_IQ10toF(const iq10 &A) { return(_IQ10toF(A.val)); }
inline float CPP_IQ9toF(const iq9 &A)   { return(_IQ9toF(A.val)); }
inline float CPP_IQ8toF(const iq8 &A)   { return(_IQ8toF(A.val)); }
inline float CPP_IQ7toF(const iq7 &A)   { return(_IQ7toF(A.val)); }
inline float CPP_IQ6toF(const iq6 &A)   { return(_IQ6toF(A.val)); }
inline float CPP_IQ5toF(const iq5 &A)   { return(_IQ5toF(A.val)); }
inline float CPP_IQ4toF(const iq4 &A)   { return(_IQ4toF(A.val)); }
inline float CPP_IQ3toF(const iq3 &A)   { return(_IQ3toF(A.val)); }
inline float CPP_IQ2toF(const iq2 &A)   { return(_IQ2toF(A.val)); }
inline float CPP_IQ1toF(const iq1 &A)   { return(_IQ1toF(A.val)); }
inline float CPP_IQtoF(const iq &A)     { return(_IQtoF(A.val)); }

//*****************************************************************************
//
// Convert an IQ number to a double-precision floating point value.
//
//*****************************************************************************
/*
inline double IQ30toD(const iq30 &A) { return(_IQ30toD(A.val)); }
inline double IQ29toD(const iq29 &A) { return(_IQ29toD(A.val)); }
inline double IQ28toD(const iq28 &A) { return(_IQ28toD(A.val)); }
inline double IQ27toD(const iq27 &A) { return(_IQ27toD(A.val)); }
inline double IQ26toD(const iq26 &A) { return(_IQ26toD(A.val)); }
inline double IQ25toD(const iq25 &A) { return(_IQ25toD(A.val)); }
inline double IQ24toD(const iq24 &A) { return(_IQ24toD(A.val)); }
inline double IQ23toD(const iq23 &A) { return(_IQ23toD(A.val)); }
inline double IQ22toD(const iq22 &A) { return(_IQ22toD(A.val)); }
inline double IQ21toD(const iq21 &A) { return(_IQ21toD(A.val)); }
inline double IQ20toD(const iq20 &A) { return(_IQ20toD(A.val)); }
inline double IQ19toD(const iq19 &A) { return(_IQ19toD(A.val)); }
inline double IQ18toD(const iq18 &A) { return(_IQ18toD(A.val)); }
inline double IQ17toD(const iq17 &A) { return(_IQ17toD(A.val)); }
inline double IQ16toD(const iq16 &A) { return(_IQ16toD(A.val)); }
inline double IQ15toD(const iq15 &A) { return(_IQ15toD(A.val)); }
inline double IQ14toD(const iq14 &A) { return(_IQ14toD(A.val)); }
inline double IQ13toD(const iq13 &A) { return(_IQ13toD(A.val)); }
inline double IQ12toD(const iq12 &A) { return(_IQ12toD(A.val)); }
inline double IQ11toD(const iq11 &A) { return(_IQ11toD(A.val)); }
inline double IQ10toD(const iq10 &A) { return(_IQ10toD(A.val)); }
inline double IQ9toD(const iq9 &A)   { return(_IQ9toD(A.val)); }
inline double IQ8toD(const iq8 &A)   { return(_IQ8toD(A.val)); }
inline double IQ7toD(const iq7 &A)   { return(_IQ7toD(A.val)); }
inline double IQ6toD(const iq6 &A)   { return(_IQ6toD(A.val)); }
inline double IQ5toD(const iq5 &A)   { return(_IQ5toD(A.val)); }
inline double IQ4toD(const iq4 &A)   { return(_IQ4toD(A.val)); }
inline double IQ3toD(const iq3 &A)   { return(_IQ3toD(A.val)); }
inline double IQ2toD(const iq2 &A)   { return(_IQ2toD(A.val)); }
inline double IQ1toD(const iq1 &A)   { return(_IQ1toD(A.val)); }
inline double IQtoD(const iq &A)     { return(_IQtoD(A.val)); }
*/
//*****************************************************************************
//
// Saturates an IQ number in a given range.
//
//*****************************************************************************
inline iq30
CPP_IQsat(const iq30 &A, const iq30 &Pos, const iq30 &Neg)
{
    iq30 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq29
CPP_IQsat(const iq29 &A, const iq29 &Pos, const iq29 &Neg)
{
    iq29 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq28
CPP_IQsat(const iq28 &A, const iq28 &Pos, const iq28 &Neg)
{
    iq28 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq27
CPP_IQsat(const iq27 &A, const iq27 &Pos, const iq27 &Neg)
{
    iq27 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq26
CPP_IQsat(const iq26 &A, const iq26 &Pos, const iq26 &Neg)
{
    iq26 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq25
CPP_IQsat(const iq25 &A, const iq25 &Pos, const iq25 &Neg)
{
    iq25 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq24
CPP_IQsat(const iq24 &A, const iq24 &Pos, const iq24 &Neg)
{
    iq24 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq23
CPP_IQsat(const iq23 &A, const iq23 &Pos, const iq23 &Neg)
{
    iq23 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq22
CPP_IQsat(const iq22 &A, const iq22 &Pos, const iq22 &Neg)
{
    iq22 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq21
CPP_IQsat(const iq21 &A, const iq21 &Pos, const iq21 &Neg)
{
    iq21 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq20
CPP_IQsat(const iq20 &A, const iq20 &Pos, const iq20 &Neg)
{
    iq20 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq19
CPP_IQsat(const iq19 &A, const iq19 &Pos, const iq19 &Neg)
{
    iq19 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq18
CPP_IQsat(const iq18 &A, const iq18 &Pos, const iq18 &Neg)
{
    iq18 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq17
CPP_IQsat(const iq17 &A, const iq17 &Pos, const iq17 &Neg)
{
    iq17 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq16
CPP_IQsat(const iq16 &A, const iq16 &Pos, const iq16 &Neg)
{
    iq16 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq15
CPP_IQsat(const iq15 &A, const iq15 &Pos, const iq15 &Neg)
{
    iq15 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq14
CPP_IQsat(const iq14 &A, const iq14 &Pos, const iq14 &Neg)
{
    iq14 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq13
CPP_IQsat(const iq13 &A, const iq13 &Pos, const iq13 &Neg)
{
    iq13 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq12
CPP_IQsat(const iq12 &A, const iq12 &Pos, const iq12 &Neg)
{
    iq12 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq11
CPP_IQsat(const iq11 &A, const iq11 &Pos, const iq11 &Neg)
{
    iq11 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq10
CPP_IQsat(const iq10 &A, const iq10 &Pos, const iq10 &Neg)
{
    iq10 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq9
CPP_IQsat(const iq9 &A, const iq9 &Pos, const iq9 &Neg)
{
    iq9 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq8
CPP_IQsat(const iq8 &A, const iq8 &Pos, const iq8 &Neg)
{
    iq8 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq7
CPP_IQsat(const iq7 &A, const iq7 &Pos, const iq7 &Neg)
{
    iq7 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq6
CPP_IQsat(const iq6 &A, const iq6 &Pos, const iq6 &Neg)
{
    iq6 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq5
CPP_IQsat(const iq5 &A, const iq5 &Pos, const iq5 &Neg)
{
    iq5 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq4
CPP_IQsat(const iq4 &A, const iq4 &Pos, const iq4 &Neg)
{
    iq4 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq3
CPP_IQsat(const iq3 &A, const iq3 &Pos, const iq3 &Neg)
{
    iq3 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq2
CPP_IQsat(const iq2 &A, const iq2 &Pos, const iq2 &Neg)
{
    iq2 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq1
CPP_IQsat(const iq1 &A, const iq1 &Pos, const iq1 &Neg)
{
    iq1 B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

inline iq
CPP_IQsat(const iq &A, const iq &Pos, const iq &Neg)
{
    iq B;
    B.val = _IQsat(A.val, Pos.val, Neg.val);
    return(B);
}

//*****************************************************************************
//
// Converts an IQ number between the global IQ format and a specified IQ
// format.
//
//*****************************************************************************
inline iq30
CPP_IQtoIQ30(const iq &A)
{
    iq30 B;
    B.val = _IQtoIQ30(A.val);
    return(B);
}

inline iq
CPP_IQ30toIQ(const iq30 &A)
{
    iq B;
    B.val = _IQ30toIQ(A.val);
    return(B);
}

inline iq29
CPP_IQtoIQ29(const iq &A)
{
    iq29 B;
    B.val = _IQtoIQ29(A.val);
    return(B);
}

inline iq
CPP_IQ29toIQ(const iq29 &A)
{
    iq B;
    B.val = _IQ29toIQ(A.val);
    return(B);
}

inline iq28
CPP_IQtoIQ28(const iq &A)
{
    iq28 B;
    B.val = _IQtoIQ28(A.val);
    return(B);
}

inline iq
CPP_IQ28toIQ(const iq28 &A)
{
    iq B;
    B.val = _IQ28toIQ(A.val);
    return(B);
}

inline iq27
CPP_IQtoIQ27(const iq &A)
{
    iq27 B;
    B.val = _IQtoIQ27(A.val);
    return(B);
}

inline iq
CPP_IQ27toIQ(const iq27 &A)
{
    iq B;
    B.val = _IQ27toIQ(A.val);
    return(B);
}

inline iq26
CPP_IQtoIQ26(const iq &A)
{
    iq26 B;
    B.val = _IQtoIQ26(A.val);
    return(B);
}

inline iq
CPP_IQ26toIQ(const iq26 &A)
{
    iq B;
    B.val = _IQ26toIQ(A.val);
    return(B);
}

inline iq25
CPP_IQtoIQ25(const iq &A)
{
    iq25 B;
    B.val = _IQtoIQ25(A.val);
    return(B);
}

inline iq
CPP_IQ25toIQ(const iq25 &A)
{
    iq B;
    B.val = _IQ25toIQ(A.val);
    return(B);
}

inline iq24
CPP_IQtoIQ24(const iq &A)
{
    iq24 B;
    B.val = _IQtoIQ24(A.val);
    return(B);
}

inline iq
CPP_IQ24toIQ(const iq24 &A)
{
    iq B;
    B.val = _IQ24toIQ(A.val);
    return(B);
}

inline iq23
CPP_IQtoIQ23(const iq &A)
{
    iq23 B;
    B.val = _IQtoIQ23(A.val);
    return(B);
}

inline iq
CPP_IQ23toIQ(const iq23 &A)
{
    iq B;
    B.val = _IQ23toIQ(A.val);
    return(B);
}

inline iq22
CPP_IQtoIQ22(const iq &A)
{
    iq22 B;
    B.val = _IQtoIQ22(A.val);
    return(B);
}

inline iq
CPP_IQ22toIQ(const iq22 &A)
{
    iq B;
    B.val = _IQ22toIQ(A.val);
    return(B);
}

inline iq21
CPP_IQtoIQ21(const iq &A)
{
    iq21 B;
    B.val = _IQtoIQ21(A.val);
    return(B);
}

inline iq
CPP_IQ21toIQ(const iq21 &A)
{
    iq B;
    B.val = _IQ21toIQ(A.val);
    return(B);
}

inline iq20
CPP_IQtoIQ20(const iq &A)
{
    iq20 B;
    B.val = _IQtoIQ20(A.val);
    return(B);
}

inline iq
CPP_IQ20toIQ(const iq20 &A)
{
    iq B;
    B.val = _IQ20toIQ(A.val);
    return(B);
}

inline iq19
CPP_IQtoIQ19(const iq &A)
{
    iq19 B;
    B.val = _IQtoIQ19(A.val);
    return(B);
}

inline iq
CPP_IQ19toIQ(const iq19 &A)
{
    iq B;
    B.val = _IQ19toIQ(A.val);
    return(B);
}

inline iq18
CPP_IQtoIQ18(const iq &A)
{
    iq18 B;
    B.val = _IQtoIQ18(A.val);
    return(B);
}

inline iq
CPP_IQ18toIQ(const iq18 &A)
{
    iq B;
    B.val = _IQ18toIQ(A.val);
    return(B);
}

inline iq17
CPP_IQtoIQ17(const iq &A)
{
    iq17 B;
    B.val = _IQtoIQ17(A.val);
    return(B);
}

inline iq
CPP_IQ17toIQ(const iq17 &A)
{
    iq B;
    B.val = _IQ17toIQ(A.val);
    return(B);
}

inline iq16
CPP_IQtoIQ16(const iq &A)
{
    iq16 B;
    B.val = _IQtoIQ16(A.val);
    return(B);
}

inline iq
CPP_IQ16toIQ(const iq16 &A)
{
    iq B;
    B.val = _IQ16toIQ(A.val);
    return(B);
}

inline iq15
CPP_IQtoIQ15(const iq &A)
{
    iq15 B;
    B.val = _IQtoIQ15(A.val);
    return(B);
}

inline iq
CPP_IQ15toIQ(const iq15 &A)
{
    iq B;
    B.val = _IQ15toIQ(A.val);
    return(B);
}

inline iq14
CPP_IQtoIQ14(const iq &A)
{
    iq14 B;
    B.val = _IQtoIQ14(A.val);
    return(B);
}

inline iq
CPP_IQ14toIQ(const iq14 &A)
{
    iq B;
    B.val = _IQ14toIQ(A.val);
    return(B);
}

inline iq13
CPP_IQtoIQ13(const iq &A)
{
    iq13 B;
    B.val = _IQtoIQ13(A.val);
    return(B);
}

inline iq
CPP_IQ13toIQ(const iq13 &A)
{
    iq B;
    B.val = _IQ13toIQ(A.val);
    return(B);
}

inline iq12
CPP_IQtoIQ12(const iq &A)
{
    iq12 B;
    B.val = _IQtoIQ12(A.val);
    return(B);
}

inline iq
CPP_IQ12toIQ(const iq12 &A)
{
    iq B;
    B.val = _IQ12toIQ(A.val);
    return(B);
}

inline iq11
CPP_IQtoIQ11(const iq &A)
{
    iq11 B;
    B.val = _IQtoIQ11(A.val);
    return(B);
}

inline iq
CPP_IQ11toIQ(const iq11 &A)
{
    iq B;
    B.val = _IQ11toIQ(A.val);
    return(B);
}

inline iq10
CPP_IQtoIQ10(const iq &A)
{
    iq10 B;
    B.val = _IQtoIQ10(A.val);
    return(B);
}

inline iq
CPP_IQ10toIQ(const iq10 &A)
{
    iq B;
    B.val = _IQ10toIQ(A.val);
    return(B);
}

inline iq9
CPP_IQtoIQ9(const iq &A)
{
    iq9 B;
    B.val = _IQtoIQ9(A.val);
    return(B);
}

inline iq
CPP_IQ9toIQ(const iq9 &A)
{
    iq B;
    B.val = _IQ9toIQ(A.val);
    return(B);
}

inline iq8
CPP_IQtoIQ8(const iq &A)
{
    iq8 B;
    B.val = _IQtoIQ8(A.val);
    return(B);
}

inline iq
CPP_IQ8toIQ(const iq8 &A)
{
    iq B;
    B.val = _IQ8toIQ(A.val);
    return(B);
}

inline iq7
CPP_IQtoIQ7(const iq &A)
{
    iq7 B;
    B.val = _IQtoIQ7(A.val);
    return(B);
}

inline iq
CPP_IQ7toIQ(const iq7 &A)
{
    iq B;
    B.val = _IQ7toIQ(A.val);
    return(B);
}

inline iq6
CPP_IQtoIQ6(const iq &A)
{
    iq6 B;
    B.val = _IQtoIQ6(A.val);
    return(B);
}

inline iq
CPP_IQ6toIQ(const iq6 &A)
{
    iq B;
    B.val = _IQ6toIQ(A.val);
    return(B);
}

inline iq5
CPP_IQtoIQ5(const iq &A)
{
    iq5 B;
    B.val = _IQtoIQ5(A.val);
    return(B);
}

inline iq
CPP_IQ5toIQ(const iq5 &A)
{
    iq B;
    B.val = _IQ5toIQ(A.val);
    return(B);
}

inline iq4
CPP_IQtoIQ4(const iq &A)
{
    iq4 B;
    B.val = _IQtoIQ4(A.val);
    return(B);
}

inline iq
CPP_IQ4toIQ(const iq4 &A)
{
    iq B;
    B.val = _IQ4toIQ(A.val);
    return(B);
}

inline iq3
CPP_IQtoIQ3(const iq &A)
{
    iq3 B;
    B.val = _IQtoIQ3(A.val);
    return(B);
}

inline iq
CPP_IQ3toIQ(const iq3 &A)
{
    iq B;
    B.val = _IQ3toIQ(A.val);
    return(B);
}

inline iq2
CPP_IQtoIQ2(const iq &A)
{
    iq2 B;
    B.val = _IQtoIQ2(A.val);
    return(B);
}

inline iq
CPP_IQ2toIQ(const iq2 &A)
{
    iq B;
    B.val = _IQ2toIQ(A.val);
    return(B);
}

inline iq1
CPP_IQtoIQ1(const iq &A)
{
    iq1 B;
    B.val = _IQtoIQ1(A.val);
    return(B);
}

inline iq
CPP_IQ1toIQ(const iq1 &A)
{
    iq B;
    B.val = _IQ1toIQ(A.val);
    return(B);
}


//*****************************************************************************
//
// Converts a number between IQ format and 16-bit Qn format.
//
//*****************************************************************************
inline long
CPP_IQtoQ15(const iq &A)
{
    return(_IQtoQ15(A.val));
}

inline iq
CPP_Q15toIQ(long A)
{
    iq B;
    B.val = _Q15toIQ(A);
    return(B);
}

inline long
CPP_IQtoQ14(const iq &A)
{
    return(_IQtoQ14(A.val));
}

inline iq
CPP_Q14toIQ(long A)
{
    iq B;
    B.val = _Q14toIQ(A);
    return(B);
}

inline long
CPP_IQtoQ13(const iq &A)
{
    return(_IQtoQ13(A.val));
}

inline iq
CPP_Q13toIQ(long A)
{
    iq B;
    B.val = _Q13toIQ(A);
    return(B);
}

inline long
CPP_IQtoQ12(const iq &A)
{
    return(_IQtoQ12(A.val));
}

inline iq
CPP_Q12toIQ(long A)
{
    iq B;
    B.val = _Q12toIQ(A);
    return(B);
}

inline long
CPP_IQtoQ11(const iq &A)
{
    return(_IQtoQ11(A.val));
}

inline iq
CPP_Q11toIQ(long A)
{
    iq B;
    B.val = _Q11toIQ(A);
    return(B);
}

inline long
CPP_IQtoQ10(const iq &A)
{
    return(_IQtoQ10(A.val));
}

inline iq
CPP_Q10toIQ(long A)
{
    iq B;
    B.val = _Q10toIQ(A);
    return(B);
}

inline long
CPP_IQtoQ9(const iq &A)
{
    return(_IQtoQ9(A.val));
}

inline iq
Q9toIQ(long A)
{
    iq B;
    B.val = _Q9toIQ(A);
    return(B);
}

inline long
CPP_IQtoQ8(const iq &A)
{
    return(_IQtoQ8(A.val));
}

inline iq
Q8toIQ(long A)
{
    iq B;
    B.val = _Q8toIQ(A);
    return(B);
}

inline long
CPP_IQtoQ7(const iq &A)
{
    return(_IQtoQ7(A.val));
}

inline iq
Q7toIQ(long A)
{
    iq B;
    B.val = _Q7toIQ(A);
    return(B);
}

inline long
CPP_IQtoQ6(const iq &A)
{
    return(_IQtoQ6(A.val));
}

inline iq
Q6toIQ(long A)
{
    iq B;
    B.val = _Q6toIQ(A);
    return(B);
}

inline long
CPP_IQtoQ5(const iq &A)
{
    return(_IQtoQ5(A.val));
}

inline iq
Q5toIQ(long A)
{
    iq B;
    B.val = _Q5toIQ(A);
    return(B);
}

inline long
CPP_IQtoQ4(const iq &A)
{
    return(_IQtoQ4(A.val));
}

inline iq
Q4toIQ(long A)
{
    iq B;
    B.val = _Q4toIQ(A);
    return(B);
}

inline long
CPP_IQtoQ3(const iq &A)
{
    return(_IQtoQ3(A.val));
}

inline iq
Q3toIQ(long A)
{
    iq B;
    B.val = _Q3toIQ(A);
    return(B);
}

inline long
CPP_IQtoQ2(const iq &A)
{
    return(_IQtoQ2(A.val));
}

inline iq
Q2toIQ(long A)
{
    iq B;
    B.val = _Q2toIQ(A);
    return(B);
}

inline long
CPP_IQtoQ1(const iq &A)
{
    return(_IQtoQ1(A.val));
}

inline iq
CPP_Q1toIQ(long A)
{
    iq B;
    B.val = _Q1toIQ(A);
    return(B);
}


//*****************************************************************************
//
// Converts an IQ number into a string.
//
//*****************************************************************************
inline int
CPP_IQ30toa(char *A, const char *B, const iq30 &C)
{
    return(__IQNtoa(A, B, C.val, 30));
}

inline int
CPP_IQ29toa(char *A, const char *B, const iq29 &C)
{
    return(__IQNtoa(A, B, C.val, 29));
}

inline int
CPP_IQ28toa(char *A, const char *B, const iq28 &C)
{
    return(__IQNtoa(A, B, C.val, 28));
}

inline int
CPP_IQ27toa(char *A, const char *B, const iq27 &C)
{
    return(__IQNtoa(A, B, C.val, 27));
}

inline int
CPP_IQ26toa(char *A, const char *B, const iq26 &C)
{
    return(__IQNtoa(A, B, C.val, 26));
}

inline int
CPP_IQ25toa(char *A, const char *B, const iq25 &C)
{
    return(__IQNtoa(A, B, C.val, 25));
}

inline int
CPP_IQ24toa(char *A, const char *B, const iq24 &C)
{
    return(__IQNtoa(A, B, C.val, 24));
}

inline int
CPP_IQ23toa(char *A, const char *B, const iq23 &C)
{
    return(__IQNtoa(A, B, C.val, 23));
}

inline int
CPP_IQ22toa(char *A, const char *B, const iq22 &C)
{
    return(__IQNtoa(A, B, C.val, 22));
}

inline int
CPP_IQ21toa(char *A, const char *B, const iq21 &C)
{
    return(__IQNtoa(A, B, C.val, 21));
}

inline int
CPP_IQ20toa(char *A, const char *B, const iq20 &C)
{
    return(__IQNtoa(A, B, C.val, 20));
}

inline int
CPP_IQ19toa(char *A, const char *B, const iq19 &C)
{
    return(__IQNtoa(A, B, C.val, 19));
}

inline int
CPP_IQ18toa(char *A, const char *B, const iq18 &C)
{
    return(__IQNtoa(A, B, C.val, 18));
}

inline int
CPP_IQ17toa(char *A, const char *B, const iq17 &C)
{
    return(__IQNtoa(A, B, C.val, 17));
}

inline int
CPP_IQ16toa(char *A, const char *B, const iq16 &C)
{
    return(__IQNtoa(A, B, C.val, 16));
}

inline int
CPP_IQ15toa(char *A, const char *B, const iq15 &C)
{
    return(__IQNtoa(A, B, C.val, 15));
}

inline int
CPP_IQ14toa(char *A, const char *B, const iq14 &C)
{
    return(__IQNtoa(A, B, C.val, 14));
}

inline int
CPP_IQ13toa(char *A, const char *B, const iq13 &C)
{
    return(__IQNtoa(A, B, C.val, 13));
}

inline int
CPP_IQ12toa(char *A, const char *B, const iq12 &C)
{
    return(__IQNtoa(A, B, C.val, 12));
}

inline int
CPP_IQ11toa(char *A, const char *B, const iq11 &C)
{
    return(__IQNtoa(A, B, C.val, 11));
}

inline int
CPP_IQ10toa(char *A, const char *B, const iq10 &C)
{
    return(__IQNtoa(A, B, C.val, 10));
}

inline int
CPP_IQ9toa(char *A, const char *B, const iq9 &C)
{
    return(__IQNtoa(A, B, C.val, 9));
}

inline int
CPP_IQ8toa(char *A, const char *B, const iq8 &C)
{
    return(__IQNtoa(A, B, C.val, 8));
}

inline int
CPP_IQ7toa(char *A, const char *B, const iq7 &C)
{
    return(__IQNtoa(A, B, C.val, 7));
}

inline int
CPP_IQ6toa(char *A, const char *B, const iq6 &C)
{
    return(__IQNtoa(A, B, C.val, 6));
}

inline int
CPP_IQ5toa(char *A, const char *B, const iq5 &C)
{
    return(__IQNtoa(A, B, C.val, 5));
}

inline int
CPP_IQ4toa(char *A, const char *B, const iq4 &C)
{
    return(__IQNtoa(A, B, C.val, 4));
}

inline int
CPP_IQ3toa(char *A, const char *B, const iq3 &C)
{
    return(__IQNtoa(A, B, C.val, 3));
}

inline int
CPP_IQ2toa(char *A, const char *B, const iq2 &C)
{
    return(__IQNtoa(A, B, C.val, 2));
}

inline int
CPP_IQ1toa(char *A, const char *B, const iq1 &C)
{
    return(__IQNtoa(A, B, C.val, 1));
}

inline int
CPP_IQtoa(char *A, const char *B, const iq &C)
{
    return(__IQNtoa(A, B, C.val, GLOBAL_Q));
}

//*****************************************************************************
//
// Converts a string into an IQ number.
//
//*****************************************************************************
inline iq30
CPP_atoIQ30(const char *A)
{
    iq30 B;
    B.val = _atoIQ30(A);
    return(B);
}

inline iq29
CPP_atoIQ29(const char *A)
{
    iq29 B;
    B.val = _atoIQ29(A);
    return(B);
}

inline iq28
CPP_atoIQ28(const char *A)
{
    iq28 B;
    B.val = _atoIQ28(A);
    return(B);
}

inline iq27
CPP_atoIQ27(const char *A)
{
    iq27 B;
    B.val = _atoIQ27(A);
    return(B);
}

inline iq26
CPP_atoIQ26(const char *A)
{
    iq26 B;
    B.val = _atoIQ26(A);
    return(B);
}

inline iq25
CPP_atoIQ25(const char *A)
{
    iq25 B;
    B.val = _atoIQ25(A);
    return(B);
}

inline iq24
CPP_atoIQ24(const char *A)
{
    iq24 B;
    B.val = _atoIQ24(A);
    return(B);
}

inline iq23
CPP_atoIQ23(const char *A)
{
    iq23 B;
    B.val = _atoIQ23(A);
    return(B);
}

inline iq22
CPP_atoIQ22(const char *A)
{
    iq22 B;
    B.val = _atoIQ22(A);
    return(B);
}

inline iq21
CPP_atoIQ21(const char *A)
{
    iq21 B;
    B.val = _atoIQ21(A);
    return(B);
}

inline iq20
CPP_atoIQ20(const char *A)
{
    iq20 B;
    B.val = _atoIQ20(A);
    return(B);
}

inline iq19
CPP_atoIQ19(const char *A)
{
    iq19 B;
    B.val = _atoIQ19(A);
    return(B);
}

inline iq18
CPP_atoIQ18(const char *A)
{
    iq18 B;
    B.val = _atoIQ18(A);
    return(B);
}

inline iq17
CPP_atoIQ17(const char *A)
{
    iq17 B;
    B.val = _atoIQ17(A);
    return(B);
}

inline iq16
CPP_atoIQ16(const char *A)
{
    iq16 B;
    B.val = _atoIQ16(A);
    return(B);
}

inline iq15
CPP_atoIQ15(const char *A)
{
    iq15 B;
    B.val = _atoIQ15(A);
    return(B);
}

inline iq14
CPP_atoIQ14(const char *A)
{
    iq14 B;
    B.val = _atoIQ14(A);
    return(B);
}

inline iq13
CPP_atoIQ13(const char *A)
{
    iq13 B;
    B.val = _atoIQ13(A);
    return(B);
}

inline iq12
CPP_atoIQ12(const char *A)
{
    iq12 B;
    B.val = _atoIQ12(A);
    return(B);
}

inline iq11
CPP_atoIQ11(const char *A)
{
    iq11 B;
    B.val = _atoIQ11(A);
    return(B);
}

inline iq10
CPP_atoIQ10(const char *A)
{
    iq10 B;
    B.val = _atoIQ10(A);
    return(B);
}

inline iq9
CPP_atoIQ9(const char *A)
{
    iq9 B;
    B.val = _atoIQ9(A);
    return(B);
}

inline iq8
CPP_atoIQ8(const char *A)
{
    iq8 B;
    B.val = _atoIQ8(A);
    return(B);
}

inline iq7
CPP_atoIQ7(const char *A)
{
    iq7 B;
    B.val = _atoIQ7(A);
    return(B);
}

inline iq6
CPP_atoIQ6(const char *A)
{
    iq6 B;
    B.val = _atoIQ6(A);
    return(B);
}

inline iq5
CPP_atoIQ5(const char *A)
{
    iq5 B;
    B.val = _atoIQ5(A);
    return(B);
}

inline iq4
CPP_atoIQ4(const char *A)
{
    iq4 B;
    B.val = _atoIQ4(A);
    return(B);
}

inline iq3
CPP_atoIQ3(const char *A)
{
    iq3 B;
    B.val = _atoIQ3(A);
    return(B);
}

inline iq2
CPP_atoIQ2(const char *A)
{
    iq2 B;
    B.val = _atoIQ2(A);
    return(B);
}

inline iq1
CPP_atoIQ1(const char *A)
{
    iq1 B;
    B.val = _atoIQ1(A);
    return(B);
}

inline iq
CPP_atoIQ(const char *A)
{
    iq B;
    B.val = _atoIQ(A);
    return(B);
}

//*****************************************************************************
//
// Returns the integer portion of an IQ number.
//
//*****************************************************************************
inline long
IQ30int(const iq30 &A)
{
    return(_IQ30int(A.val));
}

inline long
IQ29int(const iq29 &A)
{
    return(_IQ29int(A.val));
}

inline long
IQ28int(const iq28 &A)
{
    return(_IQ28int(A.val));
}

inline long
IQ27int(const iq27 &A)
{
    return(_IQ27int(A.val));
}

inline long
IQ26int(const iq26 &A)
{
    return(_IQ26int(A.val));
}

inline long
IQ25int(const iq25 &A)
{
    return(_IQ25int(A.val));
}

inline long
IQ24int(const iq24 &A)
{
    return(_IQ24int(A.val));
}

inline long
IQ23int(const iq23 &A)
{
    return(_IQ23int(A.val));
}

inline long
IQ22int(const iq22 &A)
{
    return(_IQ22int(A.val));
}

inline long
IQ21int(const iq21 &A)
{
    return(_IQ21int(A.val));
}

inline long
IQ20int(const iq20 &A)
{
    return(_IQ20int(A.val));
}

inline long
IQ19int(const iq19 &A)
{
    return(_IQ19int(A.val));
}

inline long
IQ18int(const iq18 &A)
{
    return(_IQ18int(A.val));
}

inline long
IQ17int(const iq17 &A)
{
    return(_IQ17int(A.val));
}

inline long
IQ16int(const iq16 &A)
{
    return(_IQ16int(A.val));
}

inline long
IQ15int(const iq15 &A)
{
    return(_IQ15int(A.val));
}

inline long
IQ14int(const iq14 &A)
{
    return(_IQ14int(A.val));
}

inline long
IQ13int(const iq13 &A)
{
    return(_IQ13int(A.val));
}

inline long
IQ12int(const iq12 &A)
{
    return(_IQ12int(A.val));
}

inline long
IQ11int(const iq11 &A)
{
    return(_IQ11int(A.val));
}

inline long
IQ10int(const iq10 &A)
{
    return(_IQ10int(A.val));
}

inline long
IQ9int(const iq9 &A)
{
    return(_IQ9int(A.val));
}

inline long
IQ8int(const iq8 &A)
{
    return(_IQ8int(A.val));
}

inline long
IQ7int(const iq7 &A)
{
    return(_IQ7int(A.val));
}

inline long
IQ6int(const iq6 &A)
{
    return(_IQ6int(A.val));
}

inline long
IQ5int(const iq5 &A)
{
    return(_IQ5int(A.val));
}

inline long
IQ4int(const iq4 &A)
{
    return(_IQ4int(A.val));
}

inline long
IQ3int(const iq3 &A)
{
    return(_IQ3int(A.val));
}

inline long
IQ2int(const iq2 &A)
{
    return(_IQ2int(A.val));
}

inline long
IQ1int(const iq1 &A)
{
    return(_IQ1int(A.val));
}

inline long
IQint(const iq &A)
{
    return(_IQint(A.val));
}

//*****************************************************************************
//
// Computes the fractional portion of an IQ number.
//
//*****************************************************************************
inline iq30
IQ30frac(const iq30 &A)
{
    iq30 B;
    B.val = _IQ30frac(A.val);
    return(B);
}

inline iq29
IQ29frac(const iq29 &A)
{
    iq29 B;
    B.val = _IQ29frac(A.val);
    return(B);
}

inline iq28
IQ28frac(const iq28 &A)
{
    iq28 B;
    B.val = _IQ28frac(A.val);
    return(B);
}

inline iq27
IQ27frac(const iq27 &A)
{
    iq27 B;
    B.val = _IQ27frac(A.val);
    return(B);
}

inline iq26
IQ26frac(const iq26 &A)
{
    iq26 B;
    B.val = _IQ26frac(A.val);
    return(B);
}

inline iq25
IQ25frac(const iq25 &A)
{
    iq25 B;
    B.val = _IQ25frac(A.val);
    return(B);
}

inline iq24
IQ24frac(const iq24 &A)
{
    iq24 B;
    B.val = _IQ24frac(A.val);
    return(B);
}

inline iq23
IQ23frac(const iq23 &A)
{
    iq23 B;
    B.val = _IQ23frac(A.val);
    return(B);
}

inline iq22
IQ22frac(const iq22 &A)
{
    iq22 B;
    B.val = _IQ22frac(A.val);
    return(B);
}

inline iq21
IQ21frac(const iq21 &A)
{
    iq21 B;
    B.val = _IQ21frac(A.val);
    return(B);
}

inline iq20
IQ20frac(const iq20 &A)
{
    iq20 B;
    B.val = _IQ20frac(A.val);
    return(B);
}

inline iq19
IQ19frac(const iq19 &A)
{
    iq19 B;
    B.val = _IQ19frac(A.val);
    return(B);
}

inline iq18
IQ18frac(const iq18 &A)
{
    iq18 B;
    B.val = _IQ18frac(A.val);
    return(B);
}

inline iq17
IQ17frac(const iq17 &A)
{
    iq17 B;
    B.val = _IQ17frac(A.val);
    return(B);
}

inline iq16
IQ16frac(const iq16 &A)
{
    iq16 B;
    B.val = _IQ16frac(A.val);
    return(B);
}

inline iq15
IQ15frac(const iq15 &A)
{
    iq15 B;
    B.val = _IQ15frac(A.val);
    return(B);
}

inline iq14
IQ14frac(const iq14 &A)
{
    iq14 B;
    B.val = _IQ14frac(A.val);
    return(B);
}

inline iq13
IQ13frac(const iq13 &A)
{
    iq13 B;
    B.val = _IQ13frac(A.val);
    return(B);
}

inline iq12
IQ12frac(const iq12 &A)
{
    iq12 B;
    B.val = _IQ12frac(A.val);
    return(B);
}

inline iq11
IQ11frac(const iq11 &A)
{
    iq11 B;
    B.val = _IQ11frac(A.val);
    return(B);
}

inline iq10
IQ10frac(const iq10 &A)
{
    iq10 B;
    B.val = _IQ10frac(A.val);
    return(B);
}

inline iq9
IQ9frac(const iq9 &A)
{
    iq9 B;
    B.val = _IQ9frac(A.val);
    return(B);
}

inline iq8
IQ8frac(const iq8 &A)
{
    iq8 B;
    B.val = _IQ8frac(A.val);
    return(B);
}

inline iq7
IQ7frac(const iq7 &A)
{
    iq7 B;
    B.val = _IQ7frac(A.val);
    return(B);
}

inline iq6
IQ6frac(const iq6 &A)
{
    iq6 B;
    B.val = _IQ6frac(A.val);
    return(B);
}

inline iq5
IQ5frac(const iq5 &A)
{
    iq5 B;
    B.val = _IQ5frac(A.val);
    return(B);
}

inline iq4
IQ4frac(const iq4 &A)
{
    iq4 B;
    B.val = _IQ4frac(A.val);
    return(B);
}

inline iq3
IQ3frac(const iq3 &A)
{
    iq3 B;
    B.val = _IQ3frac(A.val);
    return(B);
}

inline iq2
IQ2frac(const iq2 &A)
{
    iq2 B;
    B.val = _IQ2frac(A.val);
    return(B);
}

inline iq1
IQ1frac(const iq1 &A)
{
    iq1 B;
    B.val = _IQ1frac(A.val);
    return(B);
}

inline iq
IQfrac(const iq &A)
{
    iq B;
    B.val = _IQfrac(A.val);
    return(B);
}

//*****************************************************************************
//
// Multiplies two IQ numbers, with rounding.
//
//*****************************************************************************
inline iq30
IQ30rmpy(const iq30 &A, const iq30 &B)
{
    iq30 C;
    C.val = _IQ30rmpy(A.val, B.val);
    return(C);
}

inline iq29
IQ29rmpy(const iq29 &A, const iq29 &B)
{
    iq29 C;
    C.val = _IQ29rmpy(A.val, B.val);
    return(C);
}

inline iq28
IQ28rmpy(const iq28 &A, const iq28 &B)
{
    iq28 C;
    C.val = _IQ28rmpy(A.val, B.val);
    return(C);
}

inline iq27
IQ27rmpy(const iq27 &A, const iq27 &B)
{
    iq27 C;
    C.val = _IQ27rmpy(A.val, B.val);
    return(C);
}

inline iq26
IQ26rmpy(const iq26 &A, const iq26 &B)
{
    iq26 C;
    C.val = _IQ26rmpy(A.val, B.val);
    return(C);
}

inline iq25
IQ25rmpy(const iq25 &A, const iq25 &B)
{
    iq25 C;
    C.val = _IQ25rmpy(A.val, B.val);
    return(C);
}

inline iq24
IQ24rmpy(const iq24 &A, const iq24 &B)
{
    iq24 C;
    C.val = _IQ24rmpy(A.val, B.val);
    return(C);
}

inline iq23
IQ23rmpy(const iq23 &A, const iq23 &B)
{
    iq23 C;
    C.val = _IQ23rmpy(A.val, B.val);
    return(C);
}

inline iq22
IQ22rmpy(const iq22 &A, const iq22 &B)
{
    iq22 C;
    C.val = _IQ22rmpy(A.val, B.val);
    return(C);
}

inline iq21
IQ21rmpy(const iq21 &A, const iq21 &B)
{
    iq21 C;
    C.val = _IQ21rmpy(A.val, B.val);
    return(C);
}

inline iq20
IQ20rmpy(const iq20 &A, const iq20 &B)
{
    iq20 C;
    C.val = _IQ20rmpy(A.val, B.val);
    return(C);
}

inline iq19
IQ19rmpy(const iq19 &A, const iq19 &B)
{
    iq19 C;
    C.val = _IQ19rmpy(A.val, B.val);
    return(C);
}

inline iq18
IQ18rmpy(const iq18 &A, const iq18 &B)
{
    iq18 C;
    C.val = _IQ18rmpy(A.val, B.val);
    return(C);
}

inline iq17
IQ17rmpy(const iq17 &A, const iq17 &B)
{
    iq17 C;
    C.val = _IQ17rmpy(A.val, B.val);
    return(C);
}

inline iq16
IQ16rmpy(const iq16 &A, const iq16 &B)
{
    iq16 C;
    C.val = _IQ16rmpy(A.val, B.val);
    return(C);
}

inline iq15
IQ15rmpy(const iq15 &A, const iq15 &B)
{
    iq15 C;
    C.val = _IQ15rmpy(A.val, B.val);
    return(C);
}

inline iq14
IQ14rmpy(const iq14 &A, const iq14 &B)
{
    iq14 C;
    C.val = _IQ14rmpy(A.val, B.val);
    return(C);
}

inline iq13
IQ13rmpy(const iq13 &A, const iq13 &B)
{
    iq13 C;
    C.val = _IQ13rmpy(A.val, B.val);
    return(C);
}

inline iq12
IQ12rmpy(const iq12 &A, const iq12 &B)
{
    iq12 C;
    C.val = _IQ12rmpy(A.val, B.val);
    return(C);
}

inline iq11
IQ11rmpy(const iq11 &A, const iq11 &B)
{
    iq11 C;
    C.val = _IQ11rmpy(A.val, B.val);
    return(C);
}

inline iq10
IQ10rmpy(const iq10 &A, const iq10 &B)
{
    iq10 C;
    C.val = _IQ10rmpy(A.val, B.val);
    return(C);
}

inline iq9
IQ9rmpy(const iq9 &A, const iq9 &B)
{
    iq9 C;
    C.val = _IQ9rmpy(A.val, B.val);
    return(C);
}

inline iq8
IQ8rmpy(const iq8 &A, const iq8 &B)
{
    iq8 C;
    C.val = _IQ8rmpy(A.val, B.val);
    return(C);
}

inline iq7
IQ7rmpy(const iq7 &A, const iq7 &B)
{
    iq7 C;
    C.val = _IQ7rmpy(A.val, B.val);
    return(C);
}

inline iq6
IQ6rmpy(const iq6 &A, const iq6 &B)
{
    iq6 C;
    C.val = _IQ6rmpy(A.val, B.val);
    return(C);
}

inline iq5
IQ5rmpy(const iq5 &A, const iq5 &B)
{
    iq5 C;
    C.val = _IQ5rmpy(A.val, B.val);
    return(C);
}

inline iq4
IQ4rmpy(const iq4 &A, const iq4 &B)
{
    iq4 C;
    C.val = _IQ4rmpy(A.val, B.val);
    return(C);
}

inline iq3
IQ3rmpy(const iq3 &A, const iq3 &B)
{
    iq3 C;
    C.val = _IQ3rmpy(A.val, B.val);
    return(C);
}

inline iq2
IQ2rmpy(const iq2 &A, const iq2 &B)
{
    iq2 C;
    C.val = _IQ2rmpy(A.val, B.val);
    return(C);
}

inline iq1
IQ1rmpy(const iq1 &A, const iq1 &B)
{
    iq1 C;
    C.val = _IQ1rmpy(A.val, B.val);
    return(C);
}

inline iq
IQrmpy(const iq &A, const iq &B)
{
    iq C;
    C.val = _IQrmpy(A.val, B.val);
    return(C);
}

//*****************************************************************************
//
// Multiplies two IQ numbers, with rounding and saturation.
//
//*****************************************************************************
inline iq30
IQ30rsmpy(const iq30 &A, const iq30 &B)
{
    iq30 C;
    C.val = _IQ30rsmpy(A.val, B.val);
    return(C);
}

inline iq29
IQ29rsmpy(const iq29 &A, const iq29 &B)
{
    iq29 C;
    C.val = _IQ29rsmpy(A.val, B.val);
    return(C);
}

inline iq28
IQ28rsmpy(const iq28 &A, const iq28 &B)
{
    iq28 C;
    C.val = _IQ28rsmpy(A.val, B.val);
    return(C);
}

inline iq27
IQ27rsmpy(const iq27 &A, const iq27 &B)
{
    iq27 C;
    C.val = _IQ27rsmpy(A.val, B.val);
    return(C);
}

inline iq26
IQ26rsmpy(const iq26 &A, const iq26 &B)
{
    iq26 C;
    C.val = _IQ26rsmpy(A.val, B.val);
    return(C);
}

inline iq25
IQ25rsmpy(const iq25 &A, const iq25 &B)
{
    iq25 C;
    C.val = _IQ25rsmpy(A.val, B.val);
    return(C);
}

inline iq24
IQ24rsmpy(const iq24 &A, const iq24 &B)
{
    iq24 C;
    C.val = _IQ24rsmpy(A.val, B.val);
    return(C);
}

inline iq23
IQ23rsmpy(const iq23 &A, const iq23 &B)
{
    iq23 C;
    C.val = _IQ23rsmpy(A.val, B.val);
    return(C);
}

inline iq22
IQ22rsmpy(const iq22 &A, const iq22 &B)
{
    iq22 C;
    C.val = _IQ22rsmpy(A.val, B.val);
    return(C);
}

inline iq21
IQ21rsmpy(const iq21 &A, const iq21 &B)
{
    iq21 C;
    C.val = _IQ21rsmpy(A.val, B.val);
    return(C);
}

inline iq20
IQ20rsmpy(const iq20 &A, const iq20 &B)
{
    iq20 C;
    C.val = _IQ20rsmpy(A.val, B.val);
    return(C);
}

inline iq19
IQ19rsmpy(const iq19 &A, const iq19 &B)
{
    iq19 C;
    C.val = _IQ19rsmpy(A.val, B.val);
    return(C);
}

inline iq18
IQ18rsmpy(const iq18 &A, const iq18 &B)
{
    iq18 C;
    C.val = _IQ18rsmpy(A.val, B.val);
    return(C);
}

inline iq17
IQ17rsmpy(const iq17 &A, const iq17 &B)
{
    iq17 C;
    C.val = _IQ17rsmpy(A.val, B.val);
    return(C);
}

inline iq16
IQ16rsmpy(const iq16 &A, const iq16 &B)
{
    iq16 C;
    C.val = _IQ16rsmpy(A.val, B.val);
    return(C);
}

inline iq15
IQ15rsmpy(const iq15 &A, const iq15 &B)
{
    iq15 C;
    C.val = _IQ15rsmpy(A.val, B.val);
    return(C);
}

inline iq14
IQ14rsmpy(const iq14 &A, const iq14 &B)
{
    iq14 C;
    C.val = _IQ14rsmpy(A.val, B.val);
    return(C);
}

inline iq13
IQ13rsmpy(const iq13 &A, const iq13 &B)
{
    iq13 C;
    C.val = _IQ13rsmpy(A.val, B.val);
    return(C);
}

inline iq12
IQ12rsmpy(const iq12 &A, const iq12 &B)
{
    iq12 C;
    C.val = _IQ12rsmpy(A.val, B.val);
    return(C);
}

inline iq11
IQ11rsmpy(const iq11 &A, const iq11 &B)
{
    iq11 C;
    C.val = _IQ11rsmpy(A.val, B.val);
    return(C);
}

inline iq10
IQ10rsmpy(const iq10 &A, const iq10 &B)
{
    iq10 C;
    C.val = _IQ10rsmpy(A.val, B.val);
    return(C);
}

inline iq9
IQ9rsmpy(const iq9 &A, const iq9 &B)
{
    iq9 C;
    C.val = _IQ9rsmpy(A.val, B.val);
    return(C);
}

inline iq8
IQ8rsmpy(const iq8 &A, const iq8 &B)
{
    iq8 C;
    C.val = _IQ8rsmpy(A.val, B.val);
    return(C);
}

inline iq7
IQ7rsmpy(const iq7 &A, const iq7 &B)
{
    iq7 C;
    C.val = _IQ7rsmpy(A.val, B.val);
    return(C);
}

inline iq6
IQ6rsmpy(const iq6 &A, const iq6 &B)
{
    iq6 C;
    C.val = _IQ6rsmpy(A.val, B.val);
    return(C);
}

inline iq5
IQ5rsmpy(const iq5 &A, const iq5 &B)
{
    iq5 C;
    C.val = _IQ5rsmpy(A.val, B.val);
    return(C);
}

inline iq4
IQ4rsmpy(const iq4 &A, const iq4 &B)
{
    iq4 C;
    C.val = _IQ4rsmpy(A.val, B.val);
    return(C);
}

inline iq3
IQ3rsmpy(const iq3 &A, const iq3 &B)
{
    iq3 C;
    C.val = _IQ3rsmpy(A.val, B.val);
    return(C);
}

inline iq2
IQ2rsmpy(const iq2 &A, const iq2 &B)
{
    iq2 C;
    C.val = _IQ2rsmpy(A.val, B.val);
    return(C);
}

inline iq1
IQ1rsmpy(const iq1 &A, const iq1 &B)
{
    iq1 C;
    C.val = _IQ1rsmpy(A.val, B.val);
    return(C);
}

inline iq
IQrsmpy(const iq &A, const iq &B)
{
    iq C;
    C.val = _IQrsmpy(A.val, B.val);
    return(C);
}

//*****************************************************************************
//
// Multiplies two IQ numbers in the specified iQ formats, returning the result
// in another IQ format.
//
//*****************************************************************************
#define IQ30mpyIQX(A, IQA, B, IQB) ((iq30)__IQxmpy(A.val, B.val,              \
(30 + 32 - IQA - IQB)))
#define IQ29mpyIQX(A, IQA, B, IQB) ((iq29)__IQxmpy(A.val, B.val,              \
(29 + 32 - IQA - IQB)))
#define IQ28mpyIQX(A, IQA, B, IQB) ((iq28)__IQxmpy(A.val, B.val,              \
(28 + 32 - IQA - IQB)))
#define IQ27mpyIQX(A, IQA, B, IQB) ((iq27)__IQxmpy(A.val, B.val,              \
(27 + 32 - IQA - IQB)))
#define IQ26mpyIQX(A, IQA, B, IQB) ((iq26)__IQxmpy(A.val, B.val,              \
(26 + 32 - IQA - IQB)))
#define IQ25mpyIQX(A, IQA, B, IQB) ((iq25)__IQxmpy(A.val, B.val,              \
(25 + 32 - IQA - IQB)))
#define IQ24mpyIQX(A, IQA, B, IQB) ((iq24)__IQxmpy(A.val, B.val,              \
(24 + 32 - IQA - IQB)))
#define IQ23mpyIQX(A, IQA, B, IQB) ((iq23)__IQxmpy(A.val, B.val,              \
(23 + 32 - IQA - IQB)))
#define IQ22mpyIQX(A, IQA, B, IQB) ((iq22)__IQxmpy(A.val, B.val,              \
(22 + 32 - IQA - IQB)))
#define IQ21mpyIQX(A, IQA, B, IQB) ((iq21)__IQxmpy(A.val, B.val,              \
(21 + 32 - IQA - IQB)))
#define IQ20mpyIQX(A, IQA, B, IQB) ((iq20)__IQxmpy(A.val, B.val,              \
(20 + 32 - IQA - IQB)))
#define IQ19mpyIQX(A, IQA, B, IQB) ((iq19)__IQxmpy(A.val, B.val,              \
(19 + 32 - IQA - IQB)))
#define IQ18mpyIQX(A, IQA, B, IQB) ((iq18)__IQxmpy(A.val, B.val,              \
(18 + 32 - IQA - IQB)))
#define IQ17mpyIQX(A, IQA, B, IQB) ((iq17)__IQxmpy(A.val, B.val,              \
(17 + 32 - IQA - IQB)))
#define IQ16mpyIQX(A, IQA, B, IQB) ((iq16)__IQxmpy(A.val, B.val,              \
(16 + 32 - IQA - IQB)))
#define IQ15mpyIQX(A, IQA, B, IQB) ((iq15)__IQxmpy(A.val, B.val,              \
(15 + 32 - IQA - IQB)))
#define IQ14mpyIQX(A, IQA, B, IQB) ((iq14)__IQxmpy(A.val, B.val,              \
(14 + 32 - IQA - IQB)))
#define IQ13mpyIQX(A, IQA, B, IQB) ((iq13)__IQxmpy(A.val, B.val,              \
(13 + 32 - IQA - IQB)))
#define IQ12mpyIQX(A, IQA, B, IQB) ((iq12)__IQxmpy(A.val, B.val,              \
(12 + 32 - IQA - IQB)))
#define IQ11mpyIQX(A, IQA, B, IQB) ((iq11)__IQxmpy(A.val, B.val,              \
(11 + 32 - IQA - IQB)))
#define IQ10mpyIQX(A, IQA, B, IQB) ((iq10)__IQxmpy(A.val, B.val,              \
(10 + 32 - IQA - IQB)))
#define IQ9mpyIQX(A, IQA, B, IQB)  ((iq9)__IQxmpy(A.val, B.val,               \
(9 + 32 - IQA - IQB)))
#define IQ8mpyIQX(A, IQA, B, IQB)  ((iq8)__IQxmpy(A.val, B.val,               \
(8 + 32 - IQA - IQB)))
#define IQ7mpyIQX(A, IQA, B, IQB)  ((iq7)__IQxmpy(A.val, B.val,               \
(7 + 32 - IQA - IQB)))
#define IQ6mpyIQX(A, IQA, B, IQB)  ((iq6)__IQxmpy(A.val, B.val,               \
(6 + 32 - IQA - IQB)))
#define IQ5mpyIQX(A, IQA, B, IQB)  ((iq5)__IQxmpy(A.val, B.val,               \
(5 + 32 - IQA - IQB)))
#define IQ4mpyIQX(A, IQA, B, IQB)  ((iq4)__IQxmpy(A.val, B.val,               \
(4 + 32 - IQA - IQB)))
#define IQ3mpyIQX(A, IQA, B, IQB)  ((iq3)__IQxmpy(A.val, B.val,               \
(3 + 32 - IQA - IQB)))
#define IQ2mpyIQX(A, IQA, B, IQB)  ((iq2)__IQxmpy(A.val, B.val,               \
(2 + 32 - IQA - IQB)))
#define IQ1mpyIQX(A, IQA, B, IQB)  ((iq1)__IQxmpy(A.val, B.val,               \
(1 + 32 - IQA - IQB)))
#define IQmpyIQX(A, IQA, B, IQB)   ((iq)__IQxmpy(A.val, B.val,                \
(GLOBAL_Q + 32 - IQA - IQB)))

//*****************************************************************************
//
// Multiplies an IQ number by an integer.
//
//*****************************************************************************
inline iq30
IQ30mpyI32(const iq30 &A, long B)
{
    iq30 C;
    C.val = (A.val * B);
    return(C);
}

inline iq30
IQ30mpyI32(long A, const iq30 &B)
{
    iq30 C;
    C.val = (A * B.val);
    return(C);
}

inline iq29
IQ29mpyI32(const iq29 &A, long B)
{
    iq29 C;
    C.val = (A.val * B);
    return(C);
}

inline iq29
IQ29mpyI32(long A, const iq29 &B)
{
    iq29 C;
    C.val = (A * B.val);
    return(C);
}

inline iq28
IQ28mpyI32(const iq28 &A, long B)
{
    iq28 C;
    C.val = (A.val * B);
    return(C);
}

inline iq28
IQ28mpyI32(long A, const iq28 &B)
{
    iq28 C;
    C.val = (A * B.val);
    return(C);
}

inline iq27
IQ27mpyI32(const iq27 &A, long B)
{
    iq27 C;
    C.val = (A.val * B);
    return(C);
}

inline iq27
IQ27mpyI32(long A, const iq27 &B)
{
    iq27 C;
    C.val = (A * B.val);
    return(C);
}

inline iq26
IQ26mpyI32(const iq26 &A, long B)
{
    iq26 C;
    C.val = (A.val * B);
    return(C);
}

inline iq26
IQ26mpyI32(long A, const iq26 &B)
{
    iq26 C;
    C.val = (A * B.val);
    return(C);
}

inline iq25
IQ25mpyI32(const iq25 &A, long B)
{
    iq25 C;
    C.val = (A.val * B);
    return(C);
}

inline iq25
IQ25mpyI32(long A, const iq25 &B)
{
    iq25 C;
    C.val = (A * B.val);
    return(C);
}

inline iq24
IQ24mpyI32(const iq24 &A, long B)
{
    iq24 C;
    C.val = (A.val * B);
    return(C);
}

inline iq24
IQ24mpyI32(long A, const iq24 &B)
{
    iq24 C;
    C.val = (A * B.val);
    return(C);
}

inline iq23
IQ23mpyI32(const iq23 &A, long B)
{
    iq23 C;
    C.val = (A.val * B);
    return(C);
}

inline iq23
IQ23mpyI32(long A, const iq23 &B)
{
    iq23 C;
    C.val = (A * B.val);
    return(C);
}

inline iq22
IQ22mpyI32(const iq22 &A, long B)
{
    iq22 C;
    C.val = (A.val * B);
    return(C);
}

inline iq22
IQ22mpyI32(long A, const iq22 &B)
{
    iq22 C;
    C.val = (A * B.val);
    return(C);
}

inline iq21
IQ21mpyI32(const iq21 &A, long B)
{
    iq21 C;
    C.val = (A.val * B);
    return(C);
}

inline iq21
IQ21mpyI32(long A, const iq21 &B)
{
    iq21 C;
    C.val = (A * B.val);
    return(C);
}

inline iq20
IQ20mpyI32(const iq20 &A, long B)
{
    iq20 C;
    C.val = (A.val * B);
    return(C);
}

inline iq20
IQ20mpyI32(long A, const iq20 &B)
{
    iq20 C;
    C.val = (A * B.val);
    return(C);
}

inline iq19
IQ19mpyI32(const iq19 &A, long B)
{
    iq19 C;
    C.val = (A.val * B);
    return(C);
}

inline iq19
IQ19mpyI32(long A, const iq19 &B)
{
    iq19 C;
    C.val = (A * B.val);
    return(C);
}

inline iq18
IQ18mpyI32(const iq18 &A, long B)
{
    iq18 C;
    C.val = (A.val * B);
    return(C);
}

inline iq18
IQ18mpyI32(long A, const iq18 &B)
{
    iq18 C;
    C.val = (A * B.val);
    return(C);
}

inline iq17
IQ17mpyI32(const iq17 &A, long B)
{
    iq17 C;
    C.val = (A.val * B);
    return(C);
}

inline iq17
IQ17mpyI32(long A, const iq17 &B)
{
    iq17 C;
    C.val = (A * B.val);
    return(C);
}

inline iq16
IQ16mpyI32(const iq16 &A, long B)
{
    iq16 C;
    C.val = (A.val * B);
    return(C);
}

inline iq16
IQ16mpyI32(long A, const iq16 &B)
{
    iq16 C;
    C.val = (A * B.val);
    return(C);
}

inline iq15
IQ15mpyI32(const iq15 &A, long B)
{
    iq15 C;
    C.val = (A.val * B);
    return(C);
}

inline iq15
IQ15mpyI32(long A, const iq15 &B)
{
    iq15 C;
    C.val = (A * B.val);
    return(C);
}

inline iq14
IQ14mpyI32(const iq14 &A, long B)
{
    iq14 C;
    C.val = (A.val * B);
    return(C);
}

inline iq14
IQ14mpyI32(long A, const iq14 &B)
{
    iq14 C;
    C.val = (A * B.val);
    return(C);
}

inline iq13
IQ13mpyI32(const iq13 &A, long B)
{
    iq13 C;
    C.val = (A.val * B);
    return(C);
}

inline iq13
IQ13mpyI32(long A, const iq13 &B)
{
    iq13 C;
    C.val = (A * B.val);
    return(C);
}

inline iq12
IQ12mpyI32(const iq12 &A, long B)
{
    iq12 C;
    C.val = (A.val * B);
    return(C);
}

inline iq12
IQ12mpyI32(long A, const iq12 &B)
{
    iq12 C;
    C.val = (A * B.val);
    return(C);
}

inline iq11
IQ11mpyI32(const iq11 &A, long B)
{
    iq11 C;
    C.val = (A.val * B);
    return(C);
}

inline iq11
IQ11mpyI32(long A, const iq11 &B)
{
    iq11 C;
    C.val = (A * B.val);
    return(C);
}

inline iq10
IQ10mpyI32(const iq10 &A, long B)
{
    iq10 C;
    C.val = (A.val * B);
    return(C);
}

inline iq10
IQ10mpyI32(long A, const iq10 &B)
{
    iq10 C;
    C.val = (A * B.val);
    return(C);
}

inline iq9
IQ9mpyI32(const iq9 &A, long B)
{
    iq9 C;
    C.val = (A.val * B);
    return(C);
}

inline iq9
IQ9mpyI32(long A, const iq9 &B)
{
    iq9 C;
    C.val = (A * B.val);
    return(C);
}

inline iq8
IQ8mpyI32(const iq8 &A, long B)
{
    iq8 C;
    C.val = (A.val * B);
    return(C);
}

inline iq8
IQ8mpyI32(long A, const iq8 &B)
{
    iq8 C;
    C.val = (A * B.val);
    return(C);
}

inline iq7
IQ7mpyI32(const iq7 &A, long B)
{
    iq7 C;
    C.val = (A.val * B);
    return(C);
}

inline iq7
IQ7mpyI32(long A, const iq7 &B)
{
    iq7 C;
    C.val = (A * B.val);
    return(C);
}

inline iq6
IQ6mpyI32(const iq6 &A, long B)
{
    iq6 C;
    C.val = (A.val * B);
    return(C);
}

inline iq6
IQ6mpyI32(long A, const iq6 &B)
{
    iq6 C;
    C.val = (A * B.val);
    return(C);
}

inline iq5
IQ5mpyI32(const iq5 &A, long B)
{
    iq5 C;
    C.val = (A.val * B);
    return(C);
}

inline iq5
IQ5mpyI32(long A, const iq5 &B)
{
    iq5 C;
    C.val = (A * B.val);
    return(C);
}

inline iq4
IQ4mpyI32(const iq4 &A, long B)
{
    iq4 C;
    C.val = (A.val * B);
    return(C);
}

inline iq4
IQ4mpyI32(long A, const iq4 &B)
{
    iq4 C;
    C.val = (A * B.val);
    return(C);
}

inline iq3
IQ3mpyI32(const iq3 &A, long B)
{
    iq3 C;
    C.val = (A.val * B);
    return(C);
}

inline iq3
IQ3mpyI32(long A, const iq3 &B)
{
    iq3 C;
    C.val = (A * B.val);
    return(C);
}

inline iq2
IQ2mpyI32(const iq2 &A, long B)
{
    iq2 C;
    C.val = (A.val * B);
    return(C);
}

inline iq2
IQ2mpyI32(long A, const iq2 &B)
{
    iq2 C;
    C.val = (A * B.val);
    return(C);
}

inline iq1
IQ1mpyI32(const iq1 &A, long B)
{
    iq1 C;
    C.val = (A.val * B);
    return(C);
}

inline iq1
IQ1mpyI32(long A, const iq1 &B)
{
    iq1 C;
    C.val = (A * B.val);
    return(C);
}

inline iq
IQmpyI32(const iq &A, long B)
{
    iq C;
    C.val = (A.val * B);
    return(C);
}

//*****************************************************************************
//
// Multiplies an IQ number by an integer, and returns the integer portion.
//
//*****************************************************************************
inline long
IQ30mpyI32int(const iq30 &A, long B)
{
    return(_IQ30mpyI32int(A.val, B));
}

inline long
IQ30mpyI32int(long A, const iq30 &B)
{
    return(_IQ30mpyI32int(B.val, A));
}

inline long
IQ29mpyI32int(const iq29 &A, long B)
{
    return(_IQ29mpyI32int(A.val, B));
}

inline long
IQ29mpyI32int(long A, const iq29 &B)
{
    return(_IQ29mpyI32int(B.val, A));
}

inline long
IQ28mpyI32int(const iq28 &A, long B)
{
    return(_IQ28mpyI32int(A.val, B));
}

inline long
IQ28mpyI32int(long A, const iq28 &B)
{
    return(_IQ28mpyI32int(B.val, A));
}

inline long
IQ27mpyI32int(const iq27 &A, long B)
{
    return(_IQ27mpyI32int(A.val, B));
}

inline long
IQ27mpyI32int(long A, const iq27 &B)
{
    return(_IQ27mpyI32int(B.val, A));
}

inline long
IQ26mpyI32int(const iq26 &A, long B)
{
    return(_IQ26mpyI32int(A.val, B));
}

inline long
IQ26mpyI32int(long A, const iq26 &B)
{
    return(_IQ26mpyI32int(B.val, A));
}

inline long
IQ25mpyI32int(const iq25 &A, long B)
{
    return(_IQ25mpyI32int(A.val, B));
}

inline long
IQ25mpyI32int(long A, const iq25 &B)
{
    return(_IQ25mpyI32int(B.val, A));
}

inline long
IQ24mpyI32int(const iq24 &A, long B)
{
    return(_IQ24mpyI32int(A.val, B));
}

inline long
IQ24mpyI32int(long A, const iq24 &B)
{
    return(_IQ24mpyI32int(B.val, A));
}

inline long
IQ23mpyI32int(const iq23 &A, long B)
{
    return(_IQ23mpyI32int(A.val, B));
}

inline long
IQ23mpyI32int(long A, const iq23 &B)
{
    return(_IQ23mpyI32int(B.val, A));
}

inline long
IQ22mpyI32int(const iq22 &A, long B)
{
    return(_IQ22mpyI32int(A.val, B));
}

inline long
IQ22mpyI32int(long A, const iq22 &B)
{
    return(_IQ22mpyI32int(B.val, A));
}

inline long
IQ21mpyI32int(const iq21 &A, long B)
{
    return(_IQ21mpyI32int(A.val, B));
}

inline long
IQ21mpyI32int(long A, const iq21 &B)
{
    return(_IQ21mpyI32int(B.val, A));
}

inline long
IQ20mpyI32int(const iq20 &A, long B)
{
    return(_IQ20mpyI32int(A.val, B));
}

inline long
IQ20mpyI32int(long A, const iq20 &B)
{
    return(_IQ20mpyI32int(B.val, A));
}

inline long
IQ19mpyI32int(const iq19 &A, long B)
{
    return(_IQ19mpyI32int(A.val, B));
}

inline long
IQ19mpyI32int(long A, const iq19 &B)
{
    return(_IQ19mpyI32int(B.val, A));
}

inline long
IQ18mpyI32int(const iq18 &A, long B)
{
    return(_IQ18mpyI32int(A.val, B));
}

inline long
IQ18mpyI32int(long A, const iq18 &B)
{
    return(_IQ18mpyI32int(B.val, A));
}

inline long
IQ17mpyI32int(const iq17 &A, long B)
{
    return(_IQ17mpyI32int(A.val, B));
}

inline long
IQ17mpyI32int(long A, const iq17 &B)
{
    return(_IQ17mpyI32int(B.val, A));
}

inline long
IQ16mpyI32int(const iq16 &A, long B)
{
    return(_IQ16mpyI32int(A.val, B));
}

inline long
IQ16mpyI32int(long A, const iq16 &B)
{
    return(_IQ16mpyI32int(B.val, A));
}

inline long
IQ15mpyI32int(const iq15 &A, long B)
{
    return(_IQ15mpyI32int(A.val, B));
}

inline long
IQ15mpyI32int(long A, const iq15 &B)
{
    return(_IQ15mpyI32int(B.val, A));
}

inline long
IQ14mpyI32int(const iq14 &A, long B)
{
    return(_IQ14mpyI32int(A.val, B));
}

inline long
IQ14mpyI32int(long A, const iq14 &B)
{
    return(_IQ14mpyI32int(B.val, A));
}

inline long
IQ13mpyI32int(const iq13 &A, long B)
{
    return(_IQ13mpyI32int(A.val, B));
}

inline long
IQ13mpyI32int(long A, const iq13 &B)
{
    return(_IQ13mpyI32int(B.val, A));
}

inline long
IQ12mpyI32int(const iq12 &A, long B)
{
    return(_IQ12mpyI32int(A.val, B));
}

inline long
IQ12mpyI32int(long A, const iq12 &B)
{
    return(_IQ12mpyI32int(B.val, A));
}

inline long
IQ11mpyI32int(const iq11 &A, long B)
{
    return(_IQ11mpyI32int(A.val, B));
}

inline long
IQ11mpyI32int(long A, const iq11 &B)
{
    return(_IQ11mpyI32int(B.val, A));
}

inline long
IQ10mpyI32int(const iq10 &A, long B)
{
    return(_IQ10mpyI32int(A.val, B));
}

inline long
IQ10mpyI32int(long A, const iq10 &B)
{
    return(_IQ10mpyI32int(B.val, A));
}

inline long
IQ9mpyI32int(const iq9 &A, long B)
{
    return(_IQ9mpyI32int(A.val, B));
}

inline long
IQ9mpyI32int(long A, const iq9 &B)
{
    return(_IQ9mpyI32int(B.val, A));
}

inline long
IQ8mpyI32int(const iq8 &A, long B)
{
    return(_IQ8mpyI32int(A.val, B));
}

inline long
IQ8mpyI32int(long A, const iq8 &B)
{
    return(_IQ8mpyI32int(B.val, A));
}

inline long
IQ7mpyI32int(const iq7 &A, long B)
{
    return(_IQ7mpyI32int(A.val, B));
}

inline long
IQ7mpyI32int(long A, const iq7 &B)
{
    return(_IQ7mpyI32int(B.val, A));
}

inline long
IQ6mpyI32int(const iq6 &A, long B)
{
    return(_IQ6mpyI32int(A.val, B));
}

inline long
IQ6mpyI32int(long A, const iq6 &B)
{
    return(_IQ6mpyI32int(B.val, A));
}

inline long
IQ5mpyI32int(const iq5 &A, long B)
{
    return(_IQ5mpyI32int(A.val, B));
}

inline long
IQ5mpyI32int(long A, const iq5 &B)
{
    return(_IQ5mpyI32int(B.val, A));
}

inline long
IQ4mpyI32int(const iq4 &A, long B)
{
    return(_IQ4mpyI32int(A.val, B));
}

inline long
IQ4mpyI32int(long A, const iq4 &B)
{
    return(_IQ4mpyI32int(B.val, A));
}

inline long
IQ3mpyI32int(const iq3 &A, long B)
{
    return(_IQ3mpyI32int(A.val, B));
}

inline long
IQ3mpyI32int(long A, const iq3 &B)
{
    return(_IQ3mpyI32int(B.val, A));
}

inline long
IQ2mpyI32int(const iq2 &A, long B)
{
    return(_IQ2mpyI32int(A.val, B));
}

inline long
IQ2mpyI32int(long A, const iq2 &B)
{
    return(_IQ2mpyI32int(B.val, A));
}

inline long
IQ1mpyI32int(const iq1 &A, long B)
{
    return(_IQ1mpyI32int(A.val, B));
}

inline long
IQ1mpyI32int(long A, const iq1 &B)
{
    return(_IQ1mpyI32int(B.val, A));
}

inline long
IQmpyI32int(const iq &A, long B)
{
    return(_IQmpyI32int(A.val, B));
}

inline long
IQmpyI32int(long A, const iq &B)
{
    return(_IQmpyI32int(B.val, A));
}

//*****************************************************************************
//
// Multiplies an IQ number by an integer, and returns the fractional portion.
//
//*****************************************************************************
inline iq30
IQ30mpyI32frac(const iq30 &A, long B)
{
    iq30 C;
    C.val = _IQ30mpyI32frac(A.val, B);
    return(C);
}

inline iq30
IQ30mpyI32frac(long A, const iq30 &B)
{
    iq30 C;
    C.val = _IQ30mpyI32frac(B.val, A);
    return(C);
}


inline iq29
IQ29mpyI32frac(const iq29 &A, long B)
{
    iq29 C;
    C.val = _IQ29mpyI32frac(A.val, B);
    return(C);
}

inline iq29
IQ29mpyI32frac(long A, const iq29 &B)
{
    iq29 C;
    C.val = _IQ29mpyI32frac(B.val, A);
    return(C);
}


inline iq28
IQ28mpyI32frac(const iq28 &A, long B)
{
    iq28 C;
    C.val = _IQ28mpyI32frac(A.val, B);
    return(C);
}

inline iq28
IQ28mpyI32frac(long A, const iq28 &B)
{
    iq28 C;
    C.val = _IQ28mpyI32frac(B.val, A);
    return(C);
}


inline iq27
IQ27mpyI32frac(const iq27 &A, long B)
{
    iq27 C;
    C.val = _IQ27mpyI32frac(A.val, B);
    return(C);
}

inline iq27
IQ27mpyI32frac(long A, const iq27 &B)
{
    iq27 C;
    C.val = _IQ27mpyI32frac(B.val, A);
    return(C);
}


inline iq26
IQ26mpyI32frac(const iq26 &A, long B)
{
    iq26 C;
    C.val = _IQ26mpyI32frac(A.val, B);
    return(C);
}

inline iq26
IQ26mpyI32frac(long A, const iq26 &B)
{
    iq26 C;
    C.val = _IQ26mpyI32frac(B.val, A);
    return(C);
}


inline iq25
IQ25mpyI32frac(const iq25 &A, long B)
{
    iq25 C;
    C.val = _IQ25mpyI32frac(A.val, B);
    return(C);
}

inline iq25
IQ25mpyI32frac(long A, const iq25 &B)
{
    iq25 C;
    C.val = _IQ25mpyI32frac(B.val, A);
    return(C);
}


inline iq24
IQ24mpyI32frac(const iq24 &A, long B)
{
    iq24 C;
    C.val = _IQ24mpyI32frac(A.val, B);
    return(C);
}

inline iq24
IQ24mpyI32frac(long A, const iq24 &B)
{
    iq24 C;
    C.val = _IQ24mpyI32frac(B.val, A);
    return(C);
}


inline iq23
IQ23mpyI32frac(const iq23 &A, long B)
{
    iq23 C;
    C.val = _IQ23mpyI32frac(A.val, B);
    return(C);
}

inline iq23
IQ23mpyI32frac(long A, const iq23 &B)
{
    iq23 C;
    C.val = _IQ23mpyI32frac(B.val, A);
    return(C);
}


inline iq22
IQ22mpyI32frac(const iq22 &A, long B)
{
    iq22 C;
    C.val = _IQ22mpyI32frac(A.val, B);
    return(C);
}

inline iq22
IQ22mpyI32frac(long A, const iq22 &B)
{
    iq22 C;
    C.val = _IQ22mpyI32frac(B.val, A);
    return(C);
}


inline iq21
IQ21mpyI32frac(const iq21 &A, long B)
{
    iq21 C;
    C.val = _IQ21mpyI32frac(A.val, B);
    return(C);
}

inline iq21
IQ21mpyI32frac(long A, const iq21 &B)
{
    iq21 C;
    C.val = _IQ21mpyI32frac(B.val, A);
    return(C);
}


inline iq20
IQ20mpyI32frac(const iq20 &A, long B)
{
    iq20 C;
    C.val = _IQ20mpyI32frac(A.val, B);
    return(C);
}

inline iq20
IQ20mpyI32frac(long A, const iq20 &B)
{
    iq20 C;
    C.val = _IQ20mpyI32frac(B.val, A);
    return(C);
}


inline iq19
IQ19mpyI32frac(const iq19 &A, long B)
{
    iq19 C;
    C.val = _IQ19mpyI32frac(A.val, B);
    return(C);
}

inline iq19
IQ19mpyI32frac(long A, const iq19 &B)
{
    iq19 C;
    C.val = _IQ19mpyI32frac(B.val, A);
    return(C);
}


inline iq18
IQ18mpyI32frac(const iq18 &A, long B)
{
    iq18 C;
    C.val = _IQ18mpyI32frac(A.val, B);
    return(C);
}

inline iq18
IQ18mpyI32frac(long A, const iq18 &B)
{
    iq18 C;
    C.val = _IQ18mpyI32frac(B.val, A);
    return(C);
}


inline iq17
IQ17mpyI32frac(const iq17 &A, long B)
{
    iq17 C;
    C.val = _IQ17mpyI32frac(A.val, B);
    return(C);
}

inline iq17
IQ17mpyI32frac(long A, const iq17 &B)
{
    iq17 C;
    C.val = _IQ17mpyI32frac(B.val, A);
    return(C);
}


inline iq16
IQ16mpyI32frac(const iq16 &A, long B)
{
    iq16 C;
    C.val = _IQ16mpyI32frac(A.val, B);
    return(C);
}

inline iq16
IQ16mpyI32frac(long A, const iq16 &B)
{
    iq16 C;
    C.val = _IQ16mpyI32frac(B.val, A);
    return(C);
}


inline iq15
IQ15mpyI32frac(const iq15 &A, long B)
{
    iq15 C;
    C.val = _IQ15mpyI32frac(A.val, B);
    return(C);
}

inline iq15
IQ15mpyI32frac(long A, const iq15 &B)
{
    iq15 C;
    C.val = _IQ15mpyI32frac(B.val, A);
    return(C);
}


inline iq14
IQ14mpyI32frac(const iq14 &A, long B)
{
    iq14 C;
    C.val = _IQ14mpyI32frac(A.val, B);
    return(C);
}

inline iq14
IQ14mpyI32frac(long A, const iq14 &B)
{
    iq14 C;
    C.val = _IQ14mpyI32frac(B.val, A);
    return(C);
}


inline iq13
IQ13mpyI32frac(const iq13 &A, long B)
{
    iq13 C;
    C.val = _IQ13mpyI32frac(A.val, B);
    return(C);
}

inline iq13
IQ13mpyI32frac(long A, const iq13 &B)
{
    iq13 C;
    C.val = _IQ13mpyI32frac(B.val, A);
    return(C);
}


inline iq12
IQ12mpyI32frac(const iq12 &A, long B)
{
    iq12 C;
    C.val = _IQ12mpyI32frac(A.val, B);
    return(C);
}

inline iq12
IQ12mpyI32frac(long A, const iq12 &B)
{
    iq12 C;
    C.val = _IQ12mpyI32frac(B.val, A);
    return(C);
}


inline iq11
IQ11mpyI32frac(const iq11 &A, long B)
{
    iq11 C;
    C.val = _IQ11mpyI32frac(A.val, B);
    return(C);
}

inline iq11
IQ11mpyI32frac(long A, const iq11 &B)
{
    iq11 C;
    C.val = _IQ11mpyI32frac(B.val, A);
    return(C);
}


inline iq10
IQ10mpyI32frac(const iq10 &A, long B)
{
    iq10 C;
    C.val = _IQ10mpyI32frac(A.val, B);
    return(C);
}

inline iq10
IQ10mpyI32frac(long A, const iq10 &B)
{
    iq10 C;
    C.val = _IQ10mpyI32frac(B.val, A);
    return(C);
}


inline iq9
IQ9mpyI32frac(const iq9 &A, long B)
{
    iq9 C;
    C.val = _IQ9mpyI32frac(A.val, B);
    return(C);
}

inline iq9
IQ9mpyI32frac(long A, const iq9 &B)
{
    iq9 C;
    C.val = _IQ9mpyI32frac(B.val, A);
    return(C);
}


inline iq8
IQ8mpyI32frac(const iq8 &A, long B)
{
    iq8 C;
    C.val = _IQ8mpyI32frac(A.val, B);
    return(C);
}

inline iq8
IQ8mpyI32frac(long A, const iq8 &B)
{
    iq8 C;
    C.val = _IQ8mpyI32frac(B.val, A);
    return(C);
}


inline iq7
IQ7mpyI32frac(const iq7 &A, long B)
{
    iq7 C;
    C.val = _IQ7mpyI32frac(A.val, B);
    return(C);
}

inline iq7
IQ7mpyI32frac(long A, const iq7 &B)
{
    iq7 C;
    C.val = _IQ7mpyI32frac(B.val, A);
    return(C);
}


inline iq6
IQ6mpyI32frac(const iq6 &A, long B)
{
    iq6 C;
    C.val = _IQ6mpyI32frac(A.val, B);
    return(C);
}

inline iq6
IQ6mpyI32frac(long A, const iq6 &B)
{
    iq6 C;
    C.val = _IQ6mpyI32frac(B.val, A);
    return(C);
}


inline iq5
IQ5mpyI32frac(const iq5 &A, long B)
{
    iq5 C;
    C.val = _IQ5mpyI32frac(A.val, B);
    return(C);
}

inline iq5
IQ5mpyI32frac(long A, const iq5 &B)
{
    iq5 C;
    C.val = _IQ5mpyI32frac(B.val, A);
    return(C);
}


inline iq4
IQ4mpyI32frac(const iq4 &A, long B)
{
    iq4 C;
    C.val = _IQ4mpyI32frac(A.val, B);
    return(C);
}

inline iq4
IQ4mpyI32frac(long A, const iq4 &B)
{
    iq4 C;
    C.val = _IQ4mpyI32frac(B.val, A);
    return(C);
}


inline iq3
IQ3mpyI32frac(const iq3 &A, long B)
{
    iq3 C;
    C.val = _IQ3mpyI32frac(A.val, B);
    return(C);
}

inline iq3
IQ3mpyI32frac(long A, const iq3 &B)
{
    iq3 C;
    C.val = _IQ3mpyI32frac(B.val, A);
    return(C);
}


inline iq2
IQ2mpyI32frac(const iq2 &A, long B)
{
    iq2 C;
    C.val = _IQ2mpyI32frac(A.val, B);
    return(C);
}

inline iq2
IQ2mpyI32frac(long A, const iq2 &B)
{
    iq2 C;
    C.val = _IQ2mpyI32frac(B.val, A);
    return(C);
}


inline iq1
IQ1mpyI32frac(const iq1 &A, long B)
{
    iq1 C;
    C.val = _IQ1mpyI32frac(A.val, B);
    return(C);
}

inline iq1
IQ1mpyI32frac(long A, const iq1 &B)
{
    iq1 C;
    C.val = _IQ1mpyI32frac(B.val, A);
    return(C);
}


inline iq
IQmpyI32frac(const iq &A, long B)
{
    iq C;
    C.val = _IQmpyI32frac(A.val, B);
    return(C);
}

inline iq
IQmpyI32frac(long A, const iq &B)
{
    iq C;
    C.val = _IQmpyI32frac(B.val, A);
    return(C);
}

//*****************************************************************************
//
// Computes the sin of an IQ number.
//
//*****************************************************************************
inline iq29
IQ29sin(const iq29 &A)
{
    iq29 B;
    B.val = _IQ29sin(A.val);
    return(B);
}

inline iq28
IQ28sin(const iq28 &A)
{
    iq28 B;
    B.val = _IQ28sin(A.val);
    return(B);
}

inline iq27
IQ27sin(const iq27 &A)
{
    iq27 B;
    B.val = _IQ27sin(A.val);
    return(B);
}

inline iq26
IQ26sin(const iq26 &A)
{
    iq26 B;
    B.val = _IQ26sin(A.val);
    return(B);
}

inline iq25
IQ25sin(const iq25 &A)
{
    iq25 B;
    B.val = _IQ25sin(A.val);
    return(B);
}

inline iq24
IQ24sin(const iq24 &A)
{
    iq24 B;
    B.val = _IQ24sin(A.val);
    return(B);
}

inline iq23
IQ23sin(const iq23 &A)
{
    iq23 B;
    B.val = _IQ23sin(A.val);
    return(B);
}

inline iq22
IQ22sin(const iq22 &A)
{
    iq22 B;
    B.val = _IQ22sin(A.val);
    return(B);
}

inline iq21
IQ21sin(const iq21 &A)
{
    iq21 B;
    B.val = _IQ21sin(A.val);
    return(B);
}

inline iq20
IQ20sin(const iq20 &A)
{
    iq20 B;
    B.val = _IQ20sin(A.val);
    return(B);
}

inline iq19
IQ19sin(const iq19 &A)
{
    iq19 B;
    B.val = _IQ19sin(A.val);
    return(B);
}

inline iq18
IQ18sin(const iq18 &A)
{
    iq18 B;
    B.val = _IQ18sin(A.val);
    return(B);
}

inline iq17
IQ17sin(const iq17 &A)
{
    iq17 B;
    B.val = _IQ17sin(A.val);
    return(B);
}

inline iq16
IQ16sin(const iq16 &A)
{
    iq16 B;
    B.val = _IQ16sin(A.val);
    return(B);
}

inline iq15
IQ15sin(const iq15 &A)
{
    iq15 B;
    B.val = _IQ15sin(A.val);
    return(B);
}

inline iq14
IQ14sin(const iq14 &A)
{
    iq14 B;
    B.val = _IQ14sin(A.val);
    return(B);
}

inline iq13
IQ13sin(const iq13 &A)
{
    iq13 B;
    B.val = _IQ13sin(A.val);
    return(B);
}

inline iq12
IQ12sin(const iq12 &A)
{
    iq12 B;
    B.val = _IQ12sin(A.val);
    return(B);
}

inline iq11
IQ11sin(const iq11 &A)
{
    iq11 B;
    B.val = _IQ11sin(A.val);
    return(B);
}

inline iq10
IQ10sin(const iq10 &A)
{
    iq10 B;
    B.val = _IQ10sin(A.val);
    return(B);
}

inline iq9
IQ9sin(const iq9 &A)
{
    iq9 B;
    B.val = _IQ9sin(A.val);
    return(B);
}

inline iq8
IQ8sin(const iq8 &A)
{
    iq8 B;
    B.val = _IQ8sin(A.val);
    return(B);
}

inline iq7
IQ7sin(const iq7 &A)
{
    iq7 B;
    B.val = _IQ7sin(A.val);
    return(B);
}

inline iq6
IQ6sin(const iq6 &A)
{
    iq6 B;
    B.val = _IQ6sin(A.val);
    return(B);
}

inline iq5
IQ5sin(const iq5 &A)
{
    iq5 B;
    B.val = _IQ5sin(A.val);
    return(B);
}

inline iq4
IQ4sin(const iq4 &A)
{
    iq4 B;
    B.val = _IQ4sin(A.val);
    return(B);
}

inline iq3
IQ3sin(const iq3 &A)
{
    iq3 B;
    B.val = _IQ3sin(A.val);
    return(B);
}

inline iq2
IQ2sin(const iq2 &A)
{
    iq2 B;
    B.val = _IQ2sin(A.val);
    return(B);
}

inline iq1
IQ1sin(const iq1 &A)
{
    iq1 B;
    B.val = _IQ1sin(A.val);
    return(B);
}

inline iq 
CPP_IQsin(const iq &A)
{
    iq B;
    B.val = _IQsin(A.val);
    return(B);
}

//*****************************************************************************
//
// Computes the sin of an IQ number, using cycles per unit instead of radians.
//
//*****************************************************************************
inline iq30
CPP_IQ30sinPU(const iq30 &A)
{
    iq30 B;
    B.val = _IQ30sinPU(A.val);
    return(B);
}

inline iq29
CPP_IQ29sinPU(const iq29 &A)
{
    iq29 B;
    B.val = _IQ29sinPU(A.val);
    return(B);
}

inline iq28
CPP_IQ28sinPU(const iq28 &A)
{
    iq28 B;
    B.val = _IQ28sinPU(A.val);
    return(B);
}

inline iq27
CPP_IQ27sinPU(const iq27 &A)
{
    iq27 B;
    B.val = _IQ27sinPU(A.val);
    return(B);
}

inline iq26
CPP_IQ26sinPU(const iq26 &A)
{
    iq26 B;
    B.val = _IQ26sinPU(A.val);
    return(B);
}

inline iq25
CPP_IQ25sinPU(const iq25 &A)
{
    iq25 B;
    B.val = _IQ25sinPU(A.val);
    return(B);
}

inline iq24
CPP_IQ24sinPU(const iq24 &A)
{
    iq24 B;
    B.val = _IQ24sinPU(A.val);
    return(B);
}

inline iq23
CPP_IQ23sinPU(const iq23 &A)
{
    iq23 B;
    B.val = _IQ23sinPU(A.val);
    return(B);
}

inline iq22
CPP_IQ22sinPU(const iq22 &A)
{
    iq22 B;
    B.val = _IQ22sinPU(A.val);
    return(B);
}

inline iq21
CPP_IQ21sinPU(const iq21 &A)
{
    iq21 B;
    B.val = _IQ21sinPU(A.val);
    return(B);
}

inline iq20
CPP_IQ20sinPU(const iq20 &A)
{
    iq20 B;
    B.val = _IQ20sinPU(A.val);
    return(B);
}

inline iq19
CPP_IQ19sinPU(const iq19 &A)
{
    iq19 B;
    B.val = _IQ19sinPU(A.val);
    return(B);
}

inline iq18
CPP_IQ18sinPU(const iq18 &A)
{
    iq18 B;
    B.val = _IQ18sinPU(A.val);
    return(B);
}

inline iq17
CPP_IQ17sinPU(const iq17 &A)
{
    iq17 B;
    B.val = _IQ17sinPU(A.val);
    return(B);
}

inline iq16
CPP_IQ16sinPU(const iq16 &A)
{
    iq16 B;
    B.val = _IQ16sinPU(A.val);
    return(B);
}

inline iq15
CPP_IQ15sinPU(const iq15 &A)
{
    iq15 B;
    B.val = _IQ15sinPU(A.val);
    return(B);
}

inline iq14
CPP_IQ14sinPU(const iq14 &A)
{
    iq14 B;
    B.val = _IQ14sinPU(A.val);
    return(B);
}

inline iq13
CPP_IQ13sinPU(const iq13 &A)
{
    iq13 B;
    B.val = _IQ13sinPU(A.val);
    return(B);
}

inline iq12
CPP_IQ12sinPU(const iq12 &A)
{
    iq12 B;
    B.val = _IQ12sinPU(A.val);
    return(B);
}

inline iq11
CPP_IQ11sinPU(const iq11 &A)
{
    iq11 B;
    B.val = _IQ11sinPU(A.val);
    return(B);
}

inline iq10
CPP_IQ10sinPU(const iq10 &A)
{
    iq10 B;
    B.val = _IQ10sinPU(A.val);
    return(B);
}

inline iq9
CPP_IQ9sinPU(const iq9 &A)
{
    iq9 B;
    B.val = _IQ9sinPU(A.val);
    return(B);
}

inline iq8
CPP_IQ8sinPU(const iq8 &A)
{
    iq8 B;
    B.val = _IQ8sinPU(A.val);
    return(B);
}

inline iq7
CPP_IQ7sinPU(const iq7 &A)
{
    iq7 B;
    B.val = _IQ7sinPU(A.val);
    return(B);
}

inline iq6
CPP_IQ6sinPU(const iq6 &A)
{
    iq6 B;
    B.val = _IQ6sinPU(A.val);
    return(B);
}

inline iq5
CPP_IQ5sinPU(const iq5 &A)
{
    iq5 B;
    B.val = _IQ5sinPU(A.val);
    return(B);
}

inline iq4
CPP_IQ4sinPU(const iq4 &A)
{
    iq4 B;
    B.val = _IQ4sinPU(A.val);
    return(B);
}

inline iq3
CPP_IQ3sinPU(const iq3 &A)
{
    iq3 B;
    B.val = _IQ3sinPU(A.val);
    return(B);
}

inline iq2
CPP_IQ2sinPU(const iq2 &A)
{
    iq2 B;
    B.val = _IQ2sinPU(A.val);
    return(B);
}

inline iq1
CPP_IQ1sinPU(const iq1 &A)
{
    iq1 B;
    B.val = _IQ1sinPU(A.val);
    return(B);
}

inline iq
CPP_IQsinPU(const iq &A)
{
    iq B;
    B.val = _IQsinPU(A.val);
    return(B);
}

//*****************************************************************************
//
// Computes the arcsin of an CPP_IQ number.
//
//*****************************************************************************
inline iq29
CPP_IQ29asin(const iq29 &A)
{
    iq29 B;
    B.val = _IQ29asin(A.val);
    return(B);
}

inline iq28
CPP_IQ28asin(const iq28 &A)
{
    iq28 B;
    B.val = _IQ28asin(A.val);
    return(B);
}

inline iq27
CPP_IQ27asin(const iq27 &A)
{
    iq27 B;
    B.val = _IQ27asin(A.val);
    return(B);
}

inline iq26
CPP_IQ26asin(const iq26 &A)
{
    iq26 B;
    B.val = _IQ26asin(A.val);
    return(B);
}

inline iq25
CPP_IQ25asin(const iq25 &A)
{
    iq25 B;
    B.val = _IQ25asin(A.val);
    return(B);
}

inline iq24
CPP_IQ24asin(const iq24 &A)
{
    iq24 B;
    B.val = _IQ24asin(A.val);
    return(B);
}

inline iq23
CPP_IQ23asin(const iq23 &A)
{
    iq23 B;
    B.val = _IQ23asin(A.val);
    return(B);
}

inline iq22
CPP_IQ22asin(const iq22 &A)
{
    iq22 B;
    B.val = _IQ22asin(A.val);
    return(B);
}

inline iq21
CPP_IQ21asin(const iq21 &A)
{
    iq21 B;
    B.val = _IQ21asin(A.val);
    return(B);
}

inline iq20
CPP_IQ20asin(const iq20 &A)
{
    iq20 B;
    B.val = _IQ20asin(A.val);
    return(B);
}

inline iq19
CPP_IQ19asin(const iq19 &A)
{
    iq19 B;
    B.val = _IQ19asin(A.val);
    return(B);
}

inline iq18
CPP_IQ18asin(const iq18 &A)
{
    iq18 B;
    B.val = _IQ18asin(A.val);
    return(B);
}

inline iq17
CPP_IQ17asin(const iq17 &A)
{
    iq17 B;
    B.val = _IQ17asin(A.val);
    return(B);
}

inline iq16
CPP_IQ16asin(const iq16 &A)
{
    iq16 B;
    B.val = _IQ16asin(A.val);
    return(B);
}

inline iq15
CPP_IQ15asin(const iq15 &A)
{
    iq15 B;
    B.val = _IQ15asin(A.val);
    return(B);
}

inline iq14
CPP_IQ14asin(const iq14 &A)
{
    iq14 B;
    B.val = _IQ14asin(A.val);
    return(B);
}

inline iq13
CPP_IQ13asin(const iq13 &A)
{
    iq13 B;
    B.val = _IQ13asin(A.val);
    return(B);
}

inline iq12
CPP_IQ12asin(const iq12 &A)
{
    iq12 B;
    B.val = _IQ12asin(A.val);
    return(B);
}

inline iq11
CPP_IQ11asin(const iq11 &A)
{
    iq11 B;
    B.val = _IQ11asin(A.val);
    return(B);
}

inline iq10
CPP_IQ10asin(const iq10 &A)
{
    iq10 B;
    B.val = _IQ10asin(A.val);
    return(B);
}

inline iq9
CPP_IQ9asin(const iq9 &A)
{
    iq9 B;
    B.val = _IQ9asin(A.val);
    return(B);
}

inline iq8
CPP_IQ8asin(const iq8 &A)
{
    iq8 B;
    B.val = _IQ8asin(A.val);
    return(B);
}

inline iq7
CPP_IQ7asin(const iq7 &A)
{
    iq7 B;
    B.val = _IQ7asin(A.val);
    return(B);
}

inline iq6
CPP_IQ6asin(const iq6 &A)
{
    iq6 B;
    B.val = _IQ6asin(A.val);
    return(B);
}

inline iq5
CPP_IQ5asin(const iq5 &A)
{
    iq5 B;
    B.val = _IQ5asin(A.val);
    return(B);
}

inline iq4
CPP_IQ4asin(const iq4 &A)
{
    iq4 B;
    B.val = _IQ4asin(A.val);
    return(B);
}

inline iq3
CPP_IQ3asin(const iq3 &A)
{
    iq3 B;
    B.val = _IQ3asin(A.val);
    return(B);
}

inline iq2
CPP_IQ2asin(const iq2 &A)
{
    iq2 B;
    B.val = _IQ2asin(A.val);
    return(B);
}

inline iq1
CPP_IQ1asin(const iq1 &A)
{
    iq1 B;
    B.val = _IQ1asin(A.val);
    return(B);
}

inline iq
CPP_IQasin(const iq &A)
{
    iq B;
    B.val = _IQasin(A.val);
    return(B);
}

//*****************************************************************************
//
// Computes the cos of an IQ number.
//
//*****************************************************************************
inline iq29
CPP_IQ29cos(const iq29 &A)
{
    iq29 B;
    B.val = _IQ29cos(A.val);
    return(B);
}

inline iq28
CPP_IQ28cos(const iq28 &A)
{
    iq28 B;
    B.val = _IQ28cos(A.val);
    return(B);
}

inline iq27
CPP_IQ27cos(const iq27 &A)
{
    iq27 B;
    B.val = _IQ27cos(A.val);
    return(B);
}

inline iq26
CPP_IQ26cos(const iq26 &A)
{
    iq26 B;
    B.val = _IQ26cos(A.val);
    return(B);
}

inline iq25
CPP_IQ25cos(const iq25 &A)
{
    iq25 B;
    B.val = _IQ25cos(A.val);
    return(B);
}

inline iq24
CPP_IQ24cos(const iq24 &A)
{
    iq24 B;
    B.val = _IQ24cos(A.val);
    return(B);
}

inline iq23
CPP_IQ23cos(const iq23 &A)
{
    iq23 B;
    B.val = _IQ23cos(A.val);
    return(B);
}

inline iq22
CPP_IQ22cos(const iq22 &A)
{
    iq22 B;
    B.val = _IQ22cos(A.val);
    return(B);
}

inline iq21
CPP_IQ21cos(const iq21 &A)
{
    iq21 B;
    B.val = _IQ21cos(A.val);
    return(B);
}

inline iq20
CPP_IQ20cos(const iq20 &A)
{
    iq20 B;
    B.val = _IQ20cos(A.val);
    return(B);
}

inline iq19
CPP_IQ19cos(const iq19 &A)
{
    iq19 B;
    B.val = _IQ19cos(A.val);
    return(B);
}

inline iq18
CPP_IQ18cos(const iq18 &A)
{
    iq18 B;
    B.val = _IQ18cos(A.val);
    return(B);
}

inline iq17
CPP_IQ17cos(const iq17 &A)
{
    iq17 B;
    B.val = _IQ17cos(A.val);
    return(B);
}

inline iq16
CPP_IQ16cos(const iq16 &A)
{
    iq16 B;
    B.val = _IQ16cos(A.val);
    return(B);
}

inline iq15
CPP_IQ15cos(const iq15 &A)
{
    iq15 B;
    B.val = _IQ15cos(A.val);
    return(B);
}

inline iq14
CPP_IQ14cos(const iq14 &A)
{
    iq14 B;
    B.val = _IQ14cos(A.val);
    return(B);
}

inline iq13
CPP_IQ13cos(const iq13 &A)
{
    iq13 B;
    B.val = _IQ13cos(A.val);
    return(B);
}

inline iq12
CPP_IQ12cos(const iq12 &A)
{
    iq12 B;
    B.val = _IQ12cos(A.val);
    return(B);
}

inline iq11
CPP_IQ11cos(const iq11 &A)
{
    iq11 B;
    B.val = _IQ11cos(A.val);
    return(B);
}

inline iq10
CPP_IQ10cos(const iq10 &A)
{
    iq10 B;
    B.val = _IQ10cos(A.val);
    return(B);
}

inline iq9
CPP_IQ9cos(const iq9 &A)
{
    iq9 B;
    B.val = _IQ9cos(A.val);
    return(B);
}

inline iq8
CPP_IQ8cos(const iq8 &A)
{
    iq8 B;
    B.val = _IQ8cos(A.val);
    return(B);
}

inline iq7
CPP_IQ7cos(const iq7 &A)
{
    iq7 B;
    B.val = _IQ7cos(A.val);
    return(B);
}

inline iq6
CPP_IQ6cos(const iq6 &A)
{
    iq6 B;
    B.val = _IQ6cos(A.val);
    return(B);
}

inline iq5
CPP_IQ5cos(const iq5 &A)
{
    iq5 B;
    B.val = _IQ5cos(A.val);
    return(B);
}

inline iq4
CPP_IQ4cos(const iq4 &A)
{
    iq4 B;
    B.val = _IQ4cos(A.val);
    return(B);
}

inline iq3
CPP_IQ3cos(const iq3 &A)
{
    iq3 B;
    B.val = _IQ3cos(A.val);
    return(B);
}

inline iq2
CPP_IQ2cos(const iq2 &A)
{
    iq2 B;
    B.val = _IQ2cos(A.val);
    return(B);
}

inline iq1
CPP_IQ1cos(const iq1 &A)
{
    iq1 B;
    B.val = _IQ1cos(A.val);
    return(B);
}

inline iq
CPP_IQcos(const iq &A)
{
    iq B;
    B.val = _IQcos(A.val);
    return(B);
}

//*****************************************************************************
//
// Computes the cos of an IQ number, using cycles per unit instead of radians.
//
//*****************************************************************************
inline iq30
CPP_IQ30cosPU(const iq30 &A)
{
    iq30 B;
    B.val = _IQ30cosPU(A.val);
    return(B);
}

inline iq29
CPP_IQ29cosPU(const iq29 &A)
{
    iq29 B;
    B.val = _IQ29cosPU(A.val);
    return(B);
}

inline iq28
CPP_IQ28cosPU(const iq28 &A)
{
    iq28 B;
    B.val = _IQ28cosPU(A.val);
    return(B);
}

inline iq27
CPP_IQ27cosPU(const iq27 &A)
{
    iq27 B;
    B.val = _IQ27cosPU(A.val);
    return(B);
}

inline iq26
CPP_IQ26cosPU(const iq26 &A)
{
    iq26 B;
    B.val = _IQ26cosPU(A.val);
    return(B);
}

inline iq25
CPP_IQ25cosPU(const iq25 &A)
{
    iq25 B;
    B.val = _IQ25cosPU(A.val);
    return(B);
}

inline iq24
CPP_IQ24cosPU(const iq24 &A)
{
    iq24 B;
    B.val = _IQ24cosPU(A.val);
    return(B);
}

inline iq23
CPP_IQ23cosPU(const iq23 &A)
{
    iq23 B;
    B.val = _IQ23cosPU(A.val);
    return(B);
}

inline iq22
CPP_IQ22cosPU(const iq22 &A)
{
    iq22 B;
    B.val = _IQ22cosPU(A.val);
    return(B);
}

inline iq21
CPP_IQ21cosPU(const iq21 &A)
{
    iq21 B;
    B.val = _IQ21cosPU(A.val);
    return(B);
}

inline iq20
CPP_IQ20cosPU(const iq20 &A)
{
    iq20 B;
    B.val = _IQ20cosPU(A.val);
    return(B);
}

inline iq19
CPP_IQ19cosPU(const iq19 &A)
{
    iq19 B;
    B.val = _IQ19cosPU(A.val);
    return(B);
}

inline iq18
CPP_IQ18cosPU(const iq18 &A)
{
    iq18 B;
    B.val = _IQ18cosPU(A.val);
    return(B);
}

inline iq17
CPP_IQ17cosPU(const iq17 &A)
{
    iq17 B;
    B.val = _IQ17cosPU(A.val);
    return(B);
}

inline iq16
CPP_IQ16cosPU(const iq16 &A)
{
    iq16 B;
    B.val = _IQ16cosPU(A.val);
    return(B);
}

inline iq15
CPP_IQ15cosPU(const iq15 &A)
{
    iq15 B;
    B.val = _IQ15cosPU(A.val);
    return(B);
}

inline iq14
CPP_IQ14cosPU(const iq14 &A)
{
    iq14 B;
    B.val = _IQ14cosPU(A.val);
    return(B);
}

inline iq13
CPP_IQ13cosPU(const iq13 &A)
{
    iq13 B;
    B.val = _IQ13cosPU(A.val);
    return(B);
}

inline iq12
CPP_IQ12cosPU(const iq12 &A)
{
    iq12 B;
    B.val = _IQ12cosPU(A.val);
    return(B);
}

inline iq11
CPP_IQ11cosPU(const iq11 &A)
{
    iq11 B;
    B.val = _IQ11cosPU(A.val);
    return(B);
}

inline iq10
CPP_IQ10cosPU(const iq10 &A)
{
    iq10 B;
    B.val = _IQ10cosPU(A.val);
    return(B);
}

inline iq9
CPP_IQ9cosPU(const iq9 &A)
{
    iq9 B;
    B.val = _IQ9cosPU(A.val);
    return(B);
}

inline iq8
CPP_IQ8cosPU(const iq8 &A)
{
    iq8 B;
    B.val = _IQ8cosPU(A.val);
    return(B);
}

inline iq7
CPP_IQ7cosPU(const iq7 &A)
{
    iq7 B;
    B.val = _IQ7cosPU(A.val);
    return(B);
}

inline iq6
CPP_IQ6cosPU(const iq6 &A)
{
    iq6 B;
    B.val = _IQ6cosPU(A.val);
    return(B);
}

inline iq5
CPP_IQ5cosPU(const iq5 &A)
{
    iq5 B;
    B.val = _IQ5cosPU(A.val);
    return(B);
}

inline iq4
CPP_IQ4cosPU(const iq4 &A)
{
    iq4 B;
    B.val = _IQ4cosPU(A.val);
    return(B);
}

inline iq3
CPP_IQ3cosPU(const iq3 &A)
{
    iq3 B;
    B.val = _IQ3cosPU(A.val);
    return(B);
}

inline iq2
CPP_IQ2cosPU(const iq2 &A)
{
    iq2 B;
    B.val = _IQ2cosPU(A.val);
    return(B);
}

inline iq1
CPP_IQ1cosPU(const iq1 &A)
{
    iq1 B;
    B.val = _IQ1cosPU(A.val);
    return(B);
}

inline iq
CPP_IQcosPU(const iq &A)
{
    iq B;
    B.val = _IQcosPU(A.val);
    return(B);
}

//*****************************************************************************
//
// Computes the arccos of an IQ number.
//
//*****************************************************************************
inline iq29
CPP_IQ29acos(const iq29 &A)
{
    iq29 B;
    B.val = _IQ29acos(A.val);
    return(B);
}

inline iq28
CPP_IQ28acos(const iq28 &A)
{
    iq28 B;
    B.val = _IQ28acos(A.val);
    return(B);
}

inline iq27
CPP_IQ27acos(const iq27 &A)
{
    iq27 B;
    B.val = _IQ27acos(A.val);
    return(B);
}

inline iq26
CPP_IQ26acos(const iq26 &A)
{
    iq26 B;
    B.val = _IQ26acos(A.val);
    return(B);
}

inline iq25
CPP_IQ25acos(const iq25 &A)
{
    iq25 B;
    B.val = _IQ25acos(A.val);
    return(B);
}

inline iq24
CPP_IQ24acos(const iq24 &A)
{
    iq24 B;
    B.val = _IQ24acos(A.val);
    return(B);
}

inline iq23
CPP_IQ23acos(const iq23 &A)
{
    iq23 B;
    B.val = _IQ23acos(A.val);
    return(B);
}

inline iq22
CPP_IQ22acos(const iq22 &A)
{
    iq22 B;
    B.val = _IQ22acos(A.val);
    return(B);
}

inline iq21
CPP_IQ21acos(const iq21 &A)
{
    iq21 B;
    B.val = _IQ21acos(A.val);
    return(B);
}

inline iq20
CPP_IQ20acos(const iq20 &A)
{
    iq20 B;
    B.val = _IQ20acos(A.val);
    return(B);
}

inline iq19
CPP_IQ19acos(const iq19 &A)
{
    iq19 B;
    B.val = _IQ19acos(A.val);
    return(B);
}

inline iq18
CPP_IQ18acos(const iq18 &A)
{
    iq18 B;
    B.val = _IQ18acos(A.val);
    return(B);
}

inline iq17
CPP_IQ17acos(const iq17 &A)
{
    iq17 B;
    B.val = _IQ17acos(A.val);
    return(B);
}

inline iq16
CPP_IQ16acos(const iq16 &A)
{
    iq16 B;
    B.val = _IQ16acos(A.val);
    return(B);
}

inline iq15
CPP_IQ15acos(const iq15 &A)
{
    iq15 B;
    B.val = _IQ15acos(A.val);
    return(B);
}

inline iq14
CPP_IQ14acos(const iq14 &A)
{
    iq14 B;
    B.val = _IQ14acos(A.val);
    return(B);
}

inline iq13
CPP_IQ13acos(const iq13 &A)
{
    iq13 B;
    B.val = _IQ13acos(A.val);
    return(B);
}

inline iq12
CPP_IQ12acos(const iq12 &A)
{
    iq12 B;
    B.val = _IQ12acos(A.val);
    return(B);
}

inline iq11
CPP_IQ11acos(const iq11 &A)
{
    iq11 B;
    B.val = _IQ11acos(A.val);
    return(B);
}

inline iq10
CPP_IQ10acos(const iq10 &A)
{
    iq10 B;
    B.val = _IQ10acos(A.val);
    return(B);
}

inline iq9
CPP_IQ9acos(const iq9 &A)
{
    iq9 B;
    B.val = _IQ9acos(A.val);
    return(B);
}

inline iq8
CPP_IQ8acos(const iq8 &A)
{
    iq8 B;
    B.val = _IQ8acos(A.val);
    return(B);
}

inline iq7
CPP_IQ7acos(const iq7 &A)
{
    iq7 B;
    B.val = _IQ7acos(A.val);
    return(B);
}

inline iq6
CPP_IQ6acos(const iq6 &A)
{
    iq6 B;
    B.val = _IQ6acos(A.val);
    return(B);
}

inline iq5
CPP_IQ5acos(const iq5 &A)
{
    iq5 B;
    B.val = _IQ5acos(A.val);
    return(B);
}

inline iq4
CPP_IQ4acos(const iq4 &A)
{
    iq4 B;
    B.val = _IQ4acos(A.val);
    return(B);
}

inline iq3
CPP_IQ3acos(const iq3 &A)
{
    iq3 B;
    B.val = _IQ3acos(A.val);
    return(B);
}

inline iq2
CPP_IQ2acos(const iq2 &A)
{
    iq2 B;
    B.val = _IQ2acos(A.val);
    return(B);
}

inline iq1
CPP_IQ1acos(const iq1 &A)
{
    iq1 B;
    B.val = _IQ1acos(A.val);
    return(B);
}

inline iq
CPP_IQacos(const iq &A)
{
    iq B;
    B.val = _IQacos(A.val);
    return(B);
}

//*****************************************************************************
//
// Computes the arctan of a coordinate specified by two IQ numbers.
//
//*****************************************************************************
inline iq29
CPP_IQ29atan2(const iq29 &A, const iq29 &B)
{
    iq29 C;
    C.val = _IQ29atan2(A.val, B.val);
    return(C);
}

inline iq28
CPP_IQ28atan2(const iq28 &A, const iq28 &B)
{
    iq28 C;
    C.val = _IQ28atan2(A.val, B.val);
    return(C);
}

inline iq27
CPP_IQ27atan2(const iq27 &A, const iq27 &B)
{
    iq27 C;
    C.val = _IQ27atan2(A.val, B.val);
    return(C);
}

inline iq26
CPP_IQ26atan2(const iq26 &A, const iq26 &B)
{
    iq26 C;
    C.val = _IQ26atan2(A.val, B.val);
    return(C);
}

inline iq25
CPP_IQ25atan2(const iq25 &A, const iq25 &B)
{
    iq25 C;
    C.val = _IQ25atan2(A.val, B.val);
    return(C);
}

inline iq24
CPP_IQ24atan2(const iq24 &A, const iq24 &B)
{
    iq24 C;
    C.val = _IQ24atan2(A.val, B.val);
    return(C);
}

inline iq23
CPP_IQ23atan2(const iq23 &A, const iq23 &B)
{
    iq23 C;
    C.val = _IQ23atan2(A.val, B.val);
    return(C);
}

inline iq22
CPP_IQ22atan2(const iq22 &A, const iq22 &B)
{
    iq22 C;
    C.val = _IQ22atan2(A.val, B.val);
    return(C);
}

inline iq21
CPP_IQ21atan2(const iq21 &A, const iq21 &B)
{
    iq21 C;
    C.val = _IQ21atan2(A.val, B.val);
    return(C);
}

inline iq20
CPP_IQ20atan2(const iq20 &A, const iq20 &B)
{
    iq20 C;
    C.val = _IQ20atan2(A.val, B.val);
    return(C);
}

inline iq19
CPP_IQ19atan2(const iq19 &A, const iq19 &B)
{
    iq19 C;
    C.val = _IQ19atan2(A.val, B.val);
    return(C);
}

inline iq18
CPP_IQ18atan2(const iq18 &A, const iq18 &B)
{
    iq18 C;
    C.val = _IQ18atan2(A.val, B.val);
    return(C);
}

inline iq17
CPP_IQ17atan2(const iq17 &A, const iq17 &B)
{
    iq17 C;
    C.val = _IQ17atan2(A.val, B.val);
    return(C);
}

inline iq16
CPP_IQ16atan2(const iq16 &A, const iq16 &B)
{
    iq16 C;
    C.val = _IQ16atan2(A.val, B.val);
    return(C);
}

inline iq15
CPP_IQ15atan2(const iq15 &A, const iq15 &B)
{
    iq15 C;
    C.val = _IQ15atan2(A.val, B.val);
    return(C);
}

inline iq14
CPP_IQ14atan2(const iq14 &A, const iq14 &B)
{
    iq14 C;
    C.val = _IQ14atan2(A.val, B.val);
    return(C);
}

inline iq13
CPP_IQ13atan2(const iq13 &A, const iq13 &B)
{
    iq13 C;
    C.val = _IQ13atan2(A.val, B.val);
    return(C);
}

inline iq12
CPP_IQ12atan2(const iq12 &A, const iq12 &B)
{
    iq12 C;
    C.val = _IQ12atan2(A.val, B.val);
    return(C);
}

inline iq11
CPP_IQ11atan2(const iq11 &A, const iq11 &B)
{
    iq11 C;
    C.val = _IQ11atan2(A.val, B.val);
    return(C);
}

inline iq10
CPP_IQ10atan2(const iq10 &A, const iq10 &B)
{
    iq10 C;
    C.val = _IQ10atan2(A.val, B.val);
    return(C);
}

inline iq9
CPP_IQ9atan2(const iq9 &A, const iq9 &B)
{
    iq9 C;
    C.val = _IQ9atan2(A.val, B.val);
    return(C);
}

inline iq8
CPP_IQ8atan2(const iq8 &A, const iq8 &B)
{
    iq8 C;
    C.val = _IQ8atan2(A.val, B.val);
    return(C);
}

inline iq7
CPP_IQ7atan2(const iq7 &A, const iq7 &B)
{
    iq7 C;
    C.val = _IQ7atan2(A.val, B.val);
    return(C);
}

inline iq6
CPP_IQ6atan2(const iq6 &A, const iq6 &B)
{
    iq6 C;
    C.val = _IQ6atan2(A.val, B.val);
    return(C);
}

inline iq5
CPP_IQ5atan2(const iq5 &A, const iq5 &B)
{
    iq5 C;
    C.val = _IQ5atan2(A.val, B.val);
    return(C);
}

inline iq4
CPP_IQ4atan2(const iq4 &A, const iq4 &B)
{
    iq4 C;
    C.val = _IQ4atan2(A.val, B.val);
    return(C);
}

inline iq3
CPP_IQ3atan2(const iq3 &A, const iq3 &B)
{
    iq3 C;
    C.val = _IQ3atan2(A.val, B.val);
    return(C);
}

inline iq2
CPP_IQ2atan2(const iq2 &A, const iq2 &B)
{
    iq2 C;
    C.val = _IQ2atan2(A.val, B.val);
    return(C);
}

inline iq1
CPP_IQ1atan2(const iq1 &A, const iq1 &B)
{
    iq1 C;
    C.val = _IQ1atan2(A.val, B.val);
    return(C);
}

inline iq
CPP_IQatan2(const iq &A, const iq &B)
{
    iq C;
    C.val = _IQatan2(A.val, B.val);
    return(C);
}

//*****************************************************************************
//
// Computes the arctan of a coordinate specified by two IQ numbers, returning
// the value in cycles per unit instead of radians.
//
//*****************************************************************************
inline iq30
CPP_IQ30atan2PU(const iq30 &A, const iq30 &B)
{
    iq30 C;
    C.val = _IQ30atan2PU(A.val, B.val);
    return(C);
}

inline iq29
CPP_IQ29atan2PU(const iq29 &A, const iq29 &B)
{
    iq29 C;
    C.val = _IQ29atan2PU(A.val, B.val);
    return(C);
}

inline iq28
CPP_IQ28atan2PU(const iq28 &A, const iq28 &B)
{
    iq28 C;
    C.val = _IQ28atan2PU(A.val, B.val);
    return(C);
}

inline iq27
CPP_IQ27atan2PU(const iq27 &A, const iq27 &B)
{
    iq27 C;
    C.val = _IQ27atan2PU(A.val, B.val);
    return(C);
}

inline iq26
CPP_IQ26atan2PU(const iq26 &A, const iq26 &B)
{
    iq26 C;
    C.val = _IQ26atan2PU(A.val, B.val);
    return(C);
}

inline iq25
CPP_IQ25atan2PU(const iq25 &A, const iq25 &B)
{
    iq25 C;
    C.val = _IQ25atan2PU(A.val, B.val);
    return(C);
}

inline iq24
CPP_IQ24atan2PU(const iq24 &A, const iq24 &B)
{
    iq24 C;
    C.val = _IQ24atan2PU(A.val, B.val);
    return(C);
}

inline iq23
CPP_IQ23atan2PU(const iq23 &A, const iq23 &B)
{
    iq23 C;
    C.val = _IQ23atan2PU(A.val, B.val);
    return(C);
}

inline iq22
CPP_IQ22atan2PU(const iq22 &A, const iq22 &B)
{
    iq22 C;
    C.val = _IQ22atan2PU(A.val, B.val);
    return(C);
}

inline iq21
CPP_IQ21atan2PU(const iq21 &A, const iq21 &B)
{
    iq21 C;
    C.val = _IQ21atan2PU(A.val, B.val);
    return(C);
}

inline iq20
CPP_IQ20atan2PU(const iq20 &A, const iq20 &B)
{
    iq20 C;
    C.val = _IQ20atan2PU(A.val, B.val);
    return(C);
}

inline iq19
CPP_IQ19atan2PU(const iq19 &A, const iq19 &B)
{
    iq19 C;
    C.val = _IQ19atan2PU(A.val, B.val);
    return(C);
}

inline iq18
CPP_IQ18atan2PU(const iq18 &A, const iq18 &B)
{
    iq18 C;
    C.val = _IQ18atan2PU(A.val, B.val);
    return(C);
}

inline iq17
CPP_IQ17atan2PU(const iq17 &A, const iq17 &B)
{
    iq17 C;
    C.val = _IQ17atan2PU(A.val, B.val);
    return(C);
}

inline iq16
CPP_IQ16atan2PU(const iq16 &A, const iq16 &B)
{
    iq16 C;
    C.val = _IQ16atan2PU(A.val, B.val);
    return(C);
}

inline iq15
CPP_IQ15atan2PU(const iq15 &A, const iq15 &B)
{
    iq15 C;
    C.val = _IQ15atan2PU(A.val, B.val);
    return(C);
}

inline iq14
CPP_IQ14atan2PU(const iq14 &A, const iq14 &B)
{
    iq14 C;
    C.val = _IQ14atan2PU(A.val, B.val);
    return(C);
}

inline iq13
CPP_IQ13atan2PU(const iq13 &A, const iq13 &B)
{
    iq13 C;
    C.val = _IQ13atan2PU(A.val, B.val);
    return(C);
}

inline iq12
CPP_IQ12atan2PU(const iq12 &A, const iq12 &B)
{
    iq12 C;
    C.val = _IQ12atan2PU(A.val, B.val);
    return(C);
}

inline iq11
CPP_IQ11atan2PU(const iq11 &A, const iq11 &B)
{
    iq11 C;
    C.val = _IQ11atan2PU(A.val, B.val);
    return(C);
}

inline iq10
CPP_IQ10atan2PU(const iq10 &A, const iq10 &B)
{
    iq10 C;
    C.val = _IQ10atan2PU(A.val, B.val);
    return(C);
}

inline iq9
CPP_IQ9atan2PU(const iq9 &A, const iq9 &B)
{
    iq9 C;
    C.val = _IQ9atan2PU(A.val, B.val);
    return(C);
}

inline iq8
CPP_IQ8atan2PU(const iq8 &A, const iq8 &B)
{
    iq8 C;
    C.val = _IQ8atan2PU(A.val, B.val);
    return(C);
}

inline iq7
CPP_IQ7atan2PU(const iq7 &A, const iq7 &B)
{
    iq7 C;
    C.val = _IQ7atan2PU(A.val, B.val);
    return(C);
}

inline iq6
CPP_IQ6atan2PU(const iq6 &A, const iq6 &B)
{
    iq6 C;
    C.val = _IQ6atan2PU(A.val, B.val);
    return(C);
}

inline iq5
CPP_IQ5atan2PU(const iq5 &A, const iq5 &B)
{
    iq5 C;
    C.val = _IQ5atan2PU(A.val, B.val);
    return(C);
}

inline iq4
CPP_IQ4atan2PU(const iq4 &A, const iq4 &B)
{
    iq4 C;
    C.val = _IQ4atan2PU(A.val, B.val);
    return(C);
}

inline iq3
CPP_IQ3atan2PU(const iq3 &A, const iq3 &B)
{
    iq3 C;
    C.val = _IQ3atan2PU(A.val, B.val);
    return(C);
}

inline iq2
CPP_IQ2atan2PU(const iq2 &A, const iq2 &B)
{
    iq2 C;
    C.val = _IQ2atan2PU(A.val, B.val);
    return(C);
}

inline iq1
CPP_IQ1atan2PU(const iq1 &A, const iq1 &B)
{
    iq1 C;
    C.val = _IQ1atan2PU(A.val, B.val);
    return(C);
}

inline iq
CPP_IQatan2PU(const iq &A, const iq &B)
{
    iq C;
    C.val = _IQatan2PU(A.val, B.val);
    return(C);
}

//*****************************************************************************
//
// Computes the arctan of an CPP_IQ number.
//
//*****************************************************************************

inline iq29 CPP_IQ29atan(iq29 A){return CPP_IQ29atan2(A, CPP_IQ29(1.0));}               
inline iq28 CPP_IQ28atan(iq28 A){return CPP_IQ28atan2(A, CPP_IQ28(1.0));}               
inline iq27 CPP_IQ27atan(iq27 A){return CPP_IQ27atan2(A, CPP_IQ27(1.0));}               
inline iq26 CPP_IQ26atan(iq26 A){return CPP_IQ26atan2(A, CPP_IQ26(1.0));}               
inline iq25 CPP_IQ25atan(iq25 A){return CPP_IQ25atan2(A, CPP_IQ25(1.0));}               
inline iq24 CPP_IQ24atan(iq24 A){return CPP_IQ24atan2(A, CPP_IQ24(1.0));}               
inline iq23 CPP_IQ23atan(iq23 A){return CPP_IQ23atan2(A, CPP_IQ23(1.0));}               
inline iq22 CPP_IQ22atan(iq22 A){return CPP_IQ22atan2(A, CPP_IQ22(1.0));}               
inline iq21 CPP_IQ21atan(iq21 A){return CPP_IQ21atan2(A, CPP_IQ21(1.0));}               
inline iq20 CPP_IQ20atan(iq20 A){return CPP_IQ20atan2(A, CPP_IQ20(1.0));}               

inline iq19 CPP_IQ19atan(iq19 A){return CPP_IQ19atan2(A, CPP_IQ19(1.0));}               
inline iq18 CPP_IQ18atan(iq18 A){return CPP_IQ18atan2(A, CPP_IQ18(1.0));}               
inline iq17 CPP_IQ17atan(iq17 A){return CPP_IQ17atan2(A, CPP_IQ17(1.0));}               
inline iq16 CPP_IQ16atan(iq16 A){return CPP_IQ16atan2(A, CPP_IQ16(1.0));}               
inline iq15 CPP_IQ15atan(iq15 A){return CPP_IQ15atan2(A, CPP_IQ15(1.0));}               
inline iq14 CPP_IQ14atan(iq14 A){return CPP_IQ14atan2(A, CPP_IQ14(1.0));}               
inline iq13 CPP_IQ13atan(iq13 A){return CPP_IQ13atan2(A, CPP_IQ13(1.0));}               
inline iq12 CPP_IQ12atan(iq12 A){return CPP_IQ12atan2(A, CPP_IQ12(1.0));}               
inline iq11 CPP_IQ11atan(iq11 A){return CPP_IQ11atan2(A, CPP_IQ11(1.0));}               
inline iq10 CPP_IQ10atan(iq10 A){return CPP_IQ10atan2(A, CPP_IQ10(1.0));}               

inline iq9 CPP_IQ9atan(iq9 A){return CPP_IQ9atan2(A, CPP_IQ9(1.0));}               
inline iq8 CPP_IQ8atan(iq8 A){return CPP_IQ8atan2(A, CPP_IQ8(1.0));}               
inline iq7 CPP_IQ7atan(iq7 A){return CPP_IQ7atan2(A, CPP_IQ7(1.0));}               
inline iq6 CPP_IQ6atan(iq6 A){return CPP_IQ6atan2(A, CPP_IQ6(1.0));}               
inline iq5 CPP_IQ5atan(iq5 A){return CPP_IQ5atan2(A, CPP_IQ5(1.0));}               
inline iq4 CPP_IQ4atan(iq4 A){return CPP_IQ4atan2(A, CPP_IQ4(1.0));}               
inline iq3 CPP_IQ3atan(iq3 A){return CPP_IQ3atan2(A, CPP_IQ3(1.0));}               
inline iq2 CPP_IQ2atan(iq2 A){return CPP_IQ2atan2(A, CPP_IQ2(1.0));}               
inline iq1 CPP_IQ1atan(iq1 A){return CPP_IQ1atan2(A, CPP_IQ1(1.0));}               
inline iq CPP_IQatan(iq A){return CPP_IQatan2(A, CPP_IQ(1.0));}               


/*
#define IQ29atan(A)             IQ29atan2(A, IQ29(1.0))
#define IQ28atan(A)             IQ28atan2(A, IQ28(1.0))
#define IQ27atan(A)             IQ27atan2(A, IQ27(1.0))
#define IQ26atan(A)             IQ26atan2(A, IQ26(1.0))
#define IQ25atan(A)             IQ25atan2(A, IQ25(1.0))
#define IQ24atan(A)             IQ24atan2(A, IQ24(1.0))
#define IQ23atan(A)             IQ23atan2(A, IQ23(1.0))
#define IQ22atan(A)             IQ22atan2(A, IQ22(1.0))
#define IQ21atan(A)             IQ21atan2(A, IQ21(1.0))
#define IQ20atan(A)             IQ20atan2(A, IQ20(1.0))
#define IQ19atan(A)             IQ19atan2(A, IQ19(1.0))
#define IQ18atan(A)             IQ18atan2(A, IQ18(1.0))
#define IQ17atan(A)             IQ17atan2(A, IQ17(1.0))
#define IQ16atan(A)             IQ16atan2(A, IQ16(1.0))
#define IQ15atan(A)             IQ15atan2(A, IQ15(1.0))
#define IQ14atan(A)             IQ14atan2(A, IQ14(1.0))
#define IQ13atan(A)             IQ13atan2(A, IQ13(1.0))
#define IQ12atan(A)             IQ12atan2(A, IQ12(1.0))
#define IQ11atan(A)             IQ11atan2(A, IQ11(1.0))
#define IQ10atan(A)             IQ10atan2(A, IQ10(1.0))
#define IQ9atan(A)              IQ9atan2(A, IQ9(1.0))
#define IQ8atan(A)              IQ8atan2(A, IQ8(1.0))
#define IQ7atan(A)              IQ7atan2(A, IQ7(1.0))
#define IQ6atan(A)              IQ6atan2(A, IQ6(1.0))
#define IQ5atan(A)              IQ5atan2(A, IQ5(1.0))
#define IQ4atan(A)              IQ4atan2(A, IQ4(1.0))
#define IQ3atan(A)              IQ3atan2(A, IQ3(1.0))
#define IQ2atan(A)              IQ2atan2(A, IQ2(1.0))
#define IQ1atan(A)              IQ1atan2(A, IQ1(1.0))
#define IQatan(A)               IQatan2(A, IQ(1.0))
*/

//*****************************************************************************
//
// Computes the square root of an IQ number.
//
//*****************************************************************************
inline iq30
CPP_IQ30sqrt(const iq30 &A)
{
    iq30 B;
    B.val = _IQ30sqrt(A.val);
    return(B);
}

inline iq29
CPP_IQ29sqrt(const iq29 &A)
{
    iq29 B;
    B.val = _IQ29sqrt(A.val);
    return(B);
}

inline iq28
CPP_IQ28sqrt(const iq28 &A)
{
    iq28 B;
    B.val = _IQ28sqrt(A.val);
    return(B);
}

inline iq27
CPP_IQ27sqrt(const iq27 &A)
{
    iq27 B;
    B.val = _IQ27sqrt(A.val);
    return(B);
}

inline iq26
CPP_IQ26sqrt(const iq26 &A)
{
    iq26 B;
    B.val = _IQ26sqrt(A.val);
    return(B);
}

inline iq25
CPP_IQ25sqrt(const iq25 &A)
{
    iq25 B;
    B.val = _IQ25sqrt(A.val);
    return(B);
}

inline iq24
CPP_IQ24sqrt(const iq24 &A)
{
    iq24 B;
    B.val = _IQ24sqrt(A.val);
    return(B);
}

inline iq23
CPP_IQ23sqrt(const iq23 &A)
{
    iq23 B;
    B.val = _IQ23sqrt(A.val);
    return(B);
}

inline iq22
CPP_IQ22sqrt(const iq22 &A)
{
    iq22 B;
    B.val = _IQ22sqrt(A.val);
    return(B);
}

inline iq21
CPP_IQ21sqrt(const iq21 &A)
{
    iq21 B;
    B.val = _IQ21sqrt(A.val);
    return(B);
}

inline iq20
CPP_IQ20sqrt(const iq20 &A)
{
    iq20 B;
    B.val = _IQ20sqrt(A.val);
    return(B);
}

inline iq19
CPP_IQ19sqrt(const iq19 &A)
{
    iq19 B;
    B.val = _IQ19sqrt(A.val);
    return(B);
}

inline iq18
CPP_IQ18sqrt(const iq18 &A)
{
    iq18 B;
    B.val = _IQ18sqrt(A.val);
    return(B);
}

inline iq17
CPP_IQ17sqrt(const iq17 &A)
{
    iq17 B;
    B.val = _IQ17sqrt(A.val);
    return(B);
}

inline iq16
CPP_IQ16sqrt(const iq16 &A)
{
    iq16 B;
    B.val = _IQ16sqrt(A.val);
    return(B);
}

inline iq15
CPP_IQ15sqrt(const iq15 &A)
{
    iq15 B;
    B.val = _IQ15sqrt(A.val);
    return(B);
}

inline iq14
CPP_IQ14sqrt(const iq14 &A)
{
    iq14 B;
    B.val = _IQ14sqrt(A.val);
    return(B);
}

inline iq13
CPP_IQ13sqrt(const iq13 &A)
{
    iq13 B;
    B.val = _IQ13sqrt(A.val);
    return(B);
}

inline iq12
CPP_IQ12sqrt(const iq12 &A)
{
    iq12 B;
    B.val = _IQ12sqrt(A.val);
    return(B);
}

inline iq11
CPP_IQ11sqrt(const iq11 &A)
{
    iq11 B;
    B.val = _IQ11sqrt(A.val);
    return(B);
}

inline iq10
CPP_IQ10sqrt(const iq10 &A)
{
    iq10 B;
    B.val = _IQ10sqrt(A.val);
    return(B);
}

inline iq9
CPP_IQ9sqrt(const iq9 &A)
{
    iq9 B;
    B.val = _IQ9sqrt(A.val);
    return(B);
}

inline iq8
CPP_IQ8sqrt(const iq8 &A)
{
    iq8 B;
    B.val = _IQ8sqrt(A.val);
    return(B);
}

inline iq7
CPP_IQ7sqrt(const iq7 &A)
{
    iq7 B;
    B.val = _IQ7sqrt(A.val);
    return(B);
}

inline iq6
CPP_IQ6sqrt(const iq6 &A)
{
    iq6 B;
    B.val = _IQ6sqrt(A.val);
    return(B);
}

inline iq5
CPP_IQ5sqrt(const iq5 &A)
{
    iq5 B;
    B.val = _IQ5sqrt(A.val);
    return(B);
}

inline iq4
CPP_IQ4sqrt(const iq4 &A)
{
    iq4 B;
    B.val = _IQ4sqrt(A.val);
    return(B);
}

inline iq3
CPP_IQ3sqrt(const iq3 &A)
{
    iq3 B;
    B.val = _IQ3sqrt(A.val);
    return(B);
}

inline iq2
CPP_IQ2sqrt(const iq2 &A)
{
    iq2 B;
    B.val = _IQ2sqrt(A.val);
    return(B);
}

inline iq1
CPP_IQ1sqrt(const iq1 &A)
{
    iq1 B;
    B.val = _IQ1sqrt(A.val);
    return(B);
}

inline iq
CPP_IQsqrt(const iq &A)
{
    iq B;
    B.val = _IQsqrt(A.val);
    return(B);
}

//*****************************************************************************
//
// Computes 1 over the square root of an IQ number.
//
//*****************************************************************************
inline iq30
CPP_IQ30isqrt(const iq30 &A)
{
    iq30 B;
    B.val = _IQ30isqrt(A.val);
    return(B);
}

inline iq29
CPP_IQ29isqrt(const iq29 &A)
{
    iq29 B;
    B.val = _IQ29isqrt(A.val);
    return(B);
}

inline iq28
CPP_IQ28isqrt(const iq28 &A)
{
    iq28 B;
    B.val = _IQ28isqrt(A.val);
    return(B);
}

inline iq27
CPP_IQ27isqrt(const iq27 &A)
{
    iq27 B;
    B.val = _IQ27isqrt(A.val);
    return(B);
}

inline iq26
CPP_IQ26isqrt(const iq26 &A)
{
    iq26 B;
    B.val = _IQ26isqrt(A.val);
    return(B);
}

inline iq25
CPP_IQ25isqrt(const iq25 &A)
{
    iq25 B;
    B.val = _IQ25isqrt(A.val);
    return(B);
}

inline iq24
CPP_IQ24isqrt(const iq24 &A)
{
    iq24 B;
    B.val = _IQ24isqrt(A.val);
    return(B);
}

inline iq23
CPP_IQ23isqrt(const iq23 &A)
{
    iq23 B;
    B.val = _IQ23isqrt(A.val);
    return(B);
}

inline iq22
CPP_IQ22isqrt(const iq22 &A)
{
    iq22 B;
    B.val = _IQ22isqrt(A.val);
    return(B);
}

inline iq21
CPP_IQ21isqrt(const iq21 &A)
{
    iq21 B;
    B.val = _IQ21isqrt(A.val);
    return(B);
}

inline iq20
CPP_IQ20isqrt(const iq20 &A)
{
    iq20 B;
    B.val = _IQ20isqrt(A.val);
    return(B);
}

inline iq19
CPP_IQ19isqrt(const iq19 &A)
{
    iq19 B;
    B.val = _IQ19isqrt(A.val);
    return(B);
}

inline iq18
CPP_IQ18isqrt(const iq18 &A)
{
    iq18 B;
    B.val = _IQ18isqrt(A.val);
    return(B);
}

inline iq17
CPP_IQ17isqrt(const iq17 &A)
{
    iq17 B;
    B.val = _IQ17isqrt(A.val);
    return(B);
}

inline iq16
CPP_IQ16isqrt(const iq16 &A)
{
    iq16 B;
    B.val = _IQ16isqrt(A.val);
    return(B);
}

inline iq15
CPP_IQ15isqrt(const iq15 &A)
{
    iq15 B;
    B.val = _IQ15isqrt(A.val);
    return(B);
}

inline iq14
CPP_IQ14isqrt(const iq14 &A)
{
    iq14 B;
    B.val = _IQ14isqrt(A.val);
    return(B);
}

inline iq13
CPP_IQ13isqrt(const iq13 &A)
{
    iq13 B;
    B.val = _IQ13isqrt(A.val);
    return(B);
}

inline iq12
CPP_IQ12isqrt(const iq12 &A)
{
    iq12 B;
    B.val = _IQ12isqrt(A.val);
    return(B);
}

inline iq11
CPP_IQ11isqrt(const iq11 &A)
{
    iq11 B;
    B.val = _IQ11isqrt(A.val);
    return(B);
}

inline iq10
CPP_IQ10isqrt(const iq10 &A)
{
    iq10 B;
    B.val = _IQ10isqrt(A.val);
    return(B);
}

inline iq9
CPP_IQ9isqrt(const iq9 &A)
{
    iq9 B;
    B.val = _IQ9isqrt(A.val);
    return(B);
}

inline iq8
CPP_IQ8isqrt(const iq8 &A)
{
    iq8 B;
    B.val = _IQ8isqrt(A.val);
    return(B);
}

inline iq7
CPP_IQ7isqrt(const iq7 &A)
{
    iq7 B;
    B.val = _IQ7isqrt(A.val);
    return(B);
}

inline iq6
CPP_IQ6isqrt(const iq6 &A)
{
    iq6 B;
    B.val = _IQ6isqrt(A.val);
    return(B);
}

inline iq5
CPP_IQ5isqrt(const iq5 &A)
{
    iq5 B;
    B.val = _IQ5isqrt(A.val);
    return(B);
}

inline iq4
CPP_IQ4isqrt(const iq4 &A)
{
    iq4 B;
    B.val = _IQ4isqrt(A.val);
    return(B);
}

inline iq3
CPP_IQ3isqrt(const iq3 &A)
{
    iq3 B;
    B.val = _IQ3isqrt(A.val);
    return(B);
}

inline iq2
CPP_IQ2isqrt(const iq2 &A)
{
    iq2 B;
    B.val = _IQ2isqrt(A.val);
    return(B);
}

inline iq1
CPP_IQ1isqrt(const iq1 &A)
{
    iq1 B;
    B.val = _IQ1isqrt(A.val);
    return(B);
}

inline iq
CPP_IQisqrt(const iq &A)
{
    iq B;
    B.val = _IQisqrt(A.val);
    return(B);
}

//*****************************************************************************
//
// Computes e^x of an CPP_IQ number.
//
//*****************************************************************************
inline iq30
CPP_IQ30exp(const iq30 &A)
{
    iq30 B;
    B.val = _IQ30exp(A.val);
    return(B);
}

inline iq29
CPP_IQ29exp(const iq29 &A)
{
    iq29 B;
    B.val = _IQ29exp(A.val);
    return(B);
}

inline iq28
CPP_IQ28exp(const iq28 &A)
{
    iq28 B;
    B.val = _IQ28exp(A.val);
    return(B);
}

inline iq27
CPP_IQ27exp(const iq27 &A)
{
    iq27 B;
    B.val = _IQ27exp(A.val);
    return(B);
}

inline iq26
CPP_IQ26exp(const iq26 &A)
{
    iq26 B;
    B.val = _IQ26exp(A.val);
    return(B);
}

inline iq25
CPP_IQ25exp(const iq25 &A)
{
    iq25 B;
    B.val = _IQ25exp(A.val);
    return(B);
}

inline iq24
CPP_IQ24exp(const iq24 &A)
{
    iq24 B;
    B.val = _IQ24exp(A.val);
    return(B);
}

inline iq23
CPP_IQ23exp(const iq23 &A)
{
    iq23 B;
    B.val = _IQ23exp(A.val);
    return(B);
}

inline iq22
CPP_IQ22exp(const iq22 &A)
{
    iq22 B;
    B.val = _IQ22exp(A.val);
    return(B);
}

inline iq21
CPP_IQ21exp(const iq21 &A)
{
    iq21 B;
    B.val = _IQ21exp(A.val);
    return(B);
}

inline iq20
CPP_IQ20exp(const iq20 &A)
{
    iq20 B;
    B.val = _IQ20exp(A.val);
    return(B);
}

inline iq19
CPP_IQ19exp(const iq19 &A)
{
    iq19 B;
    B.val = _IQ19exp(A.val);
    return(B);
}

inline iq18
CPP_IQ18exp(const iq18 &A)
{
    iq18 B;
    B.val = _IQ18exp(A.val);
    return(B);
}

inline iq17
CPP_IQ17exp(const iq17 &A)
{
    iq17 B;
    B.val = _IQ17exp(A.val);
    return(B);
}

inline iq16
CPP_IQ16exp(const iq16 &A)
{
    iq16 B;
    B.val = _IQ16exp(A.val);
    return(B);
}

inline iq15
CPP_IQ15exp(const iq15 &A)
{
    iq15 B;
    B.val = _IQ15exp(A.val);
    return(B);
}

inline iq14
CPP_IQ14exp(const iq14 &A)
{
    iq14 B;
    B.val = _IQ14exp(A.val);
    return(B);
}

inline iq13
CPP_IQ13exp(const iq13 &A)
{
    iq13 B;
    B.val = _IQ13exp(A.val);
    return(B);
}

inline iq12
CPP_IQ12exp(const iq12 &A)
{
    iq12 B;
    B.val = _IQ12exp(A.val);
    return(B);
}

inline iq11
CPP_IQ11exp(const iq11 &A)
{
    iq11 B;
    B.val = _IQ11exp(A.val);
    return(B);
}

inline iq10
CPP_IQ10exp(const iq10 &A)
{
    iq10 B;
    B.val = _IQ10exp(A.val);
    return(B);
}

inline iq9
CPP_IQ9exp(const iq9 &A)
{
    iq9 B;
    B.val = _IQ9exp(A.val);
    return(B);
}

inline iq8
CPP_IQ8exp(const iq8 &A)
{
    iq8 B;
    B.val = _IQ8exp(A.val);
    return(B);
}

inline iq7
CPP_IQ7exp(const iq7 &A)
{
    iq7 B;
    B.val = _IQ7exp(A.val);
    return(B);
}

inline iq6
CPP_IQ6exp(const iq6 &A)
{
    iq6 B;
    B.val = _IQ6exp(A.val);
    return(B);
}

inline iq5
CPP_IQ5exp(const iq5 &A)
{
    iq5 B;
    B.val = _IQ5exp(A.val);
    return(B);
}

inline iq4
CPP_IQ4exp(const iq4 &A)
{
    iq4 B;
    B.val = _IQ4exp(A.val);
    return(B);
}

inline iq3
CPP_IQ3exp(const iq3 &A)
{
    iq3 B;
    B.val = _IQ3exp(A.val);
    return(B);
}

inline iq2
CPP_IQ2exp(const iq2 &A)
{
    iq2 B;
    B.val = _IQ2exp(A.val);
    return(B);
}

inline iq1
CPP_IQ1exp(const iq1 &A)
{
    iq1 B;
    B.val = _IQ1exp(A.val);
    return(B);
}

inline iq
CPP_IQexp(const iq &A)
{
    iq B;
    B.val = _IQexp(A.val);
    return(B);
}

//*****************************************************************************
//
// Computes 2^x of an IQ number.
//
//*****************************************************************************
inline iq30
CPP_IQ30exp2(const iq30 &A)
{
    iq30 B;
    B.val = _IQ30exp2(A.val);
    return(B);
}

inline iq29
CPP_IQ29exp2(const iq29 &A)
{
    iq29 B;
    B.val = _IQ29exp2(A.val);
    return(B);
}

inline iq28
CPP_IQ28exp2(const iq28 &A)
{
    iq28 B;
    B.val = _IQ28exp2(A.val);
    return(B);
}

inline iq27
CPP_IQ27exp2(const iq27 &A)
{
    iq27 B;
    B.val = _IQ27exp2(A.val);
    return(B);
}

inline iq26
CPP_IQ26exp2(const iq26 &A)
{
    iq26 B;
    B.val = _IQ26exp2(A.val);
    return(B);
}

inline iq25
CPP_IQ25exp2(const iq25 &A)
{
    iq25 B;
    B.val = _IQ25exp2(A.val);
    return(B);
}

inline iq24
CPP_IQ24exp2(const iq24 &A)
{
    iq24 B;
    B.val = _IQ24exp2(A.val);
    return(B);
}

inline iq23
CPP_IQ23exp2(const iq23 &A)
{
    iq23 B;
    B.val = _IQ23exp2(A.val);
    return(B);
}

inline iq22
CPP_IQ22exp2(const iq22 &A)
{
    iq22 B;
    B.val = _IQ22exp2(A.val);
    return(B);
}

inline iq21
CPP_IQ21exp2(const iq21 &A)
{
    iq21 B;
    B.val = _IQ21exp2(A.val);
    return(B);
}

inline iq20
CPP_IQ20exp2(const iq20 &A)
{
    iq20 B;
    B.val = _IQ20exp2(A.val);
    return(B);
}

inline iq19
CPP_IQ19exp2(const iq19 &A)
{
    iq19 B;
    B.val = _IQ19exp2(A.val);
    return(B);
}

inline iq18
CPP_IQ18exp2(const iq18 &A)
{
    iq18 B;
    B.val = _IQ18exp2(A.val);
    return(B);
}

inline iq17
CPP_IQ17exp2(const iq17 &A)
{
    iq17 B;
    B.val = _IQ17exp2(A.val);
    return(B);
}

inline iq16
CPP_IQ16exp2(const iq16 &A)
{
    iq16 B;
    B.val = _IQ16exp2(A.val);
    return(B);
}

inline iq15
CPP_IQ15exp2(const iq15 &A)
{
    iq15 B;
    B.val = _IQ15exp2(A.val);
    return(B);
}

inline iq14
CPP_IQ14exp2(const iq14 &A)
{
    iq14 B;
    B.val = _IQ14exp2(A.val);
    return(B);
}

inline iq13
CPP_IQ13exp2(const iq13 &A)
{
    iq13 B;
    B.val = _IQ13exp2(A.val);
    return(B);
}

inline iq12
CPP_IQ12exp2(const iq12 &A)
{
    iq12 B;
    B.val = _IQ12exp2(A.val);
    return(B);
}

inline iq11
CPP_IQ11exp2(const iq11 &A)
{
    iq11 B;
    B.val = _IQ11exp2(A.val);
    return(B);
}

inline iq10
CPP_IQ10exp2(const iq10 &A)
{
    iq10 B;
    B.val = _IQ10exp2(A.val);
    return(B);
}

inline iq9
CPP_IQ9exp2(const iq9 &A)
{
    iq9 B;
    B.val = _IQ9exp2(A.val);
    return(B);
}

inline iq8
CPP_IQ8exp2(const iq8 &A)
{
    iq8 B;
    B.val = _IQ8exp2(A.val);
    return(B);
}

inline iq7
CPP_IQ7exp2(const iq7 &A)
{
    iq7 B;
    B.val = _IQ7exp2(A.val);
    return(B);
}

inline iq6
CPP_IQ6exp2(const iq6 &A)
{
    iq6 B;
    B.val = _IQ6exp2(A.val);
    return(B);
}

inline iq5
CPP_IQ5exp2(const iq5 &A)
{
    iq5 B;
    B.val = _IQ5exp2(A.val);
    return(B);
}

inline iq4
CPP_IQ4exp2(const iq4 &A)
{
    iq4 B;
    B.val = _IQ4exp2(A.val);
    return(B);
}

inline iq3
CPP_IQ3exp2(const iq3 &A)
{
    iq3 B;
    B.val = _IQ3exp2(A.val);
    return(B);
}

inline iq2
CPP_IQ2exp2(const iq2 &A)
{
    iq2 B;
    B.val = _IQ2exp2(A.val);
    return(B);
}

inline iq1
CPP_IQ1exp2(const iq1 &A)
{
    iq1 B;
    B.val = _IQ1exp2(A.val);
    return(B);
}

inline iq
CPP_IQexp2(const iq &A)
{
    iq B;
    B.val = _IQexp2(A.val);
    return(B);
}

//*****************************************************************************
//
// Computes the square root of A^2 + B^2 using IQ numbers.
//
//*****************************************************************************
inline iq30
CPP_IQ30mag(const iq30 &A, const iq30 &B)
{
    iq30 C;
    C.val = _IQ30mag(A.val, B.val);
    return(C);
}

inline iq29
CPP_IQ29mag(const iq29 &A, const iq29 &B)
{
    iq29 C;
    C.val = _IQ29mag(A.val, B.val);
    return(C);
}

inline iq28
CPP_IQ28mag(const iq28 &A, const iq28 &B)
{
    iq28 C;
    C.val = _IQ28mag(A.val, B.val);
    return(C);
}

inline iq27
CPP_IQ27mag(const iq27 &A, const iq27 &B)
{
    iq27 C;
    C.val = _IQ27mag(A.val, B.val);
    return(C);
}

inline iq26
CPP_IQ26mag(const iq26 &A, const iq26 &B)
{
    iq26 C;
    C.val = _IQ26mag(A.val, B.val);
    return(C);
}

inline iq25
CPP_IQ25mag(const iq25 &A, const iq25 &B)
{
    iq25 C;
    C.val = _IQ25mag(A.val, B.val);
    return(C);
}

inline iq24
CPP_IQ24mag(const iq24 &A, const iq24 &B)
{
    iq24 C;
    C.val = _IQ24mag(A.val, B.val);
    return(C);
}

inline iq23
CPP_IQ23mag(const iq23 &A, const iq23 &B)
{
    iq23 C;
    C.val = _IQ23mag(A.val, B.val);
    return(C);
}

inline iq22
CPP_IQ22mag(const iq22 &A, const iq22 &B)
{
    iq22 C;
    C.val = _IQ22mag(A.val, B.val);
    return(C);
}

inline iq21
CPP_IQ21mag(const iq21 &A, const iq21 &B)
{
    iq21 C;
    C.val = _IQ21mag(A.val, B.val);
    return(C);
}

inline iq20
CPP_IQ20mag(const iq20 &A, const iq20 &B)
{
    iq20 C;
    C.val = _IQ20mag(A.val, B.val);
    return(C);
}

inline iq19
CPP_IQ19mag(const iq19 &A, const iq19 &B)
{
    iq19 C;
    C.val = _IQ19mag(A.val, B.val);
    return(C);
}

inline iq18
CPP_IQ18mag(const iq18 &A, const iq18 &B)
{
    iq18 C;
    C.val = _IQ18mag(A.val, B.val);
    return(C);
}

inline iq17
CPP_IQ17mag(const iq17 &A, const iq17 &B)
{
    iq17 C;
    C.val = _IQ17mag(A.val, B.val);
    return(C);
}

inline iq16
CPP_IQ16mag(const iq16 &A, const iq16 &B)
{
    iq16 C;
    C.val = _IQ16mag(A.val, B.val);
    return(C);
}

inline iq15
CPP_IQ15mag(const iq15 &A, const iq15 &B)
{
    iq15 C;
    C.val = _IQ15mag(A.val, B.val);
    return(C);
}

inline iq14
CPP_IQ14mag(const iq14 &A, const iq14 &B)
{
    iq14 C;
    C.val = _IQ14mag(A.val, B.val);
    return(C);
}

inline iq13
CPP_IQ13mag(const iq13 &A, const iq13 &B)
{
    iq13 C;
    C.val = _IQ13mag(A.val, B.val);
    return(C);
}

inline iq12
CPP_IQ12mag(const iq12 &A, const iq12 &B)
{
    iq12 C;
    C.val = _IQ12mag(A.val, B.val);
    return(C);
}

inline iq11
CPP_IQ11mag(const iq11 &A, const iq11 &B)
{
    iq11 C;
    C.val = _IQ11mag(A.val, B.val);
    return(C);
}

inline iq10
CPP_IQ10mag(const iq10 &A, const iq10 &B)
{
    iq10 C;
    C.val = _IQ10mag(A.val, B.val);
    return(C);
}

inline iq9
CPP_IQ9mag(const iq9 &A, const iq9 &B)
{
    iq9 C;
    C.val = _IQ9mag(A.val, B.val);
    return(C);
}

inline iq8
CPP_IQ8mag(const iq8 &A, const iq8 &B)
{
    iq8 C;
    C.val = _IQ8mag(A.val, B.val);
    return(C);
}

inline iq7
CPP_IQ7mag(const iq7 &A, const iq7 &B)
{
    iq7 C;
    C.val = _IQ7mag(A.val, B.val);
    return(C);
}

inline iq6
CPP_IQ6mag(const iq6 &A, const iq6 &B)
{
    iq6 C;
    C.val = _IQ6mag(A.val, B.val);
    return(C);
}

inline iq5
CPP_IQ5mag(const iq5 &A, const iq5 &B)
{
    iq5 C;
    C.val = _IQ5mag(A.val, B.val);
    return(C);
}

inline iq4
CPP_IQ4mag(const iq4 &A, const iq4 &B)
{
    iq4 C;
    C.val = _IQ4mag(A.val, B.val);
    return(C);
}

inline iq3
CPP_IQ3mag(const iq3 &A, const iq3 &B)
{
    iq3 C;
    C.val = _IQ3mag(A.val, B.val);
    return(C);
}

inline iq2
CPP_IQ2mag(const iq2 &A, const iq2 &B)
{
    iq2 C;
    C.val = _IQ2mag(A.val, B.val);
    return(C);
}

inline iq1
CPP_IQ1mag(const iq1 &A, const iq1 &B)
{
    iq1 C;
    C.val = _IQ1mag(A.val, B.val);
    return(C);
}

inline iq
CPP_IQmag(const iq &A, const iq &B)
{
    iq C;
    C.val = _IQmag(A.val, B.val);
    return(C);
}

//*****************************************************************************
//
// Computes the absolute value of an IQ number.
//
//*****************************************************************************
inline iq30
CPP_IQ30abs(const iq30 &A)
{
    iq30 B;
    B.val = _IQ30abs(A.val);
    return(B);
}

inline iq29
CPP_IQ29abs(const iq29 &A)
{
    iq29 B;
    B.val = _IQ29abs(A.val);
    return(B);
}

inline iq28
CPP_IQ28abs(const iq28 &A)
{
    iq28 B;
    B.val = _IQ28abs(A.val);
    return(B);
}

inline iq27
CPP_IQ27abs(const iq27 &A)
{
    iq27 B;
    B.val = _IQ27abs(A.val);
    return(B);
}

inline iq26
CPP_IQ26abs(const iq26 &A)
{
    iq26 B;
    B.val = _IQ26abs(A.val);
    return(B);
}

inline iq25
CPP_IQ25abs(const iq25 &A)
{
    iq25 B;
    B.val = _IQ25abs(A.val);
    return(B);
}

inline iq24
CPP_IQ24abs(const iq24 &A)
{
    iq24 B;
    B.val = _IQ24abs(A.val);
    return(B);
}

inline iq23
CPP_IQ23abs(const iq23 &A)
{
    iq23 B;
    B.val = _IQ23abs(A.val);
    return(B);
}

inline iq22
CPP_IQ22abs(const iq22 &A)
{
    iq22 B;
    B.val = _IQ22abs(A.val);
    return(B);
}

inline iq21
CPP_IQ21abs(const iq21 &A)
{
    iq21 B;
    B.val = _IQ21abs(A.val);
    return(B);
}

inline iq20
CPP_IQ20abs(const iq20 &A)
{
    iq20 B;
    B.val = _IQ20abs(A.val);
    return(B);
}

inline iq19
CPP_IQ19abs(const iq19 &A)
{
    iq19 B;
    B.val = _IQ19abs(A.val);
    return(B);
}

inline iq18
CPP_IQ18abs(const iq18 &A)
{
    iq18 B;
    B.val = _IQ18abs(A.val);
    return(B);
}

inline iq17
CPP_IQ17abs(const iq17 &A)
{
    iq17 B;
    B.val = _IQ17abs(A.val);
    return(B);
}

inline iq16
CPP_IQ16abs(const iq16 &A)
{
    iq16 B;
    B.val = _IQ16abs(A.val);
    return(B);
}

inline iq15
CPP_IQ15abs(const iq15 &A)
{
    iq15 B;
    B.val = _IQ15abs(A.val);
    return(B);
}

inline iq14
CPP_IQ14abs(const iq14 &A)
{
    iq14 B;
    B.val = _IQ14abs(A.val);
    return(B);
}

inline iq13
CPP_IQ13abs(const iq13 &A)
{
    iq13 B;
    B.val = _IQ13abs(A.val);
    return(B);
}

inline iq12
CPP_IQ12abs(const iq12 &A)
{
    iq12 B;
    B.val = _IQ12abs(A.val);
    return(B);
}

inline iq11
CPP_IQ11abs(const iq11 &A)
{
    iq11 B;
    B.val = _IQ11abs(A.val);
    return(B);
}

inline iq10
CPP_IQ10abs(const iq10 &A)
{
    iq10 B;
    B.val = _IQ10abs(A.val);
    return(B);
}

inline iq
CPP_IQabs(const iq &A)
{
    iq B;
    B.val = _IQabs(A.val);
    return(B);
}

//*****************************************************************************
//
// Operator "=".
//
//*****************************************************************************
inline iq30 &
iq30::operator=(const iq30 &A)
{
    val = A.val;
    return(*this);
}

inline iq29 &
iq29::operator=(const iq29 &A)
{
    val = A.val;
    return(*this);
}

inline iq28 &
iq28::operator=(const iq28 &A)
{
    val = A.val;
    return(*this);
}

inline iq27 &
iq27::operator=(const iq27 &A)
{
    val = A.val;
    return(*this);
}

inline iq26 &
iq26::operator=(const iq26 &A)
{
    val = A.val;
    return(*this);
}

inline iq25 &
iq25::operator=(const iq25 &A)
{
    val = A.val;
    return(*this);
}

inline iq24 &
iq24::operator=(const iq24 &A)
{
    val = A.val;
    return(*this);
}

inline iq23 &
iq23::operator=(const iq23 &A)
{
    val = A.val;
    return(*this);
}

inline iq22 &
iq22::operator=(const iq22 &A)
{
    val = A.val;
    return(*this);
}

inline iq21 &
iq21::operator=(const iq21 &A)
{
    val = A.val;
    return(*this);
}

inline iq20 &
iq20::operator=(const iq20 &A)
{
    val = A.val;
    return(*this);
}

inline iq19 &
iq19::operator=(const iq19 &A)
{
    val = A.val;
    return(*this);
}

inline iq18 &
iq18::operator=(const iq18 &A)
{
    val = A.val;
    return(*this);
}

inline iq17 &
iq17::operator=(const iq17 &A)
{
    val = A.val;
    return(*this);
}

inline iq16 &
iq16::operator=(const iq16 &A)
{
    val = A.val;
    return(*this);
}

inline iq15 &
iq15::operator=(const iq15 &A)
{
    val = A.val;
    return(*this);
}

inline iq14 &
iq14::operator=(const iq14 &A)
{
    val = A.val;
    return(*this);
}

inline iq13 &
iq13::operator=(const iq13 &A)
{
    val = A.val;
    return(*this);
}

inline iq12 &
iq12::operator=(const iq12 &A)
{
    val = A.val;
    return(*this);
}

inline iq11 &
iq11::operator=(const iq11 &A)
{
    val = A.val;
    return(*this);
}

inline iq10 &
iq10::operator=(const iq10 &A)
{
    val = A.val;
    return(*this);
}

inline iq9 &
iq9::operator=(const iq9 &A)
{
    val = A.val;
    return(*this);
}

inline iq8 &
iq8::operator=(const iq8 &A)
{
    val = A.val;
    return(*this);
}

inline iq7 &
iq7::operator=(const iq7 &A)
{
    val = A.val;
    return(*this);
}

inline iq6 &
iq6::operator=(const iq6 &A)
{
    val = A.val;
    return(*this);
}

inline iq5 &
iq5::operator=(const iq5 &A)
{
    val = A.val;
    return(*this);
}

inline iq4 &
iq4::operator=(const iq4 &A)
{
    val = A.val;
    return(*this);
}

inline iq3 &
iq3::operator=(const iq3 &A)
{
    val = A.val;
    return(*this);
}

inline iq2 &
iq2::operator=(const iq2 &A)
{
    val = A.val;
    return(*this);
}

inline iq1 &
iq1::operator=(const iq1 &A)
{
    val = A.val;
    return(*this);
}

inline iq &
iq::operator=(const iq &A)
{
    val = A.val;
    return(*this);
}

//*****************************************************************************
//
// Operators "+" and "+=".
//
//*****************************************************************************
inline iq30
operator+(const iq30 &A, const iq30 &B)
{
    iq30 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq30 &
iq30::operator+=(const iq30 &A)
{
    val += A.val;
    return(*this);
}

inline iq29
operator+(const iq29 &A, const iq29 &B)
{
    iq29 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq29 &
iq29::operator+=(const iq29 &A)
{
    val += A.val;
    return(*this);
}

inline iq28
operator+(const iq28 &A, const iq28 &B)
{
    iq28 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq28 &
iq28::operator+=(const iq28 &A)
{
    val += A.val;
    return(*this);
}

inline iq27
operator+(const iq27 &A, const iq27 &B)
{
    iq27 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq27 &
iq27::operator+=(const iq27 &A)
{
    val += A.val;
    return(*this);
}

inline iq26
operator+(const iq26 &A, const iq26 &B)
{
    iq26 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq26 &
iq26::operator+=(const iq26 &A)
{
    val += A.val;
    return(*this);
}

inline iq25
operator+(const iq25 &A, const iq25 &B)
{
    iq25 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq25 &
iq25::operator+=(const iq25 &A)
{
    val += A.val;
    return(*this);
}

inline iq24
operator+(const iq24 &A, const iq24 &B)
{
    iq24 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq24 &
iq24::operator+=(const iq24 &A)
{
    val += A.val;
    return(*this);
}

inline iq23
operator+(const iq23 &A, const iq23 &B)
{
    iq23 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq23 &
iq23::operator+=(const iq23 &A)
{
    val += A.val;
    return(*this);
}

inline iq22
operator+(const iq22 &A, const iq22 &B)
{
    iq22 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq22 &
iq22::operator+=(const iq22 &A)
{
    val += A.val;
    return(*this);
}

inline iq21
operator+(const iq21 &A, const iq21 &B)
{
    iq21 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq21 &
iq21::operator+=(const iq21 &A)
{
    val += A.val;
    return(*this);
}

inline iq20
operator+(const iq20 &A, const iq20 &B)
{
    iq20 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq20 &
iq20::operator+=(const iq20 &A)
{
    val += A.val;
    return(*this);
}

inline iq19
operator+(const iq19 &A, const iq19 &B)
{
    iq19 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq19 &
iq19::operator+=(const iq19 &A)
{
    val += A.val;
    return(*this);
}

inline iq18
operator+(const iq18 &A, const iq18 &B)
{
    iq18 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq18 &
iq18::operator+=(const iq18 &A)
{
    val += A.val;
    return(*this);
}

inline iq17
operator+(const iq17 &A, const iq17 &B)
{
    iq17 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq17 &
iq17::operator+=(const iq17 &A)
{
    val += A.val;
    return(*this);
}

inline iq16
operator+(const iq16 &A, const iq16 &B)
{
    iq16 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq16 &
iq16::operator+=(const iq16 &A)
{
    val += A.val;
    return(*this);
}

inline iq15
operator+(const iq15 &A, const iq15 &B)
{
    iq15 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq15 &
iq15::operator+=(const iq15 &A)
{
    val += A.val;
    return(*this);
}

inline iq14
operator+(const iq14 &A, const iq14 &B)
{
    iq14 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq14 &
iq14::operator+=(const iq14 &A)
{
    val += A.val;
    return(*this);
}

inline iq13
operator+(const iq13 &A, const iq13 &B)
{
    iq13 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq13 &
iq13::operator+=(const iq13 &A)
{
    val += A.val;
    return(*this);
}

inline iq12
operator+(const iq12 &A, const iq12 &B)
{
    iq12 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq12 &
iq12::operator+=(const iq12 &A)
{
    val += A.val;
    return(*this);
}

inline iq11
operator+(const iq11 &A, const iq11 &B)
{
    iq11 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq11 &
iq11::operator+=(const iq11 &A)
{
    val += A.val;
    return(*this);
}

inline iq10
operator+(const iq10 &A, const iq10 &B)
{
    iq10 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq10 &
iq10::operator+=(const iq10 &A)
{
    val += A.val;
    return(*this);
}

inline iq9
operator+(const iq9 &A, const iq9 &B)
{
    iq9 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq9 &
iq9::operator+=(const iq9 &A)
{
    val += A.val;
    return(*this);
}

inline iq8
operator+(const iq8 &A, const iq8 &B)
{
    iq8 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq8 &
iq8::operator+=(const iq8 &A)
{
    val += A.val;
    return(*this);
}

inline iq7
operator+(const iq7 &A, const iq7 &B)
{
    iq7 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq7 &
iq7::operator+=(const iq7 &A)
{
    val += A.val;
    return(*this);
}

inline iq6
operator+(const iq6 &A, const iq6 &B)
{
    iq6 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq6 &
iq6::operator+=(const iq6 &A)
{
    val += A.val;
    return(*this);
}

inline iq5
operator+(const iq5 &A, const iq5 &B)
{
    iq5 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq5 &
iq5::operator+=(const iq5 &A)
{
    val += A.val;
    return(*this);
}

inline iq4
operator+(const iq4 &A, const iq4 &B)
{
    iq4 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq4 &
iq4::operator+=(const iq4 &A)
{
    val += A.val;
    return(*this);
}

inline iq3
operator+(const iq3 &A, const iq3 &B)
{
    iq3 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq3 &
iq3::operator+=(const iq3 &A)
{
    val += A.val;
    return(*this);
}

inline iq2
operator+(const iq2 &A, const iq2 &B)
{
    iq2 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq2 &
iq2::operator+=(const iq2 &A)
{
    val += A.val;
    return(*this);
}

inline iq1
operator+(const iq1 &A, const iq1 &B)
{
    iq1 C;
    C.val = A.val + B.val;
    return(C);
}

inline iq1 &
iq1::operator+=(const iq1 &A)
{
    val += A.val;
    return(*this);
}

inline iq
operator+(const iq &A, const iq &B)
{
    iq C;
    C.val = A.val + B.val;
    return(C);
}

inline iq &
iq::operator+=(const iq &A)
{
    val += A.val;
    return(*this);
}

//*****************************************************************************
//
// Operators "-" and "-=".
//
//*****************************************************************************
inline iq30
operator-(const iq30 &A, const iq30 &B)
{
    iq30 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq30
operator-(const iq30 &A)
{
    iq30 B;
    B.val = - A.val;
    return(B);
}

inline iq30 &
iq30::operator-=(const iq30 &A)
{
    val -= A.val;
    return(*this);
}

inline iq29
operator-(const iq29 &A, const iq29 &B)
{
    iq29 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq29
operator-(const iq29 &A)
{
    iq29 B;
    B.val = - A.val;
    return(B);
}

inline iq29 &
iq29::operator-=(const iq29 &A)
{
    val -= A.val;
    return(*this);
}

inline iq28
operator-(const iq28 &A, const iq28 &B)
{
    iq28 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq28
operator-(const iq28 &A)
{
    iq28 B;
    B.val = - A.val;
    return(B);
}

inline iq28 &
iq28::operator-=(const iq28 &A)
{
    val -= A.val;
    return(*this);
}

inline iq27
operator-(const iq27 &A, const iq27 &B)
{
    iq27 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq27
operator-(const iq27 &A)
{
    iq27 B;
    B.val = - A.val;
    return(B);
}

inline iq27 &
iq27::operator-=(const iq27 &A)
{
    val -= A.val;
    return(*this);
}

inline iq26
operator-(const iq26 &A, const iq26 &B)
{
    iq26 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq26
operator-(const iq26 &A)
{
    iq26 B;
    B.val = - A.val;
    return(B);
}

inline iq26 &
iq26::operator-=(const iq26 &A)
{
    val -= A.val;
    return(*this);
}

inline iq25
operator-(const iq25 &A, const iq25 &B)
{
    iq25 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq25
operator-(const iq25 &A)
{
    iq25 B;
    B.val = - A.val;
    return(B);
}

inline iq25 &
iq25::operator-=(const iq25 &A)
{
    val -= A.val;
    return(*this);
}

inline iq24
operator-(const iq24 &A, const iq24 &B)
{
    iq24 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq24
operator-(const iq24 &A)
{
    iq24 B;
    B.val = - A.val;
    return(B);
}

inline iq24 &
iq24::operator-=(const iq24 &A)
{
    val -= A.val;
    return(*this);
}

inline iq23
operator-(const iq23 &A, const iq23 &B)
{
    iq23 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq23
operator-(const iq23 &A)
{
    iq23 B;
    B.val = - A.val;
    return(B);
}

inline iq23 &
iq23::operator-=(const iq23 &A)
{
    val -= A.val;
    return(*this);
}

inline iq22
operator-(const iq22 &A, const iq22 &B)
{
    iq22 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq22
operator-(const iq22 &A)
{
    iq22 B;
    B.val = - A.val;
    return(B);
}

inline iq22 &
iq22::operator-=(const iq22 &A)
{
    val -= A.val;
    return(*this);
}

inline iq21
operator-(const iq21 &A, const iq21 &B)
{
    iq21 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq21
operator-(const iq21 &A)
{
    iq21 B;
    B.val = - A.val;
    return(B);
}

inline iq21 &
iq21::operator-=(const iq21 &A)
{
    val -= A.val;
    return(*this);
}

inline iq20
operator-(const iq20 &A, const iq20 &B)
{
    iq20 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq20
operator-(const iq20 &A)
{
    iq20 B;
    B.val = - A.val;
    return(B);
}

inline iq20 &
iq20::operator-=(const iq20 &A)
{
    val -= A.val;
    return(*this);
}

inline iq19
operator-(const iq19 &A, const iq19 &B)
{
    iq19 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq19
operator-(const iq19 &A)
{
    iq19 B;
    B.val = - A.val;
    return(B);
}

inline iq19 &
iq19::operator-=(const iq19 &A)
{
    val -= A.val;
    return(*this);
}

inline iq18
operator-(const iq18 &A, const iq18 &B)
{
    iq18 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq18
operator-(const iq18 &A)
{
    iq18 B;
    B.val = - A.val;
    return(B);
}

inline iq18 &
iq18::operator-=(const iq18 &A)
{
    val -= A.val;
    return(*this);
}

inline iq17
operator-(const iq17 &A, const iq17 &B)
{
    iq17 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq17
operator-(const iq17 &A)
{
    iq17 B;
    B.val = - A.val;
    return(B);
}

inline iq17 &
iq17::operator-=(const iq17 &A)
{
    val -= A.val;
    return(*this);
}

inline iq16
operator-(const iq16 &A, const iq16 &B)
{
    iq16 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq16
operator-(const iq16 &A)
{
    iq16 B;
    B.val = - A.val;
    return(B);
}

inline iq16 &
iq16::operator-=(const iq16 &A)
{
    val -= A.val;
    return(*this);
}

inline iq15
operator-(const iq15 &A, const iq15 &B)
{
    iq15 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq15
operator-(const iq15 &A)
{
    iq15 B;
    B.val = - A.val;
    return(B);
}

inline iq15 &
iq15::operator-=(const iq15 &A)
{
    val -= A.val;
    return(*this);
}

inline iq14
operator-(const iq14 &A, const iq14 &B)
{
    iq14 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq14
operator-(const iq14 &A)
{
    iq14 B;
    B.val = - A.val;
    return(B);
}

inline iq14 &
iq14::operator-=(const iq14 &A)
{
    val -= A.val;
    return(*this);
}

inline iq13
operator-(const iq13 &A, const iq13 &B)
{
    iq13 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq13
operator-(const iq13 &A)
{
    iq13 B;
    B.val = - A.val;
    return(B);
}

inline iq13 &
iq13::operator-=(const iq13 &A)
{
    val -= A.val;
    return(*this);
}

inline iq12
operator-(const iq12 &A, const iq12 &B)
{
    iq12 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq12
operator-(const iq12 &A)
{
    iq12 B;
    B.val = - A.val;
    return(B);
}

inline iq12 &
iq12::operator-=(const iq12 &A)
{
    val -= A.val;
    return(*this);
}

inline iq11
operator-(const iq11 &A, const iq11 &B)
{
    iq11 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq11
operator-(const iq11 &A)
{
    iq11 B;
    B.val = - A.val;
    return(B);
}

inline iq11 &
iq11::operator-=(const iq11 &A)
{
    val -= A.val;
    return(*this);
}

inline iq10
operator-(const iq10 &A, const iq10 &B)
{
    iq10 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq10
operator-(const iq10 &A)
{
    iq10 B;
    B.val = - A.val;
    return(B);
}

inline iq10 &
iq10::operator-=(const iq10 &A)
{
    val -= A.val;
    return(*this);
}

inline iq9
operator-(const iq9 &A, const iq9 &B)
{
    iq9 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq9
operator-(const iq9 &A)
{
    iq9 B;
    B.val = - A.val;
    return(B);
}

inline iq9 &
iq9::operator-=(const iq9 &A)
{
    val -= A.val;
    return(*this);
}

inline iq8
operator-(const iq8 &A, const iq8 &B)
{
    iq8 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq8
operator-(const iq8 &A)
{
    iq8 B;
    B.val = - A.val;
    return(B);
}

inline iq8 &
iq8::operator-=(const iq8 &A)
{
    val -= A.val;
    return(*this);
}

inline iq7
operator-(const iq7 &A, const iq7 &B)
{
    iq7 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq7
operator-(const iq7 &A)
{
    iq7 B;
    B.val = - A.val;
    return(B);
}

inline iq7 &
iq7::operator-=(const iq7 &A)
{
    val -= A.val;
    return(*this);
}

inline iq6
operator-(const iq6 &A, const iq6 &B)
{
    iq6 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq6
operator-(const iq6 &A)
{
    iq6 B;
    B.val = - A.val;
    return(B);
}

inline iq6 &
iq6::operator-=(const iq6 &A)
{
    val -= A.val;
    return(*this);
}

inline iq5
operator-(const iq5 &A, const iq5 &B)
{
    iq5 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq5
operator-(const iq5 &A)
{
    iq5 B;
    B.val = - A.val;
    return(B);
}

inline iq5 &
iq5::operator-=(const iq5 &A)
{
    val -= A.val;
    return(*this);
}

inline iq4
operator-(const iq4 &A, const iq4 &B)
{
    iq4 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq4
operator-(const iq4 &A)
{
    iq4 B;
    B.val = - A.val;
    return(B);
}

inline iq4 &
iq4::operator-=(const iq4 &A)
{
    val -= A.val;
    return(*this);
}

inline iq3
operator-(const iq3 &A, const iq3 &B)
{
    iq3 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq3
operator-(const iq3 &A)
{
    iq3 B;
    B.val = - A.val;
    return(B);
}

inline iq3 &
iq3::operator-=(const iq3 &A)
{
    val -= A.val;
    return(*this);
}

inline iq2
operator-(const iq2 &A, const iq2 &B)
{
    iq2 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq2
operator-(const iq2 &A)
{
    iq2 B;
    B.val = - A.val;
    return(B);
}

inline iq2 &
iq2::operator-=(const iq2 &A)
{
    val -= A.val;
    return(*this);
}

inline iq1
operator-(const iq1 &A, const iq1 &B)
{
    iq1 C;
    C.val = A.val - B.val;
    return(C);
}

inline iq1
operator-(const iq1 &A)
{
    iq1 B;
    B.val = - A.val;
    return(B);
}

inline iq1 &
iq1::operator-=(const iq1 &A)
{
    val -= A.val;
    return(*this);
}

inline iq
operator-(const iq &A, const iq &B)
{
    iq C;
    C.val = A.val - B.val;
    return(C);
}

inline iq
operator-(const iq &A)
{
    iq B;
    B.val = - A.val;
    return(B);
}

inline iq &
iq::operator-=(const iq &A)
{
    val -= A.val;
    return(*this);
}

//*****************************************************************************
//
// Operators "*" and "*=".
//
//*****************************************************************************
inline iq30
operator*(const iq30 &A, const iq30 &B)
{
    iq30 C;
    C.val = _IQ30mpy(A.val, B.val);
    return(C);
}

inline iq30 &
iq30::operator*=(const iq30 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq29
operator*(const iq29 &A, const iq29 &B)
{
    iq29 C;
    C.val = _IQ29mpy(A.val, B.val);
    return(C);
}

inline iq29 &
iq29::operator*=(const iq29 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq28
operator*(const iq28 &A, const iq28 &B)
{
    iq28 C;
    C.val = _IQ28mpy(A.val, B.val);
    return(C);
}

inline iq28 &
iq28::operator*=(const iq28 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq27
operator*(const iq27 &A, const iq27 &B)
{
    iq27 C;
    C.val = _IQ27mpy(A.val, B.val);
    return(C);
}

inline iq27 &
iq27::operator*=(const iq27 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq26
operator*(const iq26 &A, const iq26 &B)
{
    iq26 C;
    C.val = _IQ26mpy(A.val, B.val);
    return(C);
}

inline iq26 &
iq26::operator*=(const iq26 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq25
operator*(const iq25 &A, const iq25 &B)
{
    iq25 C;
    C.val = _IQ25mpy(A.val, B.val);
    return(C);
}

inline iq25 &
iq25::operator*=(const iq25 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq24
operator*(const iq24 &A, const iq24 &B)
{
    iq24 C;
    C.val = _IQ24mpy(A.val, B.val);
    return(C);
}

inline iq24 &
iq24::operator*=(const iq24 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq23
operator*(const iq23 &A, const iq23 &B)
{
    iq23 C;
    C.val = _IQ23mpy(A.val, B.val);
    return(C);
}

inline iq23 &
iq23::operator*=(const iq23 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq22
operator*(const iq22 &A, const iq22 &B)
{
    iq22 C;
    C.val = _IQ22mpy(A.val, B.val);
    return(C);
}

inline iq22 &
iq22::operator*=(const iq22 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq21
operator*(const iq21 &A, const iq21 &B)
{
    iq21 C;
    C.val = _IQ21mpy(A.val, B.val);
    return(C);
}

inline iq21 &
iq21::operator*=(const iq21 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq20
operator*(const iq20 &A, const iq20 &B)
{
    iq20 C;
    C.val = _IQ20mpy(A.val, B.val);
    return(C);
}

inline iq20 &
iq20::operator*=(const iq20 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq19
operator*(const iq19 &A, const iq19 &B)
{
    iq19 C;
    C.val = _IQ19mpy(A.val, B.val);
    return(C);
}

inline iq19 &
iq19::operator*=(const iq19 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq18
operator*(const iq18 &A, const iq18 &B)
{
    iq18 C;
    C.val = _IQ18mpy(A.val, B.val);
    return(C);
}

inline iq18 &
iq18::operator*=(const iq18 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq17
operator*(const iq17 &A, const iq17 &B)
{
    iq17 C;
    C.val = _IQ17mpy(A.val, B.val);
    return(C);
}

inline iq17 &
iq17::operator*=(const iq17 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq16
operator*(const iq16 &A, const iq16 &B)
{
    iq16 C;
    C.val = _IQ16mpy(A.val, B.val);
    return(C);
}

inline iq16 &
iq16::operator*=(const iq16 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq15
operator*(const iq15 &A, const iq15 &B)
{
    iq15 C;
    C.val = _IQ15mpy(A.val, B.val);
    return(C);
}

inline iq15 &
iq15::operator*=(const iq15 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq14
operator*(const iq14 &A, const iq14 &B)
{
    iq14 C;
    C.val = _IQ14mpy(A.val, B.val);
    return(C);
}

inline iq14 &
iq14::operator*=(const iq14 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq13
operator*(const iq13 &A, const iq13 &B)
{
    iq13 C;
    C.val = _IQ13mpy(A.val, B.val);
    return(C);
}

inline iq13 &
iq13::operator*=(const iq13 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq12
operator*(const iq12 &A, const iq12 &B)
{
    iq12 C;
    C.val = _IQ12mpy(A.val, B.val);
    return(C);
}

inline iq12 &
iq12::operator*=(const iq12 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq11
operator*(const iq11 &A, const iq11 &B)
{
    iq11 C;
    C.val = _IQ11mpy(A.val, B.val);
    return(C);
}

inline iq11 &
iq11::operator*=(const iq11 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq10
operator*(const iq10 &A, const iq10 &B)
{
    iq10 C;
    C.val = _IQ10mpy(A.val, B.val);
    return(C);
}

inline iq10 &
iq10::operator*=(const iq10 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq9
operator*(const iq9 &A, const iq9 &B)
{
    iq9 C;
    C.val = _IQ9mpy(A.val, B.val);
    return(C);
}

inline iq9 &
iq9::operator*=(const iq9 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq8
operator*(const iq8 &A, const iq8 &B)
{
    iq8 C;
    C.val = _IQ8mpy(A.val, B.val);
    return(C);
}

inline iq8 &
iq8::operator*=(const iq8 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq7
operator*(const iq7 &A, const iq7 &B)
{
    iq7 C;
    C.val = _IQ7mpy(A.val, B.val);
    return(C);
}

inline iq7 &
iq7::operator*=(const iq7 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq6
operator*(const iq6 &A, const iq6 &B)
{
    iq6 C;
    C.val = _IQ6mpy(A.val, B.val);
    return(C);
}

inline iq6 &
iq6::operator*=(const iq6 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq5
operator*(const iq5 &A, const iq5 &B)
{
    iq5 C;
    C.val = _IQ5mpy(A.val, B.val);
    return(C);
}

inline iq5 &
iq5::operator*=(const iq5 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq4
operator*(const iq4 &A, const iq4 &B)
{
    iq4 C;
    C.val = _IQ4mpy(A.val, B.val);
    return(C);
}

inline iq4 &
iq4::operator*=(const iq4 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq3
operator*(const iq3 &A, const iq3 &B)
{
    iq3 C;
    C.val = _IQ3mpy(A.val, B.val);
    return(C);
}

inline iq3 &
iq3::operator*=(const iq3 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq2
operator*(const iq2 &A, const iq2 &B)
{
    iq2 C;
    C.val = _IQ2mpy(A.val, B.val);
    return(C);
}

inline iq2 &
iq2::operator*=(const iq2 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq1
operator*(const iq1 &A, const iq1 &B)
{
    iq1 C;
    C.val = _IQ1mpy(A.val, B.val);
    return(C);
}

inline iq1 &
iq1::operator*=(const iq1 &A)
{
    val = _IQ30mpy(val, A.val);
    return(*this);
}

inline iq
operator*(const iq &A, const iq &B)
{
    iq C;
    C.val = _IQmpy(A.val, B.val);
    return(C);
}

inline iq &
iq::operator*=(const iq &A)
{
    val = _IQmpy(val, A.val);
    return(*this);
}

//*****************************************************************************
//
// Operators "/" and "/=".
//
//*****************************************************************************
inline iq30
operator/(const iq30 &A, const iq30 &B)
{
    iq30 C;
    C.val = _IQ30div(A.val, B.val);
    return(C);
}

inline iq30 &
iq30::operator/=(const iq30 &A)
{
    val = _IQ30div(val, A.val);
    return(*this);
}

inline iq29
operator/(const iq29 &A, const iq29 &B)
{
    iq29 C;
    C.val = _IQ29div(A.val, B.val);
    return(C);
}

inline iq29 &
iq29::operator/=(const iq29 &A)
{
    val = _IQ29div(val, A.val);
    return(*this);
}

inline iq28
operator/(const iq28 &A, const iq28 &B)
{
    iq28 C;
    C.val = _IQ28div(A.val, B.val);
    return(C);
}

inline iq28 &
iq28::operator/=(const iq28 &A)
{
    val = _IQ28div(val, A.val);
    return(*this);
}

inline iq27
operator/(const iq27 &A, const iq27 &B)
{
    iq27 C;
    C.val = _IQ27div(A.val, B.val);
    return(C);
}

inline iq27 &
iq27::operator/=(const iq27 &A)
{
    val = _IQ27div(val, A.val);
    return(*this);
}

inline iq26
operator/(const iq26 &A, const iq26 &B)
{
    iq26 C;
    C.val = _IQ26div(A.val, B.val);
    return(C);
}

inline iq26 &
iq26::operator/=(const iq26 &A)
{
    val = _IQ26div(val, A.val);
    return(*this);
}

inline iq25
operator/(const iq25 &A, const iq25 &B)
{
    iq25 C;
    C.val = _IQ25div(A.val, B.val);
    return(C);
}

inline iq25 &
iq25::operator/=(const iq25 &A)
{
    val = _IQ25div(val, A.val);
    return(*this);
}

inline iq24
operator/(const iq24 &A, const iq24 &B)
{
    iq24 C;
    C.val = _IQ24div(A.val, B.val);
    return(C);
}

inline iq24 &
iq24::operator/=(const iq24 &A)
{
    val = _IQ24div(val, A.val);
    return(*this);
}

inline iq23
operator/(const iq23 &A, const iq23 &B)
{
    iq23 C;
    C.val = _IQ23div(A.val, B.val);
    return(C);
}

inline iq23 &
iq23::operator/=(const iq23 &A)
{
    val = _IQ23div(val, A.val);
    return(*this);
}

inline iq22
operator/(const iq22 &A, const iq22 &B)
{
    iq22 C;
    C.val = _IQ22div(A.val, B.val);
    return(C);
}

inline iq22 &
iq22::operator/=(const iq22 &A)
{
    val = _IQ22div(val, A.val);
    return(*this);
}

inline iq21
operator/(const iq21 &A, const iq21 &B)
{
    iq21 C;
    C.val = _IQ21div(A.val, B.val);
    return(C);
}

inline iq21 &
iq21::operator/=(const iq21 &A)
{
    val = _IQ21div(val, A.val);
    return(*this);
}

inline iq20
operator/(const iq20 &A, const iq20 &B)
{
    iq20 C;
    C.val = _IQ20div(A.val, B.val);
    return(C);
}

inline iq20 &
iq20::operator/=(const iq20 &A)
{
    val = _IQ20div(val, A.val);
    return(*this);
}

inline iq19
operator/(const iq19 &A, const iq19 &B)
{
    iq19 C;
    C.val = _IQ19div(A.val, B.val);
    return(C);
}

inline iq19 &
iq19::operator/=(const iq19 &A)
{
    val = _IQ19div(val, A.val);
    return(*this);
}

inline iq18
operator/(const iq18 &A, const iq18 &B)
{
    iq18 C;
    C.val = _IQ18div(A.val, B.val);
    return(C);
}

inline iq18 &
iq18::operator/=(const iq18 &A)
{
    val = _IQ18div(val, A.val);
    return(*this);
}

inline iq17
operator/(const iq17 &A, const iq17 &B)
{
    iq17 C;
    C.val = _IQ17div(A.val, B.val);
    return(C);
}

inline iq17 &
iq17::operator/=(const iq17 &A)
{
    val = _IQ17div(val, A.val);
    return(*this);
}

inline iq16
operator/(const iq16 &A, const iq16 &B)
{
    iq16 C;
    C.val = _IQ16div(A.val, B.val);
    return(C);
}

inline iq16 &
iq16::operator/=(const iq16 &A)
{
    val = _IQ16div(val, A.val);
    return(*this);
}

inline iq15
operator/(const iq15 &A, const iq15 &B)
{
    iq15 C;
    C.val = _IQ15div(A.val, B.val);
    return(C);
}

inline iq15 &
iq15::operator/=(const iq15 &A)
{
    val = _IQ15div(val, A.val);
    return(*this);
}

inline iq14
operator/(const iq14 &A, const iq14 &B)
{
    iq14 C;
    C.val = _IQ14div(A.val, B.val);
    return(C);
}

inline iq14 &
iq14::operator/=(const iq14 &A)
{
    val = _IQ14div(val, A.val);
    return(*this);
}

inline iq13
operator/(const iq13 &A, const iq13 &B)
{
    iq13 C;
    C.val = _IQ13div(A.val, B.val);
    return(C);
}

inline iq13 &
iq13::operator/=(const iq13 &A)
{
    val = _IQ13div(val, A.val);
    return(*this);
}

inline iq12
operator/(const iq12 &A, const iq12 &B)
{
    iq12 C;
    C.val = _IQ12div(A.val, B.val);
    return(C);
}

inline iq12 &
iq12::operator/=(const iq12 &A)
{
    val = _IQ12div(val, A.val);
    return(*this);
}

inline iq11
operator/(const iq11 &A, const iq11 &B)
{
    iq11 C;
    C.val = _IQ11div(A.val, B.val);
    return(C);
}

inline iq11 &
iq11::operator/=(const iq11 &A)
{
    val = _IQ11div(val, A.val);
    return(*this);
}

inline iq10
operator/(const iq10 &A, const iq10 &B)
{
    iq10 C;
    C.val = _IQ10div(A.val, B.val);
    return(C);
}

inline iq10 &
iq10::operator/=(const iq10 &A)
{
    val = _IQ10div(val, A.val);
    return(*this);
}

inline iq9
operator/(const iq9 &A, const iq9 &B)
{
    iq9 C;
    C.val = _IQ9div(A.val, B.val);
    return(C);
}

inline iq9 &
iq9::operator/=(const iq9 &A)
{
    val = _IQ9div(val, A.val);
    return(*this);
}

inline iq8
operator/(const iq8 &A, const iq8 &B)
{
    iq8 C;
    C.val = _IQ8div(A.val, B.val);
    return(C);
}

inline iq8 &
iq8::operator/=(const iq8 &A)
{
    val = _IQ8div(val, A.val);
    return(*this);
}

inline iq7
operator/(const iq7 &A, const iq7 &B)
{
    iq7 C;
    C.val = _IQ7div(A.val, B.val);
    return(C);
}

inline iq7 &
iq7::operator/=(const iq7 &A)
{
    val = _IQ7div(val, A.val);
    return(*this);
}

inline iq6
operator/(const iq6 &A, const iq6 &B)
{
    iq6 C;
    C.val = _IQ6div(A.val, B.val);
    return(C);
}

inline iq6 &
iq6::operator/=(const iq6 &A)
{
    val = _IQ6div(val, A.val);
    return(*this);
}

inline iq5
operator/(const iq5 &A, const iq5 &B)
{
    iq5 C;
    C.val = _IQ5div(A.val, B.val);
    return(C);
}

inline iq5 &
iq5::operator/=(const iq5 &A)
{
    val = _IQ5div(val, A.val);
    return(*this);
}

inline iq4
operator/(const iq4 &A, const iq4 &B)
{
    iq4 C;
    C.val = _IQ4div(A.val, B.val);
    return(C);
}

inline iq4 &
iq4::operator/=(const iq4 &A)
{
    val = _IQ4div(val, A.val);
    return(*this);
}

inline iq3
operator/(const iq3 &A, const iq3 &B)
{
    iq3 C;
    C.val = _IQ3div(A.val, B.val);
    return(C);
}

inline iq3 &
iq3::operator/=(const iq3 &A)
{
    val = _IQ3div(val, A.val);
    return(*this);
}

inline iq2
operator/(const iq2 &A, const iq2 &B)
{
    iq2 C;
    C.val = _IQ2div(A.val, B.val);
    return(C);
}

inline iq2 &
iq2::operator/=(const iq2 &A)
{
    val = _IQ2div(val, A.val);
    return(*this);
}

inline iq1
operator/(const iq1 &A, const iq1 &B)
{
    iq1 C;
    C.val = _IQ1div(A.val, B.val);
    return(C);
}

inline iq1 &
iq1::operator/=(const iq1 &A)
{
    val = _IQ1div(val, A.val);
    return(*this);
}

inline iq
operator/(const iq &A, const iq &B)
{
    iq C;
    C.val = _IQdiv(A.val, B.val);
    return(C);
}

inline iq &
iq::operator/=(const iq &A)
{
    val = _IQdiv(val, A.val);
    return(*this);
}

//*****************************************************************************
//
// Operators "==", "!=", "<", ">", "<=", ">=", "&&", and "||".
//
//*****************************************************************************
inline bool
operator==(const iq30 &A, const iq30 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq30 &A, const iq30 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq30 &A, const iq30 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq30 &A, const iq30 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq30 &A, const iq30 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq30 &A, const iq30 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq30 &A, const iq30 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq30 &A, const iq30 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq29 &A, const iq29 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq29 &A, const iq29 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq29 &A, const iq29 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq29 &A, const iq29 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq29 &A, const iq29 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq29 &A, const iq29 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq29 &A, const iq29 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq29 &A, const iq29 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq28 &A, const iq28 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq28 &A, const iq28 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq28 &A, const iq28 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq28 &A, const iq28 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq28 &A, const iq28 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq28 &A, const iq28 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq28 &A, const iq28 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq28 &A, const iq28 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq27 &A, const iq27 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq27 &A, const iq27 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq27 &A, const iq27 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq27 &A, const iq27 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq27 &A, const iq27 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq27 &A, const iq27 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq27 &A, const iq27 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq27 &A, const iq27 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq26 &A, const iq26 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq26 &A, const iq26 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq26 &A, const iq26 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq26 &A, const iq26 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq26 &A, const iq26 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq26 &A, const iq26 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq26 &A, const iq26 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq26 &A, const iq26 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq25 &A, const iq25 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq25 &A, const iq25 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq25 &A, const iq25 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq25 &A, const iq25 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq25 &A, const iq25 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq25 &A, const iq25 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq25 &A, const iq25 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq25 &A, const iq25 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq24 &A, const iq24 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq24 &A, const iq24 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq24 &A, const iq24 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq24 &A, const iq24 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq24 &A, const iq24 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq24 &A, const iq24 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq24 &A, const iq24 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq24 &A, const iq24 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq23 &A, const iq23 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq23 &A, const iq23 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq23 &A, const iq23 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq23 &A, const iq23 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq23 &A, const iq23 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq23 &A, const iq23 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq23 &A, const iq23 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq23 &A, const iq23 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq22 &A, const iq22 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq22 &A, const iq22 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq22 &A, const iq22 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq22 &A, const iq22 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq22 &A, const iq22 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq22 &A, const iq22 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq22 &A, const iq22 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq22 &A, const iq22 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq21 &A, const iq21 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq21 &A, const iq21 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq21 &A, const iq21 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq21 &A, const iq21 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq21 &A, const iq21 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq21 &A, const iq21 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq21 &A, const iq21 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq21 &A, const iq21 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq20 &A, const iq20 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq20 &A, const iq20 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq20 &A, const iq20 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq20 &A, const iq20 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq20 &A, const iq20 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq20 &A, const iq20 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq20 &A, const iq20 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq20 &A, const iq20 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq19 &A, const iq19 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq19 &A, const iq19 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq19 &A, const iq19 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq19 &A, const iq19 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq19 &A, const iq19 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq19 &A, const iq19 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq19 &A, const iq19 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq19 &A, const iq19 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq18 &A, const iq18 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq18 &A, const iq18 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq18 &A, const iq18 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq18 &A, const iq18 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq18 &A, const iq18 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq18 &A, const iq18 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq18 &A, const iq18 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq18 &A, const iq18 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq17 &A, const iq17 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq17 &A, const iq17 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq17 &A, const iq17 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq17 &A, const iq17 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq17 &A, const iq17 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq17 &A, const iq17 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq17 &A, const iq17 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq17 &A, const iq17 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq16 &A, const iq16 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq16 &A, const iq16 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq16 &A, const iq16 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq16 &A, const iq16 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq16 &A, const iq16 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq16 &A, const iq16 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq16 &A, const iq16 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq16 &A, const iq16 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq15 &A, const iq15 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq15 &A, const iq15 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq15 &A, const iq15 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq15 &A, const iq15 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq15 &A, const iq15 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq15 &A, const iq15 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq15 &A, const iq15 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq15 &A, const iq15 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq14 &A, const iq14 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq14 &A, const iq14 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq14 &A, const iq14 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq14 &A, const iq14 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq14 &A, const iq14 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq14 &A, const iq14 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq14 &A, const iq14 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq14 &A, const iq14 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq13 &A, const iq13 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq13 &A, const iq13 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq13 &A, const iq13 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq13 &A, const iq13 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq13 &A, const iq13 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq13 &A, const iq13 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq13 &A, const iq13 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq13 &A, const iq13 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq12 &A, const iq12 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq12 &A, const iq12 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq12 &A, const iq12 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq12 &A, const iq12 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq12 &A, const iq12 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq12 &A, const iq12 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq12 &A, const iq12 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq12 &A, const iq12 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq11 &A, const iq11 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq11 &A, const iq11 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq11 &A, const iq11 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq11 &A, const iq11 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq11 &A, const iq11 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq11 &A, const iq11 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq11 &A, const iq11 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq11 &A, const iq11 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq10 &A, const iq10 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq10 &A, const iq10 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq10 &A, const iq10 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq10 &A, const iq10 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq10 &A, const iq10 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq10 &A, const iq10 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq10 &A, const iq10 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq10 &A, const iq10 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq9 &A, const iq9 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq9 &A, const iq9 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq9 &A, const iq9 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq9 &A, const iq9 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq9 &A, const iq9 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq9 &A, const iq9 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq9 &A, const iq9 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq9 &A, const iq9 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq8 &A, const iq8 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq8 &A, const iq8 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq8 &A, const iq8 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq8 &A, const iq8 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq8 &A, const iq8 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq8 &A, const iq8 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq8 &A, const iq8 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq8 &A, const iq8 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq7 &A, const iq7 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq7 &A, const iq7 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq7 &A, const iq7 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq7 &A, const iq7 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq7 &A, const iq7 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq7 &A, const iq7 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq7 &A, const iq7 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq7 &A, const iq7 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq6 &A, const iq6 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq6 &A, const iq6 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq6 &A, const iq6 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq6 &A, const iq6 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq6 &A, const iq6 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq6 &A, const iq6 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq6 &A, const iq6 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq6 &A, const iq6 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq5 &A, const iq5 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq5 &A, const iq5 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq5 &A, const iq5 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq5 &A, const iq5 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq5 &A, const iq5 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq5 &A, const iq5 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq5 &A, const iq5 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq5 &A, const iq5 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq4 &A, const iq4 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq4 &A, const iq4 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq4 &A, const iq4 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq4 &A, const iq4 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq4 &A, const iq4 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq4 &A, const iq4 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq4 &A, const iq4 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq4 &A, const iq4 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq3 &A, const iq3 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq3 &A, const iq3 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq3 &A, const iq3 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq3 &A, const iq3 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq3 &A, const iq3 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq3 &A, const iq3 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq3 &A, const iq3 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq3 &A, const iq3 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq2 &A, const iq2 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq2 &A, const iq2 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq2 &A, const iq2 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq2 &A, const iq2 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq2 &A, const iq2 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq2 &A, const iq2 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq2 &A, const iq2 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq2 &A, const iq2 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq1 &A, const iq1 &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq1 &A, const iq1 &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq1 &A, const iq1 &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq1 &A, const iq1 &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq1 &A, const iq1 &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq1 &A, const iq1 &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq1 &A, const iq1 &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq1 &A, const iq1 &B)
{
    return(A.val || B.val);
}

inline bool
operator==(const iq &A, const iq &B)
{
    return(A.val == B.val);
}

inline bool
operator!=(const iq &A, const iq &B)
{
    return(A.val != B.val);
}

inline bool
operator<(const iq &A, const iq &B)
{
    return(A.val <  B.val);
}

inline bool
operator>(const iq &A, const iq &B)
{
    return(A.val >  B.val);
}

inline bool
operator<=(const iq &A, const iq &B)
{
    return(A.val <= B.val);
}

inline bool
operator>=(const iq &A, const iq &B)
{
    return(A.val >= B.val);
}

inline bool
operator&&(const iq &A, const iq &B)
{
    return(A.val && B.val);
}

inline bool
operator||(const iq &A, const iq &B)
{
    return(A.val || B.val);
}

//*****************************************************************************
//
// Operators "&" and "&=".
//
//*****************************************************************************
inline iq30
operator&(const iq30 &A, const long &B)
{
    iq30 C;
    C.val = A.val & B;
    return(C);
}

inline iq30 &
iq30::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq29
operator&(const iq29 &A, const long &B)
{
    iq29 C;
    C.val = A.val & B;
    return(C);
}

inline iq29 &
iq29::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq28
operator&(const iq28 &A, const long &B)
{
    iq28 C;
    C.val = A.val & B;
    return(C);
}

inline iq28 &
iq28::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq27
operator&(const iq27 &A, const long &B)
{
    iq27 C;
    C.val = A.val & B;
    return(C);
}

inline iq27 &
iq27::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq26
operator&(const iq26 &A, const long &B)
{
    iq26 C;
    C.val = A.val & B;
    return(C);
}

inline iq26 &
iq26::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq25
operator&(const iq25 &A, const long &B)
{
    iq25 C;
    C.val = A.val & B;
    return(C);
}

inline iq25 &
iq25::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq24
operator&(const iq24 &A, const long &B)
{
    iq24 C;
    C.val = A.val & B;
    return(C);
}

inline iq24 &
iq24::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq23
operator&(const iq23 &A, const long &B)
{
    iq23 C;
    C.val = A.val & B;
    return(C);
}

inline iq23 &
iq23::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq22
operator&(const iq22 &A, const long &B)
{
    iq22 C;
    C.val = A.val & B;
    return(C);
}

inline iq22 &
iq22::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq21
operator&(const iq21 &A, const long &B)
{
    iq21 C;
    C.val = A.val & B;
    return(C);
}

inline iq21 &
iq21::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq20
operator&(const iq20 &A, const long &B)
{
    iq20 C;
    C.val = A.val & B;
    return(C);
}

inline iq20 &
iq20::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq19
operator&(const iq19 &A, const long &B)
{
    iq19 C;
    C.val = A.val & B;
    return(C);
}

inline iq19 &
iq19::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq18
operator&(const iq18 &A, const long &B)
{
    iq18 C;
    C.val = A.val & B;
    return(C);
}

inline iq18 &
iq18::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq17
operator&(const iq17 &A, const long &B)
{
    iq17 C;
    C.val = A.val & B;
    return(C);
}

inline iq17 &
iq17::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq16
operator&(const iq16 &A, const long &B)
{
    iq16 C;
    C.val = A.val & B;
    return(C);
}

inline iq16 &
iq16::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq15
operator&(const iq15 &A, const long &B)
{
    iq15 C;
    C.val = A.val & B;
    return(C);
}

inline iq15 &
iq15::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq14
operator&(const iq14 &A, const long &B)
{
    iq14 C;
    C.val = A.val & B;
    return(C);
}

inline iq14 &
iq14::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq13
operator&(const iq13 &A, const long &B)
{
    iq13 C;
    C.val = A.val & B;
    return(C);
}

inline iq13 &
iq13::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq12
operator&(const iq12 &A, const long &B)
{
    iq12 C;
    C.val = A.val & B;
    return(C);
}

inline iq12 &
iq12::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq11
operator&(const iq11 &A, const long &B)
{
    iq11 C;
    C.val = A.val & B;
    return(C);
}

inline iq11 &
iq11::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq10
operator&(const iq10 &A, const long &B)
{
    iq10 C;
    C.val = A.val & B;
    return(C);
}

inline iq10 &
iq10::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq9
operator&(const iq9 &A, const long &B)
{
    iq9 C;
    C.val = A.val & B;
    return(C);
}

inline iq9 &
iq9::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq8
operator&(const iq8 &A, const long &B)
{
    iq8 C;
    C.val = A.val & B;
    return(C);
}

inline iq8 &
iq8::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq7
operator&(const iq7 &A, const long &B)
{
    iq7 C;
    C.val = A.val & B;
    return(C);
}

inline iq7 &
iq7::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq6
operator&(const iq6 &A, const long &B)
{
    iq6 C;
    C.val = A.val & B;
    return(C);
}

inline iq6 &
iq6::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq5
operator&(const iq5 &A, const long &B)
{
    iq5 C;
    C.val = A.val & B;
    return(C);
}

inline iq5 &
iq5::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq4
operator&(const iq4 &A, const long &B)
{
    iq4 C;
    C.val = A.val & B;
    return(C);
}

inline iq4 &
iq4::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq3
operator&(const iq3 &A, const long &B)
{
    iq3 C;
    C.val = A.val & B;
    return(C);
}

inline iq3 &
iq3::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq2
operator&(const iq2 &A, const long &B)
{
    iq2 C;
    C.val = A.val & B;
    return(C);
}

inline iq2 &
iq2::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq1
operator&(const iq1 &A, const long &B)
{
    iq1 C;
    C.val = A.val & B;
    return(C);
}

inline iq1 &
iq1::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

inline iq
operator&(const iq &A, const long &B)
{
    iq C;
    C.val = A.val & B;
    return(C);
}

inline iq &
iq::operator&=(const long &A)
{
    val &= A;
    return(*this);
}

//*****************************************************************************
//
// Operators "|" and "|=".
//
//*****************************************************************************
inline iq30
operator|(const iq30 &A, const long &B)
{
    iq30 C;
    C.val = A.val | B;
    return(C);
}

inline iq30 &
iq30::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq29
operator|(const iq29 &A, const long &B)
{
    iq29 C;
    C.val = A.val | B;
    return(C);
}

inline iq29 &
iq29::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq28
operator|(const iq28 &A, const long &B)
{
    iq28 C;
    C.val = A.val | B;
    return(C);
}

inline iq28 &
iq28::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq27
operator|(const iq27 &A, const long &B)
{
    iq27 C;
    C.val = A.val | B;
    return(C);
}

inline iq27 &
iq27::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq26
operator|(const iq26 &A, const long &B)
{
    iq26 C;
    C.val = A.val | B;
    return(C);
}

inline iq26 &
iq26::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq25
operator|(const iq25 &A, const long &B)
{
    iq25 C;
    C.val = A.val | B;
    return(C);
}

inline iq25 &
iq25::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq24
operator|(const iq24 &A, const long &B)
{
    iq24 C;
    C.val = A.val | B;
    return(C);
}

inline iq24 &
iq24::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq23
operator|(const iq23 &A, const long &B)
{
    iq23 C;
    C.val = A.val | B;
    return(C);
}

inline iq23 &
iq23::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq22
operator|(const iq22 &A, const long &B)
{
    iq22 C;
    C.val = A.val | B;
    return(C);
}

inline iq22 &
iq22::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq21
operator|(const iq21 &A, const long &B)
{
    iq21 C;
    C.val = A.val | B;
    return(C);
}

inline iq21 &
iq21::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq20
operator|(const iq20 &A, const long &B)
{
    iq20 C;
    C.val = A.val | B;
    return(C);
}

inline iq20 &
iq20::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq19
operator|(const iq19 &A, const long &B)
{
    iq19 C;
    C.val = A.val | B;
    return(C);
}

inline iq19 &
iq19::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq18
operator|(const iq18 &A, const long &B)
{
    iq18 C;
    C.val = A.val | B;
    return(C);
}

inline iq18 &
iq18::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq17
operator|(const iq17 &A, const long &B)
{
    iq17 C;
    C.val = A.val | B;
    return(C);
}

inline iq17 &
iq17::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq16
operator|(const iq16 &A, const long &B)
{
    iq16 C;
    C.val = A.val | B;
    return(C);
}

inline iq16 &
iq16::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq15
operator|(const iq15 &A, const long &B)
{
    iq15 C;
    C.val = A.val | B;
    return(C);
}

inline iq15 &
iq15::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq14
operator|(const iq14 &A, const long &B)
{
    iq14 C;
    C.val = A.val | B;
    return(C);
}

inline iq14 &
iq14::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq13
operator|(const iq13 &A, const long &B)
{
    iq13 C;
    C.val = A.val | B;
    return(C);
}

inline iq13 &
iq13::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq12
operator|(const iq12 &A, const long &B)
{
    iq12 C;
    C.val = A.val | B;
    return(C);
}

inline iq12 &
iq12::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq11
operator|(const iq11 &A, const long &B)
{
    iq11 C;
    C.val = A.val | B;
    return(C);
}

inline iq11 &
iq11::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq10
operator|(const iq10 &A, const long &B)
{
    iq10 C;
    C.val = A.val | B;
    return(C);
}

inline iq10 &
iq10::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq9
operator|(const iq9 &A, const long &B)
{
    iq9 C;
    C.val = A.val | B;
    return(C);
}

inline iq9 &
iq9::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq8
operator|(const iq8 &A, const long &B)
{
    iq8 C;
    C.val = A.val | B;
    return(C);
}

inline iq8 &
iq8::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq7
operator|(const iq7 &A, const long &B)
{
    iq7 C;
    C.val = A.val | B;
    return(C);
}

inline iq7 &
iq7::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq6
operator|(const iq6 &A, const long &B)
{
    iq6 C;
    C.val = A.val | B;
    return(C);
}

inline iq6 &
iq6::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq5
operator|(const iq5 &A, const long &B)
{
    iq5 C;
    C.val = A.val | B;
    return(C);
}

inline iq5 &
iq5::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq4
operator|(const iq4 &A, const long &B)
{
    iq4 C;
    C.val = A.val | B;
    return(C);
}

inline iq4 &
iq4::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq3
operator|(const iq3 &A, const long &B)
{
    iq3 C;
    C.val = A.val | B;
    return(C);
}

inline iq3 &
iq3::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq2
operator|(const iq2 &A, const long &B)
{
    iq2 C;
    C.val = A.val | B;
    return(C);
}

inline iq2 &
iq2::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq1
operator|(const iq1 &A, const long &B)
{
    iq1 C;
    C.val = A.val | B;
    return(C);
}

inline iq1 &
iq1::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

inline iq
operator|(const iq &A, const long &B)
{
    iq C;
    C.val = A.val | B;
    return(C);
}

inline iq &
iq::operator|=(const long &A)
{
    val |= A;
    return(*this);
}

//*****************************************************************************
//
// Operators "^" and "^=".
//
//*****************************************************************************
inline iq30
operator^(const iq30 &A, const long &B)
{
    iq30 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq30 &
iq30::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq29
operator^(const iq29 &A, const long &B)
{
    iq29 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq29 &
iq29::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq28
operator^(const iq28 &A, const long &B)
{
    iq28 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq28 &
iq28::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq27
operator^(const iq27 &A, const long &B)
{
    iq27 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq27 &
iq27::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq26
operator^(const iq26 &A, const long &B)
{
    iq26 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq26 &
iq26::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq25
operator^(const iq25 &A, const long &B)
{
    iq25 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq25 &
iq25::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq24
operator^(const iq24 &A, const long &B)
{
    iq24 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq24 &
iq24::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq23
operator^(const iq23 &A, const long &B)
{
    iq23 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq23 &
iq23::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq22
operator^(const iq22 &A, const long &B)
{
    iq22 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq22 &
iq22::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq21
operator^(const iq21 &A, const long &B)
{
    iq21 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq21 &
iq21::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq20
operator^(const iq20 &A, const long &B)
{
    iq20 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq20 &
iq20::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq19
operator^(const iq19 &A, const long &B)
{
    iq19 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq19 &
iq19::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq18
operator^(const iq18 &A, const long &B)
{
    iq18 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq18 &
iq18::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq17
operator^(const iq17 &A, const long &B)
{
    iq17 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq17 &
iq17::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq16
operator^(const iq16 &A, const long &B)
{
    iq16 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq16 &
iq16::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq15
operator^(const iq15 &A, const long &B)
{
    iq15 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq15 &
iq15::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq14
operator^(const iq14 &A, const long &B)
{
    iq14 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq14 &
iq14::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq13
operator^(const iq13 &A, const long &B)
{
    iq13 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq13 &
iq13::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq12
operator^(const iq12 &A, const long &B)
{
    iq12 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq12 &
iq12::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq11
operator^(const iq11 &A, const long &B)
{
    iq11 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq11 &
iq11::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq10
operator^(const iq10 &A, const long &B)
{
    iq10 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq10 &
iq10::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq9
operator^(const iq9 &A, const long &B)
{
    iq9 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq9 &
iq9::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq8
operator^(const iq8 &A, const long &B)
{
    iq8 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq8 &
iq8::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq7
operator^(const iq7 &A, const long &B)
{
    iq7 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq7 &
iq7::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq6
operator^(const iq6 &A, const long &B)
{
    iq6 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq6 &
iq6::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq5
operator^(const iq5 &A, const long &B)
{
    iq5 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq5 &
iq5::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq4
operator^(const iq4 &A, const long &B)
{
    iq4 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq4 &
iq4::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq3
operator^(const iq3 &A, const long &B)
{
    iq3 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq3 &
iq3::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq2
operator^(const iq2 &A, const long &B)
{
    iq2 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq2 &
iq2::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq1
operator^(const iq1 &A, const long &B)
{
    iq1 C;
    C.val = A.val ^ B;
    return(C);
}

inline iq1 &
iq1::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

inline iq
operator^(const iq &A, const long &B)
{
    iq C;
    C.val = A.val ^ B;
    return(C);
}

inline iq &
iq::operator^=(const long &A)
{
    val ^= A;
    return(*this);
}

//*****************************************************************************
//
// Otherwise, floating point math is being used.
//
//*****************************************************************************
#else // MATH_TYPE == FLOAT_MATH

//*****************************************************************************
//
// The floating point equivalent of the various IQ formats.
//
//*****************************************************************************
typedef float iq30;
typedef float iq29;
typedef float iq28;
typedef float iq27;
typedef float iq26;
typedef float iq25;
typedef float iq24;
typedef float iq23;
typedef float iq22;
typedef float iq21;
typedef float iq20;
typedef float iq19;
typedef float iq18;
typedef float iq17;
typedef float iq16;
typedef float iq15;
typedef float iq14;
typedef float iq13;
typedef float iq12;
typedef float iq11;
typedef float iq10;
typedef float iq9;
typedef float iq8;
typedef float iq7;
typedef float iq6;
typedef float iq5;
typedef float iq4;
typedef float iq3;
typedef float iq2;
typedef float iq1;
typedef float iq;

//*****************************************************************************
//
// Convert a value into an IQ number.
//
//*****************************************************************************

inline float CPP_IQ30(float A) {return A;}
inline float CPP_IQ29(float A) {return A;}
inline float CPP_IQ28(float A) {return A;}
inline float CPP_IQ27(float A) {return A;}
inline float CPP_IQ26(float A) {return A;}
inline float CPP_IQ25(float A) {return A;}
inline float CPP_IQ24(float A) {return A;}
inline float CPP_IQ23(float A) {return A;}
inline float CPP_IQ22(float A) {return A;}
inline float CPP_IQ21(float A) {return A;}
inline float CPP_IQ20(float A) {return A;}
inline float CPP_IQ19(float A) {return A;}
inline float CPP_IQ18(float A) {return A;}
inline float CPP_IQ17(float A) {return A;}
inline float CPP_IQ16(float A) {return A;}
inline float CPP_IQ15(float A) {return A;}
inline float CPP_IQ14(float A) {return A;}
inline float CPP_IQ13(float A) {return A;}
inline float CPP_IQ12(float A) {return A;}
inline float CPP_IQ11(float A) {return A;}
inline float CPP_IQ10(float A) {return A;}
inline float CPP_IQ9(float A) {return A;}
inline float CPP_IQ8(float A) {return A;}
inline float CPP_IQ7(float A) {return A;}
inline float CPP_IQ6(float A) {return A;}
inline float CPP_IQ5(float A) {return A;}
inline float CPP_IQ4(float A) {return A;}
inline float CPP_IQ3(float A) {return A;}
inline float CPP_IQ2(float A) {return A;}
inline float CPP_IQ1(float A) {return A;}
inline float CPP_IQ(float A) {return A;}

/*
#define IQ30(A)                 (A)
#define IQ29(A)                 (A)
#define IQ28(A)                 (A)
#define IQ27(A)                 (A)
#define IQ26(A)                 (A)
#define IQ25(A)                 (A)
#define IQ24(A)                 (A)
#define IQ23(A)                 (A)
#define IQ22(A)                 (A)
#define IQ21(A)                 (A)
#define IQ20(A)                 (A)
#define IQ19(A)                 (A)
#define IQ18(A)                 (A)
#define IQ17(A)                 (A)
#define IQ16(A)                 (A)
#define IQ15(A)                 (A)
#define IQ14(A)                 (A)
#define IQ13(A)                 (A)
#define IQ12(A)                 (A)
#define IQ11(A)                 (A)
#define IQ10(A)                 (A)
#define IQ9(A)                  (A)
#define IQ8(A)                  (A)
#define IQ7(A)                  (A)
#define IQ6(A)                  (A)
#define IQ5(A)                  (A)
#define IQ4(A)                  (A)
#define IQ3(A)                  (A)
#define IQ2(A)                  (A)
#define IQ1(A)                  (A)
#define IQ(A)                   (A)
*/

//*****************************************************************************
//
// Convert an IQ number to a floating point value.
//
//*****************************************************************************

inline float CPP_IQ30toF(float A)         {return A;}
inline float CPP_IQ29toF(float A)         {return A;}
inline float CPP_IQ28toF(float A)         {return A;}
inline float CPP_IQ27toF(float A)         {return A;}
inline float CPP_IQ26toF(float A)         {return A;}
inline float CPP_IQ25toF(float A)         {return A;}
inline float CPP_IQ24toF(float A)         {return A;}
inline float CPP_IQ23toF(float A)         {return A;}
inline float CPP_IQ22toF(float A)         {return A;}
inline float CPP_IQ21toF(float A)         {return A;}
inline float CPP_IQ20toF(float A)         {return A;}
inline float CPP_IQ19toF(float A)         {return A;}
inline float CPP_IQ18toF(float A)         {return A;}
inline float CPP_IQ17toF(float A)         {return A;}
inline float CPP_IQ16toF(float A)         {return A;}
inline float CPP_IQ15toF(float A)         {return A;}
inline float CPP_IQ14toF(float A)         {return A;}
inline float CPP_IQ13toF(float A)         {return A;}
inline float CPP_IQ12toF(float A)         {return A;}
inline float CPP_IQ11toF(float A)         {return A;}
inline float CPP_IQ10toF(float A)         {return A;}
inline float CPP_IQ9toF(float A)          {return A;}
inline float CPP_IQ8toF(float A)          {return A;}
inline float CPP_IQ7toF(float A)          {return A;}
inline float CPP_IQ6toF(float A)          {return A;}
inline float CPP_IQ5toF(float A)          {return A;}
inline float CPP_IQ4toF(float A)          {return A;}
inline float CPP_IQ3toF(float A)          {return A;}
inline float CPP_IQ2toF(float A)          {return A;}
inline float CPP_IQ1toF(float A)          {return A;}
inline float CPP_IQtoF(float A)           {return A;}

/*
#define IQ30toF(A)              (A)
#define IQ29toF(A)              (A)
#define IQ28toF(A)              (A)
#define IQ27toF(A)              (A)
#define IQ26toF(A)              (A)
#define IQ25toF(A)              (A)
#define IQ24toF(A)              (A)
#define IQ23toF(A)              (A)
#define IQ22toF(A)              (A)
#define IQ21toF(A)              (A)
#define IQ20toF(A)              (A)
#define IQ19toF(A)              (A)
#define IQ18toF(A)              (A)
#define IQ17toF(A)              (A)
#define IQ16toF(A)              (A)
#define IQ15toF(A)              (A)
#define IQ14toF(A)              (A)
#define IQ13toF(A)              (A)
#define IQ12toF(A)              (A)
#define IQ11toF(A)              (A)
#define IQ10toF(A)              (A)
#define IQ9toF(A)               (A)
#define IQ8toF(A)               (A)
#define IQ7toF(A)               (A)
#define IQ6toF(A)               (A)
#define IQ5toF(A)               (A)
#define IQ4toF(A)               (A)
#define IQ3toF(A)               (A)
#define IQ2toF(A)               (A)
#define IQ1toF(A)               (A)
#define IQtoF(A)                (A)
*/

//*****************************************************************************
//
// Convert an IQ number to a double-precision floating point value.
//
//****************************************************************************
inline  float CPP_IQ30toD(float A)          {return A;}
inline  float CPP_IQ29toD(float A)          {return A;}
inline  float CPP_IQ28toD(float A)          {return A;}
inline  float CPP_IQ27toD(float A)          {return A;}
inline  float CPP_IQ26toD(float A)          {return A;}
inline  float CPP_IQ25toD(float A)          {return A;}
inline  float CPP_IQ24toD(float A)          {return A;}
inline  float CPP_IQ23toD(float A)          {return A;}
inline  float CPP_IQ22toD(float A)          {return A;}
inline  float CPP_IQ21toD(float A)          {return A;}
inline  float CPP_IQ20toD(float A)          {return A;}
inline  float CPP_IQ19toD(float A)          {return A;}
inline  float CPP_IQ18toD(float A)          {return A;}
inline  float CPP_IQ17toD(float A)          {return A;}
inline  float CPP_IQ16toD(float A)          {return A;}
inline  float CPP_IQ15toD(float A)          {return A;}
inline  float CPP_IQ14toD(float A)          {return A;}
inline  float CPP_IQ13toD(float A)          {return A;}
inline  float CPP_IQ12toD(float A)          {return A;}
inline  float CPP_IQ11toD(float A)          {return A;}
inline  float CPP_IQ10toD(float A)          {return A;}
inline  float CPP_IQ9toD(float A)           {return A;}
inline  float CPP_IQ8toD(float A)           {return A;}
inline  float CPP_IQ7toD(float A)           {return A;}
inline  float CPP_IQ6toD(float A)           {return A;}
inline  float CPP_IQ5toD(float A)           {return A;}
inline  float CPP_IQ4toD(float A)           {return A;}
inline  float CPP_IQ3toD(float A)           {return A;}
inline  float CPP_IQ2toD(float A)           {return A;}
inline  float CPP_IQ1toD(float A)           {return A;}
inline  float CPP_IQtoD(float A)            {return A;}


/*
#define IQ30toD(A)              (A)
#define IQ29toD(A)              (A)
#define IQ28toD(A)              (A)
#define IQ27toD(A)              (A)
#define IQ26toD(A)              (A)
#define IQ25toD(A)              (A)
#define IQ24toD(A)              (A)
#define IQ23toD(A)              (A)
#define IQ22toD(A)              (A)
#define IQ21toD(A)              (A)
#define IQ20toD(A)              (A)
#define IQ19toD(A)              (A)
#define IQ18toD(A)              (A)
#define IQ17toD(A)              (A)
#define IQ16toD(A)              (A)
#define IQ15toD(A)              (A)
#define IQ14toD(A)              (A)
#define IQ13toD(A)              (A)
#define IQ12toD(A)              (A)
#define IQ11toD(A)              (A)
#define IQ10toD(A)              (A)
#define IQ9toD(A)               (A)
#define IQ8toD(A)               (A)
#define IQ7toD(A)               (A)
#define IQ6toD(A)               (A)
#define IQ5toD(A)               (A)
#define IQ4toD(A)               (A)
#define IQ3toD(A)               (A)
#define IQ2toD(A)               (A)
#define IQ1toD(A)               (A)
#define IQtoD(A)                (A)
*/
//*****************************************************************************
//
// Saturates an IQ number in a given range.
//
//*****************************************************************************
//#define IQsat(A, Pos, Neg)      _IQsat(A, Pos, Neg)
inline float CPP_IQsat(float A, float Pos, float Neg) {return _IQsat(A, Pos, Neg);}

//*****************************************************************************
//
// Converts an IQ number between the global IQ format and a specified IQ
// format.
//
//*****************************************************************************
inline float CPP_IQtoIQ30(float A)             {return A;} 
inline float CPP_IQ30toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ29(float A)             {return A;} 
inline float CPP_IQ29toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ28(float A)             {return A;} 
inline float CPP_IQ28toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ27(float A)             {return A;} 
inline float CPP_IQ27toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ26(float A)             {return A;} 
inline float CPP_IQ26toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ25(float A)             {return A;} 
inline float CPP_IQ25toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ24(float A)             {return A;} 
inline float CPP_IQ24toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ23(float A)             {return A;} 
inline float CPP_IQ23toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ22(float A)             {return A;} 
inline float CPP_IQ22toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ21(float A)             {return A;} 
inline float CPP_IQ21toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ20(float A)             {return A;} 
inline float CPP_IQ20toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ19(float A)             {return A;} 
inline float CPP_IQ19toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ18(float A)             {return A;} 
inline float CPP_IQ18toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ17(float A)             {return A;} 
inline float CPP_IQ17toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ16(float A)             {return A;} 
inline float CPP_IQ16toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ15(float A)             {return A;} 
inline float CPP_IQ15toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ14(float A)             {return A;} 
inline float CPP_IQ14toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ13(float A)             {return A;} 
inline float CPP_IQ13toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ12(float A)             {return A;} 
inline float CPP_IQ12toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ11(float A)             {return A;} 
inline float CPP_IQ11toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ10(float A)             {return A;} 
inline float CPP_IQ10toIQ(float A)             {return A;} 
inline float CPP_IQtoIQ9(float A)              {return A;} 
inline float CPP_IQ9toIQ(float A)              {return A;} 
inline float CPP_IQtoIQ8(float A)              {return A;} 
inline float CPP_IQ8toIQ(float A)              {return A;} 
inline float CPP_IQtoIQ7(float A)              {return A;} 
inline float CPP_IQ7toIQ(float A)              {return A;} 
inline float CPP_IQtoIQ6(float A)              {return A;} 
inline float CPP_IQ6toIQ(float A)              {return A;} 
inline float CPP_IQtoIQ5(float A)              {return A;} 
inline float CPP_IQ5toIQ(float A)              {return A;} 
inline float CPP_IQtoIQ4(float A)              {return A;} 
inline float CPP_IQ4toIQ(float A)              {return A;} 
inline float CPP_IQtoIQ3(float A)              {return A;} 
inline float CPP_IQ3toIQ(float A)              {return A;} 
inline float CPP_IQtoIQ2(float A)              {return A;} 
inline float CPP_IQ2toIQ(float A)              {return A;} 
inline float CPP_IQtoIQ1(float A)              {return A;} 
inline float CPP_IQ1toIQ(float A)              {return A;} 

/*
#define IQtoIQ30(A)             (A)
#define IQ30toIQ(A)             (A)
#define IQtoIQ29(A)             (A)
#define IQ29toIQ(A)             (A)
#define IQtoIQ28(A)             (A)
#define IQ28toIQ(A)             (A)
#define IQtoIQ27(A)             (A)
#define IQ27toIQ(A)             (A)
#define IQtoIQ26(A)             (A)
#define IQ26toIQ(A)             (A)
#define IQtoIQ25(A)             (A)
#define IQ25toIQ(A)             (A)
#define IQtoIQ24(A)             (A)
#define IQ24toIQ(A)             (A)
#define IQtoIQ23(A)             (A)
#define IQ23toIQ(A)             (A)
#define IQtoIQ22(A)             (A)
#define IQ22toIQ(A)             (A)
#define IQtoIQ21(A)             (A)
#define IQ21toIQ(A)             (A)
#define IQtoIQ20(A)             (A)
#define IQ20toIQ(A)             (A)
#define IQtoIQ19(A)             (A)
#define IQ19toIQ(A)             (A)
#define IQtoIQ18(A)             (A)
#define IQ18toIQ(A)             (A)
#define IQtoIQ17(A)             (A)
#define IQ17toIQ(A)             (A)
#define IQtoIQ16(A)             (A)
#define IQ16toIQ(A)             (A)
#define IQtoIQ15(A)             (A)
#define IQ15toIQ(A)             (A)
#define IQtoIQ14(A)             (A)
#define IQ14toIQ(A)             (A)
#define IQtoIQ13(A)             (A)
#define IQ13toIQ(A)             (A)
#define IQtoIQ12(A)             (A)
#define IQ12toIQ(A)             (A)
#define IQtoIQ11(A)             (A)
#define IQ11toIQ(A)             (A)
#define IQtoIQ10(A)             (A)
#define IQ10toIQ(A)             (A)
#define IQtoIQ9(A)              (A)
#define IQ9toIQ(A)              (A)
#define IQtoIQ8(A)              (A)
#define IQ8toIQ(A)              (A)
#define IQtoIQ7(A)              (A)
#define IQ7toIQ(A)              (A)
#define IQtoIQ6(A)              (A)
#define IQ6toIQ(A)              (A)
#define IQtoIQ5(A)              (A)
#define IQ5toIQ(A)              (A)
#define IQtoIQ4(A)              (A)
#define IQ4toIQ(A)              (A)
#define IQtoIQ3(A)              (A)
#define IQ3toIQ(A)              (A)
#define IQtoIQ2(A)              (A)
#define IQ2toIQ(A)              (A)
#define IQtoIQ1(A)              (A)
#define IQ1toIQ(A)              (A)
*/

//*****************************************************************************
//
// Converts a number between IQ format and 16-bit Qn format.
//
//*****************************************************************************

inline short CPP_IQtoQ15(float A)              {return (short)((long)((A) * (1 << 15)));}
inline float CPP_Q15toIQ(int A)                {return ((float)(A)) * (1.0f / (1 << 15));}
inline short CPP_IQtoQ14(float A)              {return (short)((long)((A) * (1 << 14)));}
inline float CPP_Q14toIQ(int A)                {return ((float)(A)) * (1.0f / (1 << 14));}
inline short CPP_IQtoQ13(float A)              {return (short)((long)((A) * (1 << 13)));}
inline float CPP_Q13toIQ(int A)                {return ((float)(A)) * (1.0f / (1 << 13));}
inline short CPP_IQtoQ12(float A)              {return (short)((long)((A) * (1 << 12)));}
inline float CPP_Q12toIQ(int A)                {return ((float)(A)) * (1.0f / (1 << 12));}
inline short CPP_IQtoQ11(float A)              {return (short)((long)((A) * (1 << 11)));}
inline float CPP_Q11toIQ(int A)                {return ((float)(A)) * (1.0f / (1 << 11));}
inline short CPP_IQtoQ10(float A)              {return (short)((long)((A) * (1 << 10)));}
inline float CPP_Q10toIQ(int A)                {return ((float)(A)) * (1.0f / (1 << 10));}
inline short CPP_IQtoQ9(float A)               {return (short)((long)((A) * (1 << 9)));}
inline float CPP_Q9toIQ(int A)                 {return ((float)(A)) * (1.0f / (1 << 9));}
inline short CPP_IQtoQ8(float A)               {return (short)((long)((A) * (1 << 8)));}
inline float CPP_Q8toIQ(int A)                 {return ((float)(A)) * (1.0f / (1 << 8));}
inline short CPP_IQtoQ7(float A)               {return (short)((long)((A) * (1 << 7)));}
inline float CPP_Q7toIQ(int A)                 {return ((float)(A)) * (1.0f / (1 << 7));}
inline short CPP_IQtoQ6(float A)               {return (short)((long)((A) * (1 << 6)));}
inline float CPP_Q6toIQ(int A)                 {return ((float)(A)) * (1.0f / (1 << 6));}
inline short CPP_IQtoQ5(float A)               {return (short)((long)((A) * (1 << 5)));}
inline float CPP_Q5toIQ(int A)                 {return ((float)(A)) * (1.0f / (1 << 5));}
inline short CPP_IQtoQ4(float A)               {return (short)((long)((A) * (1 << 4)));}
inline float CPP_Q4toIQ(int A)                 {return ((float)(A)) * (1.0f / (1 << 4));}
inline short CPP_IQtoQ3(float A)               {return (short)((long)((A) * (1 << 3)));}
inline float CPP_Q3toIQ(int A)                 {return ((float)(A)) * (1.0f / (1 << 3));}
inline short CPP_IQtoQ2(float A)               {return (short)((long)((A) * (1 << 2)));}
inline float CPP_Q2toIQ(int A)                 {return ((float)(A)) * (1.0f / (1 << 2));}
inline short CPP_IQtoQ1(float A)               {return (short)((long)((A) * (1 << 1)));}
inline float CPP_Q1toIQ(int A)                 {return ((float)(A)) * (1.0f / (1 << 1));}

/*
#define IQtoQ15(A)              ((short)((long)((A) * (1 << 15))))
#define Q15toIQ(A)              (((float)(A)) * (1.0 / (1 << 15)))
#define IQtoQ14(A)              ((short)((long)((A) * (1 << 14))))
#define Q14toIQ(A)              (((float)(A)) * (1.0 / (1 << 14)))
#define IQtoQ13(A)              ((short)((long)((A) * (1 << 13))))
#define Q13toIQ(A)              (((float)(A)) * (1.0 / (1 << 13)))
#define IQtoQ12(A)              ((short)((long)((A) * (1 << 12))))
#define Q12toIQ(A)              (((float)(A)) * (1.0 / (1 << 12)))
#define IQtoQ11(A)              ((short)((long)((A) * (1 << 11))))
#define Q11toIQ(A)              (((float)(A)) * (1.0 / (1 << 11)))
#define IQtoQ10(A)              ((short)((long)((A) * (1 << 10))))
#define Q10toIQ(A)              (((float)(A)) * (1.0 / (1 << 10)))
#define IQtoQ9(A)               ((short)((long)((A) * (1 << 9))))
#define Q9toIQ(A)               (((float)(A)) * (1.0 / (1 << 9)))
#define IQtoQ8(A)               ((short)((long)((A) * (1 << 8))))
#define Q8toIQ(A)               (((float)(A)) * (1.0 / (1 << 8)))
#define IQtoQ7(A)               ((short)((long)((A) * (1 << 7))))
#define Q7toIQ(A)               (((float)(A)) * (1.0 / (1 << 7)))
#define IQtoQ6(A)               ((short)((long)((A) * (1 << 6))))
#define Q6toIQ(A)               (((float)(A)) * (1.0 / (1 << 6)))
#define IQtoQ5(A)               ((short)((long)((A) * (1 << 5))))
#define Q5toIQ(A)               (((float)(A)) * (1.0 / (1 << 5)))
#define IQtoQ4(A)               ((short)((long)((A) * (1 << 4))))
#define Q4toIQ(A)               (((float)(A)) * (1.0 / (1 << 4)))
#define IQtoQ3(A)               ((short)((long)((A) * (1 << 3))))
#define Q3toIQ(A)               (((float)(A)) * (1.0 / (1 << 3)))
#define IQtoQ2(A)               ((short)((long)((A) * (1 << 2))))
#define Q2toIQ(A)               (((float)(A)) * (1.0 / (1 << 2)))
#define IQtoQ1(A)               ((short)((long)((A) * (1 << 1))))
#define Q1toIQ(A)               (((float)(A)) * (1.0 / (1 << 1)))
*/
//*****************************************************************************
//
// Multiplies two IQ numbers, with rounding.
//
//*****************************************************************************

inline float CPP_IQ30rmpy(float A, float B) {return A * B;}
inline float CPP_IQ29rmpy(float A, float B) {return A * B;}
inline float CPP_IQ28rmpy(float A, float B) {return A * B;}
inline float CPP_IQ27rmpy(float A, float B) {return A * B;}
inline float CPP_IQ26rmpy(float A, float B) {return A * B;}
inline float CPP_IQ25rmpy(float A, float B) {return A * B;}
inline float CPP_IQ24rmpy(float A, float B) {return A * B;}
inline float CPP_IQ23rmpy(float A, float B) {return A * B;}
inline float CPP_IQ22rmpy(float A, float B) {return A * B;}
inline float CPP_IQ21rmpy(float A, float B) {return A * B;}
inline float CPP_IQ20rmpy(float A, float B) {return A * B;}
inline float CPP_IQ19rmpy(float A, float B) {return A * B;}
inline float CPP_IQ18rmpy(float A, float B) {return A * B;}
inline float CPP_IQ17rmpy(float A, float B) {return A * B;}
inline float CPP_IQ16rmpy(float A, float B) {return A * B;}
inline float CPP_IQ15rmpy(float A, float B) {return A * B;}
inline float CPP_IQ14rmpy(float A, float B) {return A * B;}
inline float CPP_IQ13rmpy(float A, float B) {return A * B;}
inline float CPP_IQ12rmpy(float A, float B) {return A * B;}
inline float CPP_IQ11rmpy(float A, float B) {return A * B;}
inline float CPP_IQ10rmpy(float A, float B) {return A * B;}
inline float CPP_IQ9rmpy(float A, float B)  {return A * B;}
inline float CPP_IQ8rmpy(float A, float B)  {return A * B;}
inline float CPP_IQ7rmpy(float A, float B)  {return A * B;}
inline float CPP_IQ6rmpy(float A, float B)  {return A * B;}
inline float CPP_IQ5rmpy(float A, float B)  {return A * B;}
inline float CPP_IQ4rmpy(float A, float B)  {return A * B;}
inline float CPP_IQ3rmpy(float A, float B)  {return A * B;}
inline float CPP_IQ2rmpy(float A, float B)  {return A * B;}
inline float CPP_IQ1rmpy(float A, float B)  {return A * B;}
inline float CPP_IQrmpy(float A, float B)   {return A * B;}

/*
#define IQ30rmpy(A, B)          ((A) * (B))
#define IQ29rmpy(A, B)          ((A) * (B))
#define IQ28rmpy(A, B)          ((A) * (B))
#define IQ27rmpy(A, B)          ((A) * (B))
#define IQ26rmpy(A, B)          ((A) * (B))
#define IQ25rmpy(A, B)          ((A) * (B))
#define IQ24rmpy(A, B)          ((A) * (B))
#define IQ23rmpy(A, B)          ((A) * (B))
#define IQ22rmpy(A, B)          ((A) * (B))
#define IQ21rmpy(A, B)          ((A) * (B))
#define IQ20rmpy(A, B)          ((A) * (B))
#define IQ19rmpy(A, B)          ((A) * (B))
#define IQ18rmpy(A, B)          ((A) * (B))
#define IQ17rmpy(A, B)          ((A) * (B))
#define IQ16rmpy(A, B)          ((A) * (B))
#define IQ15rmpy(A, B)          ((A) * (B))
#define IQ14rmpy(A, B)          ((A) * (B))
#define IQ13rmpy(A, B)          ((A) * (B))
#define IQ12rmpy(A, B)          ((A) * (B))
#define IQ11rmpy(A, B)          ((A) * (B))
#define IQ10rmpy(A, B)          ((A) * (B))
#define IQ9rmpy(A, B)           ((A) * (B))
#define IQ8rmpy(A, B)           ((A) * (B))
#define IQ7rmpy(A, B)           ((A) * (B))
#define IQ6rmpy(A, B)           ((A) * (B))
#define IQ5rmpy(A, B)           ((A) * (B))
#define IQ4rmpy(A, B)           ((A) * (B))
#define IQ3rmpy(A, B)           ((A) * (B))
#define IQ2rmpy(A, B)           ((A) * (B))
#define IQ1rmpy(A, B)           ((A) * (B))
#define IQrmpy(A, B)            ((A) * (B))
*/

//*****************************************************************************
//
// Multiplies two IQ numbers, with rounding and saturation.
//
//*****************************************************************************

inline float CPP_IQ30rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ29rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ28rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ27rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ26rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ25rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ24rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ23rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ22rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ21rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ20rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ19rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ18rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ17rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ16rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ15rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ14rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ13rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ12rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ11rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ10rsmpy(float A, float B) {return A * B;}
inline float CPP_IQ9rsmpy(float A, float B)  {return A * B;}
inline float CPP_IQ8rsmpy(float A, float B)  {return A * B;}
inline float CPP_IQ7rsmpy(float A, float B)  {return A * B;}
inline float CPP_IQ6rsmpy(float A, float B)  {return A * B;}
inline float CPP_IQ5rsmpy(float A, float B)  {return A * B;}
inline float CPP_IQ4rsmpy(float A, float B)  {return A * B;}
inline float CPP_IQ3rsmpy(float A, float B)  {return A * B;}
inline float CPP_IQ2rsmpy(float A, float B)  {return A * B;}
inline float CPP_IQ1rsmpy(float A, float B)  {return A * B;}
inline float CPP_IQrsmpy(float A, float B)   {return A * B;}

/*
#define IQ30rsmpy(A, B)         ((A) * (B))
#define IQ29rsmpy(A, B)         ((A) * (B))
#define IQ28rsmpy(A, B)         ((A) * (B))
#define IQ27rsmpy(A, B)         ((A) * (B))
#define IQ26rsmpy(A, B)         ((A) * (B))
#define IQ25rsmpy(A, B)         ((A) * (B))
#define IQ24rsmpy(A, B)         ((A) * (B))
#define IQ23rsmpy(A, B)         ((A) * (B))
#define IQ22rsmpy(A, B)         ((A) * (B))
#define IQ21rsmpy(A, B)         ((A) * (B))
#define IQ20rsmpy(A, B)         ((A) * (B))
#define IQ19rsmpy(A, B)         ((A) * (B))
#define IQ18rsmpy(A, B)         ((A) * (B))
#define IQ17rsmpy(A, B)         ((A) * (B))
#define IQ16rsmpy(A, B)         ((A) * (B))
#define IQ15rsmpy(A, B)         ((A) * (B))
#define IQ14rsmpy(A, B)         ((A) * (B))
#define IQ13rsmpy(A, B)         ((A) * (B))
#define IQ12rsmpy(A, B)         ((A) * (B))
#define IQ11rsmpy(A, B)         ((A) * (B))
#define IQ10rsmpy(A, B)         ((A) * (B))
#define IQ9rsmpy(A, B)          ((A) * (B))
#define IQ8rsmpy(A, B)          ((A) * (B))
#define IQ7rsmpy(A, B)          ((A) * (B))
#define IQ6rsmpy(A, B)          ((A) * (B))
#define IQ5rsmpy(A, B)          ((A) * (B))
#define IQ4rsmpy(A, B)          ((A) * (B))
#define IQ3rsmpy(A, B)          ((A) * (B))
#define IQ2rsmpy(A, B)          ((A) * (B))
#define IQ1rsmpy(A, B)          ((A) * (B))
#define IQrsmpy(A, B)           ((A) * (B))
*/
//*****************************************************************************
//
// Computes the sin of an IQ number.
//
//*****************************************************************************

inline float CPP_IQ29sin(float A)   {return sin(A);}
inline float CPP_IQ28sin(float A)   {return sin(A);}
inline float CPP_IQ27sin(float A)   {return sin(A);}
inline float CPP_IQ26sin(float A)   {return sin(A);}
inline float CPP_IQ25sin(float A)   {return sin(A);}
inline float CPP_IQ24sin(float A)   {return sin(A);}
inline float CPP_IQ23sin(float A)   {return sin(A);}
inline float CPP_IQ22sin(float A)   {return sin(A);}
inline float CPP_IQ21sin(float A)   {return sin(A);}
inline float CPP_IQ20sin(float A)   {return sin(A);}
inline float CPP_IQ19sin(float A)   {return sin(A);}
inline float CPP_IQ18sin(float A)   {return sin(A);}
inline float CPP_IQ17sin(float A)   {return sin(A);}
inline float CPP_IQ16sin(float A)   {return sin(A);}
inline float CPP_IQ15sin(float A)   {return sin(A);}
inline float CPP_IQ14sin(float A)   {return sin(A);}
inline float CPP_IQ13sin(float A)   {return sin(A);}
inline float CPP_IQ12sin(float A)   {return sin(A);}
inline float CPP_IQ11sin(float A)   {return sin(A);}
inline float CPP_IQ10sin(float A)   {return sin(A);}
inline float CPP_IQ9sin(float A)    {return sin(A);}
inline float CPP_IQ8sin(float A)    {return sin(A);}
inline float CPP_IQ7sin(float A)    {return sin(A);}
inline float CPP_IQ6sin(float A)    {return sin(A);}
inline float CPP_IQ5sin(float A)    {return sin(A);}
inline float CPP_IQ4sin(float A)    {return sin(A);}
inline float CPP_IQ3sin(float A)    {return sin(A);}
inline float CPP_IQ2sin(float A)    {return sin(A);}
inline float CPP_IQ1sin(float A)    {return sin(A);}
inline float CPP_IQsin(float A)     {return sin(A);}
/*}
#define IQ29sin(A)              sin(A)
#define IQ28sin(A)              sin(A)
#define IQ27sin(A)              sin(A)
#define IQ26sin(A)              sin(A)
#define IQ25sin(A)              sin(A)
#define IQ24sin(A)              sin(A)
#define IQ23sin(A)              sin(A)
#define IQ22sin(A)              sin(A)
#define IQ21sin(A)              sin(A)
#define IQ20sin(A)              sin(A)
#define IQ19sin(A)              sin(A)
#define IQ18sin(A)              sin(A)
#define IQ17sin(A)              sin(A)
#define IQ16sin(A)              sin(A)
#define IQ15sin(A)              sin(A)
#define IQ14sin(A)              sin(A)
#define IQ13sin(A)              sin(A)
#define IQ12sin(A)              sin(A)
#define IQ11sin(A)              sin(A)
#define IQ10sin(A)              sin(A)
#define IQ9sin(A)               sin(A)
#define IQ8sin(A)               sin(A)
#define IQ7sin(A)               sin(A)
#define IQ6sin(A)               sin(A)
#define IQ5sin(A)               sin(A)
#define IQ4sin(A)               sin(A)
#define IQ3sin(A)               sin(A)
#define IQ2sin(A)               sin(A)
#define IQ1sin(A)               sin(A)
#define IQsin(A)                sin(A)
*/
//*****************************************************************************
//
// Computes the sin of an IQ number, using cycles per unit instead of radians.
//
//*****************************************************************************

inline float CPP_IQ29sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ28sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ27sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ26sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ25sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ24sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ23sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ22sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ21sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ20sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ19sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ18sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ17sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ16sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ15sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ14sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ13sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ12sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ11sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ10sinPU(float A)   {return sin((A) * 6.283185307f);}
inline float CPP_IQ9sinPU(float A)    {return sin((A) * 6.283185307f);}
inline float CPP_IQ8sinPU(float A)    {return sin((A) * 6.283185307f);}
inline float CPP_IQ7sinPU(float A)    {return sin((A) * 6.283185307f);}
inline float CPP_IQ6sinPU(float A)    {return sin((A) * 6.283185307f);}
inline float CPP_IQ5sinPU(float A)    {return sin((A) * 6.283185307f);}
inline float CPP_IQ4sinPU(float A)    {return sin((A) * 6.283185307f);}
inline float CPP_IQ3sinPU(float A)    {return sin((A) * 6.283185307f);}
inline float CPP_IQ2sinPU(float A)    {return sin((A) * 6.283185307f);}
inline float CPP_IQ1sinPU(float A)    {return sin((A) * 6.283185307f);}
inline float CPP_IQsinPU(float A)     {return sin((A) * 6.283185307f);}

/*
#define IQ30sinPU(A)            sin((A) * 6.283185307)
#define IQ29sinPU(A)            sin((A) * 6.283185307)
#define IQ28sinPU(A)            sin((A) * 6.283185307)
#define IQ27sinPU(A)            sin((A) * 6.283185307)
#define IQ26sinPU(A)            sin((A) * 6.283185307)
#define IQ25sinPU(A)            sin((A) * 6.283185307)
#define IQ24sinPU(A)            sin((A) * 6.283185307)
#define IQ23sinPU(A)            sin((A) * 6.283185307)
#define IQ22sinPU(A)            sin((A) * 6.283185307)
#define IQ21sinPU(A)            sin((A) * 6.283185307)
#define IQ20sinPU(A)            sin((A) * 6.283185307)
#define IQ19sinPU(A)            sin((A) * 6.283185307)
#define IQ18sinPU(A)            sin((A) * 6.283185307)
#define IQ17sinPU(A)            sin((A) * 6.283185307)
#define IQ16sinPU(A)            sin((A) * 6.283185307)
#define IQ15sinPU(A)            sin((A) * 6.283185307)
#define IQ14sinPU(A)            sin((A) * 6.283185307)
#define IQ13sinPU(A)            sin((A) * 6.283185307)
#define IQ12sinPU(A)            sin((A) * 6.283185307)
#define IQ11sinPU(A)            sin((A) * 6.283185307)
#define IQ10sinPU(A)            sin((A) * 6.283185307)
#define IQ9sinPU(A)             sin((A) * 6.283185307)
#define IQ8sinPU(A)             sin((A) * 6.283185307)
#define IQ7sinPU(A)             sin((A) * 6.283185307)
#define IQ6sinPU(A)             sin((A) * 6.283185307)
#define IQ5sinPU(A)             sin((A) * 6.283185307)
#define IQ4sinPU(A)             sin((A) * 6.283185307)
#define IQ3sinPU(A)             sin((A) * 6.283185307)
#define IQ2sinPU(A)             sin((A) * 6.283185307)
#define IQ1sinPU(A)             sin((A) * 6.283185307)
#define IQsinPU(A)              sin((A) * 6.283185307)
*/
//*****************************************************************************
//
// Computes the arcsin of an IQ number.
//
//*****************************************************************************

inline float CPP_IQ29asin(float A)   {return asin(A);}
inline float CPP_IQ28asin(float A)   {return asin(A);}
inline float CPP_IQ27asin(float A)   {return asin(A);}
inline float CPP_IQ26asin(float A)   {return asin(A);}
inline float CPP_IQ25asin(float A)   {return asin(A);}
inline float CPP_IQ24asin(float A)   {return asin(A);}
inline float CPP_IQ23asin(float A)   {return asin(A);}
inline float CPP_IQ22asin(float A)   {return asin(A);}
inline float CPP_IQ21asin(float A)   {return asin(A);}
inline float CPP_IQ20asin(float A)   {return asin(A);}
inline float CPP_IQ19asin(float A)   {return asin(A);}
inline float CPP_IQ18asin(float A)   {return asin(A);}
inline float CPP_IQ17asin(float A)   {return asin(A);}
inline float CPP_IQ16asin(float A)   {return asin(A);}
inline float CPP_IQ15asin(float A)   {return asin(A);}
inline float CPP_IQ14asin(float A)   {return asin(A);}
inline float CPP_IQ13asin(float A)   {return asin(A);}
inline float CPP_IQ12asin(float A)   {return asin(A);}
inline float CPP_IQ11asin(float A)   {return asin(A);}
inline float CPP_IQ10asin(float A)   {return asin(A);}
inline float CPP_IQ9asin(float A)    {return asin(A);}
inline float CPP_IQ8asin(float A)    {return asin(A);}
inline float CPP_IQ7asin(float A)    {return asin(A);}
inline float CPP_IQ6asin(float A)    {return asin(A);}
inline float CPP_IQ5asin(float A)    {return asin(A);}
inline float CPP_IQ4asin(float A)    {return asin(A);}
inline float CPP_IQ3asin(float A)    {return asin(A);}
inline float CPP_IQ2asin(float A)    {return asin(A);}
inline float CPP_IQ1asin(float A)    {return asin(A);}
inline float CPP_IQasin(float A)     {return asin(A);}

/*
#define IQ29asin(A)             asin(A)
#define IQ28asin(A)             asin(A)
#define IQ27asin(A)             asin(A)
#define IQ26asin(A)             asin(A)
#define IQ25asin(A)             asin(A)
#define IQ24asin(A)             asin(A)
#define IQ23asin(A)             asin(A)
#define IQ22asin(A)             asin(A)
#define IQ21asin(A)             asin(A)
#define IQ20asin(A)             asin(A)
#define IQ19asin(A)             asin(A)
#define IQ18asin(A)             asin(A)
#define IQ17asin(A)             asin(A)
#define IQ16asin(A)             asin(A)
#define IQ15asin(A)             asin(A)
#define IQ14asin(A)             asin(A)
#define IQ13asin(A)             asin(A)
#define IQ12asin(A)             asin(A)
#define IQ11asin(A)             asin(A)
#define IQ10asin(A)             asin(A)
#define IQ9asin(A)              asin(A)
#define IQ8asin(A)              asin(A)
#define IQ7asin(A)              asin(A)
#define IQ6asin(A)              asin(A)
#define IQ5asin(A)              asin(A)
#define IQ4asin(A)              asin(A)
#define IQ3asin(A)              asin(A)
#define IQ2asin(A)              asin(A)
#define IQ1asin(A)              asin(A)
#define IQasin(A)               asin(A)
*/
//*****************************************************************************
//
// Computes the cos of an IQ number.
//
//*****************************************************************************

inline float CPP_IQ29cos(float A)   {return cos(A);}
inline float CPP_IQ28cos(float A)   {return cos(A);}
inline float CPP_IQ27cos(float A)   {return cos(A);}
inline float CPP_IQ26cos(float A)   {return cos(A);}
inline float CPP_IQ25cos(float A)   {return cos(A);}
inline float CPP_IQ24cos(float A)   {return cos(A);}
inline float CPP_IQ23cos(float A)   {return cos(A);}
inline float CPP_IQ22cos(float A)   {return cos(A);}
inline float CPP_IQ21cos(float A)   {return cos(A);}
inline float CPP_IQ20cos(float A)   {return cos(A);}
inline float CPP_IQ19cos(float A)   {return cos(A);}
inline float CPP_IQ18cos(float A)   {return cos(A);}
inline float CPP_IQ17cos(float A)   {return cos(A);}
inline float CPP_IQ16cos(float A)   {return cos(A);}
inline float CPP_IQ15cos(float A)   {return cos(A);}
inline float CPP_IQ14cos(float A)   {return cos(A);}
inline float CPP_IQ13cos(float A)   {return cos(A);}
inline float CPP_IQ12cos(float A)   {return cos(A);}
inline float CPP_IQ11cos(float A)   {return cos(A);}
inline float CPP_IQ10cos(float A)   {return cos(A);}
inline float CPP_IQ9cos(float A)    {return cos(A);}
inline float CPP_IQ8cos(float A)    {return cos(A);}
inline float CPP_IQ7cos(float A)    {return cos(A);}
inline float CPP_IQ6cos(float A)    {return cos(A);}
inline float CPP_IQ5cos(float A)    {return cos(A);}
inline float CPP_IQ4cos(float A)    {return cos(A);}
inline float CPP_IQ3cos(float A)    {return cos(A);}
inline float CPP_IQ2cos(float A)    {return cos(A);}
inline float CPP_IQ1cos(float A)    {return cos(A);}
inline float CPP_IQcos(float A)     {return cos(A);}

/*
#define IQ29cos(A)              cos(A)
#define IQ28cos(A)              cos(A)
#define IQ27cos(A)              cos(A)
#define IQ26cos(A)              cos(A)
#define IQ25cos(A)              cos(A)
#define IQ24cos(A)              cos(A)
#define IQ23cos(A)              cos(A)
#define IQ22cos(A)              cos(A)
#define IQ21cos(A)              cos(A)
#define IQ20cos(A)              cos(A)
#define IQ19cos(A)              cos(A)
#define IQ18cos(A)              cos(A)
#define IQ17cos(A)              cos(A)
#define IQ16cos(A)              cos(A)
#define IQ15cos(A)              cos(A)
#define IQ14cos(A)              cos(A)
#define IQ13cos(A)              cos(A)
#define IQ12cos(A)              cos(A)
#define IQ11cos(A)              cos(A)
#define IQ10cos(A)              cos(A)
#define IQ9cos(A)               cos(A)
#define IQ8cos(A)               cos(A)
#define IQ7cos(A)               cos(A)
#define IQ6cos(A)               cos(A)
#define IQ5cos(A)               cos(A)
#define IQ4cos(A)               cos(A)
#define IQ3cos(A)               cos(A)
#define IQ2cos(A)               cos(A)
#define IQ1cos(A)               cos(A)
#define IQcos(A)                cos(A)
*/

//*****************************************************************************
//
// Computes the cos of an IQ number, using cycles per unit instead of radians.
//
//*****************************************************************************

inline float CPP_IQ30cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ29cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ28cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ27cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ26cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ25cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ24cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ23cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ22cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ21cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ20cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ19cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ18cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ17cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ16cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ15cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ14cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ13cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ12cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ11cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ10cosPU(float A)   {return cos((A) * 6.283185307f);}
inline float CPP_IQ9cosPU(float A)    {return cos((A) * 6.283185307f);}
inline float CPP_IQ8cosPU(float A)    {return cos((A) * 6.283185307f);}
inline float CPP_IQ7cosPU(float A)    {return cos((A) * 6.283185307f);}
inline float CPP_IQ6cosPU(float A)    {return cos((A) * 6.283185307f);}
inline float CPP_IQ5cosPU(float A)    {return cos((A) * 6.283185307f);}
inline float CPP_IQ4cosPU(float A)    {return cos((A) * 6.283185307f);}
inline float CPP_IQ3cosPU(float A)    {return cos((A) * 6.283185307f);}
inline float CPP_IQ2cosPU(float A)    {return cos((A) * 6.283185307f);}
inline float CPP_IQ1cosPU(float A)    {return cos((A) * 6.283185307f);}
inline float CPP_IQcosPU(float A)     {return cos((A) * 6.283185307f);}

/*
#define IQ30cosPU(A)            cos((A) * 6.283185307)
#define IQ29cosPU(A)            cos((A) * 6.283185307)
#define IQ28cosPU(A)            cos((A) * 6.283185307)
#define IQ27cosPU(A)            cos((A) * 6.283185307)
#define IQ26cosPU(A)            cos((A) * 6.283185307)
#define IQ25cosPU(A)            cos((A) * 6.283185307)
#define IQ24cosPU(A)            cos((A) * 6.283185307)
#define IQ23cosPU(A)            cos((A) * 6.283185307)
#define IQ22cosPU(A)            cos((A) * 6.283185307)
#define IQ21cosPU(A)            cos((A) * 6.283185307)
#define IQ20cosPU(A)            cos((A) * 6.283185307)
#define IQ19cosPU(A)            cos((A) * 6.283185307)
#define IQ18cosPU(A)            cos((A) * 6.283185307)
#define IQ17cosPU(A)            cos((A) * 6.283185307)
#define IQ16cosPU(A)            cos((A) * 6.283185307)
#define IQ15cosPU(A)            cos((A) * 6.283185307)
#define IQ14cosPU(A)            cos((A) * 6.283185307)
#define IQ13cosPU(A)            cos((A) * 6.283185307)
#define IQ12cosPU(A)            cos((A) * 6.283185307)
#define IQ11cosPU(A)            cos((A) * 6.283185307)
#define IQ10cosPU(A)            cos((A) * 6.283185307)
#define IQ9cosPU(A)             cos((A) * 6.283185307)
#define IQ8cosPU(A)             cos((A) * 6.283185307)
#define IQ7cosPU(A)             cos((A) * 6.283185307)
#define IQ6cosPU(A)             cos((A) * 6.283185307)
#define IQ5cosPU(A)             cos((A) * 6.283185307)
#define IQ4cosPU(A)             cos((A) * 6.283185307)
#define IQ3cosPU(A)             cos((A) * 6.283185307)
#define IQ2cosPU(A)             cos((A) * 6.283185307)
#define IQ1cosPU(A)             cos((A) * 6.283185307)
#define IQcosPU(A)              cos((A) * 6.283185307)
*/

//*****************************************************************************
//
// Computes the arccos of an IQ number.
//
//*****************************************************************************
inline float CPP_IQ29acos(float A)   {return acos(A);}
inline float CPP_IQ28acos(float A)   {return acos(A);}
inline float CPP_IQ27acos(float A)   {return acos(A);}
inline float CPP_IQ26acos(float A)   {return acos(A);}
inline float CPP_IQ25acos(float A)   {return acos(A);}
inline float CPP_IQ24acos(float A)   {return acos(A);}
inline float CPP_IQ23acos(float A)   {return acos(A);}
inline float CPP_IQ22acos(float A)   {return acos(A);}
inline float CPP_IQ21acos(float A)   {return acos(A);}
inline float CPP_IQ20acos(float A)   {return acos(A);}
inline float CPP_IQ19acos(float A)   {return acos(A);}
inline float CPP_IQ18acos(float A)   {return acos(A);}
inline float CPP_IQ17acos(float A)   {return acos(A);}
inline float CPP_IQ16acos(float A)   {return acos(A);}
inline float CPP_IQ15acos(float A)   {return acos(A);}
inline float CPP_IQ14acos(float A)   {return acos(A);}
inline float CPP_IQ13acos(float A)   {return acos(A);}
inline float CPP_IQ12acos(float A)   {return acos(A);}
inline float CPP_IQ11acos(float A)   {return acos(A);}
inline float CPP_IQ10acos(float A)   {return acos(A);}
inline float CPP_IQ9acos(float A)    {return acos(A);}
inline float CPP_IQ8acos(float A)    {return acos(A);}
inline float CPP_IQ7acos(float A)    {return acos(A);}
inline float CPP_IQ6acos(float A)    {return acos(A);}
inline float CPP_IQ5acos(float A)    {return acos(A);}
inline float CPP_IQ4acos(float A)    {return acos(A);}
inline float CPP_IQ3acos(float A)    {return acos(A);}
inline float CPP_IQ2acos(float A)    {return acos(A);}
inline float CPP_IQ1acos(float A)    {return acos(A);}
inline float CPP_IQacos(float A)     {return acos(A);}

/*
#define IQ29acos(A)             acos(A)
#define IQ28acos(A)             acos(A)
#define IQ27acos(A)             acos(A)
#define IQ26acos(A)             acos(A)
#define IQ25acos(A)             acos(A)
#define IQ24acos(A)             acos(A)
#define IQ23acos(A)             acos(A)
#define IQ22acos(A)             acos(A)
#define IQ21acos(A)             acos(A)
#define IQ20acos(A)             acos(A)
#define IQ19acos(A)             acos(A)
#define IQ18acos(A)             acos(A)
#define IQ17acos(A)             acos(A)
#define IQ16acos(A)             acos(A)
#define IQ15acos(A)             acos(A)
#define IQ14acos(A)             acos(A)
#define IQ13acos(A)             acos(A)
#define IQ12acos(A)             acos(A)
#define IQ11acos(A)             acos(A)
#define IQ10acos(A)             acos(A)
#define IQ9acos(A)              acos(A)
#define IQ8acos(A)              acos(A)
#define IQ7acos(A)              acos(A)
#define IQ6acos(A)              acos(A)
#define IQ5acos(A)              acos(A)
#define IQ4acos(A)              acos(A)
#define IQ3acos(A)              acos(A)
#define IQ2acos(A)              acos(A)
#define IQ1acos(A)              acos(A)
#define IQacos(A)               acos(A)
*/
//*****************************************************************************
//
// Computes the arctan of an IQ number.
//
//*****************************************************************************

inline float CPP_IQ29atan(float A)   {return atan(A);}
inline float CPP_IQ28atan(float A)   {return atan(A);}
inline float CPP_IQ27atan(float A)   {return atan(A);}
inline float CPP_IQ26atan(float A)   {return atan(A);}
inline float CPP_IQ25atan(float A)   {return atan(A);}
inline float CPP_IQ24atan(float A)   {return atan(A);}
inline float CPP_IQ23atan(float A)   {return atan(A);}
inline float CPP_IQ22atan(float A)   {return atan(A);}
inline float CPP_IQ21atan(float A)   {return atan(A);}
inline float CPP_IQ20atan(float A)   {return atan(A);}
inline float CPP_IQ19atan(float A)   {return atan(A);}
inline float CPP_IQ18atan(float A)   {return atan(A);}
inline float CPP_IQ17atan(float A)   {return atan(A);}
inline float CPP_IQ16atan(float A)   {return atan(A);}
inline float CPP_IQ15atan(float A)   {return atan(A);}
inline float CPP_IQ14atan(float A)   {return atan(A);}
inline float CPP_IQ13atan(float A)   {return atan(A);}
inline float CPP_IQ12atan(float A)   {return atan(A);}
inline float CPP_IQ11atan(float A)   {return atan(A);}
inline float CPP_IQ10atan(float A)   {return atan(A);}
inline float CPP_IQ9atan(float A)    {return atan(A);}
inline float CPP_IQ8atan(float A)    {return atan(A);}
inline float CPP_IQ7atan(float A)    {return atan(A);}
inline float CPP_IQ6atan(float A)    {return atan(A);}
inline float CPP_IQ5atan(float A)    {return atan(A);}
inline float CPP_IQ4atan(float A)    {return atan(A);}
inline float CPP_IQ3atan(float A)    {return atan(A);}
inline float CPP_IQ2atan(float A)    {return atan(A);}
inline float CPP_IQ1atan(float A)    {return atan(A);}
inline float CPP_IQatan(float A)     {return atan(A);}

/*
#define IQ29atan(A)             atan(A)
#define IQ28atan(A)             atan(A)
#define IQ27atan(A)             atan(A)
#define IQ26atan(A)             atan(A)
#define IQ25atan(A)             atan(A)
#define IQ24atan(A)             atan(A)
#define IQ23atan(A)             atan(A)
#define IQ22atan(A)             atan(A)
#define IQ21atan(A)             atan(A)
#define IQ20atan(A)             atan(A)
#define IQ19atan(A)             atan(A)
#define IQ18atan(A)             atan(A)
#define IQ17atan(A)             atan(A)
#define IQ16atan(A)             atan(A)
#define IQ15atan(A)             atan(A)
#define IQ14atan(A)             atan(A)
#define IQ13atan(A)             atan(A)
#define IQ12atan(A)             atan(A)
#define IQ11atan(A)             atan(A)
#define IQ10atan(A)             atan(A)
#define IQ9atan(A)              atan(A)
#define IQ8atan(A)              atan(A)
#define IQ7atan(A)              atan(A)
#define IQ6atan(A)              atan(A)
#define IQ5atan(A)              atan(A)
#define IQ4atan(A)              atan(A)
#define IQ3atan(A)              atan(A)
#define IQ2atan(A)              atan(A)
#define IQ1atan(A)              atan(A)
#define IQatan(A)               atan(A)
*/

//*****************************************************************************
//
// Computes the arctan of a coordinate specified by two IQ numbers.
//
//*****************************************************************************

inline float CPP_IQ29atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ28atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ27atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ26atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ25atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ24atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ23atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ22atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ21atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ20atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ19atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ18atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ17atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ16atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ15atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ14atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ13atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ12atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ11atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ10atan2(float A, float B)   {return atan2(A, B);}
inline float CPP_IQ9atan2(float A, float B)    {return atan2(A, B);}
inline float CPP_IQ8atan2(float A, float B)    {return atan2(A, B);}
inline float CPP_IQ7atan2(float A, float B)    {return atan2(A, B);}
inline float CPP_IQ6atan2(float A, float B)    {return atan2(A, B);}
inline float CPP_IQ5atan2(float A, float B)    {return atan2(A, B);}
inline float CPP_IQ4atan2(float A, float B)    {return atan2(A, B);}
inline float CPP_IQ3atan2(float A, float B)    {return atan2(A, B);}
inline float CPP_IQ2atan2(float A, float B)    {return atan2(A, B);}
inline float CPP_IQ1atan2(float A, float B)    {return atan2(A, B);}
inline float CPP_IQatan2(float A, float B)     {return atan2(A, B);}

/*
#define IQ30atan2(A, B)         atan2(A, B)
#define IQ29atan2(A, B)         atan2(A, B)
#define IQ28atan2(A, B)         atan2(A, B)
#define IQ27atan2(A, B)         atan2(A, B)
#define IQ26atan2(A, B)         atan2(A, B)
#define IQ25atan2(A, B)         atan2(A, B)
#define IQ24atan2(A, B)         atan2(A, B)
#define IQ23atan2(A, B)         atan2(A, B)
#define IQ22atan2(A, B)         atan2(A, B)
#define IQ21atan2(A, B)         atan2(A, B)
#define IQ20atan2(A, B)         atan2(A, B)
#define IQ19atan2(A, B)         atan2(A, B)
#define IQ18atan2(A, B)         atan2(A, B)
#define IQ17atan2(A, B)         atan2(A, B)
#define IQ16atan2(A, B)         atan2(A, B)
#define IQ15atan2(A, B)         atan2(A, B)
#define IQ14atan2(A, B)         atan2(A, B)
#define IQ13atan2(A, B)         atan2(A, B)
#define IQ12atan2(A, B)         atan2(A, B)
#define IQ11atan2(A, B)         atan2(A, B)
#define IQ10atan2(A, B)         atan2(A, B)
#define IQ9atan2(A, B)          atan2(A, B)
#define IQ8atan2(A, B)          atan2(A, B)
#define IQ7atan2(A, B)          atan2(A, B)
#define IQ6atan2(A, B)          atan2(A, B)
#define IQ5atan2(A, B)          atan2(A, B)
#define IQ4atan2(A, B)          atan2(A, B)
#define IQ3atan2(A, B)          atan2(A, B)
#define IQ2atan2(A, B)          atan2(A, B)
#define IQ1atan2(A, B)          atan2(A, B)
#define IQatan2(A, B)           atan2(A, B)
*/
//*****************************************************************************
//
// Computes the arctan of a coordinate specified by two IQ numbers, returning
// the value in cycles per unit instead of radians.
//
//*****************************************************************************

inline float CPP_IQ30atan2PU(float A, float B)   {return _IQ30atan2PU(A, B);}
inline float CPP_IQ29atan2PU(float A, float B)   {return _IQ29atan2PU(A, B);}
inline float CPP_IQ28atan2PU(float A, float B)   {return _IQ28atan2PU(A, B);}
inline float CPP_IQ27atan2PU(float A, float B)   {return _IQ27atan2PU(A, B);}
inline float CPP_IQ26atan2PU(float A, float B)   {return _IQ26atan2PU(A, B);}
inline float CPP_IQ25atan2PU(float A, float B)   {return _IQ25atan2PU(A, B);}
inline float CPP_IQ24atan2PU(float A, float B)   {return _IQ24atan2PU(A, B);}
inline float CPP_IQ23atan2PU(float A, float B)   {return _IQ23atan2PU(A, B);}
inline float CPP_IQ22atan2PU(float A, float B)   {return _IQ22atan2PU(A, B);}
inline float CPP_IQ21atan2PU(float A, float B)   {return _IQ21atan2PU(A, B);}
inline float CPP_IQ20atan2PU(float A, float B)   {return _IQ20atan2PU(A, B);}
inline float CPP_IQ19atan2PU(float A, float B)   {return _IQ19atan2PU(A, B);}
inline float CPP_IQ18atan2PU(float A, float B)   {return _IQ18atan2PU(A, B);}
inline float CPP_IQ17atan2PU(float A, float B)   {return _IQ17atan2PU(A, B);}
inline float CPP_IQ16atan2PU(float A, float B)   {return _IQ16atan2PU(A, B);}
inline float CPP_IQ15atan2PU(float A, float B)   {return _IQ15atan2PU(A, B);}
inline float CPP_IQ14atan2PU(float A, float B)   {return _IQ14atan2PU(A, B);}
inline float CPP_IQ13atan2PU(float A, float B)   {return _IQ13atan2PU(A, B);}
inline float CPP_IQ12atan2PU(float A, float B)   {return _IQ12atan2PU(A, B);}
inline float CPP_IQ11atan2PU(float A, float B)   {return _IQ11atan2PU(A, B);}
inline float CPP_IQ10atan2PU(float A, float B)   {return _IQ10atan2PU(A, B);}
inline float CPP_IQ9atan2PU(float A, float B)    {return _IQ9atan2PU(A, B);}
inline float CPP_IQ8atan2PU(float A, float B)    {return _IQ8atan2PU(A, B);}
inline float CPP_IQ7atan2PU(float A, float B)    {return _IQ7atan2PU(A, B);}
inline float CPP_IQ6atan2PU(float A, float B)    {return _IQ6atan2PU(A, B);}
inline float CPP_IQ5atan2PU(float A, float B)    {return _IQ5atan2PU(A, B);}
inline float CPP_IQ4atan2PU(float A, float B)    {return _IQ4atan2PU(A, B);}
inline float CPP_IQ3atan2PU(float A, float B)    {return _IQ3atan2PU(A, B);}
inline float CPP_IQ2atan2PU(float A, float B)    {return _IQ2atan2PU(A, B);}
inline float CPP_IQ1atan2PU(float A, float B)    {return _IQ1atan2PU(A, B);}
inline float CPP_IQatan2PU(float A, float B)     {return _IQatan2PU(A, B);}

/*
#define IQ30atan2PU(A, B)       _IQ30atan2PU(A, B)
#define IQ29atan2PU(A, B)       _IQ29atan2PU(A, B)
#define IQ28atan2PU(A, B)       _IQ28atan2PU(A, B)
#define IQ27atan2PU(A, B)       _IQ27atan2PU(A, B)
#define IQ26atan2PU(A, B)       _IQ26atan2PU(A, B)
#define IQ25atan2PU(A, B)       _IQ25atan2PU(A, B)
#define IQ24atan2PU(A, B)       _IQ24atan2PU(A, B)
#define IQ23atan2PU(A, B)       _IQ23atan2PU(A, B)
#define IQ22atan2PU(A, B)       _IQ22atan2PU(A, B)
#define IQ21atan2PU(A, B)       _IQ21atan2PU(A, B)
#define IQ20atan2PU(A, B)       _IQ20atan2PU(A, B)
#define IQ19atan2PU(A, B)       _IQ19atan2PU(A, B)
#define IQ18atan2PU(A, B)       _IQ18atan2PU(A, B)
#define IQ17atan2PU(A, B)       _IQ17atan2PU(A, B)
#define IQ16atan2PU(A, B)       _IQ16atan2PU(A, B)
#define IQ15atan2PU(A, B)       _IQ15atan2PU(A, B)
#define IQ14atan2PU(A, B)       _IQ14atan2PU(A, B)
#define IQ13atan2PU(A, B)       _IQ13atan2PU(A, B)
#define IQ12atan2PU(A, B)       _IQ12atan2PU(A, B)
#define IQ11atan2PU(A, B)       _IQ11atan2PU(A, B)
#define IQ10atan2PU(A, B)       _IQ10atan2PU(A, B)
#define IQ9atan2PU(A, B)        _IQ9atan2PU(A, B)
#define IQ8atan2PU(A, B)        _IQ8atan2PU(A, B)
#define IQ7atan2PU(A, B)        _IQ7atan2PU(A, B)
#define IQ6atan2PU(A, B)        _IQ6atan2PU(A, B)
#define IQ5atan2PU(A, B)        _IQ5atan2PU(A, B)
#define IQ4atan2PU(A, B)        _IQ4atan2PU(A, B)
#define IQ3atan2PU(A, B)        _IQ3atan2PU(A, B)
#define IQ2atan2PU(A, B)        _IQ2atan2PU(A, B)
#define IQ1atan2PU(A, B)        _IQ1atan2PU(A, B)
#define IQatan2PU(A, B)         _IQ_QQ_atan2PU(A, B)
*/

//*****************************************************************************
//
// Computes the square root of an IQ number.
//
//*****************************************************************************

inline float CPP_IQ30sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ29sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ28sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ27sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ26sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ25sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ24sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ23sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ22sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ21sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ20sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ19sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ18sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ17sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ16sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ15sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ14sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ13sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ12sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ11sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ10sqrt(float A)   {return sqrt(A);}
inline float CPP_IQ9sqrt(float A)    {return sqrt(A);}
inline float CPP_IQ8sqrt(float A)    {return sqrt(A);}
inline float CPP_IQ7sqrt(float A)    {return sqrt(A);}
inline float CPP_IQ6sqrt(float A)    {return sqrt(A);}
inline float CPP_IQ5sqrt(float A)    {return sqrt(A);}
inline float CPP_IQ4sqrt(float A)    {return sqrt(A);}
inline float CPP_IQ3sqrt(float A)    {return sqrt(A);}
inline float CPP_IQ2sqrt(float A)    {return sqrt(A);}
inline float CPP_IQ1sqrt(float A)    {return sqrt(A);}
inline float CPP_IQsqrt(float A)     {return sqrt(A);}

/*
#define IQ30sqrt(A)             sqrt(A)
#define IQ29sqrt(A)             sqrt(A)
#define IQ28sqrt(A)             sqrt(A)
#define IQ27sqrt(A)             sqrt(A)
#define IQ26sqrt(A)             sqrt(A)
#define IQ25sqrt(A)             sqrt(A)
#define IQ24sqrt(A)             sqrt(A)
#define IQ23sqrt(A)             sqrt(A)
#define IQ22sqrt(A)             sqrt(A)
#define IQ21sqrt(A)             sqrt(A)
#define IQ20sqrt(A)             sqrt(A)
#define IQ19sqrt(A)             sqrt(A)
#define IQ18sqrt(A)             sqrt(A)
#define IQ17sqrt(A)             sqrt(A)
#define IQ16sqrt(A)             sqrt(A)
#define IQ15sqrt(A)             sqrt(A)
#define IQ14sqrt(A)             sqrt(A)
#define IQ13sqrt(A)             sqrt(A)
#define IQ12sqrt(A)             sqrt(A)
#define IQ11sqrt(A)             sqrt(A)
#define IQ10sqrt(A)             sqrt(A)
#define IQ9sqrt(A)              sqrt(A)
#define IQ8sqrt(A)              sqrt(A)
#define IQ7sqrt(A)              sqrt(A)
#define IQ6sqrt(A)              sqrt(A)
#define IQ5sqrt(A)              sqrt(A)
#define IQ4sqrt(A)              sqrt(A)
#define IQ3sqrt(A)              sqrt(A)
#define IQ2sqrt(A)              sqrt(A)
#define IQ1sqrt(A)              sqrt(A)
#define IQsqrt(A)               sqrt(A)
*/

//*****************************************************************************
//
// Computes 1 over the square root of an IQ number.
//
//*****************************************************************************

inline float CPP_IQ30isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ29isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ28isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ27isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ26isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ25isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ24isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ23isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ22isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ21isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ20isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ19isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ18isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ17isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ16isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ15isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ14isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ13isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ12isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ11isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ10isqrt(float A)   {return 1.0f / sqrt(A);}
inline float CPP_IQ9isqrt(float A)    {return 1.0f / sqrt(A);}
inline float CPP_IQ8isqrt(float A)    {return 1.0f / sqrt(A);}
inline float CPP_IQ7isqrt(float A)    {return 1.0f / sqrt(A);}
inline float CPP_IQ6isqrt(float A)    {return 1.0f / sqrt(A);}
inline float CPP_IQ5isqrt(float A)    {return 1.0f / sqrt(A);}
inline float CPP_IQ4isqrt(float A)    {return 1.0f / sqrt(A);}
inline float CPP_IQ3isqrt(float A)    {return 1.0f / sqrt(A);}
inline float CPP_IQ2isqrt(float A)    {return 1.0f / sqrt(A);}
inline float CPP_IQ1isqrt(float A)    {return 1.0f / sqrt(A);}
inline float CPP_IQisqrt(float A)     {return 1.0f / sqrt(A);}

/*
#define IQ30isqrt(A)            (1.0 / sqrt(A))
#define IQ29isqrt(A)            (1.0 / sqrt(A))
#define IQ28isqrt(A)            (1.0 / sqrt(A))
#define IQ27isqrt(A)            (1.0 / sqrt(A))
#define IQ26isqrt(A)            (1.0 / sqrt(A))
#define IQ25isqrt(A)            (1.0 / sqrt(A))
#define IQ24isqrt(A)            (1.0 / sqrt(A))
#define IQ23isqrt(A)            (1.0 / sqrt(A))
#define IQ22isqrt(A)            (1.0 / sqrt(A))
#define IQ21isqrt(A)            (1.0 / sqrt(A))
#define IQ20isqrt(A)            (1.0 / sqrt(A))
#define IQ19isqrt(A)            (1.0 / sqrt(A))
#define IQ18isqrt(A)            (1.0 / sqrt(A))
#define IQ17isqrt(A)            (1.0 / sqrt(A))
#define IQ16isqrt(A)            (1.0 / sqrt(A))
#define IQ15isqrt(A)            (1.0 / sqrt(A))
#define IQ14isqrt(A)            (1.0 / sqrt(A))
#define IQ13isqrt(A)            (1.0 / sqrt(A))
#define IQ12isqrt(A)            (1.0 / sqrt(A))
#define IQ11isqrt(A)            (1.0 / sqrt(A))
#define IQ10isqrt(A)            (1.0 / sqrt(A))
#define IQ9isqrt(A)             (1.0 / sqrt(A))
#define IQ8isqrt(A)             (1.0 / sqrt(A))
#define IQ7isqrt(A)             (1.0 / sqrt(A))
#define IQ6isqrt(A)             (1.0 / sqrt(A))
#define IQ5isqrt(A)             (1.0 / sqrt(A))
#define IQ4isqrt(A)             (1.0 / sqrt(A))
#define IQ3isqrt(A)             (1.0 / sqrt(A))
#define IQ2isqrt(A)             (1.0 / sqrt(A))
#define IQ1isqrt(A)             (1.0 / sqrt(A))
#define IQisqrt(A)              (1.0 / sqrt(A))
*/

//*****************************************************************************
//
// Computes e^x of an IQ number.
//
//*****************************************************************************

inline float CPP_IQ30exp(float A)   {return exp(A);}
inline float CPP_IQ29exp(float A)   {return exp(A);}
inline float CPP_IQ28exp(float A)   {return exp(A);}
inline float CPP_IQ27exp(float A)   {return exp(A);}
inline float CPP_IQ26exp(float A)   {return exp(A);}
inline float CPP_IQ25exp(float A)   {return exp(A);}
inline float CPP_IQ24exp(float A)   {return exp(A);}
inline float CPP_IQ23exp(float A)   {return exp(A);}
inline float CPP_IQ22exp(float A)   {return exp(A);}
inline float CPP_IQ21exp(float A)   {return exp(A);}
inline float CPP_IQ20exp(float A)   {return exp(A);}
inline float CPP_IQ19exp(float A)   {return exp(A);}
inline float CPP_IQ18exp(float A)   {return exp(A);}
inline float CPP_IQ17exp(float A)   {return exp(A);}
inline float CPP_IQ16exp(float A)   {return exp(A);}
inline float CPP_IQ15exp(float A)   {return exp(A);}
inline float CPP_IQ14exp(float A)   {return exp(A);}
inline float CPP_IQ13exp(float A)   {return exp(A);}
inline float CPP_IQ12exp(float A)   {return exp(A);}
inline float CPP_IQ11exp(float A)   {return exp(A);}
inline float CPP_IQ10exp(float A)   {return exp(A);}
inline float CPP_IQ9exp(float A)    {return exp(A);}
inline float CPP_IQ8exp(float A)    {return exp(A);}
inline float CPP_IQ7exp(float A)    {return exp(A);}
inline float CPP_IQ6exp(float A)    {return exp(A);}
inline float CPP_IQ5exp(float A)    {return exp(A);}
inline float CPP_IQ4exp(float A)    {return exp(A);}
inline float CPP_IQ3exp(float A)    {return exp(A);}
inline float CPP_IQ2exp(float A)    {return exp(A);}
inline float CPP_IQ1exp(float A)    {return exp(A);}
inline float CPP_IQexp(float A)     {return exp(A);}

/*
#define IQ30exp(A)              exp(A)
#define IQ29exp(A)              exp(A)
#define IQ28exp(A)              exp(A)
#define IQ27exp(A)              exp(A)
#define IQ26exp(A)              exp(A)
#define IQ25exp(A)              exp(A)
#define IQ24exp(A)              exp(A)
#define IQ23exp(A)              exp(A)
#define IQ22exp(A)              exp(A)
#define IQ21exp(A)              exp(A)
#define IQ20exp(A)              exp(A)
#define IQ19exp(A)              exp(A)
#define IQ18exp(A)              exp(A)
#define IQ17exp(A)              exp(A)
#define IQ16exp(A)              exp(A)
#define IQ15exp(A)              exp(A)
#define IQ14exp(A)              exp(A)
#define IQ13exp(A)              exp(A)
#define IQ12exp(A)              exp(A)
#define IQ11exp(A)              exp(A)
#define IQ10exp(A)              exp(A)
#define IQ9exp(A)               exp(A)
#define IQ8exp(A)               exp(A)
#define IQ7exp(A)               exp(A)
#define IQ6exp(A)               exp(A)
#define IQ5exp(A)               exp(A)
#define IQ4exp(A)               exp(A)
#define IQ3exp(A)               exp(A)
#define IQ2exp(A)               exp(A)
#define IQ1exp(A)               exp(A)
#define IQexp(A)                exp(A)
*/

//*****************************************************************************
//
// Computes 2^x of an IQ number.
//
//*****************************************************************************

inline float CPP_IQ30exp2(float A)   {return exp2(A);}
inline float CPP_IQ29exp2(float A)   {return exp2(A);}
inline float CPP_IQ28exp2(float A)   {return exp2(A);}
inline float CPP_IQ27exp2(float A)   {return exp2(A);}
inline float CPP_IQ26exp2(float A)   {return exp2(A);}
inline float CPP_IQ25exp2(float A)   {return exp2(A);}
inline float CPP_IQ24exp2(float A)   {return exp2(A);}
inline float CPP_IQ23exp2(float A)   {return exp2(A);}
inline float CPP_IQ22exp2(float A)   {return exp2(A);}
inline float CPP_IQ21exp2(float A)   {return exp2(A);}
inline float CPP_IQ20exp2(float A)   {return exp2(A);}
inline float CPP_IQ19exp2(float A)   {return exp2(A);}
inline float CPP_IQ18exp2(float A)   {return exp2(A);}
inline float CPP_IQ17exp2(float A)   {return exp2(A);}
inline float CPP_IQ16exp2(float A)   {return exp2(A);}
inline float CPP_IQ15exp2(float A)   {return exp2(A);}
inline float CPP_IQ14exp2(float A)   {return exp2(A);}
inline float CPP_IQ13exp2(float A)   {return exp2(A);}
inline float CPP_IQ12exp2(float A)   {return exp2(A);}
inline float CPP_IQ11exp2(float A)   {return exp2(A);}
inline float CPP_IQ10exp2(float A)   {return exp2(A);}
inline float CPP_IQ9exp2(float A)    {return exp2(A);}
inline float CPP_IQ8exp2(float A)    {return exp2(A);}
inline float CPP_IQ7exp2(float A)    {return exp2(A);}
inline float CPP_IQ6exp2(float A)    {return exp2(A);}
inline float CPP_IQ5exp2(float A)    {return exp2(A);}
inline float CPP_IQ4exp2(float A)    {return exp2(A);}
inline float CPP_IQ3exp2(float A)    {return exp2(A);}
inline float CPP_IQ2exp2(float A)    {return exp2(A);}
inline float CPP_IQ1exp2(float A)    {return exp2(A);}
inline float CPP_IQexp2(float A)     {return exp2(A);}

/*
#define IQ30exp2(A)             exp2(A)
#define IQ29exp2(A)             exp2(A)
#define IQ28exp2(A)             exp2(A)
#define IQ27exp2(A)             exp2(A)
#define IQ26exp2(A)             exp2(A)
#define IQ25exp2(A)             exp2(A)
#define IQ24exp2(A)             exp2(A)
#define IQ23exp2(A)             exp2(A)
#define IQ22exp2(A)             exp2(A)
#define IQ21exp2(A)             exp2(A)
#define IQ20exp2(A)             exp2(A)
#define IQ19exp2(A)             exp2(A)
#define IQ18exp2(A)             exp2(A)
#define IQ17exp2(A)             exp2(A)
#define IQ16exp2(A)             exp2(A)
#define IQ15exp2(A)             exp2(A)
#define IQ14exp2(A)             exp2(A)
#define IQ13exp2(A)             exp2(A)
#define IQ12exp2(A)             exp2(A)
#define IQ11exp2(A)             exp2(A)
#define IQ10exp2(A)             exp2(A)
#define IQ9exp2(A)              exp2(A)
#define IQ8exp2(A)              exp2(A)
#define IQ7exp2(A)              exp2(A)
#define IQ6exp2(A)              exp2(A)
#define IQ5exp2(A)              exp2(A)
#define IQ4exp2(A)              exp2(A)
#define IQ3exp2(A)              exp2(A)
#define IQ2exp2(A)              exp2(A)
#define IQ1exp2(A)              exp2(A)
#define IQexp2(A)               exp2(A)
*/

//*****************************************************************************
//
// Returns the integer portion of an IQ number.
//
//*****************************************************************************


inline long IQ30int(float A)   {return long(A);}
inline long IQ29int(float A)   {return long(A);}
inline long IQ28int(float A)   {return long(A);}
inline long IQ27int(float A)   {return long(A);}
inline long IQ26int(float A)   {return long(A);}
inline long IQ25int(float A)   {return long(A);}
inline long IQ24int(float A)   {return long(A);}
inline long IQ23int(float A)   {return long(A);}
inline long IQ22int(float A)   {return long(A);}
inline long IQ21int(float A)   {return long(A);}
inline long IQ20int(float A)   {return long(A);}
inline long IQ19int(float A)   {return long(A);}
inline long IQ18int(float A)   {return long(A);}
inline long IQ17int(float A)   {return long(A);}
inline long IQ16int(float A)   {return long(A);}
inline long IQ15int(float A)   {return long(A);}
inline long IQ14int(float A)   {return long(A);}
inline long IQ13int(float A)   {return long(A);}
inline long IQ12int(float A)   {return long(A);}
inline long IQ11int(float A)   {return long(A);}
inline long IQ10int(float A)   {return long(A);}
inline long IQ9int(float A)    {return long(A);}
inline long IQ8int(float A)    {return long(A);}
inline long IQ7int(float A)    {return long(A);}
inline long IQ6int(float A)    {return long(A);}
inline long IQ5int(float A)    {return long(A);}
inline long IQ4int(float A)    {return long(A);}
inline long IQ3int(float A)    {return long(A);}
inline long IQ2int(float A)    {return long(A);}
inline long IQ1int(float A)    {return long(A);}
inline long IQint(float A)     {return long(A);}


/*
#define IQ30int(A)              ((long)(A))
#define IQ29int(A)              ((long)(A))
#define IQ28int(A)              ((long)(A))
#define IQ27int(A)              ((long)(A))
#define IQ26int(A)              ((long)(A))
#define IQ25int(A)              ((long)(A))
#define IQ24int(A)              ((long)(A))
#define IQ23int(A)              ((long)(A))
#define IQ22int(A)              ((long)(A))
#define IQ21int(A)              ((long)(A))
#define IQ20int(A)              ((long)(A))
#define IQ19int(A)              ((long)(A))
#define IQ18int(A)              ((long)(A))
#define IQ17int(A)              ((long)(A))
#define IQ16int(A)              ((long)(A))
#define IQ15int(A)              ((long)(A))
#define IQ14int(A)              ((long)(A))
#define IQ13int(A)              ((long)(A))
#define IQ12int(A)              ((long)(A))
#define IQ11int(A)              ((long)(A))
#define IQ10int(A)              ((long)(A))
#define IQ9int(A)               ((long)(A))
#define IQ8int(A)               ((long)(A))
#define IQ7int(A)               ((long)(A))
#define IQ6int(A)               ((long)(A))
#define IQ5int(A)               ((long)(A))
#define IQ4int(A)               ((long)(A))
#define IQ3int(A)               ((long)(A))
#define IQ2int(A)               ((long)(A))
#define IQ1int(A)               ((long)(A))
#define IQint(A)                ((long)(A))
*/

//*****************************************************************************
//
// Computes the fractional portion of an IQ number.
//
//*****************************************************************************

inline float CPP_IQ30frac(float A)   {return A - float(long(A));}
inline float CPP_IQ29frac(float A)   {return A - float(long(A));}
inline float CPP_IQ28frac(float A)   {return A - float(long(A));}
inline float CPP_IQ27frac(float A)   {return A - float(long(A));}
inline float CPP_IQ26frac(float A)   {return A - float(long(A));}
inline float CPP_IQ25frac(float A)   {return A - float(long(A));}
inline float CPP_IQ24frac(float A)   {return A - float(long(A));}
inline float CPP_IQ23frac(float A)   {return A - float(long(A));}
inline float CPP_IQ22frac(float A)   {return A - float(long(A));}
inline float CPP_IQ21frac(float A)   {return A - float(long(A));}
inline float CPP_IQ20frac(float A)   {return A - float(long(A));}
inline float CPP_IQ19frac(float A)   {return A - float(long(A));}
inline float CPP_IQ18frac(float A)   {return A - float(long(A));}
inline float CPP_IQ17frac(float A)   {return A - float(long(A));}
inline float CPP_IQ16frac(float A)   {return A - float(long(A));}
inline float CPP_IQ15frac(float A)   {return A - float(long(A));}
inline float CPP_IQ14frac(float A)   {return A - float(long(A));}
inline float CPP_IQ13frac(float A)   {return A - float(long(A));}
inline float CPP_IQ12frac(float A)   {return A - float(long(A));}
inline float CPP_IQ11frac(float A)   {return A - float(long(A));}
inline float CPP_IQ10frac(float A)   {return A - float(long(A));}
inline float CPP_IQ9frac(float A)    {return A - float(long(A));}
inline float CPP_IQ8frac(float A)    {return A - float(long(A));}
inline float CPP_IQ7frac(float A)    {return A - float(long(A));}
inline float CPP_IQ6frac(float A)    {return A - float(long(A));}
inline float CPP_IQ5frac(float A)    {return A - float(long(A));}
inline float CPP_IQ4frac(float A)    {return A - float(long(A));}
inline float CPP_IQ3frac(float A)    {return A - float(long(A));}
inline float CPP_IQ2frac(float A)    {return A - float(long(A));}
inline float CPP_IQ1frac(float A)    {return A - float(long(A));}
inline float CPP_IQfrac(float A)     {return A - float(long(A));}

/*
#define IQ30frac(A)             ((A) - (float)((long)(A)))
#define IQ29frac(A)             ((A) - (float)((long)(A)))
#define IQ28frac(A)             ((A) - (float)((long)(A)))
#define IQ27frac(A)             ((A) - (float)((long)(A)))
#define IQ26frac(A)             ((A) - (float)((long)(A)))
#define IQ25frac(A)             ((A) - (float)((long)(A)))
#define IQ24frac(A)             ((A) - (float)((long)(A)))
#define IQ23frac(A)             ((A) - (float)((long)(A)))
#define IQ22frac(A)             ((A) - (float)((long)(A)))
#define IQ21frac(A)             ((A) - (float)((long)(A)))
#define IQ20frac(A)             ((A) - (float)((long)(A)))
#define IQ19frac(A)             ((A) - (float)((long)(A)))
#define IQ18frac(A)             ((A) - (float)((long)(A)))
#define IQ17frac(A)             ((A) - (float)((long)(A)))
#define IQ16frac(A)             ((A) - (float)((long)(A)))
#define IQ15frac(A)             ((A) - (float)((long)(A)))
#define IQ14frac(A)             ((A) - (float)((long)(A)))
#define IQ13frac(A)             ((A) - (float)((long)(A)))
#define IQ12frac(A)             ((A) - (float)((long)(A)))
#define IQ11frac(A)             ((A) - (float)((long)(A)))
#define IQ10frac(A)             ((A) - (float)((long)(A)))
#define IQ9frac(A)              ((A) - (float)((long)(A)))
#define IQ8frac(A)              ((A) - (float)((long)(A)))
#define IQ7frac(A)              ((A) - (float)((long)(A)))
#define IQ6frac(A)              ((A) - (float)((long)(A)))
#define IQ5frac(A)              ((A) - (float)((long)(A)))
#define IQ4frac(A)              ((A) - (float)((long)(A)))
#define IQ3frac(A)              ((A) - (float)((long)(A)))
#define IQ2frac(A)              ((A) - (float)((long)(A)))
#define IQ1frac(A)              ((A) - (float)((long)(A)))
#define IQfrac(A)               ((A) - (float)((long)(A)))
*/
//*****************************************************************************
//
// Multiplies two IQ numbers in the specified IQ formats, returning the result
// in another IQ format.
//
//*****************************************************************************

inline float CPP_IQ30mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ29mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ28mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ27mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ26mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ25mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ24mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ23mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ22mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ21mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ20mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ19mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ18mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ17mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ16mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ15mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ14mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ13mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ12mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ11mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ10mpyIQX(float A, long IQA, float B, long IQB)   {return A * B;}
inline float CPP_IQ9mpyIQX(float A, long IQA, float B, long IQB)    {return A * B;}
inline float CPP_IQ8mpyIQX(float A, long IQA, float B, long IQB)    {return A * B;}
inline float CPP_IQ7mpyIQX(float A, long IQA, float B, long IQB)    {return A * B;}
inline float CPP_IQ6mpyIQX(float A, long IQA, float B, long IQB)    {return A * B;}
inline float CPP_IQ5mpyIQX(float A, long IQA, float B, long IQB)    {return A * B;}
inline float CPP_IQ4mpyIQX(float A, long IQA, float B, long IQB)    {return A * B;}
inline float CPP_IQ3mpyIQX(float A, long IQA, float B, long IQB)    {return A * B;}
inline float CPP_IQ2mpyIQX(float A, long IQA, float B, long IQB)    {return A * B;}
inline float CPP_IQ1mpyIQX(float A, long IQA, float B, long IQB)    {return A * B;}
inline float CPP_IQmpyIQX(float A, long IQA, float B, long IQB)     {return A * B;}

/*
#define IQ30mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ29mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ28mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ27mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ26mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ25mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ24mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ23mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ22mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ21mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ20mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ19mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ18mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ17mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ16mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ15mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ14mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ13mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ12mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ11mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ10mpyIQX(A, IQA, B, IQB)  ((A) * (B))
#define IQ9mpyIQX(A, IQA, B, IQB)   ((A) * (B))
#define IQ8mpyIQX(A, IQA, B, IQB)   ((A) * (B))
#define IQ7mpyIQX(A, IQA, B, IQB)   ((A) * (B))
#define IQ6mpyIQX(A, IQA, B, IQB)   ((A) * (B))
#define IQ5mpyIQX(A, IQA, B, IQB)   ((A) * (B))
#define IQ4mpyIQX(A, IQA, B, IQB)   ((A) * (B))
#define IQ3mpyIQX(A, IQA, B, IQB)   ((A) * (B))
#define IQ2mpyIQX(A, IQA, B, IQB)   ((A) * (B))
#define IQ1mpyIQX(A, IQA, B, IQB)   ((A) * (B))
#define IQmpyIQX(A, IQA, B, IQB)    ((A) * (B))
*/

//*****************************************************************************
//
// Multiplies an IQ number by an integer.
//
//*****************************************************************************

inline float CPP_IQ30mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ29mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ28mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ27mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ26mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ25mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ24mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ23mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ22mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ21mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ20mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ19mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ18mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ17mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ16mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ15mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ14mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ13mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ12mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ11mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ10mpyI32(float A, long B)   {return A * (float)(B);}
inline float CPP_IQ9mpyI32(float A, long B)    {return A * (float)(B);}
inline float CPP_IQ8mpyI32(float A, long B)    {return A * (float)(B);}
inline float CPP_IQ7mpyI32(float A, long B)    {return A * (float)(B);}
inline float CPP_IQ6mpyI32(float A, long B)    {return A * (float)(B);}
inline float CPP_IQ5mpyI32(float A, long B)    {return A * (float)(B);}
inline float CPP_IQ4mpyI32(float A, long B)    {return A * (float)(B);}
inline float CPP_IQ3mpyI32(float A, long B)    {return A * (float)(B);}
inline float CPP_IQ2mpyI32(float A, long B)    {return A * (float)(B);}
inline float CPP_IQ1mpyI32(float A, long B)    {return A * (float)(B);}
inline float CPP_IQmpyI32(float A, long B)     {return A * (float)(B);}

/*
#define IQ30mpyI32(A, B)        ((A) * (float)(B))
#define IQ29mpyI32(A, B)        ((A) * (float)(B))
#define IQ28mpyI32(A, B)        ((A) * (float)(B))
#define IQ27mpyI32(A, B)        ((A) * (float)(B))
#define IQ26mpyI32(A, B)        ((A) * (float)(B))
#define IQ25mpyI32(A, B)        ((A) * (float)(B))
#define IQ24mpyI32(A, B)        ((A) * (float)(B))
#define IQ23mpyI32(A, B)        ((A) * (float)(B))
#define IQ22mpyI32(A, B)        ((A) * (float)(B))
#define IQ21mpyI32(A, B)        ((A) * (float)(B))
#define IQ20mpyI32(A, B)        ((A) * (float)(B))
#define IQ19mpyI32(A, B)        ((A) * (float)(B))
#define IQ18mpyI32(A, B)        ((A) * (float)(B))
#define IQ17mpyI32(A, B)        ((A) * (float)(B))
#define IQ16mpyI32(A, B)        ((A) * (float)(B))
#define IQ15mpyI32(A, B)        ((A) * (float)(B))
#define IQ14mpyI32(A, B)        ((A) * (float)(B))
#define IQ13mpyI32(A, B)        ((A) * (float)(B))
#define IQ12mpyI32(A, B)        ((A) * (float)(B))
#define IQ11mpyI32(A, B)        ((A) * (float)(B))
#define IQ10mpyI32(A, B)        ((A) * (float)(B))
#define IQ9mpyI32(A, B)         ((A) * (float)(B))
#define IQ8mpyI32(A, B)         ((A) * (float)(B))
#define IQ7mpyI32(A, B)         ((A) * (float)(B))
#define IQ6mpyI32(A, B)         ((A) * (float)(B))
#define IQ5mpyI32(A, B)         ((A) * (float)(B))
#define IQ4mpyI32(A, B)         ((A) * (float)(B))
#define IQ3mpyI32(A, B)         ((A) * (float)(B))
#define IQ2mpyI32(A, B)         ((A) * (float)(B))
#define IQ1mpyI32(A, B)         ((A) * (float)(B))
#define IQmpyI32(A, B)          ((A) * (float)(B))
*/

//*****************************************************************************
//
// Multiplies an IQ number by an integer, and returns the integer portion.
//
//*****************************************************************************

inline long IQ30mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ29mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ28mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ27mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ26mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ25mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ24mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ23mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ22mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ21mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ20mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ19mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ18mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ17mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ16mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ15mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ14mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ13mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ12mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ11mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ10mpyI32int(float A, long B)   {return long(A * (float)(B));}
inline long IQ9mpyI32int(float A, long B)    {return long(A * (float)(B));}
inline long IQ8mpyI32int(float A, long B)    {return long(A * (float)(B));}
inline long IQ7mpyI32int(float A, long B)    {return long(A * (float)(B));}
inline long IQ6mpyI32int(float A, long B)    {return long(A * (float)(B));}
inline long IQ5mpyI32int(float A, long B)    {return long(A * (float)(B));}
inline long IQ4mpyI32int(float A, long B)    {return long(A * (float)(B));}
inline long IQ3mpyI32int(float A, long B)    {return long(A * (float)(B));}
inline long IQ2mpyI32int(float A, long B)    {return long(A * (float)(B));}
inline long IQ1mpyI32int(float A, long B)    {return long(A * (float)(B));}
inline long IQmpyI32int(float A, long B)     {return long(A * (float)(B));}

/*
#define IQ30mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ29mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ28mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ27mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ26mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ25mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ24mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ23mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ22mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ21mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ20mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ19mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ18mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ17mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ16mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ15mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ14mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ13mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ12mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ11mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ10mpyI32int(A, B)     ((long)((A) * (float)(B)))
#define IQ9mpyI32int(A, B)      ((long)((A) * (float)(B)))
#define IQ8mpyI32int(A, B)      ((long)((A) * (float)(B)))
#define IQ7mpyI32int(A, B)      ((long)((A) * (float)(B)))
#define IQ6mpyI32int(A, B)      ((long)((A) * (float)(B)))
#define IQ5mpyI32int(A, B)      ((long)((A) * (float)(B)))
#define IQ4mpyI32int(A, B)      ((long)((A) * (float)(B)))
#define IQ3mpyI32int(A, B)      ((long)((A) * (float)(B)))
#define IQ2mpyI32int(A, B)      ((long)((A) * (float)(B)))
#define IQ1mpyI32int(A, B)      ((long)((A) * (float)(B)))
#define IQmpyI32int(A, B)       ((long)((A) * (float)(B)))
*/

//*****************************************************************************
//
// Multiplies an IQ number by an integer, and returns the fractional portion.
//
//*****************************************************************************

inline float CPP_IQ30mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ29mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ28mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ27mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ26mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ25mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ24mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ23mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ22mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ21mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ20mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ19mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ18mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ17mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ16mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ15mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ14mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ13mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ12mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ11mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ10mpyI32frac(float A, long B)   {return A - float(long(A * (float)(B)));}
inline float CPP_IQ9mpyI32frac(float A, long B)    {return A - float(long(A * (float)(B)));}
inline float CPP_IQ8mpyI32frac(float A, long B)    {return A - float(long(A * (float)(B)));}
inline float CPP_IQ7mpyI32frac(float A, long B)    {return A - float(long(A * (float)(B)));}
inline float CPP_IQ6mpyI32frac(float A, long B)    {return A - float(long(A * (float)(B)));}
inline float CPP_IQ5mpyI32frac(float A, long B)    {return A - float(long(A * (float)(B)));}
inline float CPP_IQ4mpyI32frac(float A, long B)    {return A - float(long(A * (float)(B)));}
inline float CPP_IQ3mpyI32frac(float A, long B)    {return A - float(long(A * (float)(B)));}
inline float CPP_IQ2mpyI32frac(float A, long B)    {return A - float(long(A * (float)(B)));}
inline float CPP_IQ1mpyI32frac(float A, long B)    {return A - float(long(A * (float)(B)));}
inline float CPP_IQmpyI32frac(float A, long B)     {return A - float(long(A * (float)(B)));}

/*
#define IQ30mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ29mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ28mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ27mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ26mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ25mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ24mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ23mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ22mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ21mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ20mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ19mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ18mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ17mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ16mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ15mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ14mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ13mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ12mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ11mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ10mpyI32frac(A, B)    ((A) - (float)((long)((A) * (float)(B))))
#define IQ9mpyI32frac(A, B)     ((A) - (float)((long)((A) * (float)(B))))
#define IQ8mpyI32frac(A, B)     ((A) - (float)((long)((A) * (float)(B))))
#define IQ7mpyI32frac(A, B)     ((A) - (float)((long)((A) * (float)(B))))
#define IQ6mpyI32frac(A, B)     ((A) - (float)((long)((A) * (float)(B))))
#define IQ5mpyI32frac(A, B)     ((A) - (float)((long)((A) * (float)(B))))
#define IQ4mpyI32frac(A, B)     ((A) - (float)((long)((A) * (float)(B))))
#define IQ3mpyI32frac(A, B)     ((A) - (float)((long)((A) * (float)(B))))
#define IQ2mpyI32frac(A, B)     ((A) - (float)((long)((A) * (float)(B))))
#define IQ1mpyI32frac(A, B)     ((A) - (float)((long)((A) * (float)(B))))
#define IQmpyI32frac(A, B)      ((A) - (float)((long)((A) * (float)(B))))
*/

//*****************************************************************************
//
// Computes the square root of A^2 + B^2 using IQ numbers.
//
//*****************************************************************************

inline float CPP_IQ30mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ29mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ28mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ27mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ26mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ25mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ24mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ23mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ22mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ21mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ20mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ19mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ18mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ17mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ16mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ15mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ14mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ13mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ12mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ11mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ10mag(float A, float B)   {return sqrt(A * A + B * B);}
inline float CPP_IQ9mag(float A, float B)    {return sqrt(A * A + B * B);}
inline float CPP_IQ8mag(float A, float B)    {return sqrt(A * A + B * B);}
inline float CPP_IQ7mag(float A, float B)    {return sqrt(A * A + B * B);}
inline float CPP_IQ6mag(float A, float B)    {return sqrt(A * A + B * B);}
inline float CPP_IQ5mag(float A, float B)    {return sqrt(A * A + B * B);}
inline float CPP_IQ4mag(float A, float B)    {return sqrt(A * A + B * B);}
inline float CPP_IQ3mag(float A, float B)    {return sqrt(A * A + B * B);}
inline float CPP_IQ2mag(float A, float B)    {return sqrt(A * A + B * B);}
inline float CPP_IQ1mag(float A, float B)    {return sqrt(A * A + B * B);}
inline float CPP_IQmag(float A, float B)     {return sqrt(A * A + B * B);}


/*
#define IQ30mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ29mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ28mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ27mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ26mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ25mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ24mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ23mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ22mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ21mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ20mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ19mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ18mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ17mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ16mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ15mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ14mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ13mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ12mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ11mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ10mag(A, B)           sqrt(((A) * (A)) + ((B) * (B)))
#define IQ9mag(A, B)            sqrt(((A) * (A)) + ((B) * (B)))
#define IQ8mag(A, B)            sqrt(((A) * (A)) + ((B) * (B)))
#define IQ7mag(A, B)            sqrt(((A) * (A)) + ((B) * (B)))
#define IQ6mag(A, B)            sqrt(((A) * (A)) + ((B) * (B)))
#define IQ5mag(A, B)            sqrt(((A) * (A)) + ((B) * (B)))
#define IQ4mag(A, B)            sqrt(((A) * (A)) + ((B) * (B)))
#define IQ3mag(A, B)            sqrt(((A) * (A)) + ((B) * (B)))
#define IQ2mag(A, B)            sqrt(((A) * (A)) + ((B) * (B)))
#define IQ1mag(A, B)            sqrt(((A) * (A)) + ((B) * (B)))
#define IQmag(A, B)             sqrt(((A) * (A)) + ((B) * (B)))
*/

//*****************************************************************************
//
// Converts a string into an IQ number.
//
//*****************************************************************************

inline float CPP_atoIQ30(const char * A)   {return atof(A);}
inline float CPP_atoIQ29(const char * A)   {return atof(A);}
inline float CPP_atoIQ28(const char * A)   {return atof(A);}
inline float CPP_atoIQ27(const char * A)   {return atof(A);}
inline float CPP_atoIQ26(const char * A)   {return atof(A);}
inline float CPP_atoIQ25(const char * A)   {return atof(A);}
inline float CPP_atoIQ24(const char * A)   {return atof(A);}
inline float CPP_atoIQ23(const char * A)   {return atof(A);}
inline float CPP_atoIQ22(const char * A)   {return atof(A);}
inline float CPP_atoIQ21(const char * A)   {return atof(A);}
inline float CPP_atoIQ20(const char * A)   {return atof(A);}
inline float CPP_atoIQ19(const char * A)   {return atof(A);}
inline float CPP_atoIQ18(const char * A)   {return atof(A);}
inline float CPP_atoIQ17(const char * A)   {return atof(A);}
inline float CPP_atoIQ16(const char * A)   {return atof(A);}
inline float CPP_atoIQ15(const char * A)   {return atof(A);}
inline float CPP_atoIQ14(const char * A)   {return atof(A);}
inline float CPP_atoIQ13(const char * A)   {return atof(A);}
inline float CPP_atoIQ12(const char * A)   {return atof(A);}
inline float CPP_atoIQ11(const char * A)   {return atof(A);}
inline float CPP_atoIQ10(const char * A)   {return atof(A);}
inline float CPP_atoIQ9(const char * A)    {return atof(A);}
inline float CPP_atoIQ8(const char * A)    {return atof(A);}
inline float CPP_atoIQ7(const char * A)    {return atof(A);}
inline float CPP_atoIQ6(const char * A)    {return atof(A);}
inline float CPP_atoIQ5(const char * A)    {return atof(A);}
inline float CPP_atoIQ4(const char * A)    {return atof(A);}
inline float CPP_atoIQ3(const char * A)    {return atof(A);}
inline float CPP_atoIQ2(const char * A)    {return atof(A);}
inline float CPP_atoIQ1(const char * A)    {return atof(A);}
inline float CPP_atoIQ(const char * A)     {return atof(A);}

/*
#define atoIQ30(A)              atof(A)
#define atoIQ29(A)              atof(A)
#define atoIQ28(A)              atof(A)
#define atoIQ27(A)              atof(A)
#define atoIQ26(A)              atof(A)
#define atoIQ25(A)              atof(A)
#define atoIQ24(A)              atof(A)
#define atoIQ23(A)              atof(A)
#define atoIQ22(A)              atof(A)
#define atoIQ21(A)              atof(A)
#define atoIQ20(A)              atof(A)
#define atoIQ19(A)              atof(A)
#define atoIQ18(A)              atof(A)
#define atoIQ17(A)              atof(A)
#define atoIQ16(A)              atof(A)
#define atoIQ15(A)              atof(A)
#define atoIQ14(A)              atof(A)
#define atoIQ13(A)              atof(A)
#define atoIQ12(A)              atof(A)
#define atoIQ11(A)              atof(A)
#define atoIQ10(A)              atof(A)
#define atoIQ9(A)               atof(A)
#define atoIQ8(A)               atof(A)
#define atoIQ7(A)               atof(A)
#define atoIQ6(A)               atof(A)
#define atoIQ5(A)               atof(A)
#define atoIQ4(A)               atof(A)
#define atoIQ3(A)               atof(A)
#define atoIQ2(A)               atof(A)
#define atoIQ1(A)               atof(A)
#define atoIQ(A)                atof(A)
*/

//*****************************************************************************
//
// Converts an IQ number into a string.
//
//*****************************************************************************
/*
#define IQ30toa(A, B, C)        sprintf(A, B, C)
#define IQ29toa(A, B, C)        sprintf(A, B, C)
#define IQ28toa(A, B, C)        sprintf(A, B, C)
#define IQ27toa(A, B, C)        sprintf(A, B, C)
#define IQ26toa(A, B, C)        sprintf(A, B, C)
#define IQ25toa(A, B, C)        sprintf(A, B, C)
#define IQ24toa(A, B, C)        sprintf(A, B, C)
#define IQ23toa(A, B, C)        sprintf(A, B, C)
#define IQ22toa(A, B, C)        sprintf(A, B, C)
#define IQ21toa(A, B, C)        sprintf(A, B, C)
#define IQ20toa(A, B, C)        sprintf(A, B, C)
#define IQ19toa(A, B, C)        sprintf(A, B, C)
#define IQ18toa(A, B, C)        sprintf(A, B, C)
#define IQ17toa(A, B, C)        sprintf(A, B, C)
#define IQ16toa(A, B, C)        sprintf(A, B, C)
#define IQ15toa(A, B, C)        sprintf(A, B, C)
#define IQ14toa(A, B, C)        sprintf(A, B, C)
#define IQ13toa(A, B, C)        sprintf(A, B, C)
#define IQ12toa(A, B, C)        sprintf(A, B, C)
#define IQ11toa(A, B, C)        sprintf(A, B, C)
#define IQ10toa(A, B, C)        sprintf(A, B, C)
#define IQ9toa(A, B, C)         sprintf(A, B, C)
#define IQ8toa(A, B, C)         sprintf(A, B, C)
#define IQ7toa(A, B, C)         sprintf(A, B, C)
#define IQ6toa(A, B, C)         sprintf(A, B, C)
#define IQ5toa(A, B, C)         sprintf(A, B, C)
#define IQ4toa(A, B, C)         sprintf(A, B, C)
#define IQ3toa(A, B, C)         sprintf(A, B, C)
#define IQ2toa(A, B, C)         sprintf(A, B, C)
#define IQ1toa(A, B, C)         sprintf(A, B, C)
#define IQtoa(A, B, C)          sprintf(A, B, C)
*/
//*****************************************************************************
//
// Computes the absolute value of an IQ number.
//
//*****************************************************************************

inline float CPP_IQ30abs(float A)   {return fabs(A);}
inline float CPP_IQ29abs(float A)   {return fabs(A);}
inline float CPP_IQ28abs(float A)   {return fabs(A);}
inline float CPP_IQ27abs(float A)   {return fabs(A);}
inline float CPP_IQ26abs(float A)   {return fabs(A);}
inline float CPP_IQ25abs(float A)   {return fabs(A);}
inline float CPP_IQ24abs(float A)   {return fabs(A);}
inline float CPP_IQ23abs(float A)   {return fabs(A);}
inline float CPP_IQ22abs(float A)   {return fabs(A);}
inline float CPP_IQ21abs(float A)   {return fabs(A);}
inline float CPP_IQ20abs(float A)   {return fabs(A);}
inline float CPP_IQ19abs(float A)   {return fabs(A);}
inline float CPP_IQ18abs(float A)   {return fabs(A);}
inline float CPP_IQ17abs(float A)   {return fabs(A);}
inline float CPP_IQ16abs(float A)   {return fabs(A);}
inline float CPP_IQ15abs(float A)   {return fabs(A);}
inline float CPP_IQ14abs(float A)   {return fabs(A);}
inline float CPP_IQ13abs(float A)   {return fabs(A);}
inline float CPP_IQ12abs(float A)   {return fabs(A);}
inline float CPP_IQ11abs(float A)   {return fabs(A);}
inline float CPP_IQ10abs(float A)   {return fabs(A);}
inline float CPP_IQ9abs(float A)    {return fabs(A);}
inline float CPP_IQ8abs(float A)    {return fabs(A);}
inline float CPP_IQ7abs(float A)    {return fabs(A);}
inline float CPP_IQ6abs(float A)    {return fabs(A);}
inline float CPP_IQ5abs(float A)    {return fabs(A);}
inline float CPP_IQ4abs(float A)    {return fabs(A);}
inline float CPP_IQ3abs(float A)    {return fabs(A);}
inline float CPP_IQ2abs(float A)    {return fabs(A);}
inline float CPP_IQ1abs(float A)    {return fabs(A);}
inline float CPP_IQabs(float A)     {return fabs(A);}

/*
#define IQ30abs(A)              fabs(A)
#define IQ29abs(A)              fabs(A)
#define IQ28abs(A)              fabs(A)
#define IQ27abs(A)              fabs(A)
#define IQ26abs(A)              fabs(A)
#define IQ25abs(A)              fabs(A)
#define IQ24abs(A)              fabs(A)
#define IQ23abs(A)              fabs(A)
#define IQ22abs(A)              fabs(A)
#define IQ21abs(A)              fabs(A)
#define IQ20abs(A)              fabs(A)
#define IQ19abs(A)              fabs(A)
#define IQ18abs(A)              fabs(A)
#define IQ17abs(A)              fabs(A)
#define IQ16abs(A)              fabs(A)
#define IQ15abs(A)              fabs(A)
#define IQ14abs(A)              fabs(A)
#define IQ13abs(A)              fabs(A)
#define IQ12abs(A)              fabs(A)
#define IQ11abs(A)              fabs(A)
#define IQ10abs(A)              fabs(A)
#define IQ9abs(A)               fabs(A)
#define IQ8abs(A)               fabs(A)
#define IQ7abs(A)               fabs(A)
#define IQ6abs(A)               fabs(A)
#define IQ5abs(A)               fabs(A)
#define IQ4abs(A)               fabs(A)
#define IQ3abs(A)               fabs(A)
#define IQ2abs(A)               fabs(A)
#define IQ1abs(A)               fabs(A)
#define IQabs(A)                fabs(A)
*/

#endif // MATH_TYPE == IQ_MATH

#endif // __IQMATHCPP_H__
