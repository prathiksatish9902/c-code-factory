#ifndef READCSV_H
#define READCSV_H
#include"fileoperation.h"
class Readcsv:public FileOperation
{
public:
    Readcsv();
    ~Readcsv();
    void readData()override;
};

#endif // READCSV_H
