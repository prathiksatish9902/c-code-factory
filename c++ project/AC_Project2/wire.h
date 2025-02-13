#ifndef WIRE_H
#define WIRE_H
#include"ac.h"
class Wire
{
    AC *ac;
public:
    Wire();
    ~Wire();
    void W_on();
    void setac(AC *a1);
};

#endif // WIRE_H
