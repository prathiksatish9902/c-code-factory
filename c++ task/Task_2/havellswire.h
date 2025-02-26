#ifndef HAVELLSWIRE_H
#define HAVELLSWIRE_H
#include"wire.h"
class HavellsWire:public Wire
{
    int *a = new int[300];

public:
    HavellsWire();
    ~HavellsWire();
};

#endif // HAVELLSWIRE_H
