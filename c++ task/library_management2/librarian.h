#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include"student.h"
#include"book.h"
#include<list>
class Librarian
{
public:
    Librarian();
    ~Librarian();
    void SearchBook(Student *s1 , Book *books , std::list<Book> booklist);
    void IssueBook(Student *s1 , Book *books , std::list<Book> booklist);

private:
    Student *student;
    Book *book;


};

#endif // LIBRARIAN_H
