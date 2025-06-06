#include "fileoperation.h"
#include"adminmanager.h"
#include"rentalvehicalmanger.h"
#include"vehicalbookingreport.h"
FileOperation::FileOperation() {
    std::cout<<"file operation constructor called"<<std::endl;
}

FileOperation::~FileOperation()
{
    std::cout<<"file operation destructor called"<<std::endl;

}

std::list<RentalBikeDetails *> FileOperation::ReadBikeData(const string &bikefile)
{
    std::ifstream read(bikefile,ios::in);
    std::string line;

    std::string bikeNumber;
    std::string bikeName;
    std::string bikeModelName;
    std::string bikeStatus;
    float bikeCost;

    std::list<RentalBikeDetails*> bikelist;
    int count =0;
    if(read.is_open()){
        while(getline(read , line)){
            if(count==100000)
                return bikelist;
          std::istringstream data(line);

            if(getline(data , bikeNumber , ',') && getline(data , bikeName , ',') && getline(data , bikeModelName , ',') && getline(data , bikeStatus , ',') && (data >> bikeCost))
            {
                std::cout<<"bike number :" << bikeNumber <<" "<<"bike name :" << bikeName <<" "<< "bike model name :" << bikeModelName <<" "<< "bike status :" << bikeStatus <<" "<< "bike cost :" << bikeCost <<std::endl;
                bikelist.push_back(new RentalBikeDetails(bikeNumber , bikeName , bikeModelName , bikeStatus ,bikeCost));
            }
            count++;
        }
        std::cout<<"data read successfully"<<std::endl;
        read.close();
    }
    else{
        std::cout<<"file not opened"<<std::endl;
    }
    return bikelist;
}

