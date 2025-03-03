#include <iostream>
#include<vector>
#include"student.h"
using namespace std;

int main()
{
    vector<Student>studentvector;
    std::cout<<studentvector.max_size()<<std::endl;

    studentvector.reserve(6);
    std::cout<<studentvector.capacity()<<std::endl;
    std::cout<<studentvector.max_size()<<std::endl;

    Student s1(1,"abc",2);
    Student s2(2,"def",3);
    Student s3(3,"hij",4);
    Student s4(4,"klm",5);
    Student s5(5,"nop",6);
    Student s6(6,"xyz",7);
    std::cout<<"size :"<<size(studentvector)<<std::endl;
    //studentvector.reserve(6);
    studentvector.push_back(s1);
    std::cout<<"size :"<<size(studentvector)<<std::endl;

    studentvector.push_back(s2);
    std::cout<<"size :"<<size(studentvector)<<std::endl;

    studentvector.push_back(s3);
    std::cout<<"size :"<<size(studentvector)<<std::endl;

    studentvector.push_back(s4);
    std::cout<<"size :"<<size(studentvector)<<std::endl;

    studentvector.push_back(s5);
    std::cout<<"size :"<<size(studentvector)<<std::endl;

    studentvector.push_back(s6);
    std::cout<<"size :"<<size(studentvector)<<std::endl;
    // for(int i =0 ; i<studentvector[i] ; i++)
    // {
    //     std::cout<<"data \n"<<studentvector[i]<<std::endl;
    // }
    studentvector.shrink_to_fit();
    for(auto &value : studentvector)
    {
        std::cout<<"id :"<<value.m_id<<"name :"<<value.m_name<<"std :"<<value.m_stnd<<std::endl;
    }
        return 0;
}
