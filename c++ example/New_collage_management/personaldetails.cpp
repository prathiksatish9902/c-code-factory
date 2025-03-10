#include "personaldetails.h"

PersonalDetails::PersonalDetails(std::string name, int id, std::string address) {
    std::cout<<"personal details constructor called"<<std::endl;
    m_name = name;
    m_id = id;
    m_address = address;
}

PersonalDetails::~PersonalDetails()
{
    std::cout<<"personal details destructor called"<<std::endl;

}

std::string PersonalDetails::GetName()
{
    std::cout<<"get name function called"<<std::endl;
    return m_name;
}

int PersonalDetails::GetId()
{
    std::cout<<"get id function called"<<std::endl;
    return m_id;
}

std::string PersonalDetails::GetAdderss()
{
    std::cout<<"get address function called"<<std::endl;
    return m_address;
}

void PersonalDetails::SetName(std::string name)
{
    std::cout<<"set name function called"<<std::endl;
    m_name = name;
}

void PersonalDetails::SetId(int id)
{
    std::cout<<"set id function called"<<std::endl;
    m_id = id;
}

void PersonalDetails::SetAddress(std::string address)
{
    std::cout<<"set address function called"<<std::endl;
    m_address = address;
}
