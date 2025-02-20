#include "ac.h"
#include"polycabwire.h"
#include"finolexwire.h"
#include"havellswire.h"
AC::AC() {
    std::cout<<"ac constructor called"<<std::endl;

}
AC::~AC(){
    std::cout<<"ac destructor called"<<std::endl;

}

void AC::AC_on(){
    std::cout<<"ac on"<<std::endl;

}

void AC::SetPolycabWire(PolycabWire *pw)
{
    std::cout<<"ac set polycab wire function called"<<std::endl;
    pw1 = pw;
    pw1->polycabsetac(this);

}

void AC::SetFinolexWire(FinolexWire *fw)
{
    std::cout<<"ac set finolex wire function called"<<std::endl;
    fw1 = fw;
    fw1->finolexsetac(this);
}

void AC::SetHavellsWire(HavellsWire *hw)
{
    std::cout<<"ac set havells wire function called"<<std::endl;
    hw1 = hw;
    hw1->havellssetac(this);
}
