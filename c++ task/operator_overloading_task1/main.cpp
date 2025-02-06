#include <iostream>
#include"number.h"
using namespace std;

int main()
{

    Number n1(0);
    Number n2(0);
    std::cout<<"initial value 1"<< n1.getNum() <<std::endl;
    std::cout<<"initial value 2"<< n2.getNum() <<std::endl;

    n1.setNum(5);
    std::cout<<"set value 1"<< n1.getNum() <<std::endl;
    n2.setNum(4);
    std::cout<<"set value 2"<< n2.getNum() <<std::endl;

    Number n3 = n1.getNum() + n2.getNum();
    std::cout<<"final value "<< n3.getNum() <<std::endl;




    return 0;
}
