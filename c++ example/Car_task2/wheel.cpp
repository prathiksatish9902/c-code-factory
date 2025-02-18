#include "wheel.h"

Wheel::Wheel() {
    std::cout<<"wheel constructor called"<<std::endl;

}


Wheel::~Wheel()
{
    std::cout<<"wheel destructor called"<<std::endl;

}

void Wheel::set_wheel(Car *c)
{
    std::cout<<"wheel set function called"<<std::endl;
    m_c = c;

}



void Wheel::wheel_rotate()
{
    std::cout<<"wheel rotate function called"<<std::endl;
    m_c->car_move();

}

void Wheel::wheel_stop()
{
    std::cout<<"wheel stop function called"<<std::endl;

    m_c->car_stop();

}

