#ifndef CALENDER_H
#define CALENDER_H
#include<iostream>
#include<list>
#include"year.h"
class Calender
{
public:
    Calender();
    ~Calender();

    void AddYear(Year &year);

private:
    std:: list<Year> m_yearSet;

};

#endif // CALENDER_H
