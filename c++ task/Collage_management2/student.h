#ifndef STUDENT_H
#define STUDENT_H

#include "person.h"
#include <string>
using namespace std;

class Student:public Person
{
public:
    Student(int ID,string name,string dept);
    ~Student();

    int getID();
    string getName();
    string getBranch();

    void setDetails(string name,string dept);
};


#endif // STUDENT_H
