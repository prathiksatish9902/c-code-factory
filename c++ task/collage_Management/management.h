#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include<list>
#include<vector>
#include"student.h"
#include"staff.h"
class Management
{
private:
    std::list<Student> studentlist;
    std::vector<Staff> staffvector;
public:
    Management();
    ~Management();


    void addStudent(int id, std::string name, std::string department);
    void deleteStudent(int id);
    void updateStudent(int id);
    void printStudent();

    void addStaff(int id, std::string name, std::string department);
    void deleteStaff(int id);
    void updateStaff(int id);
    void printStaff();
};

#endif // MANAGEMENT_H
