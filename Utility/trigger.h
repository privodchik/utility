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
        /* 
         * nQ = not(Q or true);    // 0
         * Q = not(false or nQ);   // 1
         */
        
        nQ = false;
        Q  = true;
    }
    
    void reset(){
        /*
         * Q = not(nQ or true);
         * nQ = not(false or Q);
         */
        nQ = true;
        Q  = false;
        
    }
    
    bool read_Q(){return Q;}
    bool read_nQ(){return nQ;}
    
};

