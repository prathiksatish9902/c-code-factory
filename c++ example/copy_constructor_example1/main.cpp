#include <iostream>
#include "student.h"
using namespace std;

int main()
{
    Student s1;
    s1.m_a = new int;
    *s1.m_a = 15;
    Student s2 =s1;
    delete s1.m_a;
    cout<<(*s2.m_a)<<endl;
    return 0;
}
