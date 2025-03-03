#ifndef READXML_H
#define READXML_H
#include"fileoperation.h"
class Readxml:public FileOperation
{
public:
    Readxml();
    ~Readxml();
    std::vector<Student>  readData()override;
};

#endif // READXML_H
