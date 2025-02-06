#include "number.h"

Number::Number(int num) {
    std::cout<<"constructor called"<<std::endl;
    m_num = num;
}

Number::Number()
{
    std::cout<<"Default constructor called"<<std::endl;

}

Number::~Number()
{
    std::cout<<"destructor called"<<std::endl;

}

void Number::setNum(int num)
{
    std::cout<<"set function called"<<std::endl;

    this->m_num = num;
}

int Number::getNum()
{
    std::cout<<"get function called"<<std::endl;

    return m_num;
}



