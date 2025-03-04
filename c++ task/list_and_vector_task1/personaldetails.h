#ifndef PERSONALDETAILS_H
#define PERSONALDETAILS_H
#include<iostream>
class PersonalDetails
{
private:
    int m_id;
    std::string m_name;
    std::string m_department;
public:

    PersonalDetails(int id , std::string name , std::string department);
    ~PersonalDetails();

    void setId(int id);
    void setName(std::string name);

    void setDepartment(std::string department);
    int getId();

    std::string getName();
    std::string getDepartment();
};

#endif // PERSONALDETAILS_H
