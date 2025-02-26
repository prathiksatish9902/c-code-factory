#ifndef POLYCABWIRE_H
#define POLYCABWIRE_H
#include"wire.h"
class PolycabWire:public Wire
{
    int *a = new int[200];

public:
    PolycabWire();
    ~PolycabWire();
};

#endif // POLYCABWIRE_H
