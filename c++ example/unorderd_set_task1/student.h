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
    bool operator==(const Student& other) const {
        return m_rollNum == other.m_rollNum;  // Compare using roll number
    }



    std::string getName() const { return m_name; }
    int getRollNum() const { return m_rollNum; }
    int getClass() const { return m_Class; }



    template<typename T>
    friend T& operator<<(T& os, const Student& student) {
        os << "Name: " << student.m_name
           << ", Roll Number: " << student.m_rollNum
           << ", Class: " << student.m_Class;
        return os;
    }

};


namespace std {
template<>
struct hash<Student> {
    size_t operator()(const Student& student) const {
        return hash<int>()(student.getRollNum());  // Hash based on roll number
    }
};
}


#endif // STUDENT_H
