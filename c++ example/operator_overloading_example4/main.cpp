#include <iostream>
#include <subtraction.h>
using namespace std;

int main()
{
    Subtraction s1(10,20);
    Sample s2;
    std::cout<<"bEFORE called "<< &s2 <<std::endl;
    Subtraction s3(0,0);
    s3 = s1.add(s2);
    return 0;
}
