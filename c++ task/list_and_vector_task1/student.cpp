#include "student.h"

Student::Student(PersonalDetails *personal_details) {
    std::cout<<"student constructor called"<<std::endl;
    personal_details->getId();
    personal_details->getName();
    personal_details->getDepartment();
}

Student::Student()
{
    std::cout<<"student default constructor called"<<std::endl;

}

Student::~Student()
{
    std::cout<<"student destructor called"<<std::endl;
}

