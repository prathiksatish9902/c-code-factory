#include"collage.h"
#include <iostream>

College::College()
{
    std::cout<<"College Constructor"<<endl;
    m_management->initStudent(&m_student);
    m_management->initStaff(&m_staff);
}

College::~College()
{
    std::cout<<"College Destructor"<<endl;
}
