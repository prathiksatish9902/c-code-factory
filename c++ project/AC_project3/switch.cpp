#include "switch.h"

Switch::Switch() {
    std::cout<<"switch constructor called"<<std::endl;

}

Switch::~Switch(){
    std::cout<<"switch destructor called"<<std::endl;

}

void Switch::P_Switch_on(){
    std::cout<<"P switch on"<<std::endl;
    pw1->PolycabWire_on();

}

void Switch::F_Switch_on()
{
    std::cout<<"F switch on"<<std::endl;
    fw1->FinolexWire_on();
}

void Switch::H_Switch_on()
{
    std::cout<<"H switch on"<<std::endl;
    hw1->HavellsWire_on();
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
