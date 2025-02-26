#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
class Student
{

public:
    int id;
    std::string name;
    std::string department;
    Student(int id,std::string name,std::string department);
    ~Student();

};

#endif // STUDENT_H
