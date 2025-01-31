#include "smartphone.h"

SmartPhone::SmartPhone(std::string s_number, std::string s_sname, int s_pixel):Phone(s_number),Music(s_sname),Camera(s_pixel)
{
    //m_number = s_number;
    // m_songname = s_sname;
    // m_pixel = s_pixel;
    std::cout<<"smartphone cons called"<<std::endl;

}

SmartPhone::~SmartPhone()
{
    std::cout<<"smartphone dest called"<<std::endl;

}
