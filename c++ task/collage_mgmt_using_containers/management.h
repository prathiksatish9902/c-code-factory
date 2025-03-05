#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include<iostream>
#include<list>
#include<vector>
#include"staff.h"
#include"student.h"
#include"department.h"
class Management
{
public:
    Management();
    ~Management();

    void addStaff(Staff &staff);
    void deleteStaff(int id);
    void updateStaff(int id , std::string newName);
    void printStaff();


    void addStudent(Student &student);
    void deleteStudent(int id);
    void updateStudent(int id , std::string newName);
    void printStudent();


    void addDepartment(Department &department);
    void deleteDepartment(std::string name);
    void printDepartment();
private:
    std::vector<Staff> staffMembers;
    std::list<Student> students;
    std::list<Department> departments;

};

#endif // MANAGEMENT_H
