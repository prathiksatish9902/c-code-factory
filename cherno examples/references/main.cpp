#include <iostream>

using namespace std;
void increment (int &value){
    value++;
    cout<<value<<endl;
}
int main()
{
    int a = 5;
    cout << "Hello World!" <<a<<"\n"<</*ref<<*/  endl;

    int b = 8;
    cout << "Hello World!" <<b<<"\n"<</*ref<<*/  endl;

    int *ref = &a;
    *ref = 6;
    cout << "Hello World!" <<a<<"\n"<<ref<<  endl;

    ref = &b;
    *ref = 7;
    cout << "Hello World!" <<b<<"\n"<<ref<<  endl;

    increment(a);
    cout << "Hello World!" <<a<<"\n"<</*ref<<*/  endl;

    // int &ref = a;
    // ref = 2;
    // cout << "Hello World!" <<a<<"\n"<<ref<<  endl;
    return 0;
}
