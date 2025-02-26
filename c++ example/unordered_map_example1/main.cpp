#include <iostream>
#include<unordered_map>
#include"student.h"
using namespace std;

int main()
{
    std::unordered_map<int,Student> studentmap;
    Student s1(1,"abc",1);
    Student s2(3,"def",3);
    Student s3(4,"hij",5);
    studentmap[s1.m_id] = s1;
    studentmap[s2.m_id] = s2;
    studentmap[s3.m_id] = s3;
    for(auto &pair : studentmap){
        //studentmap.clear();

        std::cout<<"id :"<<pair.second.m_id<<"name :"<<pair.second.m_name<<"std :"<<pair.second.m_Std<<std::endl;
    }
    return 0;
}
