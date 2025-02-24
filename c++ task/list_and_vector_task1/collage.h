#ifndef COLLAGE_H
#define COLLAGE_H
#include<iostream>
#include<vector>
#include<list>
#include"staff.h"
#include"student.h"
class Collage
{
    std::vector<Staff> staffMembers;
    std::list<Student> students;
public:
    Collage();
    ~Collage();
    void addStaff(const Staff &staff);
    void deleteStaff(int id);
    void updateStaff(int id, const std::string &newName, const std::string &newDepartment);
    void addStudent(const Student &student);
    void deleteStudent(int id);
    void updateStudent(int id, const std::string &newName, const std::string &newdepartment);
    void printStaff();
    void printStudents();
};

#endif // COLLAGE_H
