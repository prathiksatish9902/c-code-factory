#include "collage.h"

Collage::Collage() {
    std::cout<<"collage constructor called"<<std::endl;
}

Collage::~Collage()
{
    std::cout<<"collage destructor called"<<std::endl;
}

void Collage::addStaff(const Staff &staff)
{
        staffMembers.push_back(staff);
}

void Collage::deleteStaff(int id)
{
    for (auto i = staffMembers.begin(); i != staffMembers.end(); ++i) {
        if (i->id == id) {
            staffMembers.erase(i);
            break;
        }
    }
}

void Collage::updateStaff(int id, const std::string &newName, const std::string &newDepartment)
{
    for (auto &staff : staffMembers) {
        if (staff.id == id) {
            staff.name = newName;
            staff.department = newDepartment;
            break;
        }
    }
}

void Collage::addStudent(const Student &student)
{
        students.push_back(student);
}

void Collage::deleteStudent(int id)
{
    for (auto i = students.begin(); i != students.end(); ++i) {
        if (i->id == id) {
            students.erase(i);
            break;
        }
    }
}

void Collage::updateStudent(int id, const std::string &newName, const std::string &newdepartment)
{
    for (auto &student : students) {
        if (student.id == id) {
            student.name = newName;
            student.department = newdepartment;
            break;
        }
    }
}

void Collage::printStaff()
{
    for (const auto &staff : staffMembers) {
        std::cout << "Staff ID: " << staff.id << ", Name: " << staff.name << ", Department: " << staff.department << std::endl;
    }
}

void Collage::printStudents()
{
    for (const auto &student : students) {
        std::cout << "Student ID: " << student.id << ", Name: " << student.name << ", Department: " << student.department << std::endl;
    }
}

