#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include"personaldetails.h"
#include"student.h"
#include"staff.h"
#include<list>
#include<vector>
class Management
{
public:
    Management();
    ~Management();

    void addStudent();
    void deleteStudent(int id);
    void updateStudent(int id);
    void displayStudent();

    void addStaff();
    void deleteStaff(int id);
    void updateStaff(int id);
    void displayStaff();

private:

    Student *students;
    Staff *staffs;

    std::list<Student> studentList;
    std::vector<Staff> staffVector;
};

#endif // MANAGEMENT_H
