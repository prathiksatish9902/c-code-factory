#include "month.h"
#include <ctime>

Month::Month() {
    // std::cout<<"month empty constructor called"<<std::endl;
}

Month::Month(std::string month)
{
    AddDate();

    // std::cout << "month parameter constructor called" << std::endl;
    m_month = month;
    date = new Date;

    if (m_month == "january") AddDate(31);
    else if (m_month == "february") AddDate(28);
    else if (m_month == "march") AddDate(31);
    else if (m_month == "april") AddDate(30);
    else if (m_month == "may") AddDate(31);
    else if (m_month == "june") AddDate(30);
    else if (m_month == "july") AddDate(31);
    else if (m_month == "august") AddDate(31);
    else if (m_month == "september") AddDate(30);
    else if (m_month == "october") AddDate(31);
    else if (m_month == "november") AddDate(30);
    else if (m_month == "december") AddDate(31);
    else AddDate(30); // Default
}

Month::~Month()
{
    // std::cout<<"month destructor called"<<std::endl;
    delete date;
}

void Month::SetMonth(std::string month)
{
    m_month = month;
}

std::string Month::GetMonth()
{
    return m_month;
}

void Month::AddDate(int numDays)
{
    m_dateList.clear();
    for (int i = 1; i <= numDays; i++) {
        m_dateList.push_back(i);
    }
}

int Month::GetCurrentDate(int date)
{
    return m_dateList[date-1];
}

void Month::PrintCalendar(int year, const std::map<int, int>* bookingCounts)
{
    int monthNum = 0;
    if (m_month == "january") monthNum = 1;
    else if (m_month == "february") monthNum = 2;
    else if (m_month == "march") monthNum = 3;
    else if (m_month == "april") monthNum = 4;
    else if (m_month == "may") monthNum = 5;
    else if (m_month == "june") monthNum = 6;
    else if (m_month == "july") monthNum = 7;
    else if (m_month == "august") monthNum = 8;
    else if (m_month == "september") monthNum = 9;
    else if (m_month == "october") monthNum = 10;
    else if (m_month == "november") monthNum = 11;
    else if (m_month == "december") monthNum = 12;

    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (monthNum == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            daysInMonth[2] = 29;
        }
    }

    int firstDay = GetFirstDayOfMonth(monthNum, year);

    std::cout << " Calendar for " << monthNum << "/" << year << std::endl;
    std::cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat" << std::endl;

    int currentDay = 0;
    for (int i = 0; i < firstDay; i++) {
        std::cout << "     ";
        currentDay++;
    }

    for (int i = 1; i <= daysInMonth[monthNum]; i++) {
        int bookingCount = 0;
        if (bookingCounts != nullptr) {
            auto it = bookingCounts->find(i);
            if (it != bookingCounts->end()) {
                bookingCount = it->second;
            }
        }

        if (bookingCount == 0 || bookingCount > 0) {
            std::cout << std::setw(2) << i << "/" << bookingCount << " ";
        } else {
            std::cout << std::setw(2) << i << "   ";
        }

        currentDay++;

        if (currentDay % 7 == 0 || i == daysInMonth[monthNum]) {
            std::cout << std::endl;
        }
    }
    std::cout << std::endl;
}

int Month::GetFirstDayOfMonth(int month, int year)
{
    struct tm timeinfo = {0};
    timeinfo.tm_year = year - 1900;
    timeinfo.tm_mon = month - 1;
    timeinfo.tm_mday = 1;

    mktime(&timeinfo);
    return timeinfo.tm_wday;
}
