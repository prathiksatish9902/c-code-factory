#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
class Student
{
public:
    int* m_a;
    //Student(int a);
    Student();
    ~Student();
    Student(const Student &s2);
};

#endif // STUDENT_H
