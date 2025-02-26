#include <iostream>
#include"student.h"
using namespace std;
template<typename a>
a s_name(a name){
    //name = "xyz";
    return name;
}

int main()
{
    cout<<s_name("xyz")<<endl;
    // Student s1;
    // cout<<s1.s_age<int>(14)<<endl;
    Student<int> s1;
    cout<<s1.s_age(14)<<endl;
    return 0;
}
