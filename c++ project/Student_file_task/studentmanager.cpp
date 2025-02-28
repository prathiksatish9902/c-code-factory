#include "studentmanager.h"
#include<vector>
StudentManager::StudentManager() {
    std::cout<<"student manager constructor called"<<std::endl;
}

StudentManager::~StudentManager()
{
    std::cout<<"student manager destructor called"<<std::endl;

}

void StudentManager::init_student()
{
    std::cout<<"init student function called"<<std::endl;
    Student s1("abc",18,"1ab25cs001","1234567890");
    Student s2("abc",18,"1ab25cs001","1234567890");
    Student s3("abc",18,"1ab25cs001","1234567890");
    Student s4("abc",18,"1ab25cs001","1234567890");
    Student s5("abc",18,"1ab25cs001","1234567890");
    Student s6("abc",18,"1ab25cs001","1234567890");
    Student s7("abc",18,"1ab25cs001","1234567890");
    Student s8("abc",18,"1ab25cs001","1234567890");
    Student s9("abc",18,"1ab25cs001","1234567890");
    Student s10("abc",18,"1ab25cs001","1234567890");
    std::vector<Student>studentlist;
    studentlist.push_back(s1);
    studentlist.push_back(s2);
    studentlist.push_back(s3);
    studentlist.push_back(s4);
    studentlist.push_back(s5);
    studentlist.push_back(s6);
    studentlist.push_back(s7);
    studentlist.push_back(s8);
    studentlist.push_back(s9);
    studentlist.push_back(s10);


}
