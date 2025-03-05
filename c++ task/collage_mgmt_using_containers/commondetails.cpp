#include "commondetails.h"

CommonDetails::CommonDetails() {
    std::cout<<"common details constructor called"<<std::endl;
}

CommonDetails::~CommonDetails()
{
    std::cout<<"common details destructor called"<<std::endl;

}

void CommonDetails::SetId(int id)
{
    std::cout<<"common details set id function called"<<std::endl;
    m_id = id;

}

int CommonDetails::GetId()
{
    std::cout<<"common details get id function called"<<std::endl;
    return m_id;
}

void CommonDetails::SetName(std::string name)
{
    std::cout<<"common details set name function called"<<std::endl;
    m_name = name;

}

std::string CommonDetails::GetName()
{
    std::cout<<"common details get name function called"<<std::endl;
    return m_name;
}
