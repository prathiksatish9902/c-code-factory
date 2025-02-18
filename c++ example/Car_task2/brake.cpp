#include "brake.h"

Brake::Brake() {
    std::cout<<"brake constructor called"<<std::endl;

}


Brake::~Brake()
{
    std::cout<<"brake destructor called"<<std::endl;

}

void Brake::set_brake(Wheel *w, Car *c)
{
    std::cout<<"brake set function called"<<std::endl;

    m_w = w;
    m_c = c;
}



void Brake::brake_applied()
{
    std::cout<<"brake applied function called"<<std::endl;

    m_w->wheel_stop();

}

