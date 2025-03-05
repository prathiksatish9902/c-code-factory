#include "student.h"

Student::Student(int id, std::string name) {
    std::cout<<"student constructor called"<<std::endl;
    m_StudentDetails = new CommonDetails;
    m_StudentDetails->SetId(id);
    m_StudentDetails->SetName(name);
}

Student::~Student()
{
    std::cout<<"student destructor called"<<std::endl;

}


CommonDetails *Student::getStudentId() const
{
    std::cout<<"get student id function called"<<std::endl;
    return m_StudentDetails->GetId();
}


CommonDetails *Student::getStudentName() const
{
    std::cout<<"get student name function called"<<std::endl;
    return m_StudentDetails->GetName();
}
