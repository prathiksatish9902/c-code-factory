#include "auditorium.h"

Auditorium::Auditorium() {
    // std::cout<<"auditorium empty constructor called"<<std::endl;
}

Auditorium::Auditorium(std::string auditoriumId, std::string auditoriumName, int seatcapacity, std::string auditoriumStatus)
{
    // std::cout<<"auditorium parameter constructor called"<<std::endl;

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

void Auditorium::SetSeatCapacity(int seatCapacity)
{
    m_seatcapaity = seatCapacity;
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
