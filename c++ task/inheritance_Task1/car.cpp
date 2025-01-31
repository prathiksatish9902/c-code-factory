#include "car.h"

Car::Car(float seat, std::string c_vehicleName, std::string c_manufactureDate, int c_wheel, std::string c_engineType):Vehicle(c_vehicleName,c_manufactureDate,c_wheel,c_engineType) {
    m_seat = seat;
    std::cout<<"car constructor called"<<std::endl;

}

Car::~Car()
{
    std::cout<<"car destructor called"<<std::endl;

}

Car::Car()
{

}

void Car::display()
{
    std::cout<<"car display function called"<<std::endl;
    std::cout<<"seats:"<<m_seat<<std::endl;

}
