#include <iostream>
// #include<fstream>
#include"student.h"
using namespace std;

// class Student{


// public:
//     std::string m_name;
//     int m_id;
//     int m_standard;
//     Student();
//     Student(std::string name , int id , int standard);
//     ~Student();



// };

// Student::Student(std::string name, int id , int standard){
//     std::cout<<"parameters cons called"<<std::endl;
//     m_name = name;
//     m_id = id;
//     m_standard = standard;
// }

// Student::Student()
// {
//     std::cout<<"student constructor called"<<std::endl;
//     // m_name = name;
//     // m_id = id;
//     // m_standard = standard;
// }



// Student::~Student()
// {
//     std::cout<<"student destructor called"<<std::endl;
// }







int main()
{
    // ofstream outf("ITEM");


    // std::string name;
    // std::cout<<"enter item name :"<<std::endl;
    // std::cin>>name;
    // outf<<name<<std::endl;

    // float cost;
    // std::cout<<"enter item cost"<<std::endl;
    // std::cin>>cost;
    // outf<<cost<<std::endl;

    // outf.close();


    // ifstream inf("ITEM");
    // inf>>name;
    // inf>>cost;


    // std::cout<<"\n"<<std::endl;
    // std::cout<<"item name :"<<name<<std::endl;
    // std::cout<<"item cost :"<<cost<<std::endl;

    // inf.close();

    std::cout<<"------------------------------------------------------------------------------------"<<std::endl;

    // ofstream outf("students");
    // Student s1("abcd",3,3);

    // outf<<s1.m_id<<s1.m_name<<s1.m_standard<<std::endl;
    // outf.close();


    // ifstream inf;
    // inf.open("students");
    // inf>>s1.m_id;
    // inf>>s1.m_name;
    // inf>>s1.m_standard;


    // std::cout<<"\n";
    // std::cout<<"student id :"<<s1.m_id<<std::endl;
    // std::cout<<"student name :"<<s1.m_name<<std::endl;
    // std::cout<<"student standard :"<<s1.m_standard<<std::endl;


    // inf.close();

    std::cout<<"------------------------------------------------------------------------------------"<<std::endl;
    // ofstream outf("students.csv",ios::out);
    // Student s1;
    // Student s2("ABC",4,5);
    // Student s3("DEF",4,5);
    // Student s4("HIJ",4,5);
    // Student s5("KLM",4,5);
    std::cout<<"------------------------------------------------------------------------------------"<<std::endl;

    // std::cout<<"enter student name :"<<std::endl;
    // std::cin>>s1.m_name;
    // outf<<s1.m_name;


    // std::cout<<"enter student id :"<<std::endl;
    // std::cin>>s1.m_id;
    // outf<<s1.m_id;


    // std::cout<<"enter student standard :"<<std::endl;
    // std::cin>>s1.m_standard;
    // outf<<s1.m_standard;
    std::cout<<"------------------------------------------------------------------------------------"<<std::endl;

    // outf << s2.m_id << "," << s2.m_name << " " << s2.m_standard << endl;
    // outf << s3.m_id << "," << s3.m_name << " " << s3.m_standard << endl;
    // outf << s4.m_id << "," << s4.m_name << " " << s4.m_standard << endl;
    // outf << s5.m_id << "," << s5.m_name << " " << s5.m_standard << endl;


    // outf.close();


    // ifstream inf("students",ios::in);
    // inf>>s1.m_name;
    // inf>>s1.m_id;
    // inf>>s1.m_standard;

    // inf>>s2.m_id>>s2.m_name>>s2.m_standard;
    // inf>>s3.m_id>>s3.m_name>>s3.m_standard;
    // inf>>s4.m_id>>s4.m_name>>s4.m_standard;
    // inf>>s5.m_id>>s5.m_name>>s5.m_standard;


    // std::cout<<"\n";
    // std::cout<<"student name :"<<s2.m_name<<std::endl;
    // std::cout<<"student id :"<<s2.m_id<<std::endl;
    // std::cout<<"student standard :"<<s2.m_standard<<std::endl;


    // inf.close();




    string filename = "students.txt";

    Student s1("prathik",3,2);
    Student s2("harsha",2,3);
    Student s3("darshan",4,5);

    s1.writedata(filename);
    s2.writedata(filename);
    s3.writedata(filename);

    s1.readdata(filename);
    // s2.readdata(filename);
    // s3.readdata(filename);

    return 0;
}

