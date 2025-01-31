#include "student.h"

Student::Student() {
    std::cout<<"constructor calling"<<std::endl;
    m_age=new int;
    m_phone = new int;
}

Student::~Student()
{
    std::cout<<"destructor calling"<<std::endl;

    delete m_age;
    delete m_phone;
}
