#include <iostream>
#include<set>
#include"student.h"
using namespace std;


int main()
{
    std::set<Student*>studentset;
    Student s1(1,"abc",2);
    Student s2(2,"def",3);
    Student *s=new Student(3,"rama",12);
    Student s3(3,"ghi",5);
    studentset.emplace(s);
    // studentset.insert(s);
     // studentset.insert(s2);
    // studentset.insert(s3);
    for(auto &value : studentset)
    {
        // std::cout<<"id :"<<value.m_id<<"name :"<<value.m_name<<"std: "<<value.m_Std<<std::endl;
    }
    return 0;
}
