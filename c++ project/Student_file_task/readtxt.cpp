#include "readtxt.h"
#include"student.h"

Readtxt::Readtxt() {
    std::cout<<"read txt constructor called"<<std::endl;
}

Readtxt::~Readtxt()
{
    std::cout<<"read txt destructor called"<<std::endl;

}

/*std::vector<Student>*/ void Readtxt::readData(const std::string &filename)
{
    std::cout<<"txt read data function called"<<std::endl;
    // Student s1("abc",18,"1ab25cs001","1234567890");
    // Student s2("abc",18,"1ab25cs001","1234567890");
    // Student s3("abc",18,"1ab25cs001","1234567890");
    // Student s4("abc",18,"1ab25cs001","1234567890");
    // Student s5("abc",18,"1ab25cs001","1234567890");
    // Student s6("abc",18,"1ab25cs001","1234567890");
    // Student s7("abc",18,"1ab25cs001","1234567890");
    // Student s8("abc",18,"1ab25cs001","1234567890");
    // Student s9("abc",18,"1ab25cs001","1234567890");
    // Student s10("abc",18,"1ab25cs001","1234567890");
     //std::vector<Student>studentlist;
    // studentlist.reserve(10);
    // studentlist.push_back(s1);
    // studentlist.push_back(s2);
    // studentlist.push_back(s3);
    // studentlist.push_back(s4);
    // studentlist.push_back(s5);
    // studentlist.push_back(s6);
    // studentlist.push_back(s7);
    // studentlist.push_back(s8);
    // studentlist.push_back(s9);
    // studentlist.push_back(s10);

     std::ifstream read(filename, ios::in);
     if(read.is_open()){
         std::string line;
         while(getline(read , line)){
             std::istringstream data(line);
             std::string name;
             int age;
             std::string usn;
             std::string phone;

             data >> name >> age >> usn >> phone;

             std::cout<<"data read successfully"<<std::endl;
             std::cout<<"name :"<<name<<" "<<"age :"<<age<<" "<<"usn :"<<usn<<"phone :"<<phone<<std::endl;
             break;
         }
         read.close();
     }
     else{
         std::cout<<"file is not opened"<<std::endl;
     }

    //return studentlist;
}
