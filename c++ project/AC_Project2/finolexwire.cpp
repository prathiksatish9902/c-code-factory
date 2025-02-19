#include "finolexwire.h"

FinolexWire::FinolexWire() {
    std::cout<<"finolex wire constructor called"<<std::endl;
}

FinolexWire::~FinolexWire()
{
    std::cout<<"finolex wire destructor called"<<std::endl;

}

void FinolexWire::W_on()
{
    std::cout<<"finolex wire on function called"<<std::endl;
    ac->AC_on();
}

void FinolexWire::setac(AC *a1)
{
    std::cout<<"finolex wire setac function called"<<std::endl;
    ac = a1;
}
