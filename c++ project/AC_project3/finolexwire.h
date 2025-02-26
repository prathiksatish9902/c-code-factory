#ifndef FINOLEXWIRE_H
#define FINOLEXWIRE_H
#include"ac.h"
class FinolexWire
{
    AC *ac;
public:
    FinolexWire();
    ~FinolexWire();
    void FinolexWire_on();
    void finolexsetac(AC *a1);
};

#endif // FINOLEXWIRE_H
