#ifndef OWNER_H
#define OWNER_H
#include <iostream>
#include"car.h"
#include"driver.h"
class Owner
{
public:
    Owner();
    ~Owner();

    void assignDriver(Driver *d);

private:
    Car *car;
};

#endif // OWNER_H
