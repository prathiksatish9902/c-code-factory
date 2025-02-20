#ifndef POLYCABWIRE_H
#define POLYCABWIRE_H
#include"ac.h"
class PolycabWire
{
    AC *ac;
public:
    PolycabWire();
    ~PolycabWire();
    void PolycabWire_on();
    void polycabsetac(AC *a1);
};

#endif // POLYCABWIRE_H
