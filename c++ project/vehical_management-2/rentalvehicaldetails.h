#ifndef RENTALVEHICALDETAILS_H
#define RENTALVEHICALDETAILS_H
#include<iostream>
class RentalVehicalDetails
{
public:
    RentalVehicalDetails();
    ~RentalVehicalDetails();

    void SetVehicalNumber(std::string vehicalNumber);
    std::string GetVehicalNumber();

    void SetVehicalName(std::string vehicalName);
    std::string GetVehicalName();

    void SetVehicalModelName(std::string vehicalModelName);
    std::string GetVehicalModelName();

    void SetVehicalStatus(std::string vehicalStatus);
    std::string GetVehicalStatus();

    void SetVehicalCost(float vehicalCost);
    float GetVehicalCost();
protected:
    std::string m_vehicalNumber;
    std::string m_vehicalName;
    std::string m_vehicalModelName;
    std::string m_vehicalStatus;
    float m_vehicalCost;
};

#endif // RENTALVEHICALDETAILS_H
