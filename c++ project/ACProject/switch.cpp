
#include "switch.h"

Switch::Switch(Wire *wire) {
    std::cout<<"Switch constructor is called"<<std::endl;

    this->wire=wire;
}

Switch::~Switch()
{
    std::cout<<"Switch destructor is called"<<std::endl;

}

void Switch::turnON()
{
    std::cout<<"turnOn function is called"<<std::endl;

    if(wire){
        wire->connect();
    }
}

void Switch::turnOFF()
{
    std::cout<<"turnOFF function is called"<<std::endl;

    if(wire){
        wire->disconnect();
    }
}
