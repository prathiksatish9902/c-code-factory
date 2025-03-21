#include "rentalvehicaldetails.h"

RentalVehicalDetails::RentalVehicalDetails() {
    std::cout<<"rental vehical details constructor called"<<std::endl;

}

RentalVehicalDetails::~RentalVehicalDetails()
{
    std::cout<<"rental vehical details destructor called"<<std::endl;

}

void RentalVehicalDetails::SetVehicalNumber(std::string vehicalNumber)
{
    m_vehicalNumber = vehicalNumber;
}

std::string RentalVehicalDetails::GetVehicalNumber()
{
    return m_vehicalNumber;

}

void RentalVehicalDetails::SetVehicalName(std::string vehicalName)
{
    m_vehicalName = vehicalName;
}

std::string RentalVehicalDetails::GetVehicalName()
{
    return m_vehicalName;
}

void RentalVehicalDetails::SetVehicalModelName(std::string vehicalModelName)
{
    m_vehicalModelName = vehicalModelName;
}

std::string RentalVehicalDetails::GetVehicalModelName()
{
    return m_vehicalModelName;
}

void RentalVehicalDetails::SetVehicalStatus(std::string vehicalStatus)
{
    m_vehicalStatus = vehicalStatus;
}

std::string RentalVehicalDetails::GetVehicalStatus()
{
    return m_vehicalStatus;
}

void RentalVehicalDetails::SetVehicalCost(float vehicalCost)
{
    m_vehicalCost = vehicalCost;
}

float RentalVehicalDetails::GetVehicalCost()
{
    return m_vehicalCost;
}
