#include <iostream>
#include"student.h"
using namespace std;

int main()
{
    Student s1(1,"abc",4);
    std::cout<<s1.m_id<<s1.m_name<<s1.m_Std<<std::endl;
    Student s2(s1);
    std::cout<<s2.m_id<<s2.m_name<<s2.m_Std<<std::endl;
    Student s3(s1/*s2*/);
    std::cout<<s3.m_id<<s3.m_name<<s3.m_Std<<std::endl;

    return 0;
}
