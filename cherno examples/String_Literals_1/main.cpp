#include <iostream>
// #include <string>
// #include <cstring>
// #include <stdlib.h>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    /*const*/ char name[10] = "prathik";
    // name = "abcd";
    // const wchar_t* name2 = L"prathik";
    // const char16_t* name3 =u"prathik";
    // const char32_t* name4 = U"prathik";



    char *n = "prathik";// process crash

    std::cout<<name<<std::endl;
    // std::cout<<*name2<<std::endl;
    // std::cout<<*name3<<std::endl;
    // std::cout<<*name4<<std::endl;


    name[2] = 'g';
    std::cout<<name<<std::endl;

    // std::cout<<strlen(name)<<std::endl;
    return 0;
}
