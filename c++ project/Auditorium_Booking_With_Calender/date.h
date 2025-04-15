#ifndef DATE_H
#define DATE_H
#include<iostream>
#include<iomanip>
class Date
{
public:
    Date(int day , int month , int year);
    ~Date();

    void SetDay(int day);
    int GetDay();

    void SetMonth(int month);
    int GetMonth();

    void SetYear(int year);
    int GetYear();

    bool isLeapYear();

    int GetDaysInMonths();

    int GetStartingDay();

    void DisplayCalender();

    std::string ToString() const;


private:
    int m_day;
    int m_month;
    int m_year;
};

#endif // DATE_H
