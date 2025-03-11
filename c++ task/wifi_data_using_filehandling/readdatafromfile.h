#ifndef READDATAFROMFILE_H
#define READDATAFROMFILE_H
#include<iostream>
#include<ostream>
#include<fstream>
#include<sstream>
#include"wifi.h"
#include<list>
#include<functional>

using namespace std;

class ReadDataFromFile
{
public:
    ReadDataFromFile();
    ~ReadDataFromFile();

    std::list<Wifi> readData(const std::string &fileName);

};

#endif // READDATAFROMFILE_H
