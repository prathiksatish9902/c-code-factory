#include "capital.h"
#include <iostream>

Capital::Capital()
{
    std::cout<<"Capital Constructor Called"<<std::endl;
}

Capital::Capital(std::string name):m_name(name)
{
    std::cout<<"Parameter Capital Constructor Called"<<std::endl;
}

Capital::~Capital()
{
    std::cout<<"Capital Destructor Called"<<std::endl;
}

std::ostream& operator<<(std::ostream& os,Capital capital)
{
    os << capital.m_name;
    return os;
}
