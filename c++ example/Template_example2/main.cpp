#include <iostream>
#include"temp_ex.h"
using namespace std;

int main()
{
    Temp_ex<int,std::string> ex1;
    std::cout<<ex1.add(4,5)<<std::endl;
    std::cout<<ex1.sub("6.5","3.5")<<std::endl;
    return 0;
}
