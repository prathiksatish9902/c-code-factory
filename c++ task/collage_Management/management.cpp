#include "management.h"

Management::Management() {
    std::cout<<"management constructor called"<<std::endl;
}

Management::~Management()
{
    std::cout<<"management destructor called"<<std::endl;

}

void Management::initStudent(std::list<Student> *studentlist)
{

}

void Management::addStudent(int id , std::string name , std::string department)
{
    std::cout<<"add student function called"<<std::endl;
m_studentlist->push_back(Student);
}

void Management::deleteStudent(int id)
{
    for(auto i = m_studentlist->begin(); i!=m_studentlist->end();i++)
    {
        if(i->getId() == id)
        {
            m_studentlist->erase(i);
            return;
        }
    }
}

void Management::updateStudent(int id, std::string name, std::string department)
{
    for(auto i = m_studentlist->begin(); i!=m_studentlist->end();i++)
    {

    }
}
