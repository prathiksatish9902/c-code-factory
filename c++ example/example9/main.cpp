#include <iostream>
#include "student.h"
using namespace std;

int main()
{
    Student *s1 = new Student;
    *s1->m_age = 12;
    *s1->m_phone = 12345;
    s1->printme();
    Student *s2 = new Student;
    *s2->m_age=14;
    *s2->m_phone=1234567;
    s2->printme();
    delete s1;
    delete s2;
    return 0;
}
