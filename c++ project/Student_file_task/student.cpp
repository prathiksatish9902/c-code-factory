#include "student.h"

Student::Student(std::string name, int age , std::string usn , std::string mobile) {
    std::cout<<"student constructor called"<<std::endl;
    m_name = name;
    m_age = age;
    m_usn = usn;
    m_mobile = mobile;
}

Student::~Student()
{
    std::cout<<"student destructor called"<<std::endl;

}
