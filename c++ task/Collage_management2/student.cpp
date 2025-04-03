#include "student.h"
#include <iostream>

Student::Student(int ID,string name,string dept)
{
    cout<<"Student Constructor"<<endl;
    m_ID = ID;
    m_name = name;
    m_dept = dept;
}

int Student::getID()
{
    return m_ID;
}

string Student::getName()
{
    return m_name;
}

string Student::getBranch()
{
    return m_dept;
}

void Student::setDetails(string name, string dept)
{
    m_name = name;
    m_dept = dept;
}

Student::~Student()
{
    cout<<"Student Destructor"<<endl;
}
