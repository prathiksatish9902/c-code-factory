#include "benz.h"

benz::benz(int wheel,int fuel,std::string engineType):Car( wheel, fuel, engineType){
    // m_wheel = 6;
    // m_fuel = 4;
    // m_engineType = "diesel";
    std::cout<<"benz constructor called"<<std::endl;
}
benz::~benz(){
    std::cout<<"benz destructor called"<<std::endl;

}


