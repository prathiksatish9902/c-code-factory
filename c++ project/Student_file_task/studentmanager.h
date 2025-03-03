#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H
#include<iostream>
#include"student.h"
#include "fileoperation.h"
#include "readcsv.h"
#include <vector>

class StudentManager
{
public:
    StudentManager();
    ~StudentManager();
    //void init_student();

private:
    FileOperation *m_fileOperation;
    std::vector<Student>m_studentDataVector;
};

#endif // STUDENTMANAGER_H
