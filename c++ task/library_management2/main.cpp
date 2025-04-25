#include <iostream>
#include<list>
#include"book.h"
#include"library.h"
using namespace std;

int main()
{
    std::list<Book> books = {Book("abc", "def"),
                               Book("1984", "xyz"),
                               Book("hghj", "hvghj")};
    Library library;
    library.setBooklist(books);
    return 0;
}
