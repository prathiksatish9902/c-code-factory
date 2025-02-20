#ifndef HAVELLSWIRE_H
#define HAVELLSWIRE_H
#include"ac.h"

class HavellsWire
{
    AC *ac;

public:
    HavellsWire();
    ~HavellsWire();
    void HavellsWire_on();
    void havellssetac(AC *a1);
};

#endif // HAVELLSWIRE_H
