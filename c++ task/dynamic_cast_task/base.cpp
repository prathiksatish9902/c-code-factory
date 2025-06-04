#include "base.h"

Base::Base() {
    std::cout<<"base constructor called"<<std::endl;
}

Base::~Base()
{
    std::cout<<"base destructor called"<<std::endl;

}

void Base::Print()
{
    std::cout<<"base"<<std::endl;
}
