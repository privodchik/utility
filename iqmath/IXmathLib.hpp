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


namespace ix_ns{
    constexpr const float PIx2 = 3.14159265358979 * 2.0;
} //namespace ix_ns



template<typename T, int I = 0>
struct IX{
    
  struct ix_t{};  
    
  using Type = T;
  enum {fractional = I};  
  
  
  T val;
  
  IX() : val(0){}
  IX(T A) : val(A * (1 << I)){}
  
  IX(const IX& A) : val(A.val){}
  
  //
  // Assignment operator
  //
  IX& operator=(const IX& A){
      val = A.val;
      return(*this);
  };
      
  //
  // Arithmetic operators +=, -=, *=, /= 
  //
  IX& operator+=(const IX& A){
    val = A.val;
    return (*this);
  }
  
  IX& operator-=(const IX& A){
    val -= A.val;
    return (*this);
  }
  
  
  template<typename U, std::enable_if_t<std::is_integral_v<typename U::Type>, bool> = true>
  U& operator*=(const U& A){
      val = mul_op_helper<U, U::fractional>::handler(*this, A);
      return (*this);
  }
  
  template<typename U, std::enable_if_t<std::is_floating_point_v<typename U::Type>, bool> = true>
  U& operator*=(const U& A){
      val *= A.val;
      return (*this);
  }
  
  
  template<typename U, std::enable_if_t<std::is_integral_v<typename U::Type>, bool> = true>
  U& operator/=(const U& A){
      val = div_op_helper<U, U::fractional>::handler(*this, A);
      return (*this);
  }
  
  template<typename U, std::enable_if_t<std::is_floating_point_v<typename U::Type>, bool> = true>
  U& operator/=(const U& A){
      val /= A.val;
      return (*this);
  }
  
  
  //
  // Bitwise operators &=, |=, ^=
  //
  
  template<typename U = T, std::enable_if_t<std::is_integral_v<U>, bool> = true>
  IX& operator&=(const long& A){
     val &= A;
     return (*this);
  }
  
  template<typename U = T, std::enable_if_t<std::is_integral_v<U>, bool> = true>
  IX& operator&=(const IX& A){
     val &= A.val;
     return (*this);
  }
  
  template<typename U = T, std::enable_if_t<std::is_integral_v<U>, bool> = true>
  IX& operator|=(const long& A){
      val |= A;
      return (*this);
  }
  
  template<typename U = T, std::enable_if_t<std::is_integral_v<U>, bool> = true>
  IX& operator|=(const IX& A){
      val |= A.val;
      return (*this);
  }
  
  
  template<typename U = T, std::enable_if_t<std::is_integral_v<U>, bool> = true>
  IX& operator^=(const long& A){
      val ^= A;
      return (*this);
  }
  
