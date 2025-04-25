#include "year.h"

Year::Year() {
    // std::cout<<"year empty constructor called"<<std::endl;
}

Year::Year(int year)
{
    // std::cout<<"year parameter constructor called"<<std::endl;
    m_year = year;
    month = new Month;
    this->AddMonth();


}

Year::~Year()
{
    // std::cout<<"year destructor called"<<std::endl;
    // delete month;
    for(auto &pair : m_monthMap){
        delete pair.second;
    }
}

void Year::SetYear(int year)
{
    m_year = year;
}

int Year::GetYear()
{
    return m_year;
}

void Year::AddMonth()
{
    // std::cout<<"add month"<<std::endl;
    Month *month1 = new Month("january");
    Month *month2 = new Month("february");
    Month *month3 = new Month("march");
    Month *month4 = new Month("april");
    Month *month5 = new Month("may");
    Month *month6 = new Month("june");
    Month *month7 = new Month("july");
    Month *month8 = new Month("august");
    Month *month9 = new Month("september");
    Month *month10 = new Month("october");
    Month *month11 = new Month("november");
    Month *month12 = new Month("december");

    m_monthMap [1] = month1;
    m_monthMap [2] = month2;
    m_monthMap [3] = month3;
    m_monthMap [4] = month4;
    m_monthMap [5] = month5;
    m_monthMap [6] = month6;
    m_monthMap [7] = month7;
    m_monthMap [8] = month8;
    m_monthMap [9] = month9;
    m_monthMap [10] = month10;
    m_monthMap [11] = month11;
    m_monthMap [12] = month12;

}

Month *Year::GetCurrentMonth(int key)
{
    auto it = m_monthMap.find(key);
    if (it != m_monthMap.end()) {
        return it->second;
    }
    return nullptr;
}
