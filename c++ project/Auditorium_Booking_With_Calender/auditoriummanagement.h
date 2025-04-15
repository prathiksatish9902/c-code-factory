#ifndef AUDITORIUMMANAGEMENT_H
#define AUDITORIUMMANAGEMENT_H
#include"auditorium.h"
#include<vector>
#include"date.h"
class AuditoriumManagement
{
public:
    AuditoriumManagement();
    ~AuditoriumManagement();

    void AddAuditorium();


    void DisplayAuditorium();

    void DisplayAvailableAuditoriums(Date &date);


    void BookAuditorium();

private:
    std::vector<Auditorium> m_auditoriums;
};

#endif // AUDITORIUMMANAGEMENT_H
