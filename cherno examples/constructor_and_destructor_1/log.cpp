#include "log.h"

Log::Log() {
    std::cout<<"cons1"<<std::endl;
}

Log::Log(int a, int b)
{
    std::cout<<"cons2"<<std::endl;

    x = a;
    std::cout<<x<<","<<a<<std::endl;
    y = b;
    std::cout<<y<<","<<b<<std::endl;

}

Log::~Log()
{
    std::cout<<"dest"<<std::endl;

}
