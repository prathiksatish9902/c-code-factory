
#include "switch.h"

Switch::Switch(Wire *wire) {
    std::cout<<"Switch constructor is called"<<std::endl;

    this->wire=wire;
}

Switch::~Switch()
{
    std::cout<<"Switch destructor is called"<<std::endl;

}

void Switch::turnON(ACVents &ac)
{
    std::cout<<"turnOn function is called"<<std::endl;

    if(wire){
        wire->connect();
        ac.powerON();
    }
}

void Switch::turnOFF(ACVents &ac)
{
    std::cout<<"turnOFF function is called"<<std::endl;

    if(wire){
        wire->disconnect();
        ac.powerOFF();
    }
}
