#ifndef READJSON_H
#define READJSON_H
#include"fileoperation.h"
class Readjson:public FileOperation
{
public:
    Readjson();
    ~Readjson();
    std::vector<Student> readData()override;
};

#endif // READJSON_H
