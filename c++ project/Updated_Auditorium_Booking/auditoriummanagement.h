#ifndef AUDITORIUMMANAGEMENT_H
#define AUDITORIUMMANAGEMENT_H
#include"auditorium.h"
#include<map>
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
    std::map<std::string, Auditorium> m_auditoriumMap;

    std::map<Calender, std::list<std::string>> m_bookingMap;

    bool IsAuditoriumBooked(const std::string& auditoriumId, const Calender& date);
};

#endif // AUDITORIUMMANAGEMENT_H
