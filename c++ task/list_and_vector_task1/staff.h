#ifndef STAFF_H
#define STAFF_H
#include<iostream>
#include"personaldetails.h"

class Staff
{

public:

    Staff(int id , std::string name , std::string department);
    ~Staff();

    PersonalDetails *personal_details() const;
    void setPersonal_details(PersonalDetails *newPersonal_details);

private:
    PersonalDetails *m_personal_details;
};

#endif // STAFF_H
