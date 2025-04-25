// Add this function to the Month class in month.h
#ifndef MONTH_H
#define MONTH_H
#include<iostream>
#include<vector>
#include<iomanip>
#include<string>
#include"date.h"
#include "map"
class Month
{
public:
    Month();
    Month(std::string month);
    ~Month();

    void SetMonth(std::string month);
    std::string GetMonth();

void AddDate(int numDays = 30);
    int GetCurrentDate(int date);

    void PrintCalendar(int year, const std::map<int, int>* bookingCounts = nullptr);


private:
    Date *date;
    std::string m_month;
    std::vector<int> m_dateList;

    int GetFirstDayOfMonth(int month, int year);
};

#endif // MONTH_H
