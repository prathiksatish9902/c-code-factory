#include <iostream>

using namespace std;

int Multiply(int a  , int b ){
    return a * b;
}

void MultiplyAndPrint(int a  , int b ){
    int res = Multiply(a , b);
    cout<<"res ="<<res<<endl;

}

int main()
{
MultiplyAndPrint(3 , 5);
    return 0;
}
