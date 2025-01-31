#include "student.h"
#include<iostream>

Student::Student() {}


void Student::biodata(){
    std::cout<<"enter student id:"<<std::endl;
    std::cin>>m_id;
    std::cout<<"enter student name:"<<std::endl;
    std::cin>>m_name;
    std::cout<<"enter student std:"<<std::endl;
    std::cin>>m_std;
    std::cout<<"enter student sec:"<<std::endl;
    std::cin>>m_sec;
}


void Student::print(){
    std::cout<<"student id:"<<m_id<<std::endl;
    std::cout<<"student name:"<<m_name<<std::endl;
    std::cout<<"student std:"<<m_std<<std::endl;
    std::cout<<"student sec:"<<m_sec<<std::endl;
}
