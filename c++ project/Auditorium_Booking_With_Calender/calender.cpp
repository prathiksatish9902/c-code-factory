#include "calender.h"

Calender::Calender() {
    // std::cout<<"calender constructor called"<<std::endl;
    year = new Year(2025);

}

Calender::~Calender()
{
    // std::cout<<"calender destructor called"<<std::endl;
    delete year;

}

void Calender::AddYear()
{
    m_yearList.push_back(year);
}

Year* Calender::GetCurrentYear()
{
    return year;
}
