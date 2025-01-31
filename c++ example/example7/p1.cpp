#include "p1.h"
#include<iostream>
P1::P1() {
    std::cout<<"printed p1"<<std::endl;
    age=23;
    weight=67.3f;
    height=5.10f;
}
void P1::display(){
    std::cout<<age<<std::endl;
    std::cout<<weight<<std::endl;
    std::cout<<height<<std::endl;


}
