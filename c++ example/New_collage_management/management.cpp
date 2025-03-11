#include "management.h"

Management::Management() {
    std::cout<<"management constructor called"<<std::endl;
}

Management::~Management()
{
    std::cout<<"management destructor called"<<std::endl;

}



void Management::addStudent()
{
    std::cout<<"add student function called"<<std::endl;
    students = new Student;

    students->SetName("prathik");
    students->SetId(1);
    students->SetAddress("hassan");
    students->SetDepartment("computer science");
    students->SetSection("A");
    students->SetStandard(1);

    studentList.push_back(students);
}

void Management::deleteStudent(int id)
{
    std::cout<<"delete student function called"<<std::endl;

}

void Management::updateStudent(int id)
{
    std::cout<<"update student function called"<<std::endl;

}

void Management::displayStudent()
{
    std::cout<<"display student function called"<<std::endl;
}



void Management::addStaff()
{
    std::cout<<"add staff function called"<<std::endl;
    staffs = new Staff;

    staffs->SetName("ranganna");
    staffs->SetId(1);
    staffs->SetDepartment("computer science");
    staffs->SetAddress("somavarapete");
    staffs->SetExperiance(3);
    staffs->SetSalary(30000);

    staffVector.push_back(staffs);
}

void Management::deleteStaff(int id)
{
    std::cout<<"delete staff function called"<<std::endl;

}

void Management::updateStaff(int id)
{
    std::cout<<"update staff function called"<<std::endl;

}

void Management::displayStaff()
{
    std::cout<<"display staff function called"<<std::endl;

}
