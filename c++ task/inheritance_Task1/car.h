#ifndef CAR_H
#define CAR_H
#include"vehicle.h"
class Car:virtual public Vehicle
{

public:
    float m_seat;
    Car(float seat,std::string c_vehicleName,std::string c_manufactureDate,int c_wheel,std::string c_engineType);
    ~Car();
    Car();
    void display();
};

#endif // CAR_H
