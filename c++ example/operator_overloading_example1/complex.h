#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
class Complex
{
    int m_real;
    int m_imaginary;
public:
    Complex();
    Complex(int real,int imaginary);
    ~Complex();
    Complex operator+(const Complex &obj);
    Complex operator-(const Complex&obj);
    void print();
};

#endif // COMPLEX_H
