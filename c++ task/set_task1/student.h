#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
class Student
{
    std::string m_name;
    int m_rollNum;
    int m_Class;

public:
    Student(std::string name,int rollNum,int Class);
    ~Student();
    template<typename T>
    friend T& operator<<(T& os, const Student& student);

    bool operator<(const Student& other) const {
        return m_rollNum < other.m_rollNum;
    }

};

template<typename T>
T& operator<<(T& os, const Student& student) {
    os << "Student Details:\n";
    os << "Name: " << student.m_name << "\n";
    os << "Roll Number: " << student.m_rollNum << "\n";
    os << "Class: " << student.m_Class;
    return os;
}


#endif // STUDENT_H
