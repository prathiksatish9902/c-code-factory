#ifndef CNGENGINE_H
#define CNGENGINE_H
#include "engine.h"
class CngEngine :virtual public Engine
{
public:
    CngEngine(int c_cc, int c_piston);
    ~CngEngine();
};

#endif // CNGENGINE_H
