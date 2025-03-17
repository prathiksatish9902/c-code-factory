#include "car.h"

Car::Car(std::string name , std::string fuel , int seatcapacity , std::string vehiclenumber , std::string cartype , std::string carrentTime , std::string carstatus , float carrentcost) {
    std::cout<<"car constructor is called"<<std::endl;
    m_name = name;
    m_fuel = fuel;
    m_seatcapacity = seatcapacity;
    m_vehiclenumber = vehiclenumber;
    m_cartype = cartype;
    m_carrentTime = carrentTime;
    m_carstatus = carstatus;
    m_carrentcost = carrentcost;
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

std::string Car::GetCarStatus()
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
