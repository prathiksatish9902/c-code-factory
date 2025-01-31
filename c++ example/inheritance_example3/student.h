#ifndef STUDENT_H
#define STUDENT_H
#include"person.h"
class Student:public Person
{

public:
    int m_class;
    Student(int Class,std::string s_name,std::string s_phnum/*int s_age*/);
    ~Student();
    void display();
};

#endif // STUDENT_H
