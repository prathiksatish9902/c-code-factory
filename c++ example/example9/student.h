#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
class Student
{
public:
    int *m_age;
    int *m_phone;
    Student();
    void printme(){
        std::cout<<*m_age;
        std::cout<<*m_phone;
    }
    ~Student();

};

#endif // STUDENT_H
