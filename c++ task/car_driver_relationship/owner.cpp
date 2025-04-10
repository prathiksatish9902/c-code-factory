#include "owner.h"

Owner::Owner() {
    std::cout<<"owner constructor called"<<std::endl;
    car = new Car("ford");
}

Owner::~Owner()
{
    std::cout<<"owner destructor called"<<std::endl;
    delete this->car;

}

void Owner::assignDriver(Driver *d)
{
    std::cout<<"owner assign driver function called"<<std::endl;
    car->setDriver(d);
}


