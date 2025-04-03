#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include"personaldetails.h"
class Student
{

public:
    PersonalDetails *personal_details;
    Student(PersonalDetails *personal_details);
    Student();
    ~Student();

};

#endif // STUDENT_H
