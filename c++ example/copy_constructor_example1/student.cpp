#include "student.h"

// Student::Student(int a) {
//     std::cout<<"constructor called"<<std::endl;
//     m_a = a;
// }

Student::Student()
{
    std::cout<<"empty constructor called"<<std::endl;

}
Student::~Student(){
    std::cout<<"destructor called"<<std::endl;

}

Student::Student(const Student &s2)
{
    std::cout<<"copy constructor called"<<std::endl;
    this->m_a = new int(*s2.m_a);

}
