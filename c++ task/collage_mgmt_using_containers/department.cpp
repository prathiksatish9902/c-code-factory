#include "department.h"

Department::Department() {
    std::cout<<"department constructor called"<<std::endl;
}

Department::~Department()
{
    std::cout<<"department destructor called"<<std::endl;

}

void Department::SetdepartmentName(std::string departmentName)
{
    std::cout<<"set department name function called"<<std::endl;
    m_departmentName = departmentName;
}

std::string Department::GetdepartmentName()
{
    std::cout<<"get department name function called"<<std::endl;
    return m_departmentName;
}

void Department::SetStaffDEpartment(Staff &staff)
{
    std::cout<<"set staff department function called"<<std::endl;
staffMembers.push_back(staff);
}
