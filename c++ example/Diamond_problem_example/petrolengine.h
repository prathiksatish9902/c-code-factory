#ifndef PETROLENGINE_H
#define PETROLENGINE_H
#include"engine.h"
class PetrolEngine :virtual public Engine
{
public:
    PetrolEngine(int p_cc,int p_piston);
    ~PetrolEngine();
};

#endif // PETROLENGINE_H
