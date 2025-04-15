#include <iostream>
#include"book.h"
#include"librarian.h"
#include"library.h"
#include"student.h"
using namespace std;

int main()
{
    std::vector<Book> books = {Book("abc", "def"),
                          Book("1984", "xyz"),
                          Book("hghj", "hvghj")};

    Librarian librarian(books);

    Library library("Central Library", librarian);

    Student student("darshan");

    library.displayLibraryDetails();

    library.processBookRequest(student, "1984");
    return 0;
}
