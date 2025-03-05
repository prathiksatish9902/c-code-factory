#include "collage.h"

Collage::Collage(int id, std::string name) {
    std::cout<<"collage constructor called"<<std::endl;
    m_CollageDetails = new CommonDetails;
    m_CollageDetails->SetId(id);
    m_CollageDetails->SetName(name);
}

Collage::~Collage()
{
    std::cout<<"collage destructor called"<<std::endl;

}


CommonDetails *Collage::getCollageId() const
{
    std::cout<<"get collage id function called"<<std::endl;
    return m_CollageDetails->GetId();
}


CommonDetails *Collage::getCollageName() const
{
    std::cout<<"get collage name function called"<<std::endl;
    return m_CollageDetails->GetName();
}
