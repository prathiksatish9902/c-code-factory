#include <iostream>

using namespace std;

void checkMe(int &a){
    a = 20;
    std::cout << "a=" << a << endl;
}

int main()
{
    int a = 10;
    std::cout << "a=" << a << endl;
    checkMe(a);
    std::cout << "a=" << a << endl;

    return 0;
}

/*
int add(int a, int b);
int add(int a , int b){
    a = 5;
    b = 4;
    int sum = a+b;
    std::cout<<a+b<<endl;
}

int main(){
    add(5,4);
}
*/
