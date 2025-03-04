#include "details.h"

Details::Details(int id, std::string name, std::string department) {
    std::cout<<"details constructor called"<<std::endl;
    m_id = id;
    m_name = name;
    m_department = department;
}

Details::~Details()
{
    std::cout<<"details destructor called"<<std::endl;

}

void Details::SetId(int id)
{
    std::cout<<"set id function called"<<std::endl;
    m_id = id;
}

int Details::GetId()
{
    std::cout<<"get id function called"<<std::endl;

    return m_id;
}

void Details::SetName(std::string name)
{
    std::cout<<"set name function called"<<std::endl;
    m_name = name;

}

std::string Details::GetName()
{
    std::cout<<"get name function called"<<std::endl;
    return m_name;
}

void Details::SetDepartment(std::string department)
{
    std::cout<<"set department function called"<<std::endl;
    m_department = department;

}

std::string Details::GetDepartment()
{
    std::cout<<"get department function called"<<std::endl;
    return m_department;
}
