#include "auditorium.h"

Auditorium::Auditorium()
{

}

Auditorium::Auditorium(std::string auditoriumId, std::string auditoriumName, int seatcapacity, std::string auditoriumStatus) {
    m_auditoriumId = auditoriumId;
    m_auditoriumName = auditoriumName;
    m_seatcapaity = seatcapacity;
    m_auditoriumStatus = auditoriumStatus;
}

Auditorium::~Auditorium()
{
    // std::cout<<"auditorium destructor called"<<std::endl;
}

void Auditorium::SetId(std::string auditoriumId)
{
    m_auditoriumId = auditoriumId;
}

std::string Auditorium::GetId() const
{
    return m_auditoriumId;
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

bool Auditorium::IsAvailableOnDate(const Calender &date)
{
    // This function is now a placeholder as availability is checked in AuditoriumManagement
    return true;
}
