#include "student.h"

Student::Student(std::string name, int age , std::string usn , std::string mobile) {
    std::cout<<"student constructor called"<<std::endl;
    m_name = name;
    m_age = age;
    m_usn = usn;
    m_mobile = mobile;
}

Student::~Student()
{
    std::cout<<"student destructor called"<<std::endl;

}

// std::string Student::getname()
// {
//     std::cout<<"get name function called"<<std::endl;
//     return m_name;
// }

// int Student::getage()
// {
//     std::cout<<"get age function called"<<std::endl;
//     return m_age;
// }

// std::string Student::getusn()
// {
//     std::cout<<"get usn function called"<<std::endl;
//     return m_usn;
// }

// std::string Student::getmobile()
// {
//     std::cout<<"get mobile function called"<<std::endl;
//     return m_mobile;
// }
