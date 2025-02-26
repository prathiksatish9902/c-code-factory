#include "wheel.h"

Wheel::Wheel() {
    std::cout<<"wheel constructor called"<<std::endl;
}

Wheel::~Wheel(){
    std::cout<<"wheel destructor called"<<std::endl;

}


void Wheel::Wheel_Move(){
    std::cout<<"wheel move function called"<<std::endl;

}

void Wheel::Wheel_Stop(){
    std::cout<<"wheel stop function called"<<std::endl;

}
