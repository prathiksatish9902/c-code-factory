#ifndef FINOLEXWIRE_H
#define FINOLEXWIRE_H
#include"wire.h"
class FinolexWire: public Wire
{
    AC *ac;
public:

    FinolexWire();
    ~FinolexWire();
    void W_on()override;
    void setac(AC *a1)override;
};

#endif // FINOLEXWIRE_H
