#include "finolexwire.h"

FinolexWire::FinolexWire() {
    std::cout<<"finolex wire constructor called"<<std::endl;

}


FinolexWire::~FinolexWire()
{
    std::cout<<"finolex wire destructor called"<<std::endl;

}

void FinolexWire::FinolexWire_on()
{
    std::cout<<"finolex wire on"<<std::endl;
    ac->AC_on();
}

void FinolexWire::finolexsetac(AC *a1)
{
    std::cout<<" finolex setac function called"<<std::endl;
    ac = a1;
}





