#include "calender.h"

Calender::Calender() {
    std::cout<<"Calender constructor1 called"<<std::endl;

}

Calender::Calender(int year)
{
    std::cout<<"Calender constructor2 called"<<std::endl;

    m_month = new Month;
    m_year = year;

}


Calender::~Calender()
{
    std::cout<<"Calender destructor called"<<std::endl;
    delete m_month;

}

Month Calender::GetMonth()
{
    return *m_month;
}

int Calender::GetYear()
{
    return m_year;
}

void Calender::AddMonths()
{

}



