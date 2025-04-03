#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include<iostream>
#include<list>
#include<vector>
#include"student.h"
#include"staff.h"
class Management
{
private:
    std::list<Student> *m_studentlist;
    std::vector<Staff> *m_staffvector;
public:
    Management();
    ~Management();

    void initStudent(std::list<Student> *studentlist);
    void initStaff(std::vector<Staff> *staffvector);

    void addStudent(int id, std::string name, std::string department);
    void deleteStudent(int id);
    void updateStudent(int id, std::string name, std::string department);
    void printStudent();

    void addStaff(int id, std::string name, std::string department);
    void deleteStaff(int id);
    void updateStaff(int id, std::string name, std::string department);
    void printStaff();
};

#endif // MANAGEMENT_H
