#ifndef BOOK_H
#define BOOK_H
#include<iostream>
class Book
{
public:
    std::string m_title;
    std::string m_author;

    Book(std::string title , std::string author);
    ~Book();

    void displayDetails();


};

#endif // BOOK_H
