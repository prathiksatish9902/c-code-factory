#include "switch.h"

Switch::Switch() {
    std::cout<<"switch constructor called"<<std::endl;

}

Switch::~Switch()
{
    std::cout<<"switch destructor called"<<std::endl;

}

void Switch::Switch_on()
{
    std::cout<<"switch on"<<std::endl;
w1->W_on();

}

void Switch::Setwire(Wire *w)
{
    std::cout<<" switch setwire fuction called"<<std::endl;

    w1 = w;
}


