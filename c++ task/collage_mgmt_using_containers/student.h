#ifndef STUDENT_H
#define STUDENT_H
#include"commondetails.h"
class Student
{
public:
    Student(int id , std::string name);
    ~Student();

    CommonDetails *getStudentId() const;
    CommonDetails *getStudentName() const;


private:
    CommonDetails *m_StudentDetails;
};

#endif // STUDENT_H
