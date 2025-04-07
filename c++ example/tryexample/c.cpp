#include "c.h"

C::C() {
    std::cout<<"c cons called"<<std::endl;

}


C::~C(){
    std::cout<<"c des called"<<std::endl;

}

void C::print()
{
    std::cout<<"print function called"<<std::endl;
}
