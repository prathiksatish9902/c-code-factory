#include <iostream>
#include "library.h"
#include "book.h"
using namespace std;

int main()
{
    Library library;

    auto book1 = std::make_shared<Book>("1984", "George Orwell", "123");
    auto book2 = std::make_shared<Book>("Brave New World", "Aldous Huxley", "456");
    auto book3 = std::make_shared<Book>("The Catcher in the Rye", "J.D. Salinger", "789");

    library.AddBook(book1);
    library.AddBook(book2);
    library.AddBook(book3);

    library.DisplayBook();

    library.RemoveBook("456");

    library.DisplayBook();


    return 0;
}
