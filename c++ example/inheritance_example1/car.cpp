#include "car.h"
Car::Car(int c_wheel,int c_fuel,std::string c_engineType)//:m_fuel(fuel),m_wheel(wheel),m_engineType(engineType)
{
    std::cout<<"fuel:"<<m_fuel<<std::endl;

     m_fuel=c_fuel;
     m_wheel = c_wheel;
     m_engineType = c_engineType;
    std::cout<<"car constructor called"<<std::endl;
     std::cout<<"wheel:"<<m_wheel<<std::endl;
    std::cout<<"fuel:"<<m_fuel<<std::endl;
     std::cout<<"engine:"<<m_engineType<<std::endl;




}

Car::~Car(){
    std::cout<<"car destructor called"<<std::endl;

}


