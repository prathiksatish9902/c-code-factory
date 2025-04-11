#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
class Student
{
public:
    std::string m_name;
    Student(std::string name);
    ~Student();

    void requestBook(std::string& bookTitle);
    void receiveBook(std::string& bookTitle);

};

#endif // STUDENT_H
