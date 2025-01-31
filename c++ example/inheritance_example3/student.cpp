#include "student.h"

Student::Student(int Class, std::string s_name, std::string s_phnum/*int s_age*/)//:Person(s_name,s_phnum,s_age)
{
    m_class = Class;
    Person::m_name = s_name;
    Person::m_phnum = s_phnum;
    //Person::m_age = s_age;
    std::cout<<"student constructor called"<<std::endl;

}

Student::~Student()
{
    std::cout<<"student destructor called"<<std::endl;

}

void Student::display()
{
    std::cout<<"student display called"<<std::endl;
    std::cout<<"Class:"<<m_class<<std::endl;
}
