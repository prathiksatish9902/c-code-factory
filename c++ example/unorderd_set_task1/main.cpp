#include <iostream>
#include <unordered_set>
#include"student.h"
using namespace std;

int main()
{
    unordered_set<Student> students;

    students.insert(Student("abc", 101, 10));
    students.insert(Student("def", 102, 10));
    students.insert(Student("xyz", 103, 11));
    for(const auto& student : students) {
        cout << student << endl;
    }
    return 0;
}
