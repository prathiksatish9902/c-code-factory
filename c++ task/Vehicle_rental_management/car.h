#ifndef CAR_H
#define CAR_H
#include"vehicle.h"
class Car:public Vehicle
{
public:
    Car(std::string name , std::string fuel , int seatcapacity , std::string vehiclenumber , std::string cartype , std::string carrentTime , std::string carstatus , float carrentcost);
    ~Car();

    void SetCarType(std::string cartype);
    std::string GetCarType();

    void SetCarRentTime(std::string carrentTime);
    std::string GetCarRentTime();

    void SetCarStatus(std::string carstatus);
    std::string GetCarStatus();

    void SetCarRentCost(float carrentcost);
    float GetCarRentCost();
private:
    std::string m_cartype;
    std::string m_carrentTime;
    std::string m_carstatus;
    float m_carrentcost;
};

#endif // CAR_H
