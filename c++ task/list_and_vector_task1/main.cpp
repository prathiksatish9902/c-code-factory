#include <iostream>
#include "collage.h"
using namespace std;

int main()
{
    Collage college;

    college.addStaff(Staff(1, "ABC", "Computer Science"));
    college.addStaff(Staff(2, "DEF", "Mathematics"));

    college.addStudent(Student(1, "HIJ", "Engineering"));
    college.addStudent(Student(2, "KLM", "Biology"));

    std::cout << "Initial Staff Members:" << std::endl;
    college.printStaff();
    college.searchStaff("DEF");
    std::cout << "Initial Students:" << std::endl;
    college.printStudents();

    college.updateStaff(1, "Prathik", "Data Science");
    college.searchStudent(1);
    college.deleteStudent(1);

    std::cout << "Updated Staff Members:" << std::endl;
    college.printStaff();
    college.updateStudent(2,"XYZ","Data Science");
    std::cout << "Updated Students:" << std::endl;
    college.printStudents();
    return 0;
}
