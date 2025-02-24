#include "staff.h"

Staff::Staff(int id, std::string name, std::string department) {
    std::cout<<"staff constructor called"<<std::endl;
    this->id = id;
    this->name = name;
    this->department = department;
}

Staff::~Staff()
{
    std::cout<<"staff destructor called"<<std::endl;
}


