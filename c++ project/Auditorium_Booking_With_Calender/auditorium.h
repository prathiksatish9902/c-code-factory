#ifndef AUDITORIUM_H
#define AUDITORIUM_H
#include<iostream>
#include"date.h"
#include<vector>
class Auditorium
{
public:
    Auditorium(std::string auditoriumName , int seatcapacity , std::string auditoriumStatus);
    ~Auditorium();

    void SetName(std::string auditoriumName);
    std::string GetName();

    void SetSeatCapacity(int seatCapacity);
    int GetSeatCapacity();

    void SetStatus(std::string auditoriumStatus);
    std::string GetStatus();

    void AddBookedDate(const Date& date);
    bool IsAvailableOnDate(Date &date);
    std::vector<Date> GetBookedDates() const;

private:
    std::string m_auditoriumName;
    int m_seatcapaity;
    std::string m_auditoriumStatus;

    std::vector<Date> m_bookedDates;

};

#endif // AUDITORIUM_H
