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
    // std::string getname();
    // int getage();
    // std::string getusn();
    // std::string getmobile();
};

#endif // STUDENT_H
