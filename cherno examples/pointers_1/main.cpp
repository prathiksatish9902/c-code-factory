#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int var = 8;
    int *ptr = &var;
    cout << "Hello World!\n" <<*ptr<<"\n"<<ptr<<"\n"<<var<<"\n"<<&var<<"\n"<< endl;
    *ptr = 10;
    cout << "Hello World!\n" <<*ptr<<"\n"<<ptr<<"\n"<<var<<"\n"<<&var<<"\n"<< endl;

    char *buffer = new char[8];
    cout<< memset(buffer , 0 , 8)<<endl;

    return 0;
}
