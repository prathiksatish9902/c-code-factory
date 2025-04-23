#ifndef AUDITORIUMMANAGEMENT_H
#define AUDITORIUMMANAGEMENT_H
#include"auditorium.h"
#include<map>
#include<list>
#include<iomanip>
#include"bookingdate.h"
#include"calendermanager.h"
#include <ctime>

class AuditoriumManagement
{
public:
    AuditoriumManagement();
    ~AuditoriumManagement();

    void AddAuditorium();
    void DisplayAuditorium();
    void DisplayAvailableAuditoriums(BookingDate &bookingdate);
    void BookAuditorium();

private:
    std::map<std::string, Auditorium*> m_auditoriumMap;

    std::map<BookingDate, std::list<std::string>> m_bookingMap;

    bool IsAuditoriumBooked(const std::string& auditoriumId, const BookingDate& bookingdate);

    bool IsValidBookingDate(const BookingDate& bookingDate);

};

#endif // AUDITORIUMMANAGEMENT_H
