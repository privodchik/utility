/**
 @file         trigger.h
 @date         05.12.2023
 @copyright    NPT
 @author       ID  
*/

#pragma once
#include <cstdbool>

class RS_Trig{
    
    bool Q;
    bool nQ;
    
  public:
    RS_Trig() : Q(false), nQ(true){}
    
    void set(){
        nQ = not(true or Q);
        Q = not(false or nQ);
    }
    
    void reset(){
        Q = not(true or nQ);
        nQ = not(false or Q);
    }
    
    bool read_Q(){return Q;}
    bool read_nQ(){return nQ;}
    
};

