#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
class Vehicle
{
public:
    Vehicle();
    ~Vehicle();

    void SetVehicleName(std::string name);
    std::string GetVehicleName();

    void SetFuel(std::string fuel);
    std::string GetFuel();

    void SetSeatCapacity(int seatcapacity);
    int GetSeatCapacity();

    void SetVehicleNumber(std::string vehiclenumber);
    std::string GetVehicleNumber();
protected:
    std::string m_name;
    std::string m_fuel;
    int m_seatcapacity;
    std::string m_vehiclenumber;
};

#endif // VEHICLE_H
