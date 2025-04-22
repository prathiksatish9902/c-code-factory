// Add this function to the Month class in month.h
#ifndef MONTH_H
#define MONTH_H
#include<iostream>
#include<vector>
#include<iomanip>
#include<string>
#include"date.h"
class Month
{
public:
    Month();
    Month(std::string month);
    ~Month();

    void SetMonth(std::string month);
    std::string GetMonth();

    void AddDate();
    int GetCurrentDate(int date);

    // New function to print calendar
    void PrintCalendar(int year);

private:
    Date *date;
    std::string m_month;
    std::vector<int> m_dateList;

    // Helper function to determine the first day of the month
    int GetFirstDayOfMonth(int month, int year);
};

#endif // MONTH_H
