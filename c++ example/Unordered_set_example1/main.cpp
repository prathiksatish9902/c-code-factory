#include <iostream>
#include<unordered_set>
#include"student.h"
using namespace std;

int main()
{
    std::unordered_set<Student> studentset;
    Student s1(1,"abc",2);
    Student s2(2,"def",4);
    Student s3(3,"ghi",5);
    studentset.insert(s1);
    studentset.insert(s2);
    studentset.insert(s3);
    //studentset = s4;
    studentset.insert(s2);
    for(auto &value : studentset)
    {
        std::cout<<"id :"<<value.m_id<<"name :"<<value.m_name<<"Std :"<<value.m_Std<<std::endl;
    }


    return 0;
}
