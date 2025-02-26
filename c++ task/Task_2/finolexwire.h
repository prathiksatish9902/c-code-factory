#ifndef FINOLEXWIRE_H
#define FINOLEXWIRE_H
#include"wire.h"
class FinolexWire:public Wire
{
    int *a = new int[100];

public:
    FinolexWire();
    ~FinolexWire();
};

#endif // FINOLEXWIRE_H
