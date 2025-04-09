#ifndef SUBTRACTION_H
#define SUBTRACTION_H
#include <iostream>

#include "sample.h"

class Subtraction
{
public:
    int m_real;
    int m_imaginary;
    static int m_count ;
    Subtraction(int real , int imaginary);
    ~Subtraction();
    Subtraction add(Sample obj);
};

#endif // SUBTRACTION_H
