#include "havellswire.h"

HavellsWire::HavellsWire() {
    std::cout<<"havells wire constructor called"<<std::endl;

}

HavellsWire::~HavellsWire()
{
    std::cout<<"havells wire destructor called"<<std::endl;

}

void HavellsWire::W_on()
{
    std::cout<<"Havells wire on function called"<<std::endl;
    ac->AC_on();
}

void HavellsWire::setac(AC *a1)
{
    std::cout<<"Havells wire setac function called"<<std::endl;
    ac = a1;
}
