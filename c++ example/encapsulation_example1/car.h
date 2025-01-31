#ifndef CAR_H
#define CAR_H
#include<iostream>
class Car
{
    int m_wheel;
public:
    Car();
    ~Car();
    int getwheel();
    void setwheel(int wheel);
};

#endif // CAR_H
