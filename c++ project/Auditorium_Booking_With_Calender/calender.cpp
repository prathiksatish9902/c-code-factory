#include "calender.h"

Calender::Calender(int day, int month, int year) {
    // std::cout<<"Calender constructor called"<<std::endl;
    m_day = day;
    m_month = month;
    m_year = year;
}


Calender::~Calender()
{
    // std::cout<<"Calender destructor called"<<std::endl;

}


void Calender::SetDay(int day)
{
    m_day = day;
}


int Calender::GetDay()
{
    return m_day;
}


void Calender::SetMonth(int month)
{
    m_month = month;
}


int Calender::GetMonth()
{
    return m_month;
}


void Calender::SetYear(int year)
{
    m_year = year;
}


int Calender::GetYear()
{
    return m_year;
}


bool Calender::isLeapYear()
{
    return (m_year % 4 == 0 && m_year % 100 != 0) || (m_year % 400 == 0);
}


int Calender::GetDaysInMonths()
{
    if(m_month == 2)
    {
        if(isLeapYear())
        {
            return 29;
        }
        else{
            return 28;
        }
    }
    else if (m_month == 4 || m_month == 6 || m_month == 9 || m_month == 11)
    {
        return 30;
    }
    else
    {
        return 31;
    }
}


int Calender::GetStartingDay()
{
    int dayCount = 0;
    for(int i = 1900; i < m_year; i++)
    {
        if(isLeapYear())
        {
            dayCount = dayCount + 366;
        }
        else
        {
            dayCount = dayCount +365;
        }
    }

    for(int i=1; i<m_month;i++)
    {
            dayCount = dayCount + Calender(1, i, m_year).GetDaysInMonths();
    }
    return dayCount % 7;
}


void Calender::DisplayCalender()
{
    std::cout << "\n  Calendar for " << m_month << "/" << m_year << "\n";
    std::cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n";

    int daysinMonth = GetDaysInMonths();
    int startingday = GetStartingDay();

    for(int i = 0; i < startingday; i++) {
        std::cout << "     ";
    }

    for(int day = 1;day<=daysinMonth;day++)
    {
        std::cout<<std::setw(5)<<day;
        if((startingday + day) % 7 == 0)
        {
            std::cout<<"\n";
        }
    }

}


std::string Calender::ToString() const
{
    return std::to_string(m_day) + "/" + std::to_string(m_month) + "/" + std::to_string(m_year);

}
