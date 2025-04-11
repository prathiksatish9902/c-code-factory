#ifndef LIBRARY_H
#define LIBRARY_H
#include<iostream>
#include"librarian.h"
class Library
{
public:
    std::string m_name;
    Librarian librarian;
    Library(std::string name, Librarian& librarian);
    ~Library();
    void displayLibraryDetails();
    void processBookRequest(Student& student, std::string &bookTitle);
};

#endif // LIBRARY_H
