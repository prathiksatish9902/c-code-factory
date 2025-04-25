#include "calendermanager.h"
#include"bookingdate.h"

CalenderManager::CalenderManager() {
    // std::cout << "calender manager constructor called" << std::endl;
    calender = new Calender;
    // Initialize the default year
    m_yearsMap[2025] = calender->GetCurrentYear();
}

CalenderManager::~CalenderManager()
{
    // std::cout << "calender manager destructor called" << std::endl;
    delete calender;

    for (auto& pair : m_yearsMap) {
        if (pair.first != 2025) {
            delete pair.second;
        }
    }
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

    Year *y = calender->GetCurrentYear();

    Month *m = y->GetCurrentMonth(4);

    if (m) {
        currentdate = m->GetCurrentDate(28);
    } else {
        std::cout << "Month not found!" << std::endl;
    }
}

Year* CalenderManager::GetOrCreateYear(int year)
{
    auto it = m_yearsMap.find(year);
    if (it != m_yearsMap.end()) {
        return it->second;
    }

    Year* newYear = new Year(year);
    m_yearsMap[year] = newYear;
    return newYear;
}

void CalenderManager::PrintMonthCalendar(int month, int year, std::map<BookingDate, std::list<std::string> > *bookingMap)
{
    Year *y = GetOrCreateYear(year);
    if (y) {
        Month *m = y->GetCurrentMonth(month);
        if (m) {
            std::map<int, int> bookingCounts;

            if (bookingMap != nullptr) {
                for (const auto& pair : *bookingMap) {
                   const BookingDate& date = pair.first;
                    if (date.GetMonth() == month && date.GetYear() == year) {
                        bookingCounts[date.GetDay()] = pair.second.size();
                    }
                }
            }

            m->PrintCalendar(year, &bookingCounts);
        }
        else {
            std::cout << "Month not found!" << std::endl;
        }
    }
    else {
        std::cout << "Year not found!" << std::endl;
    }
}
void CalenderManager::NavigateCalendar(int &month, int &year, bool nextMonth, std::map<BookingDate, std::list<std::string> > *bookingMap)
{
    if (nextMonth) {
        month++;
        if (month > 12) {
            month = 1;
            year++;
        }
    } else {
        month--;
        if (month < 1) {
            month = 12;
            year--;
        }
    }

    PrintMonthCalendar(month, year, bookingMap);
}
