#include "student.h"

Student::Student(int id, std::string name, std::string department) {
    m_id = id;
    m_name = name;
    m_department = department;
}

int Student::getId()
{
    return m_id;
}

std::string Student::getName()
{
    return m_name;
}

std::string Student::getDepartment()
{
    return m_department;
}

void Student::setDetails(std::string name, std::string department)
{
    m_name = name;
    m_department = department;
}
