#include "car.h"

Car::Car(std::string carName) {
    std::cout<<"car constructor called"<<std::endl;
    m_carName = carName;
}

Car::~Car()
{
    std::cout<<"car destructor called"<<std::endl;

}





void Car::setDriver(Driver *d)
{
    std::cout<<"car set driver function called"<<std::endl;
    m_driver = d;
    std::cout<<"car driver assigned to"<<m_carName<<std::endl;
}


