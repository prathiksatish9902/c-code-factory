#ifndef POLYCABWIRE_H
#define POLYCABWIRE_H
#include"wire.h"
class PolycabWire:public Wire
{
    AC *ac;
public:
    PolycabWire();
    ~PolycabWire();
    void W_on()override;
    void setac(AC *a1)override;
};

#endif // POLYCABWIRE_H
