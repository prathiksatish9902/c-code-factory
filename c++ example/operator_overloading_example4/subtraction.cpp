#include "subtraction.h"

int Subtraction::m_count = 0;

Subtraction::Subtraction(int real, int imaginary) {
    std::cout<<"constructor called"<<std::endl;
    m_real = real;
    m_imaginary = imaginary;
    ++m_count;
    std::cout<<"count:"<<m_count<<std::endl;
}





Subtraction::~Subtraction()
{
    std::cout<<"destructor called" << m_count <<std::endl;

}

Subtraction Subtraction::add(Sample obj)
{
    std::cout<<"operator called "<< &obj <<std::endl;
    Subtraction sub(1,2);
    std::cout<<"operator called"<< m_count <<std::endl;
    sub.m_real = this->m_real - obj.m_real;
    sub.m_imaginary = this->m_imaginary - obj.m_imaginary;
    return sub;
}
