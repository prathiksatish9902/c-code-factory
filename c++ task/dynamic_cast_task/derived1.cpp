#include "derived1.h"

Derived1::Derived1() {
    std::cout<<"derived constructor called"<<std::endl;
}

Derived1::~Derived1()
{
    std::cout<<"derived destructor called"<<std::endl;

}

void Derived1::Print1()
{
    std::cout<<"derived"<<std::endl;
}
