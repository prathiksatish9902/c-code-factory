#include "staff.h"

Staff::Staff(int id, std::string name, std::string department) {
    std::cout<<"staff constructor called"<<std::endl;
    m_staffDetails = new Details;
    m_staffDetails->SetId(id);
    m_staffDetails->SetName(name);
    m_staffDetails->SetDepartment(department);
}


Staff::~Staff()
{
    std::cout<<"staff destructor called"<<std::endl;

}

void Staff::setStaffDetails(Details *newStaffDetails)
{
    std::cout<<"set staff details function called"<<std::endl;
    m_staffDetails = newStaffDetails;
}

Details *Staff ::getStaffDetails() const{
    std::cout<<"get staff details function called"<<std::endl;
    return m_staffDetails;
}

