#ifndef SWITCH_H
#define SWITCH_H
#include"polycabwire.h"
#include"finolexwire.h"
#include"havellswire.h"
class Switch
{
    PolycabWire *pw1;
    FinolexWire *fw1;
    HavellsWire *hw1;

public:
    Switch();
    ~Switch();
    void Switch_on();
    void SetPolycabWire(PolycabWire *pw);
    void SetFinolexWire(FinolexWire *fw);
    void SetHavellsWire(HavellsWire *hw);

};

#endif // SWITCH_H
