#include "student.h"

Student::Student(int id, std::string name, int Std) {
    // std::cout<<"student constructor called"<<std::endl;
    m_id = id;
    m_name = name;
    m_Std = Std;
}


Student::~Student()
{
    // std::cout<<"student destructor called"<<std::endl;

}

// std::ostream& operator<<(std::ostream& os, const Student& s) {
//     os << "Student Details:\n";
//     os << "id: " << s.m_id << "\n";
//     os << "name: " << s.m_name << "\n";
//     os << "Class: " << s.m_Std;
//     return os;
// }


