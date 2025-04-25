#ifndef DATE_H
#define DATE_H
#include<iostream>
class Date
{
public:
    Date();
    Date(int date);
    ~Date();

    void SetDate(int date);
    int GetDate();

private:
    int m_date;
};

#endif // DATE_H
