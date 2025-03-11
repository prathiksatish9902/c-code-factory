#include "collage.h"

Collage::Collage(std::string collageName, int collageId, std::string collageAddress) {
    std::cout<<"collage constructor called"<<std::endl;
    m_collageName = collageName;
    m_collageId = collageId;
    m_collageAddress = collageAddress;
}

Collage::~Collage()
{
    std::cout<<"collage destructor called"<<std::endl;

}



std::string Collage::GetcollageName()
{
    std::cout<<"get collage name function called"<<std::endl;
    return m_collageName;
}

int Collage::GetcollageId()
{
    std::cout<<"get collage id function called"<<std::endl;
    return m_collageId;
}

std::string Collage::GetcollageAddress()
{
    std::cout<<"get collage address function called"<<std::endl;
    return m_collageAddress;
}



void Collage::SetcollageName(std::string collageName)
{
    std::cout<<"set collage name function called"<<std::endl;

    m_collageName = collageName;
}

void Collage::SetcollageId(int collageId)
{
    std::cout<<"set collage id function called"<<std::endl;
    m_collageId = collageId;
}

void Collage::SetcollageAddress(std::string collageAddress)
{
    std::cout<<"set collage address function called"<<std::endl;
    m_collageAddress = collageAddress;
}



