#include "collage.h"




Collage::Collage(int id, std::string name , std::string department)
{
    std::cout<<"collage constructor called"<<std::endl;
    m_id = id;
    m_name = name;
    Department department;
    department.setDepartmentName("CS");

    m_departmentVector.push_back(department);
}


Collage::~Collage()
{
    std::cout<<"collage destructor called"<<std::endl;
}

void Collage::setDepartmentName(Department *newDepartmentName)
{
    std::cout<<"set department function called"<<std::endl;
    m_departmentName = newDepartmentName;
}

Department *Collage::getDepartmentName() const
{
    std::cout<<"get department function called"<<std::endl;
    return m_departmentName;
}

