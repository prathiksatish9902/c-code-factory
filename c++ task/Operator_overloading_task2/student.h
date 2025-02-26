#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
class Student
{
    std::string m_name;
    int m_rollNum;
    int m_class;
public:
    Student(std::string name,int rollNum,int Class);
    ~Student();
    //Student operator <<(const Student &s);
    friend std::ostream& operator<<(std::ostream& os, const Student& s);

};

#endif // STUDENT_H
