#include "library.h"

Library::Library() {
    std::cout<<"library constructor called"<<std::endl;
}

Library::~Library()
{
    std::cout<<"library desstructor called"<<std::endl;

}

void Library::AddBook(const std::shared_ptr<Book> &book)
{
    m_bookvector.push_back(book);
    std::cout<<"book added:"<<book->GetBookTitle()<<std::endl;
}

void Library::RemoveBook(const std::string &booknumber)
{


    auto it = std::remove_if(m_bookvector.begin() , m_bookvector.end(),[&](const std::shared_ptr<Book> &book){

        return book->GetBookNumber() == booknumber;

    });

    if(it != m_bookvector.end()){
        m_bookvector.erase(it , m_bookvector.end());
    }
    else{
        std::cout<<"book not found"<<std::endl;
    }


        // for (auto it = m_bookvector.begin(); it != m_bookvector.end(); ) {
        //     if ((*it)->GetBookNumber() == booknumber) {
        //         it = m_bookvector.erase(it);
        //         std::cout << "book removed: " << booknumber << std::endl;
        //     } else {
        //         ++it;
        //     }
        // }


}



void Library::DisplayBook()
{
    std::cout<<"display function called"<<std::endl;
    for(const auto &book : m_bookvector){
        book->display();
    }
}
