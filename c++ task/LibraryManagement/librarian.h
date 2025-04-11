#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include<iostream>
#include"book.h"
#include"student.h"
#include<vector>
class Librarian
{
public:
    std::vector<Book> m_bookList;
    std::vector<std::string> m_studentRecords;
    Librarian(std::vector<Book> bookList);
    ~Librarian();

    void searchBook(std::string& bookTitle);
    void issueBook(std::string& bookTitle, Student& student);
    void updateBookList(std::string& bookTitle);
    void updateStudentRecords(Student& student, std::string& bookTitle);
};

#endif // LIBRARIAN_H
