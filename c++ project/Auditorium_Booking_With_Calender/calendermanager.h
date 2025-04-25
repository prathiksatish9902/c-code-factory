#ifndef CALENDERMANAGER_H
#define CALENDERMANAGER_H
#include "calender.h"
#include <map>
class BookingDate;
class CalenderManager
{
public:
    CalenderManager();
    ~CalenderManager();

    void GetCalenderYear();
    void GetCalenderMonth();
    void GetCalenderDate();

    void PrintMonthCalendar(int month, int year,  std::map<BookingDate, std::list<std::string>>* bookingMap = nullptr);


    void NavigateCalendar(int &month, int &year, bool nextMonth,  std::map<BookingDate, std::list<std::string>>* bookingMap = nullptr);


private:
    Calender *calender;
    std::map<int, Year*> m_yearsMap;

    Year* GetOrCreateYear(int year);
};

#endif // CALENDERMANAGER_H
