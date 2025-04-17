#ifndef CAR_H
#define CAR_H
#include<iostream>
#include"driver.h"
class Car
{
public:
    Car(std::string carName);
    ~Car();

    void setDriver(Driver *d);

private:
    std::string m_carName;
    Driver *m_driver;
};

#endif // CAR_H
