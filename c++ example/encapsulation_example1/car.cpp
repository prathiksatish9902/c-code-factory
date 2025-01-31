#include "car.h"

Car::Car() {
    //m_wheel = wheel;
    std::cout<<"car constructor called"<<std::endl;

}

Car::~Car()
{
    std::cout<<"car destructor called"<<std::endl;

}

int Car::getwheel()
{
    std::cout<<"getter called"<<std::endl;
    return m_wheel;
}

void Car::setwheel(int wheel)
{
    std::cout<<"setter called"<<std::endl;

    m_wheel = wheel;
}
