/**
 @file         protects.h
 @date         06.12.2023
 @copyright    NPT
 @author       ID  
*/

#ifndef _PROTECTS_HPP
#define _PROTECTS_HPP

#include "aux_utility.h"

namespace protects{
    
  template<typename T>  
  bool short_protect(T value, T threshold){
      if (AUX_UTILITY::abs(value) > threshold){
          return true;
      }
      return false;
  }
}


#endif //_PROTECTS_HPP
