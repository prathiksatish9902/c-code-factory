#include "ac.h"
#include"wire.h"

AC::AC() {
    std::cout<<"ac constructor called"<<std::endl;
}

AC::~AC()
{
    std::cout<<"ac destructor called"<<std::endl;

}

void AC::AC_on()
{
    std::cout<<"ac on"<<std::endl;

}

void AC::Setwire(Wire *w)
{
    std::cout<<"ac setwire function called"<<std::endl;

    w1 = w;
    w1->setac(this);
}
