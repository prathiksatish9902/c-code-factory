#ifndef CAR_H
#define CAR_H
#include"vehicle.h"
class Car:public Vehicle
{
public:
    Car();
    ~Car();

    void SetCarType(std::string cartype);
    std::string GetCarType();

    void SetCarRentTime(std::string carrentTime);
    std::string GetCarRentTime();

    void SetCarStatus(std::string carstatus);
    std::string GetCarStattus();

    void SetCarRentCost(float carrentcost);
    float GetCarRentCost();
private:
    std::string m_cartype;
    std::string m_carrentTime;
    std::string m_carstatus;
    float m_carrentcost;
};

#endif // CAR_H
