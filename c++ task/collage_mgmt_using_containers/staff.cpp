#include "staff.h"

Staff::Staff(int id, std::string name) {
    std::cout<<"staff constructor called"<<std::endl;
    m_StaffDetails = new CommonDetails;
    m_StaffDetails->SetId(id);
    m_StaffDetails->SetName(name);
}

Staff::~Staff()
{
    std::cout<<"staff destructor called"<<std::endl;

}


CommonDetails *Staff::getStaffID() const
{
    std::cout<<"get staff id function called"<<std::endl;
    return m_StaffDetails->GetId();
}


CommonDetails *Staff::getStaffName() const
{
    std::cout<<"get staff name function called"<<std::endl;
    return m_StaffDetails->GetName();
}
