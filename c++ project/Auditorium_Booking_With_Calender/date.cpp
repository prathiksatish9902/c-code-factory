#include "date.h"

Date::Date() {
    std::cout<<"date empty constructor called"<<std::endl;
}

Date::Date(int date)
{
    std::cout<<"date parameter constructor called"<<std::endl;
    m_date = date;

}

Date::~Date()
{
    std::cout<<"date destructor called"<<std::endl;
}

void Date::SetDate(int date)
{
    m_date = date;
}

int Date::GetDate()
{
    return m_date;
}
