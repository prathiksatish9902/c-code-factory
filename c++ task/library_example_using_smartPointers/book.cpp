#include "book.h"

Book::Book(std::string booktitle, std::string bookauthor, std::string booknumber) {
    std::cout<<"book constructor called"<<std::endl;
    m_booktitle = booktitle;
    m_bookauthor = bookauthor;
    m_booknumber = booknumber;
}

Book::~Book()
{
    std::cout<<"book destructor called"<<std::endl;

}

std::string Book::GetBookTitle()
{
    return m_booktitle;
}

std::string Book::GetBookNumber()
{
    return m_booknumber;
}

void Book::display()
{
    std::cout<<"title:"<<m_booktitle<<std::endl;
    std::cout<<"author:"<<m_bookauthor<<std::endl;
    std::cout<<"number:"<<m_booknumber<<std::endl;

}
