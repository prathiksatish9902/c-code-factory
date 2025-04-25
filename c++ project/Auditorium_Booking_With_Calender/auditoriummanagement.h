#ifndef AUDITORIUMMANAGEMENT_H
#define AUDITORIUMMANAGEMENT_H
#include"auditorium.h"
#include<map>
#include<list>
#include <limits>
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
    void DisplayCalendarInterface();




private:
    std::map<std::string, Auditorium*> m_auditoriumMap;

    std::map<BookingDate, std::list<std::string>> m_bookingMap;

    bool IsAuditoriumBooked(const std::string& auditoriumId, const BookingDate& bookingdate);

    bool IsValidBookingDate(BookingDate &bookingDate);

    bool IsValidDateForMonth(int day, int month, int year);

};

#endif // AUDITORIUMMANAGEMENT_H
