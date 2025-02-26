#include "havellswire.h"

HavellsWire::HavellsWire() {
    std::cout<<"havells wire constructor called"<<std::endl;

}


HavellsWire::~HavellsWire()
{
    std::cout<<"havells wire destructor called"<<std::endl;

}

void HavellsWire::HavellsWire_on()
{
    std::cout<<"havells wire on"<<std::endl;
    ac->AC_on();
}

void HavellsWire::havellssetac(AC *a1)
{
    std::cout<<"havells setac function called"<<std::endl;
    ac = a1;
}

