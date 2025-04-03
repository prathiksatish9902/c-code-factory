#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include "staff.h"
#include "student.h"
#include <list>
#include <string>
#include <vector>
using namespace std;

class Management
{


private:
    vector<Staff>*m_staffs;
    list<Student>*m_students;


public:
    Management();
    void initStudent(list<Student> *Student);
    void initStaff(vector<Staff>* Staff);

    void addStudent(int ID,string name,string branch);
    void addStaff(int ID,string name,string department);

    void deleteStudent(int ID);
    void deleteStaff(int ID);

    void updateStudent(int ID,string name,string branch);
    void updateStaff(int ID,string name,string department);

    void findStudent(int id);
    void findStaff(int id);

    void displayStudent();
    void displayStaff();

    ~Management();
};

#endif // MANAGEMENT_H
