#ifndef BMW_H
#define BMW_H
#include"car.h"
class Bmw
{
public:
    Car *c1 = new Car();
    Bmw();
    ~Bmw();
    void print();
};

#endif // BMW_H
