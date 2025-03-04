#ifndef DETAILS_H
#define DETAILS_H
#include<iostream>
class Details
{
private:
    int m_id;
    std::string m_name;
    std::string m_department;
public:
    Details(int id , std::string name , std::string department);
    ~Details();

    void SetId(int id);
    int GetId();

    void SetName(std::string name);
    std::string GetName();

    void SetDepartment(std::string department);
    std::string GetDepartment();
};

#endif // DETAILS_H
