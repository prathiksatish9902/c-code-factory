#include "vehicle.h"

Vehicle::Vehicle() {
    // std::cout<<"vehicle constructor called"<<std::endl;
}

Vehicle::~Vehicle()
{
    // std::cout<<"vehicle destructor called"<<std::endl;

}

void Vehicle::SetName(std::string name){
    m_name = name;
}

std::string Vehicle::GetName(){
    return m_name;
}

void Vehicle::SetFuel(std::string fuel){
    m_fuel = fuel;
}

std::string Vehicle::GetFuel(){
    return m_fuel;
}

void Vehicle::SetSeatCapacity(int seatcapacity){
    m_seatcapacity = seatcapacity;
}

int Vehicle::GetSeatCapacity(){
    return m_seatcapacity;
}

void Vehicle::SetVehicleNumber(std::string vehiclenumber){
    m_vehiclenumber = vehiclenumber;
}

std::string Vehicle::GetVehicleNumber(){
    return m_vehiclenumber;
}
