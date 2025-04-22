#include "month.h"
#include <ctime>

Month::Month() {
    std::cout<<"month empty constructor called"<<std::endl;
}

Month::Month(std::string month)
{
    AddDate();

    std::cout<<"month parameter constructor called"<<std::endl;
    m_month = month;
    date = new Date;
}

Month::~Month()
{
    std::cout<<"month destructor called"<<std::endl;
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

void Month::AddDate()
{
    for(int i = 1; i < 31;i++){
        m_dateList.push_back(i);
    }
}

int Month::GetCurrentDate(int date)
{
    return m_dateList[date-1];
    return 10;
}

void Month::PrintCalendar(int year)
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

    // Get days in month (for simplicity using the vector size)
    int daysInMonth = m_dateList.size();

    // Get the first day of the month (0 = Sunday, 1 = Monday, etc.)
    int firstDay = GetFirstDayOfMonth(monthNum, year);

    // Print calendar header
    std::cout << " Calendar for " << monthNum << "/" << year << std::endl;
    std::cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat" << std::endl;

    // Print leading spaces
    int currentDay = 0;
    for (int i = 0; i < firstDay; i++) {
        std::cout << "     ";
        currentDay++;
    }

    // Print days
    for (int i = 1; i <= daysInMonth; i++) {
        std::cout << std::setw(5) << i;
        currentDay++;

        // Start a new line after Saturday
        if (currentDay % 7 == 0 || i == daysInMonth) {
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
