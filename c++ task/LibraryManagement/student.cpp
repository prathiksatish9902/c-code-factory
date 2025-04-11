#include "student.h"

Student::Student(std::string name) {
    std::cout<<"student constructor called"<<std::endl;
    m_name = name;
}

Student::~Student()
{
    std::cout<<"student destructor called"<<std::endl;

}

void Student::requestBook(std::string &bookTitle)
{
    std::cout << m_name << " requests the book: " << bookTitle << std::endl;
}

void Student::receiveBook(std::string &bookTitle)
{
    std::cout << m_name << " has received the book: " << bookTitle << std::endl;
}

