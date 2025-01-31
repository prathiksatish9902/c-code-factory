#ifndef BENZ_H
#define BENZ_H
#include "car.h"
class benz : public Car
{
public:
    benz(int wheel,int fuel,std::string engineType);

    ~benz();
};

#endif // BENZ_H
