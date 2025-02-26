#include "accelarator.h"

Accelarator::Accelarator() {
    std::cout<<"accelarator constructor called"<<std::endl;
    m_accelaratorPressed = false;
}

Accelarator::~Accelarator(){
    std::cout<<"accelarator destructor called"<<std::endl;

}

void Accelarator::Accelarator_Applied(Wheel *w){
    std::cout<<"accelarator applied function  called"<<std::endl;
    w1 = w;
    w1->Wheel_Move();
}


void Accelarator::Accelarator_Released(Wheel *w ){
    std::cout<<"accelarator released function called"<<std::endl;
    w1 = w;
    w1->Wheel_Stop();
}
