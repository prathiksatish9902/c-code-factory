#include "prathik.h"

PRATHIK::PRATHIK() {
    std::cout<<"non parameter"<<std::endl;
    m_age=23;
    m_weight=67.5f;
    m_height=5.10f;
    m_bloodGroup="o+";
    display();
}
PRATHIK::PRATHIK(int age,float weight,float height,std::string bloodgroup){
    std::cout<<" parameter"<<std::endl;

    m_age=age;
    m_weight=weight;
    m_height=height;
    m_bloodGroup=bloodgroup;
    display();

}


void PRATHIK:: display(){
    std::cout<<"age:"<<m_age<<std::endl;
    std::cout<<"weight:"<<m_weight<<std::endl;
    std::cout<<"height:"<<m_height<<std::endl;
    std::cout<<"blood group:"<<m_bloodGroup<<std::endl;


}
