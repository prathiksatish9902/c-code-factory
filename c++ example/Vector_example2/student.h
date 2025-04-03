#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
class Student
{
public:
    int m_id;
    std::string m_name;
    int m_stnd;
    Student(int id , std::string name , int stnd);
    ~Student();
};

#endif // STUDENT_H
