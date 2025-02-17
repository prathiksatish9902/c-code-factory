#include <iostream>
#include"sum.h"
using namespace std;

int main()
{
    // Sum<double,int> s1;
    Sum<double,double> s1;

    // cout<<s1.add(10,10.5)<<endl;
    cout<<s1.add(10.05,10.505)<<endl;
    // cout<<s1.add(10,10)<<endl;
    // cout<<s1.add(12.5,10)<<endl;

    return 0;
}
