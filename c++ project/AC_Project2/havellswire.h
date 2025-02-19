#ifndef HAVELLSWIRE_H
#define HAVELLSWIRE_H
#include"wire.h"
class HavellsWire:public Wire
{
    AC *ac;
public:
    HavellsWire();
    ~HavellsWire();
    void W_on()override;
    void setac(AC *a1)override;
};

#endif // HAVELLSWIRE_H
