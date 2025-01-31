#include <iostream>
#include"student.h"
#include"person.h"
using namespace std;

int main()
{
    Student s1(5,"abcdf","098765");
    s1.Person::display();
    s1.Student::display();
    return 0;
}