  template<typename U = T, std::enable_if_t<std::is_integral_v<U>, bool> = true>
  IX& operator^=(const IX& A){
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
IX<T, I> operator+(const IX<T, I>& A, const IX<T, I>& B){
  IX<T, I> C = A;
  C += B;
  return C;
}

//
// -
//
template<typename T, int I>
IX<T, I> operator-(const IX<T, I>& A, const IX<T, I>& B){
  IX<T, I> C = A;
  C -= B;
  return C;
}

//
// *
//
template<typename T, int I>
IX<T, I> operator*(const IX<T, I>& A, const IX<T, I>& B){
    IX<T, I> C = A;
    C *= B;
    return C;
}


//
// /
//
template<typename T, int I>
IX<T, I> operator/(const IX<T, I>& A, const IX<T, I>& B){
    IX<T, I> C = A;
    C /= B;
    return C;
}
//
//  Logical operators
//
template<typename T, int I>
bool operator==(const IX<T, I>& A, const IX<T, I>& B){
    return A.val == B.val;
}

template<typename T, int I>
bool operator!=(const IX<T, I>& A, const IX<T, I>& B){
    return !(A.val == B.val);
}

template<typename T, int I>
bool operator<(const IX<T, I>& A, const IX<T, I>& B){
    return A.val < B.val;
}

template<typename T, int I>
bool operator>(const IX<T, I>& A, const IX<T, I>& B){
    return B < A;
}

template<typename T, int I>
bool operator<=(const IX<T, I>& A, const IX<T, I>& B){
    return !(B > A);
}

template<typename T, int I>
bool operator>=(const IX<T, I>& A, const IX<T, I>& B){
    return !(B < A);
}

template<typename T, int I>
bool operator&&(const IX<T, I>& A, const IX<T, I>& B){
    return A.val && B.val;
}

template<typename T, int I>
bool operator||(const IX<T, I>& A, const IX<T, I>& B){
    return A.val || B.val;
}


//
// Bitwise operators &, |, ^
//
template<typename T, int I, std::enable_if_t<std::is_integral_v<T>, bool> =true>
IX<T, I> operator&(const IX<T, I>& A, const long& B){
  IX<T, I> C = A;
  C &= B;
  return C;
}

template<typename T, int I, std::enable_if_t<std::is_integral_v<T>, bool> =true>
IX<T, I> operator|(const IX<T, I>& A, const long& B){
  IX<T, I> C = A;
  C |= B;
  return C;
}

template<typename T, int I, std::enable_if_t<std::is_integral_v<T>, bool> =true>
IX<T, I> operator^(const IX<T, I>& A, const long& B){
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
float IXtoF(const T& A){
    return A.val;
}

template<typename T, int I>
struct fxdpt2float_helper{
  static typename T::Type handler(const T& v){
      return v.val / (1 << I);
  }
};

// Partial specialization for frac = 21
template<typename T>
struct fxdpt2float_helper<T, 21>{
  static typename T::Type handler(const T& A){
      return _IQ21toF(A.val);
  }
};

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
float IXtoF(const T& A){
    return fxdpt2float_helper<T, T::fractional>::handler(A);
}


//*****************************************************************************
//
// Saturates an IQ number in a given range.
//
//*****************************************************************************

template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
auto IXsat(const T& A, const T& Pos, const T& Neg){
    return A > Pos ? Pos : (A < Neg ? Neg : A);
}

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
auto IXsat(const T& A, const T& Pos, const T& Neg){
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
long IXint(const T& A){
    return A.val; 
}

template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
long IXint(const T& A){
    return A.val >> T::fractional; 
}


//*****************************************************************************
//
// Computes the fractional portion of an IQ number.
//
//*****************************************************************************

template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
float IXfrac(const T& A){
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
float IXfrac(const T& A){
    return IXfrac_helper<T, T::fractional>::handler(A);
}


//*****************************************************************************
//
// Multiplies two IQ numbers, with rounding.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
auto IXrmpy(const T& A, const T& B){
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
auto IXrmpy(const T& A, const T& B){
    return IXrmpy_helper<T, T::fractional>::handler(A, B);
}


//*****************************************************************************
//
// Multiplies two IQ numbers, with rounding and saturation.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
auto IXrsmpy(const T& A, const T& B);


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
auto IXrsmpy(const T& A, const T& B){
    return IXrsmpy_helper<T, T::fractional>::handler(A, B);
}


//*****************************************************************************
//
// Multiplies an IQ number by an integer.
//
//*****************************************************************************

template<typename T>
auto IXmpyI32(const T& A, long B){
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
long IXmpyI32int(const T& A, long B){
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
long IXmpyI32int(const T& A, long B){
    return IXmpyI32int_helper<T, T::fractional>::handler(A, B);
}



//*****************************************************************************
//
// Multiplies an IQ number by an integer, and returns the fractional portion.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
auto IXmpyI32frac(const T& A, long B){
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
auto IXmpyI32frac(const T& A, long B){
    return IXmpyI32frac_helper<T, T::fractional>::handler(A, B);
}


//*****************************************************************************
//
// Computes the sin of an IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, double>, bool> = true >
auto IXsin(const T& A){
    T C;
    C.val = std::sin(A.val);
    return C;
}


template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, float>, bool> = true >
auto IXsin(const T& A){
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
auto IXsin(const T& A){
    return IXsin_helper<T, T::fractional>::handler(A);
}


//*****************************************************************************
//
// Computes the sin of an IQ number, using cycles per unit instead of radians.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, double>, bool> = true >
auto IXsinPU(const T& A){
    T C;
    C.val = std::sin(A.val * ix_ns::PIx2);
    return C;
}


template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, float>, bool> = true >
auto IXsinPU(const T& A){
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
auto IXsinPU(const T& A){
    return IXsinPU_helper<T, T::fractional>::handler(A);
}



//*****************************************************************************
//
// Computes the arcsin of an CPP_IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
auto IXasin(const T& A){
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
auto IXasin(const T& A){
    return IXasin_helper<T, T::fractional>::handler(A);
}


//*****************************************************************************
//
// Computes the cos of an IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, double>, bool> = true >
auto IXcos(const T& A){
    T C;
    C.val = std::cos(A.val);
    return C;
}


template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, float>, bool> = true >
auto IXcos(const T& A){
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
auto IXcos(const T& A){
    return IXcos_helper<T, T::fractional>::handler(A);
}

//*****************************************************************************
//
// Computes the cos of an IQ number, using cycles per unit instead of radians.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, double>, bool> = true >
auto IXcosPU(const T& A){
    T C;
    C.val = std::cos(A.val * ix_ns::PIx2);
    return C;
}


template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, float>, bool> = true >
auto IXcosPU(const T& A){
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
auto IXcosPU(const T& A){
    return IXcosPU_helper<T, T::fractional>::handler(A);
}


//*****************************************************************************
//
// Computes the arccos of an CPP_IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
auto IXacos(const T& A){
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
auto IXacos(const T& A){
    return IXacos_helper<T, T::fractional>::handler(A);
}


//*****************************************************************************
//
// Computes the arctan of a coordinate specified by two IQ numbers.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
auto IXatan2(const T& A, const T& B){
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
auto IXatan2(const T& A, const T& B){
    return IXatan2_helper<T, T::fractional>::handler(A, B);
}


//*****************************************************************************
//
// Computes the arctan of a coordinate specified by two IQ numbers, returning
// the value in cycles per unit instead of radians.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
auto IXatan2PU(const T& A, const T& B){
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
auto IXatan2PU(const T& A, const T& B){
    return IXatan2PU_helper<T, T::fractional>::handler(A, B);
}


//*****************************************************************************
//
// Computes the square root of an IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, double>, bool> = true >
auto IXsqrt(const T& A){
    T B;
    B.val = std::sqrt(A.val);
    return B;
}

template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, float>, bool> = true >
auto IXsqrt(const T& A){
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
auto IXsqrt(const T& A){
    return IXsqrt_helper<T, T::fractional>::handler(A);
}



//*****************************************************************************
//
// Computes 1 over the square root of an IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, double>, bool> = true >
auto IXisqrt(const T& A){
    T B;
    B.val = std::sqrt(static_cast<typename T::Type>(1.0) / A.val);
    return B;
}

template<typename T, std::enable_if_t<std::is_same_v<typename T::Type, float>, bool> = true >
auto IXisqrt(const T& A){
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
auto IXisqrt(const T& A){
    return IXisqrt_helper<T, T::fractional>::handler(A);
}


//*****************************************************************************
//
// Computes e^x of an CPP_IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
auto IXexp(const T& A){
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
auto IXexp(const T& A){
    return IXexp_helper<T, T::fractional>::handler(A);
}


//*****************************************************************************
//
// Computes 2^x of an IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
auto IXexp2(const T& A){
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
auto IXexp2(const T& A){
    return IXexp2_helper<T, T::fractional>::handler(A);
}



//*****************************************************************************
//
// Computes the square root of A^2 + B^2 using IQ numbers.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
auto IXmag(const T& A, const T& B){
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
auto IXmag(const T& A){
    return IXmag_helper<T, T::fractional>::handler(A);
}


//*****************************************************************************
//
// Computes the absolute value of an IQ number.
//
//*****************************************************************************
template<typename T, std::enable_if_t<std::is_floating_point_v<typename T::Type>, bool> = true>
auto IXabs(const T& A){
    T B;
    B.val = std::abs(A.val);
    return B;
}

template<typename T, int I>
struct IXabs_helper{
    static auto handler(const T& A);
};

template<typename T>
struct IXabs_helper<T, 21>{
    static auto handler(const T& A){
        T B;
        B.val = _IQ21abs(A.val);
        return B;
    }
};


template<typename T, std::enable_if_t<std::is_integral_v<typename T::Type>, bool> = true>
auto IXabs(const T& A){
    return IXabs_helper<T, T::fractional>::handler(A);
}








  









