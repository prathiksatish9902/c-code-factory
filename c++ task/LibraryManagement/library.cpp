#include "library.h"


Library::Library(std::string name, Librarian& librarian)
{
    std::cout<<"Library constructor called"<<std::endl;
    m_name = name ;
    librarian = librarian;



}



Library::~Library()
{
    std::cout<<"Library destructor called"<<std::endl;

}

void Library::displayLibraryDetails()
{
    std::cout << "Welcome to the Library: " << m_name << std::endl;
}

void Library::processBookRequest(Student &student,  std::string bookTitle)
{
   std:: cout << "Processing book request...\n";
    student.requestBook(bookTitle);
    librarian.searchBook(bookTitle);
    librarian.issueBook(bookTitle, student);
    librarian.updateBookList(bookTitle);
    librarian.updateStudentRecords(student, bookTitle);
}
