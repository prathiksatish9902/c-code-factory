#ifndef STUDENT_H
#define STUDENT_H
#include"book.h"
class Student
{
public:
    Student();
    ~Student();

    std::string requestBook();
    void receiveBook();
private:
    Book* m_book;

};

#endif // STUDENT_H
