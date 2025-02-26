#include "student.h"

Student::Student(int id, std::string name, int Std) {
    std::cout<<"student constructor called"<<std::endl;
    m_id = id;
    m_name = name;
    m_Std = Std;
}

Student::Student(Student &s)
{
    std::cout<<"copy constructor called"<<std::endl;
    this->m_id = s.m_id;
    this->m_name = s.m_name;
    this->m_Std = s.m_Std;

}

Student::~Student()
{
    std::cout<<"student destructor called"<<std::endl;

}
