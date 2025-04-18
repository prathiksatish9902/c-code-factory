#ifndef BOOK_H
#define BOOK_H
#include<iostream>
class Book
{
public:


    Book(std::string title , std::string author);
    ~Book();

    void displayDetails();


    std::string title() const;
    void setTitle(const std::string &newTitle);

    std::string author() const;
    void setAuthor(const std::string &newAuthor);

private:
    std::string m_title;
    std::string m_author;

};


#endif // BOOK_H
