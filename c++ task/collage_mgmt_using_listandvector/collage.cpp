#include "collage.h"




Collage::Collage(int id, std::string name , std::string department)
{
    std::cout<<"collage constructor called"<<std::endl;
    m_id = id;
    m_name = name;
    m_departmentName = new Department;
    m_departmentName->setDepartment(department);
}


Collage::~Collage()
{
    std::cout<<"collage destructor called"<<std::endl;
    delete m_departmentName;
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

