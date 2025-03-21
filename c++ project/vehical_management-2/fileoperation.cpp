#include "fileoperation.h"

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

    if(read.is_open()){
        while(getline(read , line)){
            std::istringstream data(line);

            if(getline(data , bikeNumber , ',') && getline(data , bikeName , ',') && getline(data , bikeModelName , ',') && getline(data , bikeStatus , ',') && (data >> bikeCost))
            {
                std::cout<<"bike number :" << bikeNumber <<" "<<"bike name :" << bikeName <<" "<< "bike model name :" << bikeModelName <<" "<< "bike status :" << bikeStatus <<" "<< "bike cost :" << bikeCost <<std::endl;
                bikelist.push_back(new RentalBikeDetails(bikeNumber , bikeName , bikeModelName , bikeStatus ,bikeCost));
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
                std::cout<<"car number :" << carNumber <<" "<<"car name :" << carName <<" "<< "car model name :" << carModelName <<" "<< "car status :" << carStatus <<" "<< "cabiker cost :" << carCost <<std::endl;
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
