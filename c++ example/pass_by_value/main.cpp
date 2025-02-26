#include <iostream>

using namespace std;
class me{

    me(int a){std::cout<<"constructor called\n";}
    me(you *y){std::cout<<"constructor called\n";}

    ~me(){std::cout<<"constructor called\n";}
};

class you{

    you(int a){std::cout<<"constructor called\n";}
    you(int &a){std::cout<<"constructor called\n";}

    ~you(){std::cout<<"constructor called\n";}
};

int main()
{
    int a;
    int &b=a;//pass by reference
    int *c=&a;//pass by value
    int d=a;//pass by value
    you  u;
    me m(&u);
    cout << "Hello World!" << endl;
    return 0;
}
