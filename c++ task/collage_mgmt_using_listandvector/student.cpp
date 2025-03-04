#include "student.h"

Student::Student(int id , std::string name , std::string department) {
    std::cout<<"student constructor called"<<std::endl;
    m_studentDetails = new Details;
    m_studentDetails->SetId(id);
    m_studentDetails->SetName(name);
    m_studentDetails->SetDepartment(department);
}


Student::~Student()
{
    std::cout<<"student destructor called"<<std::endl;
    delete m_studentDetails;

}

void Student::setStudentDetails(Details *newStudentDetails)
{
    std::cout<<"set student details function called"<<std::endl;
    m_studentDetails = newStudentDetails;
}

Details *Student::getStudentDetails() const{
    return m_studentDetails;
}
