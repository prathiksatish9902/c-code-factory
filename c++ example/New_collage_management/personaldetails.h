#ifndef PERSONALDETAILS_H
#define PERSONALDETAILS_H

#include<iostream>

class PersonalDetails
{
public:
    PersonalDetails(std::string name , int id , std::string address);
    ~PersonalDetails();

    std::string GetName();
    int GetId();
    std::string GetAdderss();

    void SetName(std::string name);
    void SetId(int id);
    void SetAddress(std::string address);

private:
    std::string m_name;
    int id;
    std::string m_address;
};

#endif // PERSONALDETAILS_H
