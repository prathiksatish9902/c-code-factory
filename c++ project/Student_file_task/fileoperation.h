#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include<iostream>
#include"student.h"
class FileOperation
{
public:
    FileOperation();
    virtual ~FileOperation();
    virtual void readData()=0;
};

#endif // FILEOPERATION_H
