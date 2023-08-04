// Date:04.08.2023
// Created by: NPT

#pragma once

#include <cstdint>


namespace ph_seq{
    
    enum eSequence_t{ABC = 0, ACB};
    
    eSequence_t phase_sequence_get_task(float ua, float ub, float uc);
    
    
} //namespce ph_seq
