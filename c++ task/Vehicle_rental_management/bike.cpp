#include "bike.h"

Bike::Bike(std::string name, std::string fuel, int seatcapacity, std::string vehiclenumber, int cc, std::string bikerentTime, std::string bikestatus, float bikerentcost) {
    // std::cout<<"bike constructor called"<<std::endl;
    m_name = name;
    m_fuel = fuel;
    m_seatcapacity = seatcapacity;
    m_vehiclenumber = vehiclenumber;
    m_cc = cc;
    m_bikerentTime = bikerentTime;
    m_bikestatus = bikestatus;
    m_bikerentcost = bikerentcost;
}

Bike::~Bike()
{
    // std::cout<<"bike destructor called"<<std::endl;

}


void Bike::SetCC(int cc){
    m_cc = cc;
}

int Bike::GetCC(){
    return m_cc;
}


void Bike::SetBikeRentTime(std::string bikerentTime){
    m_bikerentTime = bikerentTime;
}

std::string Bike::GetBikeRentTime(){
    return m_bikerentTime;
}


void Bike::SetBikeStatus(std::string bikeStatus){
    m_bikestatus = bikeStatus;
}
std::string Bike::GetBikeStatus(){
    return m_bikestatus;
}


void Bike::SetBikeRentCost(float bikerentcost){
    m_bikerentcost = bikerentcost;
}

float Bike::GetBikeRentCost(){
    return m_bikerentcost;
}
