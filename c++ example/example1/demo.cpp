#include "demo.h"

Demo::Demo() {
    a=0;
    b=0;
}


void Demo::add(){
    int sum;
    std::cout<<"enter the value for a and b"<<std::endl;
    std::cin>>a>>b;
    sum = a + b;
    std::cout<<sum<<std::endl;
}
void Demo::sub(int a,int b){
    std::cout<<"sub :"<<std::endl;
    std::cout<<this->a<<std::endl;
    std::cout<<"a:"<<a<<"b:"<<b<<std::endl;
    int res;
    res = a - b;
    std::cout<<res<<std::endl;
}
