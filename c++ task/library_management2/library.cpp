#include "library.h"

Library::Library() {
    std::cout<<"Library constructor called"<<std::endl;
    librarian = new Librarian;

}


Library::~Library()
{
    std::cout<<"Library destructor called"<<std::endl;

}

std::list<Book> Library::booklist() const
{
    return m_booklist;
}

void Library::setBooklist(const std::list<Book> &newBooklist)
{
    m_booklist = newBooklist;
}

void Library::processBookRequest()
{

}

