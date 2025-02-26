#include "brake.h"


Brake::Brake() {
    std::cout<<"brake constructor called"<<std::endl;
    m_brakePressed = false;
}

Brake::~Brake()
{
    std::cout<<"brake destructor called"<<std::endl;

}

void Brake::Brake_Applied(Wheel *w){
    std::cout<<"brake applied function called"<<std::endl;
    w1 = w;
    w1->Wheel_Stop();
}

void Brake::Brake_Release(Wheel *w){
    std::cout<<"brake release function called"<<std::endl;
    w1 = w;
    w1->Wheel_Move();
}
