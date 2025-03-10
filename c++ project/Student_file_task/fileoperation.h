#ifndef FILEOPERATION_H
#define FILEOPERATION_H
#include<iostream>
#include <vector>
#include<fstream>
#include<sstream>
#include"student.h"
using namespace std;


class FileOperation
{
public:
    FileOperation();
    virtual ~FileOperation();
    virtual /*std::vector<Student>*/ void readData(const string &filename)=0;
};

#endif // FILEOPERATION_H
