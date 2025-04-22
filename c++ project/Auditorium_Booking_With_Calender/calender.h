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

    void AddYear();
    Year* GetCurrentYear();


private:
    std:: list<Year*> m_yearList;
    Year *year;
};

#endif // CALENDER_H
