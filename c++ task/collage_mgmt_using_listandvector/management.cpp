#include "management.h"

Management::Management() {
    std::cout<<"management constructor called"<<std::endl;

}

Management::~Management()
{
    std::cout<<"management destructor called"<<std::endl;

}

void Management::addStaff(Staff &staff)
{
    std::cout<<"add staff function called"<<std::endl;
    staffMembers.push_back(staff);
}

void Management::deleteStaff(int id)
{
    std::cout<<"delete staff function called"<<std::endl;
    for(auto i = staffMembers.begin(); i <= staffMembers.end(); i++)
    {
        if(i->getStaffDetails()->GetId() == id){
            staffMembers.erase(i);
            return;
        }
    }

}

void Management::updateStaff(int id, const std::string &newname, const std::string &newdepartment)
{
    std::cout<<"update staff function called"<<std::endl;
    for(auto &staff : staffMembers){
        if(staff.getStaffDetails()->GetId() == id)
        {
            staff.getStaffDetails()->GetName() = newname;
            staff.getStaffDetails()->GetDepartment() = newdepartment;
        }
    }

}

void Management::printStaff()
{
    std::cout<<"print staff function called"<<std::endl;
    for (const auto &staff : staffMembers) {
        std::cout << "Staff ID: " << staff.personal_details->getId() << ", Name: " << staff.personal_details->getName() << ", Department: " << staff.personal_details->getDepartment() << std::endl;
    }

}

void Management::addStudent(Studernt &student)
{
    std::cout<<"add student function called"<<std::endl;
students.push_back(student);
}

void Management::deleteStudent(int id)
{
    std::cout<<"delete student function called"<<std::endl;
    for(auto i = students.begin(); i<= students.end(); i++)
    {
        if(i->getStudentDetails()->GetId() == id){
            students.erase(i);
            return;
        }
    }

}

void Management::updateStudent(int id, const std::string &newname, const std::string &newdepartment)
{
    std::cout<<"update student function called"<<std::endl;
    for(auto &student : students){
        if(student.getStudentDetails()->GetId() == id){
            student.getStudentDetails()->GetName() = newname;
            student.getStudentDetails()->GetDepartment() = newdepartment;
        }
    }

}

void Management::printStudent()
{
    std::cout<<"print student function called"<<std::endl;
    for (const auto &student : students) {
        std::cout << "Student ID: " << student.personal_details->getId() << ", Name: " << student.personal_details->getName() << ", Department: " << student.personal_details->getDepartment() << std::endl;
    }

}
