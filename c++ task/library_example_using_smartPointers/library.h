#ifndef LIBRARY_H
#define LIBRARY_H
#include <iostream>
#include "book.h"
#include <memory>
#include <vector>
#include <string>
#include <algorithm>
class Library
{
public:
    Library();
    ~Library();

    void AddBook(const std::shared_ptr<Book> &book);
    void RemoveBook(const std::string &booknumber);
    void DisplayBook();

private:
    std::vector<std::shared_ptr<Book>> m_bookvector;
};

#endif // LIBRARY_H
