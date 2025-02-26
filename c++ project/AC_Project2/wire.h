#ifndef WIRE_H
#define WIRE_H
#include"ac.h"
class Wire
{
    AC *ac;
public:
    Wire();
    virtual ~Wire();
   virtual void W_on()=0;
   virtual void setac(AC *a1)=0;
};

#endif // WIRE_H
