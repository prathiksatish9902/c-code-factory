#ifndef READCSV_H
#define READCSV_H
#include"fileoperation.h"
class Readcsv:public FileOperation
{
public:
    Readcsv();
    ~Readcsv();
    /*std::vector<Student>*/ void readData(const string &filename)override;
};

#endif // READCSV_H
