#ifndef CALENDER_H
#define CALENDER_H
#include<iostream>
#include<iomanip>
#include "month.h"
#include<vector>
class Calender
{
public:
    Calender();
    Calender(int year);
    ~Calender();

    Month GetMonth();

    int GetYear();

    void AddMonths();

private:
    int m_year;
    Month *m_month;
    std::vector<Month> m_monthList;

 };

#endif // CALENDER_H
