#ifndef READTXT_H
#define READTXT_H
#include"fileoperation.h"
class Readtxt:public FileOperation
{
public:
    Readtxt();
    ~Readtxt();
    /*std::vector<Student>*/void readData(const string &filename)override;
};

#endif // READTXT_H
