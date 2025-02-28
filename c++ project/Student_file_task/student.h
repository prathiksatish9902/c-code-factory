#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
class Student
{
public:
    std::string m_name;
    int m_age;
    std::string m_usn;
    std::string m_mobile;
    Student(std::string name, int age , std::string usn ,std::string mobile);
    ~Student();
};

#endif // STUDENT_H
