#ifndef STAFF_H
#define STAFF_H
#include"personaldetails.h"

class Staff:public PersonalDetails
{
public:
    Staff(float salary , int experiance);
    ~Staff();

    float GetSalary();
    int GetExperiance();

    void SetSalary(float salary);
    void SetExperiance(int experiance);

private:
    float m_salary;
    int m_experiance;
};

#endif // STAFF_H
