#include "bookingdate.h"

BookingDate::BookingDate(int day, int month, int year) {
    std::cout<<"booking date constructor called"<<std::endl;
    m_day = day;
    m_month = month;
    m_year = year;
}

BookingDate::~BookingDate()
{
    std::cout<<"booking date destructor called"<<std::endl;

}

void BookingDate::SetDay(int day)
{
    m_day = day;
}

int BookingDate::GetDay()
{
    return m_day;
}

void BookingDate::SetMonth(int month)
{
    m_month = month;
}

int BookingDate::GetMonth()
{
    return m_month;
}

void BookingDate::SetYear(int year)
{
    m_year = year;

}

int BookingDate::GetYear()
{
    return m_year;
}

std::string BookingDate::ToString() const
{
    return std::to_string(m_day) + "/" + std::to_string(m_month) + "/" + std::to_string(m_year);

}

bool BookingDate::operator<(const BookingDate &other) const
{
    if (m_year != other.m_year)
        return m_year < other.m_year;
    if (m_month != other.m_month)
        return m_month < other.m_month;
    return m_day < other.m_day;
}

bool BookingDate::operator==(const BookingDate &other) const
{
    return m_day == other.m_day &&
           m_month == other.m_month &&
           m_year == other.m_year;
}
