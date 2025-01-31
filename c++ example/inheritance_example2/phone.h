#ifndef PHONE_H
#define PHONE_H
#include<iostream>
class Phone
{
public:
    std::string m_number;
    Phone(std::string number);
    ~Phone();
    void makeCall();
    void display();

};

#endif // PHONE_H
