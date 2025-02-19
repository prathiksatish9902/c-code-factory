#include "student.h"

Student::Student(std::string name, int rollNum, int Class) {
    std::cout<<"student constructor called"<<std::endl;
    m_name = name;
    m_rollNum = rollNum;
    m_class = Class;
}

Student::~Student()
{
    std::cout<<"student destructor called"<<std::endl;

}


std::ostream& operator<<(std::ostream& os, const Student& s) {
    os << "Student Details:\n";
    os << "Name: " << s.m_name << "\n";
    os << "Roll Number: " << s.m_rollNum << "\n";
    os << "Class: " << s.m_class;
    return os;
}
