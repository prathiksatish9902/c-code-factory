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
    std::cout<<"add staff function called"<<std::endl;

        staffMembers.push_back(staff);
}

void Collage::deleteStaff(int id)
{
    std::cout<<"delete staff function called"<<std::endl;

    for (auto i = staffMembers.begin(); i != staffMembers.end(); ++i) {
        if (i->id == id) {
            staffMembers.erase(i);
            break;
        }
    }
}

void Collage::updateStaff(int id, const std::string &newName, const std::string &newDepartment)
{
    std::cout<<"update staff function called"<<std::endl;

    for (auto &staff : staffMembers) {
        if (staff.id == id) {
            staff.name = newName;
            staff.department = newDepartment;
            break;
        }
    }
}

void Collage::searchStaff(std::string name)
{
    std::cout<<"search staff function called"<<std::endl;
    for(auto &staff : staffMembers){
        if(staff.name == name){
            std::cout<<"staff found ->->"<<"id : "<<staff.id<<"department : "<<staff.department<<std::endl;
        }
    }
}

void Collage::addStudent(const Student &student)
{
    std::cout<<"add student function called"<<std::endl;

        students.push_back(student);
}

void Collage::deleteStudent(int id)
{
    std::cout<<"delete student function called"<<std::endl;

    for (auto i = students.begin(); i != students.end(); ++i) {
        if (i->id == id) {
            students.erase(i);
            break;
        }
    }
}

void Collage::updateStudent(int id, const std::string &newName, const std::string &newdepartment)
{
    std::cout<<"update student function called"<<std::endl;

    for (auto &student : students) {
        if (student.id == id) {
            student.name = newName;
            student.department = newdepartment;
            break;
        }
    }
}

void Collage::searchStudent(int id)
{
    std::cout<<"search student function called"<<std::endl;
    for(auto &student : students){
        if(student.id == id){
            std::cout<<"student found ->->"<<"name : "<<student.name<<"department : "<<student.department<<std::endl;
        }
    }
}

void Collage::printStaff()
{
    std::cout<<"print staff function called"<<std::endl;

    for (const auto &staff : staffMembers) {
        std::cout << "Staff ID: " << staff.id << ", Name: " << staff.name << ", Department: " << staff.department << std::endl;
    }
}

void Collage::printStudents()
{
    std::cout<<"print student function called"<<std::endl;

    for (const auto &student : students) {
        std::cout << "Student ID: " << student.id << ", Name: " << student.name << ", Department: " << student.department << std::endl;
    }
}

