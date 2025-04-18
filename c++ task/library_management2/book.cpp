#include "book.h"

Book::Book(std::string title, std::string author) {
    std::cout<<"book constructor called"<<std::endl;
    m_title = title;
    m_author = author;

}

Book::~Book()
{
    std::cout<<"book destructor called"<<std::endl;

}

void Book::displayDetails()
{
    std::cout<<"book display details function  called"<<std::endl;
    std::cout << "Book: " << m_title << ", Author: " << m_author << std::endl;
}

std::string Book::title() const
{
    return m_title;
}

void Book::setTitle(const std::string &newTitle)
{
    m_title = newTitle;
}

std::string Book::author() const
{
    return m_author;
}

void Book::setAuthor(const std::string &newAuthor)
{
    m_author = newAuthor;
}


