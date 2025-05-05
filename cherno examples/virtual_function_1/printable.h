#ifndef PRINTABLE_H
#define PRINTABLE_H
#include<iostream>
class Printable
{
public:
    Printable();
    virtual std::string GetClassName() = 0;
};

#endif // PRINTABLE_H
