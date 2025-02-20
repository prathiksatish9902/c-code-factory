#ifndef AC_H
#define AC_H
#include<iostream>
class PolycabWire;
class FinolexWire;
class HavellsWire;
class AC
{
    PolycabWire *pw1;
    FinolexWire *fw1;
    HavellsWire *hw1;
public:
    AC();
    ~AC();
    void AC_on();
    void SetPolycabWire(PolycabWire *pw);
    void SetFinolexWire(FinolexWire *fw);
    void SetHavellsWire(HavellsWire *hw);
};

#endif // AC_H
