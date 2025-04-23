#ifndef BOOKINGDATE_H
#define BOOKINGDATE_H
#include<iostream>
#include<iomanip>
#include<string>
class BookingDate
{
public:
    BookingDate(int day, int month , int year);
    ~BookingDate();

    void SetDay(int day);
    int GetDay();

    void SetMonth(int month);
    int GetMonth();

    void SetYear(int year);
    int GetYear();

    std::string ToString() const;

    bool operator<(const BookingDate &other) const ;
    bool operator==(const BookingDate& other) const;



private:
    int m_day;
    int m_month;
    int m_year;
};

#endif // BOOKINGDATE_H
