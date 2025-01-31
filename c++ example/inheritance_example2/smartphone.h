#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include "camera.h"
#include "music.h"
#include "phone.h"
class SmartPhone:public Camera,public Music,public Phone
{
public:
    SmartPhone(std::string s_number,std::string s_sname,int s_pixel);
    ~SmartPhone();
};

#endif // SMARTPHONE_H
