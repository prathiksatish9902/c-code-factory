#include "student.h"

Student::Student(int standard, std::string section) {
    std::cout<<"student constructor called"<<std::endl;
    m_standard = standard;
    m_section = section;
}

Student::Student()
{
    std::cout<<"student default constructor called"<<std::endl;

}

Student::~Student()
{
    std::cout<<"student destructor called"<<std::endl;

}

int Student::GetStandard()
{
    std::cout<<"get standard function called"<<std::endl;
    return m_standard;
}

std::string Student::GetSection()
{
    std::cout<<"get section function called"<<std::endl;
    return m_section;
}

void Student::SetStandard(int standard)
{
    std::cout<<"set standard function called"<<std::endl;
    m_standard = standard;
}

void Student::SetSection(std::string section)
{
    std::cout<<"set section function called"<<std::endl;
    m_section = section;
}
