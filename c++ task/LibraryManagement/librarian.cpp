#include "librarian.h"

Librarian::Librarian(std::vector<Book> bookList) {
    std::cout<<"Librarian constructor called"<<std::endl;
    m_bookList = bookList;
}

Librarian::Librarian()
{
    std::cout<<"default Librarian constructor called"<<std::endl;

}


Librarian::~Librarian()
{
    std::cout<<"Librarian destructor called"<<std::endl;

}

void Librarian::searchBook(std::string &bookTitle)
{
    std::cout << "Librarian searches for the book: " << bookTitle << std::endl;
}

void Librarian::issueBook(std::string &bookTitle, Student &student)
{
    std::cout << "Librarian issues the book " << bookTitle << " to " << student.m_name << std::endl;
}

void Librarian::updateBookList(std::string &bookTitle)
{
    std::cout << "Librarian updates the book list by removing " << bookTitle << " from available books." << std::endl;
}

void Librarian::updateStudentRecords(Student &student, std::string &bookTitle)
{
    std::cout << "Librarian adds record: " << student.m_name << " borrowed " << bookTitle << "." << std::endl;
}

