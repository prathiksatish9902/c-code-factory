#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
class Student
{
public:
    int m_id;
    std::string m_name;
    int m_Std;
    Student(int id , std::string name , int Std);
    Student(Student &s);
    ~Student();
};

#endif // STUDENT_H
