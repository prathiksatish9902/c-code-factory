#ifndef COLLAGE_H
#define COLLAGE_H
#include "management.h"
#include"staff.h"
#include"student.h"
enum
{
    student = 1,
    staff,
    Logout

};
enum
{
    Add = 1,
    Delete,
    Update,
    Search,
    Display,
    Exit
};

class College
{


private:
    list<Student> m_student;
    vector<Staff> m_staff;


public:
    Management* m_management;
    College();
    ~College();
};

#endif // COLLAGE_H
