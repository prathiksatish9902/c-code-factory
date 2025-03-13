#ifndef STUDENT_H
#define STUDENT_H
#include"personaldetails.h"

class Student:public PersonalDetails
{
public:
    Student(int standard , std::string section);
    Student();
    ~Student();

    int GetStandard();
    std::string GetSection();

    void SetStandard(int standard);
    void SetSection(std::string section);

private:
    int m_standard;
    std::string m_section;
};

#endif // STUDENT_H
