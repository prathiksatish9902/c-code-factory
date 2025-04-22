#ifndef CALENDERMANAGER_H
#define CALENDERMANAGER_H
#include"calender.h"
class CalenderManager
{
public:
    CalenderManager();
    ~CalenderManager();

    void GetCalenderYear();
    void GetCalenderMonth();
    void GetCalenderDate();

    void PrintMonthCalendar(int month);


private:
    Calender *calender;


};

#endif // CALENDERMANAGER_H
