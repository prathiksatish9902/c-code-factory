#include "rentalcardetails.h"

RentalCarDetails::RentalCarDetails(std::string carNumber, std::string carName, std::string carModelName, std::string carStatus, float carCost) {
    std::cout<<"car constructor called"<<std::endl;
    m_vehicalNumber = carNumber;
    m_vehicalName = carName;
    m_vehicalModelName = carModelName;
    m_vehicalStatus = carStatus;
    m_vehicalCost = carCost;

}

RentalCarDetails::~RentalCarDetails()
{
    std::cout<<"car destructor called"<<std::endl;

}
