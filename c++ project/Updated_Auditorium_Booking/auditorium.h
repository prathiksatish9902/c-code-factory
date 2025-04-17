#ifndef AUDITORIUM_H
#define AUDITORIUM_H
#include<iostream>
#include"calender.h"
#include<vector>
#include<string>

class Auditorium
{
public:
    Auditorium(); // Add default constructor
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

    bool IsAvailableOnDate(const Calender &date);

private:
    std::string m_auditoriumId;
    std::string m_auditoriumName;
    int m_seatcapaity;
    std::string m_auditoriumStatus;
    // Removed bookedDates vector as it will be managed by the map in AuditoriumManagement
};

#endif // AUDITORIUM_H
