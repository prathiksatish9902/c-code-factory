#include "person.h"

Person::Person(std::string name, std::string phnum) {
    m_name = name;
    m_phnum = phnum;
    //m_age = age;
    std::cout<<"person constructor called"<<std::endl;
}

Person::Person()
{

}

Person::~Person()
{
    std::cout<<"person destructor called"<<std::endl;

}

void Person::display()
{
    std::cout<<"person display called"<<std::endl;
    std::cout<<"name:"<<m_name<<std::endl;
    std::cout<<"phone:"<<m_phnum<<std::endl;
    //std::cout<<"age:"<<m_age<<std::endl;

}
