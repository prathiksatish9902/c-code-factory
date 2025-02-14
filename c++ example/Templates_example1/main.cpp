#include <iostream>

using namespace std;
template<typename T>
T add(T a, T b){
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

    return 0;
}
