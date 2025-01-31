#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
class Vehicle
{
protected:
    std::string m_manufactureDate;
    std::string m_engineType;
public:
    std::string m_vehicleName;
    int m_wheel;
    Vehicle(std::string vehicleName,std::string manufactureDate,int wheel,std::string engineType);
    ~Vehicle();
    Vehicle();
    void display();

};

#endif // VEHICLE_H
