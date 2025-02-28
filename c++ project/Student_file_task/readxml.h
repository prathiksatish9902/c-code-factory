#ifndef READXML_H
#define READXML_H
#include"fileoperation.h"
class Readxml:public FileOperation
{
public:
    Readxml();
    ~Readxml();
    void readData()override;
};

#endif // READXML_H
