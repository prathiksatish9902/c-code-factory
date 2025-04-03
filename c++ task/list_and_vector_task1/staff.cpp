#include "staff.h"

Staff::Staff(int id, std::string name, std::string department)
{
    std::cout<<"staff  default constructor called"<<std::endl;
    m_personal_details = new PersonalDetails;
    m_personal_details->setId(id);
    m_personal_details->setName(name);
    m_personal_details->setDepartment(department);
}

Staff::~Staff()
{
    std::cout<<"staff destructor called"<<std::endl;
    delete m_personal_details;
}

PersonalDetails *Staff::personal_details() const
{
    return m_personal_details;
}

void Staff::setPersonal_details(PersonalDetails *newPersonal_details)
{
    m_personal_details = newPersonal_details;
}


