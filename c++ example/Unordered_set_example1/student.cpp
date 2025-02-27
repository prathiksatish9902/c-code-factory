#include "student.h"

Student::Student(int id, std::string name, int Std) {
    std::cout<<"student constructor called"<<std::endl;
    m_id = id;
    m_name = name;
    m_Std = Std;
}


Student::~Student()
{
    std::cout<<"student destructor called"<<std::endl;

}



Student::Student()
{
    std::cout<<"student empty constructor called"<<std::endl;

}

Student &Student::operator==(const Student &s)
{
    Student stud;
    // stud.m_id == this->m_id;
    // stud.m_name == this->m_name;
    // stud.m_Std == this->m_Std;
    stud.m_id == s.m_id;
    stud.m_name == s.m_name;
    stud.m_Std == s.m_Std;
    return stud;
}

