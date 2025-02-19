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

// void Switch::SetPolycabWire(Wire *w)
// {
//     std::cout<<" switch set Polycab wire fuction called"<<std::endl;
//     w1 = w;

// }

// void Switch::SetFinolexWire(Wire *w)
// {
//     std::cout<<" switch set Finolex wire fuction called"<<std::endl;
//     w1 = w;
// }

// void Switch::SetHavellsWire(Wire *w)
// {
//     std::cout<<" switch set Havells wire fuction called"<<std::endl;
//     w1 = w;
// }
