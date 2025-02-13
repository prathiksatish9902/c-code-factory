#ifndef CAR_H
#define CAR_H
// class Vehicle;
#include"vehicle.h"
class Bmw;
class Car
{
public:
    Vehicle *v1=new Vehicle(4);
    Car();
    ~Car();
    void display();
    friend class Bmw;
};

#endif // CAR_H
