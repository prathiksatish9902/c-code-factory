#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
class Car;
class Vehicle
{
    int m_wheel;
public:
    Vehicle(int wheel);
    Vehicle();
    void disp(){}
    ~Vehicle();
    friend class Car;
};

#endif // VEHICLE_H
