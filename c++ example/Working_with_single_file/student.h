#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include<fstream>
#include<sstream>
using namespace std;

class Student{

private:
    std::string m_name;
    int m_id;
    int m_standard;
public:
    Student();
    Student(std::string name , int id , int standard);
    ~Student();

    void writedata(const std::string &filename);
    void readdata(const std::string &filename);

};

#endif // STUDENT_H
