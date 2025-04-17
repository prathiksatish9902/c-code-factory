#ifndef AUDITORIUMMANAGEMENT_H
#define AUDITORIUMMANAGEMENT_H
#include"auditorium.h"
#include<map>
#include<vector>
#include<list>
#include"calender.h"
#include<iomanip>

class AuditoriumManagement
{
public:
    AuditoriumManagement();
    ~AuditoriumManagement();

    void AddAuditorium();
    void DisplayAuditorium();
    void DisplayAvailableAuditoriums(Calender &date);
    void BookAuditorium();

private:
    // map1: key is auditorium ID, value is Auditorium object
    std::map<std::string, Auditorium> m_auditoriumMap;

    // map2: key is date, value is list of booked auditorium IDs
    std::map<Calender, std::list<std::string>> m_bookingMap;

    // Helper function to check if an auditorium is booked on a date
    bool IsAuditoriumBooked(const std::string& auditoriumId, const Calender& date);
};

#endif // AUDITORIUMMANAGEMENT_H
