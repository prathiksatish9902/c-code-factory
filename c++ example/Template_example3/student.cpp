#include "student.h"
template<typename b>
Student<b>::Student() {}
template<typename b>
Student<b>::~Student(){}
template<typename b>
b Student<b>:: s_age(b age){
    return age;
}
//template int Student::s_age<int>(int);
template class Student<int>;
