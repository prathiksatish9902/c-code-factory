#include "phone.h"
#include<iostream>
Phone::Phone(std::string number)//:m_number(number)
{
    m_number = number;
    std::cout<<"phone cons called"<<std::endl;

}

Phone::~Phone()
{
    std::cout<<"phone dest called"<<std::endl;

}

void Phone::makeCall()
{
    std::cout<<"call function called"<<std::endl;
}

void Phone::display()
{
    std::cout<<"phone display function called"<<std::endl;
    std::cout<<"dialed number: "<<m_number<<std::endl;
}
