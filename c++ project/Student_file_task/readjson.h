#ifndef READJSON_H
#define READJSON_H
#include"fileoperation.h"
class Readjson:public FileOperation
{
public:
    Readjson();
    ~Readjson();
    void readData()override;
};

#endif // READJSON_H
