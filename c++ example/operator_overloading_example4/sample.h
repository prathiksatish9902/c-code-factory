#ifndef SAMPLE_H
#define SAMPLE_H
#include <iostream>

class Sample
{
public:
    Sample();

    int m_real = 0;
    int m_imaginary = 0;

    Sample(const Sample &o);
};

#endif // SAMPLE_H
