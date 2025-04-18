#ifndef MONTH_H
#define MONTH_H
#include<iostream>
#include<vector>
class Month
{
public:
    Month();
    ~Month();

private:
    int m_days;
    std::vector<int> m_daysList;
};

#endif // MONTH_H
