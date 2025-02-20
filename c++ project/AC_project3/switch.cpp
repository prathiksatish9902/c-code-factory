#include "switch.h"

Switch::Switch() {
    std::cout<<"switch constructor called"<<std::endl;

}

Switch::~Switch(){
    std::cout<<"switch destructor called"<<std::endl;

}

void Switch::Switch_on(){
    std::cout<<"switch on"<<std::endl;
    pw1->PolycabWire_on();

}

void Switch::SetPolycabWire(PolycabWire *pw)
{
    std::cout<<" switch polycab setwire fuction called"<<std::endl;
    pw1 = pw;

}

void Switch::SetFinolexWire(FinolexWire *fw)
{
    std::cout<<" switch finolex setwire fuction called"<<std::endl;
    fw1 = fw;
}

void Switch::SetHavellsWire(HavellsWire *hw)
{
    std::cout<<" switch havells setwire fuction called"<<std::endl;
    hw1 = hw;
}
