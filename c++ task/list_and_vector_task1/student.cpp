#include "student.h"

Student::Student(int id, std::string name, std::string department) {
    std::cout<<"student constructor called"<<std::endl;
   this->id = id;
   this->name = name;
   this->department = department;
}

Student::~Student()
{
    std::cout<<"student destructor called"<<std::endl;
}

