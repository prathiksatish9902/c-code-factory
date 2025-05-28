#ifndef BOOK_H
#define BOOK_H
#include<iostream>
class Book
{
public:
    Book(std::string booktitle , std::string bookauthor , std::string booknumber);
    ~Book();

    std::string GetBookTitle();
    std::string GetBookNumber();
    void display();


private:
    std::string m_booktitle;
    std::string m_bookauthor;
    std::string m_booknumber;
};

#endif // BOOK_H
