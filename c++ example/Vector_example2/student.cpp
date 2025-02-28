#include "student.h"

Student::Student(int id, std::string name, int stnd) {
    std::cout<<"student constructor called"<<std::endl;
    m_id = id;
    m_name = name;
    m_stnd = stnd;
}

Student::~Student()
{
    std::cout<<"student destructor called"<<std::endl;

}
