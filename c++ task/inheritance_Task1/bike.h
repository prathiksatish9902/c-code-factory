#ifndef BIKE_H
#define BIKE_H
#include"vehicle.h"
class Bike:virtual public Vehicle
{
public:
    int m_mirror;
    Bike(int mirror,std::string b_vehicleName,std::string b_manufactureDate,int b_wheel,std::string b_engineType);
    //Bike(int mirror);
    Bike();
    ~Bike();
    void display();
};

#endif // BIKE_H
