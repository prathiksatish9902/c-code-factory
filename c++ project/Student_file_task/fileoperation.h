#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include<iostream>
#include <vector>
#include"student.h"
class FileOperation
{
public:
    FileOperation();
    virtual ~FileOperation();
    virtual std::vector<Student> readData()=0;
};

#endif // FILEOPERATION_H
