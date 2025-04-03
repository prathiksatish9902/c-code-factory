#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
class Vehicle
{
public:
    Vehicle();
    ~Vehicle();

    void SetName(std::string name);
    std::string GetName();

    void SetFuel(std::string fuel);
    std::string GetFuel();

    void SetSeatCapacity(int seatcapacity);
    int GetSeatCapacity();

    void SetVehicleNumber(std::string vehiclenumber);
    std::string GetVehicleNumber();

    // void SetPaymentStatus(std::string paymentstatus);
    // std::string GetPaymentStatus();

    // void SetPaymentMethod(std::string paymentmethod);
    // std::string GetPaymentMethod();

    // void SetPaymentNumber(std::string paymentnumber);
    // std::string GetPaymentNumber();

    // void SetCardNumber(std::string cardnumber);
    // std::string GetCardNumber();
protected:
    std::string m_name;
    std::string m_fuel;
    int m_seatcapacity;
    std::string m_vehiclenumber;
    // std::string m_paymentstatus;
    // std::string m_paymentmethod;
    // std::string m_paymentnumber;
    // std::string m_cardnumber;

};

#endif // VEHICLE_H
