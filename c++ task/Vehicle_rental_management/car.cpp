#include "car.h"

Car::Car() {
    std::cout<<"car constructor is called"<<std::endl;
}

Car::~Car()
{
    std::cout<<"car destructor is called"<<std::endl;

}

void Car::SetCarType(std::string cartype)
{
    m_cartype = cartype;
}

std::string Car::GetCarType()
{
    return m_cartype;
}

void Car::SetCarRentTime(std::string carrentTime)
{
    m_carrentTime = carrentTime;
}

std::string Car::GetCarRentTime()
{
    return m_carrentTime;
}

void Car::SetCarStatus(std::string carstatus)
{
    m_carstatus = carstatus;
}

std::string Car::GetCarStattus()
{
    return m_carstatus;
}

void Car::SetCarRentCost(float carrentcost)
{
    m_carrentcost = carrentcost;
}

float Car::GetCarRentCost()
{
    return m_carrentcost;
}
