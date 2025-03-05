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
    std::cout<<"add staff function call"<<std::endl;

    staffMembers.push_back(staff);
}


void Management::deleteStaff(int id)
{
    std::cout<<"delete staff function call"<<std::endl;
    for(auto i = staffMembers.begin(); i<=staffMembers.end(); i++)
    {
        if (i->getStaffID()==id){
            staffMembers.erase(i);
        }
    }
}


void Management::updateStaff(int id, std::string newName)
{
    std::cout<<"update staff function call"<<std::endl;
    for(auto &staff : staffMembers){
        if(staff.getStaffID() == id){
            staff.getStaffName() = newName;
        }
    }

}


void Management::printStaff()
{
    std::cout<<"print staff function call"<<std::endl;
    for(auto &staff : staffMembers){
        std::cout<<"id :"<<staff.getStaffID()<<"name :"<<staff.getStaffName()<<std::endl;
    }

}



void Management::addStudent(Student &student)
{
    std::cout<<"add student function called"<<std::endl;
    students.push_back(student);
}


void Management::deleteStudent(int id)
{
    std::cout<<"delete student function called"<<std::endl;
    for(auto i = students.begin(); i<=students.end(); i++)
    {
        if(i->getStudentId() == id){
            students.erase(i);
        }
    }
}


void Management::updateStudent(int id, std::string newName)
{
    std::cout<<"update student function called"<<std::endl;
    for(auto &student : students){
        if(student.getStudentId() == id){
            student.getStudentName() = newName;
        }
    }
}


void Management::printStudent()
{
    std::cout<<"print student function called"<<std::endl;
    for(auto &student : students){
        std::cout<<"id :"<<student.getStudentId()<<"name :"<<student.getStudentName()<<std::endl;
    }

}

void Management::addDepartment(Department &department)
{
    std::cout<<"add department function is called"<<std::endl;
    departments.push_back(department);
}

void Management::deleteDepartment(std::string name)
{
    std::cout<<"delete department function is called"<<std::endl;
    for(auto i = departments.begin(); i<=departments.end(); i++)
    {
        if(i->GetdepartmentName() == name){
            departments.erase(i);
        }
    }
}

void Management::printDepartment()
{
    std::cout<<"print department function is called"<<std::endl;
    for(auto &department : departments){
        std::cout<<"name :"<<department.GetdepartmentName()<<std::endl;
    }
}
