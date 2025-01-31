#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
class STUDENT
{
public:
    std::string m_name;
    int m_id;
    int m_standard;
    std::string m_address;
    STUDENT(std::string name,int id,int standard,std::string address);
    void display();
};

#endif // STUDENT_H
