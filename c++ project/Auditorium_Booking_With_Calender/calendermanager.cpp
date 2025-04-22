#include "calendermanager.h"

CalenderManager::CalenderManager() {
    std::cout<<"calender manager constructor called"<<std::endl;
    calender = new Calender;
}

CalenderManager::~CalenderManager()
{
    std::cout<<"calender manager destructor called"<<std::endl;
    delete calender;

}

void CalenderManager::GetCalenderYear()
{
    calender->GetCurrentYear();
    GetCalenderMonth();

}

void CalenderManager::GetCalenderMonth()
{

    GetCalenderDate();
}

void CalenderManager::GetCalenderDate()
{
    int currentdate;

    Year *y=calender->GetCurrentYear();


    Month *m = y->GetCurrentMonth(4);

    if (m) {
         currentdate = m->GetCurrentDate(28);
    } else {
        std::cout << "Month not found!" << std::endl;
    }


}

void CalenderManager::PrintMonthCalendar(int month)
{
    Year *y = calender->GetCurrentYear();
    if (y) {
        Month *m = y->GetCurrentMonth(month);
        if (m) {
            m->PrintCalendar(y->GetYear());
        } else {
            std::cout << "Month not found!" << std::endl;
        }
    } else {
        std::cout << "Year not found!" << std::endl;
    }
}
