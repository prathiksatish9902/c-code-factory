#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include "book.h"

class Student
{
public:
    std::string m_name;
    Student(std::string name);
    ~Student();

    void requestBook(std::string& bookTitle);
    void receiveBook(std::string& bookTitle);

    Book* m_book;
};

#endif // STUDENT_H
