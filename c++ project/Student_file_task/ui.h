#ifndef UI_H
#define UI_H
#include"fileoperation.h"
class UI:public FileOperation
{
public:
    UI();
    ~UI();
    void readData()override;

};

#endif // UI_H
