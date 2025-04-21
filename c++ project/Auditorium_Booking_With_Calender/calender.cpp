#include "calender.h"

Calender::Calender() {
    std::cout<<"calender constructor called"<<std::endl;
}

Calender::~Calender()
{
    std::cout<<"calender destructor called"<<std::endl;

}

void Calender::AddYear(Year &year)
{
    m_yearSet.push_back(year);
}
