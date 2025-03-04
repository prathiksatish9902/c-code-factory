#ifndef MANAGEMENT_H
#define MANAGEMENT_H
#include"staff.h"
#include"student.h"
#include<list>
#include<vector>
class Management
{
private:
    std::vector<Staff> staffMembers;
    std::list<Student> students;
public:
    Management();
    ~Management();
    void addStaff(Staff &staff);
    void deleteStaff(int id);
    void updateStaff(int id , const std::string &newname, const std::string &newdepartment);
    void printStaff();
    void addStudent(Studernt &student);
    void deleteStudent(int id);
    void updateStudent(int id , const std::string &newname, const std::string &newdepartment);
    void printStudent();

};

#endif // MANAGEMENT_H
