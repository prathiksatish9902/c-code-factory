#ifndef STUDENT_H
#define STUDENT_H
#include<string>
class Student
{
public:
    int m_id;
    std::string m_name;
    int m_std;
    char m_sec;

    Student();

    void biodata();
    void print();
};

#endif // STUDENT_H
