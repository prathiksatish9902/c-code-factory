#include "rentalbikedetails.h"

RentalBikeDetails::RentalBikeDetails(std::string bikeNumber, std::string bikeName, std::string bikeModelName, std::string bikeStatus, float bikeCost) {
    std::cout<<"bike constructor called"<<std::endl;
    m_vehicalNumber = bikeNumber;
    m_vehicalName = bikeName;
    m_vehicalModelName = bikeModelName;
    m_vehicalStatus = bikeStatus;
    m_vehicalCost = bikeCost;
}

RentalBikeDetails::~RentalBikeDetails()
{
    std::cout<<"bike destructor called"<<std::endl;

}
