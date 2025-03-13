#ifndef PERSONALDETAILS_H
#define PERSONALDETAILS_H

#include<iostream>

class PersonalDetails
{
public:
    PersonalDetails(std::string name , int id , std::string address , std::string department);
    PersonalDetails();
    ~PersonalDetails();

    std::string GetName();
    int GetId();
    std::string GetAdderss();
    std::string GetDepartment();

    void SetName(std::string name);
    void SetId(int id);
    void SetAddress(std::string address);
    void SetDepartment(std::string department);

private:
    std::string m_name;
    int m_id;
    std::string m_address;
    std::string m_department;
};

#endif // PERSONALDETAILS_H
