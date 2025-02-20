#include "polycabwire.h"

PolycabWire::PolycabWire() {
    std::cout<<"polycab wire constructor called"<<std::endl;

}


PolycabWire::~PolycabWire()
{
    std::cout<<"polycab wire destructor called"<<std::endl;

}

void PolycabWire::PolycabWire_on()
{
         std::cout<<"polycab wire on"<<std::endl;
ac->AC_on();
}



void PolycabWire::polycabsetac(AC *a1)
{
         std::cout<<"polycab setac function called"<<std::endl;
    ac = a1;
         std::cout<<"polycab setac function called"<<std::endl;


}

