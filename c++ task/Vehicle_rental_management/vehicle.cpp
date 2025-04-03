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

// void Vehicle::SetPaymentStatus(std::string paymentstatus)
// {
//     m_paymentstatus = paymentstatus;
// }

// std::string Vehicle::GetPaymentStatus()
// {
//     return m_paymentstatus;
// }

// void Vehicle::SetPaymentMethod(std::string paymentmethod)
// {
//     m_paymentmethod = paymentmethod;
// }

// std::string Vehicle::GetPaymentMethod()
// {
//     return m_paymentmethod;
// }

// void Vehicle::SetPaymentNumber(std::string paymentnumber)
// {
//     m_paymentnumber = paymentnumber;
// }

// std::string Vehicle::GetPaymentNumber()
// {
//     return m_paymentnumber;
// }

// void Vehicle::SetCardNumber(std::string cardnumber)
// {
//     m_cardnumber = cardnumber;
// }

// std::string Vehicle::GetCardNumber()
// {
//     return m_cardnumber;
// }
