#include <iostream>

using namespace std;
template<typename T>
int add(double a, double b){
    //a = 4;
    //b = 5;
    T sum = a+b;
    std::cout<<sum<<std::endl;
    return sum;
}
int main()
{
   auto n =  add<double>(6,6.5);
    std::cout<<n<<std::endl;
   auto m =  add<int>(6,6);
    std::cout<<m<<std::endl;


    return 0;
}
