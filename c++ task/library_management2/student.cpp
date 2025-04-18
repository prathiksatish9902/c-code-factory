#include "student.h"

Student::Student() {}

std::string Student::requestBook()
{
    std::string bookname;
    std::cout<<"enter book name:"<<std::endl;
    std::cin>>bookname;
    return bookname;
}
