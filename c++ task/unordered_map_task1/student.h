#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

class Student
{
    std::string m_name;
    int m_rollNum;
    int m_Class;
public:
    Student(std::string name, int rollNum, int Class);
    ~Student();



    std::string getName() const { return m_name; }
    int getRollNum() const { return m_rollNum; }
    int getClass() const { return m_Class; }




    template<typename T>
    friend T& operator<<(T& os, const Student& student);
};




template<typename T>
T& operator<<(T& os, const Student& student) {
    os << "Student Details:\n"
       << "Name: " << student.m_name << "\n"
       << "Roll Number: " << student.m_rollNum << "\n"
       << "Class: " << student.m_Class;
    return os;
}


#endif // STUDENT_H
