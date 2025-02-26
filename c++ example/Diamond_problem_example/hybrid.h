#ifndef HYBRID_H
#define HYBRID_H
//#include"engine.h"
#include"petrolengine.h"
#include"cngengine.h"
class Hybrid:public PetrolEngine, public CngEngine
{
public:
    Hybrid(int h_cc , int h_piston);
    ~Hybrid();
};

#endif // HYBRID_H
