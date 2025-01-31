#include "vehicle.h"

Vehicle::Vehicle(std::string vehicleName,std::string manufactureDate,int wheel,std::string engineType){
    m_vehicleName = vehicleName;
    m_manufactureDate = manufactureDate;
    m_wheel = wheel;
    m_engineType = engineType;
    std::cout<<"vehicle constructor called"<<std::endl;
}

Vehicle::~Vehicle()
{
    std::cout<<"vehicle destructor called"<<std::endl;

}

Vehicle::Vehicle()
{

}

void Vehicle::display()
{
    std::cout<<"vehicle display called"<<std::endl;
    std::cout<<"vName:"<<m_vehicleName<<std::endl;
    std::cout<<"date:"<<m_manufactureDate<<std::endl;
    std::cout<<"wheel:"<<m_wheel<<std::endl;
    std::cout<<"type:"<<m_engineType<<std::endl;



}
