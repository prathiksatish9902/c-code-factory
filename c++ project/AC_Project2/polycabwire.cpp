#include "polycabwire.h"

PolycabWire::PolycabWire() {
    std::cout<<"polycab wire constructor called"<<std::endl;

}

PolycabWire::~PolycabWire()
{
    std::cout<<"polycab wire destructor called"<<std::endl;

}

void PolycabWire::W_on()
{
    std::cout<<"polycab wire on function called"<<std::endl;
    ac->AC_on();
}

void PolycabWire::setac(AC *a1)
{
    std::cout<<"Polycab wire setac function called"<<std::endl;
    ac = a1;
}
