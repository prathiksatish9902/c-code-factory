#include "complex.h"

Complex::Complex()
{

}

Complex::Complex(int real, int imaginary) {
    m_real = real;
    m_imaginary = imaginary;
}

Complex::~Complex()
{

}

Complex Complex::operator+(const Complex &obj)
{
    Complex sum;
    sum.m_real = this->m_real+obj.m_real;
   // std::cout<<"this"<<this->m_real<<std::endl;

    sum.m_imaginary = m_imaginary+obj.m_imaginary;
    return sum;
}

Complex Complex::operator-(const Complex &obj)
{
    Complex sub;
    sub.m_real = this->m_real - obj.m_real;
    sub.m_imaginary = this->m_imaginary-obj.m_imaginary;
    return sub;
}

void Complex:: print(){
    std::cout<<m_real<<"+i"<<m_imaginary<<std::endl;
}
