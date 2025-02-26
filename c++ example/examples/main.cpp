#include <iostream>

using namespace std;
int add(int &a){
    cout<<a+1;

}
int main()
{
    int b =5;
    add(b);
    return 0;
}
