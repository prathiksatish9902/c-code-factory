#include "student.h"

Student::Student(std::string name, int rollNum, int Class) {
    std::cout<<"student constructor called"<<std::endl;
    m_name = name;
    m_rollNum = rollNum;
    m_Class = Class;
}

Student::~Student()
{
    std::cout<<"student destructor called"<<std::endl;

}
