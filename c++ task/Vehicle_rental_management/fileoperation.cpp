#include "fileoperation.h"

FileOperation::FileOperation() {
    std::cout<<"file operation constructor called"<<std::endl;
}

FileOperation::~FileOperation()
{
    std::cout<<"file operation destructor called"<<std::endl;

}

std::list<Bike> FileOperation::ReadBikeData(const std::string &bikefilename)
{
    std::cout<<"read bike data function called"<<std::endl;
    std::ifstream read(bikefilename,ios::in);
    std::string line;

    std::string name;
    std::string fuel;
    int seatcapacity;
    std::string vehiclenumber;
    int cc;
    std::string bikerenttime;
    std::string bikestatus;
    float bikerentcost;

    std::list<Bike> bikelist;

    if(read.is_open()){

        while(getline(read , line)){
            std::istringstream data(line);

            if(getline(data , name , ',') && getline(data , fuel , ',') && (data>>seatcapacity) && (data.get() == ',') && getline(data , vehiclenumber , ',') && (data>>cc) && (data.get()==',') && getline(data , bikerenttime ,',') && getline(data , bikestatus ,',') && (data>>bikerentcost))
            {
                std::cout<<"name :"<<name<<"fuel :"<<fuel<<"seat capacity :"<<seatcapacity<<"vehicle number :"<<vehiclenumber<<"cc :"<<cc<<"rent time :"<<bikerenttime<<"status :"<<bikestatus<<"rent cost :"<<bikerentcost<<std::endl;
                bikelist.push_back(Bike(name , fuel , seatcapacity , vehiclenumber , cc , bikerenttime , bikestatus , bikerentcost));
            }
        }
        std::cout<<"data read successfully"<<std::endl;
        read.close();
    }
    else{
        std::cout<<"file not opened"<<std::endl;
    }
    return bikelist;
}

std::list<Car> FileOperation::ReadCarData(const std::string &carfilename)
{
    std::cout<<"read car data function called"<<std::endl;
    std::ifstream read(carfilename , ios :: in);
    std::string line;

    std::string name;
    std::string fuel;
    int seatcapacity;
    std::string vehiclenumber;
    std::string cartype;
    std::string carrentTime;
    std::string carstatus;
    float carrentcost;

    std::list<Car> carlist;

    if(read.is_open()){

        while(getline(read , line)){
            std::istringstream data(line);

            if(getline(data , name , ',') && getline(data , fuel , ',') && (data>>seatcapacity) && (data.get() == ',') && getline(data , vehiclenumber , ',') && getline(data , cartype ,',') && getline(data , carrentTime , ',') && getline(data , carstatus ,',')&&(data>>carrentcost))
            {
                std::cout<<"name :"<<name<<"fuel :"<<fuel<<"seat capacity :"<<seatcapacity<<"vehicle number :"<<vehiclenumber<<"car type : "<<cartype<<"rent time :"<<carrentTime<<"status :"<<carstatus<<"rent cost :"<<carrentcost<<std::endl;
               carlist.push_back(Car(name , fuel , seatcapacity , vehiclenumber , cartype , carrentTime , carstatus , carrentcost));
            }
        }
        std::cout<<"data read successfully"<<std::endl;
        read.close();
    }
    else{
        std::cout<<"file not opened"<<std::endl;
    }
    return carlist;
}

std::list<BookingReport> FileOperation::ReadBookingData(const std::string &bookingfilename)
{
    std::cout<<"read booking data function called"<<std::endl;
    std::ifstream read(bookingfilename , ios::in);
    std::string line;
    std::string customername;
    std::string DLnumber;
    std::string customeraddress;
    std::string vehiclename;
    std::string amountstatus;
    std::string bookingid;

    std::list<BookingReport> bookingreportlist;

    if(read.is_open()){

        while(getline(read , line)){
            std::istringstream data(line);

            if(getline(data , customername , ',') && getline(data , DLnumber , ',') && getline(data , customeraddress , ',') && getline(data , vehiclename , ',') && getline(data , amountstatus ,',') && getline(data , bookingid ,','))
            {
                std::cout<< "customer name :"<<customername<< "DL number :"<<DLnumber<< "customer address :"<<customeraddress<<"vehicle name"<<vehiclename<<"amount status :"<<amountstatus<<"booking id :" << bookingid<<std::endl;
                bookingreportlist.push_back(BookingReport(customername , DLnumber , customeraddress , vehiclename , amountstatus , bookingid));
            }
        }
        std::cout<<"data read successfully"<<std::endl;
        read.close();
    }
    else{
        std::cout<<"file not opened"<<std::endl;
    }
    return bookingreportlist;

}

void FileOperation::WriteBikeData(std::list<Bike> bikelist)
{
    std::cout<<"write bike data function called"<<std::endl;
    std::ofstream write("bikefile.csv" , ios::out);
    for(auto &i : bikelist)
    {
        write << i.GetName()<<","
              << i.GetFuel()<<","
              << i.GetSeatCapacity()<<","
              << i.GetVehicleNumber()<<","
              << i.GetCC()<<","
              << i.GetBikeRentTime()<<","
              << i.GetBikeStatus()<<","
              << i.GetBikeRentCost()<<std::endl;
    }
    write.close();
}

void FileOperation::WrieCarData(std::list<Car> carlist)
{
    std::cout<<"write car data function called"<<std::endl;
    std::ofstream write("carfile.csv" , ios::out);
    for(auto &i : carlist)
    {
        write << i.GetName()<<","
              << i.GetFuel()<<","
              << i.GetSeatCapacity()<<","
              << i.GetVehicleNumber()<<","
              << i.GetCarType()<<","
              << i.GetCarRentTime()<<","
              << i.GetCarStatus()<<","
              << i.GetCarRentCost()<<std::endl;
    }
    write.close();
}

void FileOperation::WriteBookingData(std::list<BookingReport> bookinglist)
{
    std::cout<<"write booking data function called"<<std::endl;
    std::ofstream write("bookingfile.csv" , ios::out);
    for(auto &i : bookinglist)
    {
        write << i.GetCustomerName() << ","
              <<i.GetDLNumber() << ","
              <<i.GetCustomerAddress() << ","
              <<i.GetVehicleName() << ","
              <<i.GetAmountStatus() << ","
              <<i.GetBookId()<<std::endl;
    }
    write.close();
}
