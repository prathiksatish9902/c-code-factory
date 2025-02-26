#include "student.h"

Student::Student(int id, std::string name, int Std) {
    std::cout<<"student constructor called"<<std::endl;
    m_id = id;
    m_name = name;
    m_Std = Std;
}

Student::Student()
{
    std::cout<<"empty constructor called"<<std::endl;

}

Student::~Student()
{
    std::cout<<"student destructor called"<<std::endl;

}
