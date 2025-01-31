#include "bike.h"

Bike::Bike(int mirror, std::string b_vehicleName, std::string b_manufactureDate, int b_wheel, std::string b_engineType):Vehicle(b_vehicleName,b_manufactureDate,b_wheel,b_engineType) {
    m_mirror = mirror;
    std::cout<<"bike constructor1 called"<<std::endl;

}

Bike::Bike()
{

}
// Bike::Bike(int mirror)
// {
//     m_mirror = mirror;
//     std::cout<<"bike constructor1 called"<<std::endl;
// }

Bike::~Bike()
{
    std::cout<<"bike destructor called"<<std::endl;

}

void Bike::display()
{
    std::cout<<"bike display function called"<<std::endl;
    std::cout<<"mirrors:"<< m_mirror << std::endl;

}
