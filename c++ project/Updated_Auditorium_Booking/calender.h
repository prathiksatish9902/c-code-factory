#ifndef CALENDER_H
#define CALENDER_H
#include<iostream>
#include<iomanip>
#include<string>

class Calender
{
public:
    Calender(int day, int month , int year); // Default parameter values
    ~Calender();

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

    // Add comparison operator for map key
    bool operator<(const Calender& other) const ;



    // Add equality operator
    bool operator==(const Calender& other) const;



private:
    int m_day;
    int m_month;
    int m_year;
};

#endif // CALENDER_H
