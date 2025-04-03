#include "personaldetails.h"

PersonalDetails::PersonalDetails(int id, std::string name, std::string department) {
    std::cout<<"personal details constructor is called"<<std::endl;
   m_id = id;
    m_name = name;
    m_department = department;
}

PersonalDetails::~PersonalDetails()
{
    std::cout<<"personal details destructor is called"<<std::endl;

}

void PersonalDetails::setId(int id)
{
    std::cout<<"set id is called"<<std::endl;
    m_id = id;
 }

void PersonalDetails::setName(std::string name)
{
    std::cout<<"set name is called"<<std::endl;
    m_name = name;
}

void PersonalDetails::setDepartment(std::string department)
{
    std::cout<<"set department is called"<<std::endl;
    m_department = department;
}

int PersonalDetails::getId()
{
    std::cout<<"get id is called"<<std::endl;

    return m_id;
}

std::string PersonalDetails::getName()
{
    std::cout<<"get name is called"<<std::endl;
    return m_name;
}

std::string PersonalDetails::getDepartment()
{
    std::cout<<"get department is called"<<std::endl;
    return m_department;
}


