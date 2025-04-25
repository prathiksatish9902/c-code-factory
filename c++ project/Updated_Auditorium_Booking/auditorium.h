#ifndef AUDITORIUM_H
#define AUDITORIUM_H
#include<iostream>
#include"calender.h"
#include<string>

class Auditorium
{
public:
    Auditorium();
    Auditorium(std::string auditoriumId, std::string auditoriumName, int seatcapacity, std::string auditoriumStatus);
    ~Auditorium();

    void SetId(std::string auditoriumId);
    std::string GetId() const;

    void SetName(std::string auditoriumName);
    std::string GetName();

    void SetSeatCapacity(int seatCapacity);
    int GetSeatCapacity();

    void SetStatus(std::string auditoriumStatus);
    std::string GetStatus();


private:
    std::string m_auditoriumId;
    std::string m_auditoriumName;
    int m_seatcapaity;
    std::string m_auditoriumStatus;
};

#endif // AUDITORIUM_H
