#ifndef STUDENT_H
#define STUDENT_H
#include"person.h"
class Student:public Person
{
public:
    Student(int id , std::string name , std::string department);
    ~Student();

    int getId();
    std::string getName();
    std::string getDepartment();
    void setDetails(std::string name ,std::string department);

};

#endif // STUDENT_H
