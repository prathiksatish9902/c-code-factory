#ifndef SWITCH_H
#define SWITCH_H
#include"wire.h"
class Switch
{
    Wire *w1;
public:
    Switch();
    ~Switch();
    void Switch_on();
    void Setwire(Wire *w);


};

#endif // SWITCH_H
