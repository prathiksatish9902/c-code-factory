#include "staff.h"

Staff::Staff(float salary, int experiance) {
    std::cout<<"staff constructor called"<<std::endl;
    m_salary = salary;
    m_experiance = experiance;
}

Staff::~Staff()
{
    std::cout<<"staff destructor called"<<std::endl;

}

float Staff::GetSalary()
{
    std::cout<<"get salary function called"<<std::endl;
    return m_salary;
}

int Staff::GetExperiance()
{
    std::cout<<"get experiance function called"<<std::endl;
    return m_experiance;
}

void Staff::SetSalary(float salary)
{
    std::cout<<"set salary function called"<<std::endl;
    m_salary = salary;
}

void Staff::SetExperiance(int experiance)
{
    std::cout<<"set experiance function called"<<std::endl;
    m_experiance = experiance;
}
