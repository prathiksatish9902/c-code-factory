#ifndef AC_H
#define AC_H
//#include"wire.h"
#include<iostream>

class Wire;
class AC
{
    Wire *w1;
public:

    AC();
    ~AC();
    void AC_on();
    void Setwire(Wire *w);
};

#endif // AC_H
