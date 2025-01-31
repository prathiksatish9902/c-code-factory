#ifndef CAR_H
#define CAR_H
#include<iostream>

class Car
{

public:
    int m_wheel;
    int m_fuel;
    std::string m_engineType;
    Car(int c_wheel,int c_fuel,std::string c_engineType);
    ~Car();
protected:
};

#endif // CAR_H
