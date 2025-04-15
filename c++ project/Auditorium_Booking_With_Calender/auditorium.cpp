#include "auditorium.h"

Auditorium::Auditorium(std::string auditoriumName, int seatcapacity, std::string auditoriumStatus) {
    // std::cout<<"auditorium constructor called"<<std::endl;
    m_auditoriumName = auditoriumName;
    m_seatcapaity = seatcapacity;
    m_auditoriumStatus = auditoriumStatus;
}

Auditorium::~Auditorium()
{
    // std::cout<<"auditorium destructor called"<<std::endl;

}

void Auditorium::SetName(std::string auditoriumName)
{
    m_auditoriumName = auditoriumName;
}

std::string Auditorium::GetName()
{
    return m_auditoriumName;
}

void Auditorium::SetSeatCapacity(int seatcapacity)
{
    m_seatcapaity = seatcapacity;
}

int Auditorium::GetSeatCapacity()
{
    return m_seatcapaity;
}

void Auditorium::SetStatus(std::string auditoriumStatus)
{
    m_auditoriumStatus = auditoriumStatus;
}

std::string Auditorium::GetStatus()
{
    return m_auditoriumStatus;
}

void Auditorium::AddBookedDate(const Date &date)
{
    m_bookedDates.push_back(date);

}

bool Auditorium::IsAvailableOnDate( Date &date)
{
    for (auto& bookedDate : m_bookedDates) {
        if (bookedDate.GetDay() == date.GetDay() &&
            bookedDate.GetMonth() == date.GetMonth() &&
            bookedDate.GetYear() == date.GetYear()) {
            return false;
        }
    }
    return true;
}

std::vector<Date> Auditorium::GetBookedDates() const
{
    return m_bookedDates;

}