std::list<RentalCarDetails *> FileOperation::ReadCarData(const string &carfile)
{
    std::ifstream read(carfile,ios::in);
    std::string line;

    std::string carNumber;
    std::string carName;
    std::string carModelName;
    std::string carStatus;
    float carCost;

    std::list<RentalCarDetails*> carlist;

    if(read.is_open()){
        while(getline(read , line)){
            std::istringstream data(line);

            if(getline(data , carNumber , ',') && getline(data , carName , ',') && getline(data , carModelName , ',') && getline(data , carStatus , ',') && (data >> carCost))
            {
                std::cout<<"car number :" << carNumber <<" "<<"car name :" << carName <<" "<< "car model name :" << carModelName <<" "<< "car status :" << carStatus <<" "<< "car cost :" << carCost <<std::endl;
                carlist.push_back(new RentalCarDetails(carNumber , carName , carModelName , carStatus ,carCost));
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

std::list<vehicalBookingReport *> FileOperation::ReadBookingData(const string &bookingreportfile)
{
    std::ifstream read(bookingreportfile,ios::in);
    std::string line;

    std::string customerName;
    std::string DLNumber;
    std::string customerPhoneNumber;
    std::string customerAddress;
    std::string bookingId;
    std::string vehicalType;
    std::string rentedVehicalName;
    std::string rentedVehicalNumber;
    float rentedVehicalcost;
    std::string rentalDuration;
    std::string amountStatus;
    std::string paymentMode;
    std::string paymentId;
    std::string paymentReferenceNumber;

    std::list<vehicalBookingReport*> bookinglist;

    if(read.is_open()){
        while(getline(read , line)){
            std::istringstream data(line);

            if(getline(data , customerName , ',') && getline(data , DLNumber , ',') && getline(data , customerPhoneNumber , ',') && getline(data , customerAddress , ',') && getline(data , bookingId , ',') && getline(data , vehicalType , ',') && getline(data , rentedVehicalName , ',') && getline(data , rentedVehicalNumber , ',') && (data>>rentedVehicalcost) && (data.get() == ',') && getline(data , rentalDuration , ',') && getline(data , amountStatus , ',')  &&  getline(data , paymentMode , ',') && getline(data , paymentId , ',')&& getline(data , paymentReferenceNumber ))
            {

                std::cout<<"customer name:"<<customerName<<" "<<"DL Number:"<<DLNumber<<" "<<"customer phone:"<<customerPhoneNumber<<" "<<"customer address:"<<customerAddress<<" "<<"booking id:"<<bookingId<<" "<<"vehical type:"<<vehicalType<<" "<<"vehical name:"<<rentedVehicalName<<" "<<"vehical number:"<<rentedVehicalNumber<<" "<<"vehical cost:"<<rentedVehicalcost<<" "<<"rental duration:"<<rentalDuration<<" "<<"amount status:"<<amountStatus<<" "<<"payment mode:"<<paymentMode<<" "<<"payment id:"<<paymentId<<" "<<"payment ref number:"<<paymentReferenceNumber<<std::endl;
                bookinglist.push_back(new vehicalBookingReport(customerName , DLNumber , customerPhoneNumber , customerAddress , bookingId , vehicalType , rentedVehicalName , rentedVehicalNumber ,rentedVehicalcost , rentalDuration , amountStatus , paymentMode ,paymentId,paymentReferenceNumber));
            }

        }
        std::cout<<"data read successfully"<<std::endl;
        read.close();
    }
    else{
        std::cout<<"file not opened"<<std::endl;
    }
    return bookinglist;
}

std::list<Admin *> FileOperation::ReadAdminData(const string &adminfile)
{
    std::ifstream read(adminfile,ios::in);
    std::string line;

    std::string adminUsername;
    std::string adminPassword;

    std::list<Admin*> adminlist;

    if(read.is_open()){
        while(getline(read , line)){
            std::istringstream data(line);

            if(getline(data , adminUsername , ',') && getline(data , adminPassword))
            {
                std::cout<<"username :"<<adminUsername<<" "<<"password :"<<adminPassword<<std::endl;
                adminlist.push_back(new Admin(adminUsername , adminPassword));
            }
        }

        std::cout<<"data read successfully"<<std::endl;
        read.close();
    }
    else{
        std::cout<<"file not opened"<<std::endl;
    }
    return adminlist;

}

std::list<User *> FileOperation::ReadUserData(const string &userfile)
{
    std::ifstream read(userfile,ios::in);
    std::string line;

    std::string userName;
    std::string userPassword;

    std::list<User*> userlist;

    if(read.is_open()){
        while(getline(read , line)){
            std::istringstream data(line);

            if(getline(data , userName , ',') && getline(data , userPassword))
            {
                std::cout<<"username :"<<userName<<" "<<"password :"<<userPassword<<std::endl;
                userlist.push_back(new User(userName , userPassword));
            }
        }

        std::cout<<"data read successfully"<<std::endl;
        read.close();
    }
    else{
        std::cout<<"file not opened"<<std::endl;
    }
    return userlist;
}

void FileOperation::WriteBikeData(std::list<RentalBikeDetails *> bikelist)
{
    std::ofstream write("bikefile.csv" , ios::out);
    for(auto &bike : bikelist)
    {
        write << bike->GetVehicalNumber()<<","
              <<bike->GetVehicalName()<<","
              <<bike->GetVehicalModelName()<<","
              <<bike->GetVehicalStatus()<<","
              <<bike->GetVehicalCost()<<std::endl;

    }
    write.close();

}

void FileOperation::WriteCarData(std::list<RentalCarDetails *> carlist)
{
    std::ofstream write("carfile.csv" , ios::out);
    for(auto &car : carlist)
    {
        write << car->GetVehicalNumber()<<","
              <<car->GetVehicalName()<<","
              <<car->GetVehicalModelName()<<","
              <<car->GetVehicalStatus()<<","
              <<car->GetVehicalCost()<<std::endl;

    }
    write.close();

}

void FileOperation::WriteBookingData(std::list<vehicalBookingReport *> bookinglist)
{
    std::ofstream write("bookingfile.csv" , ios::out);
    for(auto &booking : bookinglist)
    {

        std::cout<<"write booking data"<<std::endl;
        write << booking->GetCustomerName()<<","
              << booking->GetDLNumber()<<","
              << booking->GetPhoneNumber()<<","
              << booking->GetCustomerAddress()<<","
              << booking->GetBookingId()<<","
              << booking->GetVehicalType()<<","
              << booking->GetRentedVehicalName()<<","
              << booking->GetRentedVehicalNumber()<<","
              << booking->GetRentedVehicalCost()<<","
              << booking->GetRentalDuration()<<","
              << booking->GetAmountStatus()<<","
              << booking->GetPaymentMode()<<","
              <<booking->GetPaymentId()<<","
              << booking->GetPaymentNumber()<<std::endl;
    }
    write.close();
}

void FileOperation::WriteAdminData(std::list<Admin *> adminlist)
{
    std::ofstream write("adminfile.csv", ios::out);
    for(auto &admin:adminlist)
    {
        write << admin->GetAdminUserName()<<","
              <<admin->GetAdminPassword()<<std::endl;
    }
    write.close();
}

void FileOperation::WriteUserData(std::list<User *> userlist)
{
    std::ofstream write("userfile.csv", ios::out);
    for(auto &user:userlist)
    {
        write << user->GetUsername()<<","
              <<user->GetUserPassword()<<std::endl;
    }
    write.close();
}
