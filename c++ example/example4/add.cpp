#include "add.h"
#include<iostream>
Add::Add(int a1 , int b1) {
    a = a1;
    b = b1;
}

void Add::add(int a ,int b){
    int sum;
    sum = a+b;
    std::cout<<sum<<std::endl;
}

void Add::add(float a, float b){
    int res;
    res = a+b;
    std::cout<<res<<std::endl;
}
