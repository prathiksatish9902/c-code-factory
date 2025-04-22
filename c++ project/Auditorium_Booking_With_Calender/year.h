#ifndef YEAR_H
#define YEAR_H
#include<iostream>
#include<map>
#include"month.h"
class Year
{
public:
    Year();
    Year(int year);
    ~Year();

    void SetYear(int year);
    int GetYear();

    void AddMonth();


    Month* GetCurrentMonth(int key);
private:
    int m_year;
    std::map<int , Month* > m_monthMap;
    Month *month;

};

#endif // YEAR_H
