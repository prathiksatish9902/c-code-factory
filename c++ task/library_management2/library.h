#ifndef LIBRARY_H
#define LIBRARY_H
#include"book.h"
#include"librarian.h"
#include<list>
class Library
{
public:
    Library();
    ~Library();


    std::list<Book> booklist() const;
    void setBooklist(const std::list<Book> &newBooklist);
    void processBookRequest();

private:
    std::list<Book> m_booklist;
    Librarian *librarian;
};

#endif // LIBRARY_H
