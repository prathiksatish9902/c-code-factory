#ifndef WIRE_H
#define WIRE_H
#include<iostream>
class Wire
{
    int *ptr = new int[10];
public:
    Wire();
   virtual ~Wire();
};

#endif // WIRE_H
