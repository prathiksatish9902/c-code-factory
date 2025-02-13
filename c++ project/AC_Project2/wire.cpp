#include "wire.h"

Wire::Wire() {
    std::cout<<"wire constructor called"<<std::endl;

}

Wire::~Wire()
{
    std::cout<<"wire destructor called"<<std::endl;

}

void Wire::W_on()
{
    std::cout<<"wire on"<<std::endl;
ac->AC_on();
}

void Wire::setac(AC *a1)
{
    std::cout<<"setac function called"<<std::endl;

    ac = a1;
}
