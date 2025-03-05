#include "department.h"

Department::Department(std::string departmentName) {
    std::cout<<"department constructor called"<<std::endl;
    m_departmentName = departmentName;
}

Department::~Department()
{
    std::cout<<"department destructor called"<<std::endl;

}

void Department::setDepartment(Department &departmentName)
{
    std::cout<<"set department function called"<<std::endl;
m_departmentName.push_back(departmentName);
}

std::string Department::getDepartment(){
    return m_departmentName;
}

std::string Department::departmentName() const
{
    return m_departmentName;
}

void Department::setDepartmentName(const std::string &newDepartmentName)
{
    m_departmentName = newDepartmentName;
}
