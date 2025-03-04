#ifndef STUDENT_H
#define STUDENT_H
#include"details.h"
class Student
{
private:
    Details *m_studentDetails;
public:
    Student(int id , std::string name , std::string department);
    ~Student();
    void setStudentDetails(Details *newStudentDetails);
    Details *getStudentDetails() const;
};

#endif // STUDENT_H
