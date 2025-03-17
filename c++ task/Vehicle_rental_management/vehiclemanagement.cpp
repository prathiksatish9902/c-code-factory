#include "vehiclemanagement.h"

VehicleManagement::VehicleManagement() {
    std::cout<<"vehicle management constructor called"<<std::endl;
    fp = new FileOperation;
    fp->ReadBikeData("bikefile.csv");
}

VehicleManagement::~VehicleManagement()
{
    std::cout<<"vehicle management destructor called"<<std::endl;

}

void VehicleManagement::SetBikeList(std::list<Bike> bikelist)
{
    m_bikelist = bikelist;
}

std::list<Bike> VehicleManagement::GetBikeList()
{
    return m_bikelist;
}

void VehicleManagement::SetCarList(std::list<Car> carlist)
{
    m_carlist = carlist;
}

std::list<Car> VehicleManagement::GetCarList()
{
    return m_carlist;
}

void VehicleManagement::SetBookingList(std::list<BookingReport> bookingreportlist)
{
    m_bookingreportlist = bookingreportlist;
}

std::list<BookingReport> VehicleManagement::GetBookingList()
{
    return m_bookingreportlist;
}

void VehicleManagement::addBike()
{
    std::cout<<"add bike function called"<<std::endl;
    std::string name , fuel , vehiclenumber , bikerentTime , bikestatus;
    int seatcapacity , cc;
    float bikerentcost;

    std::cout<<"enter bike name :"<<std::endl;
    std::cin>>name;

    std::cout<<"enter fuel type :"<<std::endl;
    std::cin>>fuel;

    std::cout<<"enter seat capaity :"<<std::endl;
    std::cin>>seatcapacity;

    std::cout<<"enter bike number :"<<std::endl;
    std::cin>>vehiclenumber;

    std::cout<<"enter bike cc :"<<std::endl;
    std::cin>>cc;

    std::cout<<"enter bike rent time :"<<std::endl;
    std::cin>>bikerentTime;

    std::cout<<"enter bike status :"<<std::endl;
    std::cin>>bikestatus;

    std::cout<<"enter bike rent cost :"<<std::endl;
    std::cin>>bikerentcost;

    m_bikelist.push_back(Bike(name , fuel , seatcapacity , vehiclenumber , cc , bikerentTime , bikestatus , bikerentcost));
    fp->WriteBikeData(m_bikelist);
}

void VehicleManagement::addCar()
{
    std::cout<<"add car function called"<<std::endl;
    std::string name , fuel , vehiclenumber , cartype , carrentTime , carstatus;
    int seatcapacity;
    float carrentcost;

    std::cout<<"enter car name :"<<std::endl;
    std::cin>>name;

    std::cout<<"enter fuel type :"<<std::endl;
    std::cin>>fuel;

    std::cout<<"enter seat capaity :"<<std::endl;
    std::cin>>seatcapacity;

    std::cout<<"enter car number :"<<std::endl;
    std::cin>>vehiclenumber;

    std::cout<<"enter car type :"<<std::endl;
    std::cin>>cartype;

    std::cout<<"enter car rent time :"<<std::endl;
    std::cin>>carrentTime;

    std::cout<<"enter car status :"<<std::endl;
    std::cin>>carstatus;

    std::cout<<"enter car rent cost :"<<std::endl;
    std::cin>>carrentcost;

    m_carlist.push_back(Car(name , fuel , seatcapacity , vehiclenumber , cartype , carrentTime , carstatus , carrentcost));
    fp->WrieCarData(m_carlist);
}

void VehicleManagement::addBookingData()
{
    std::cout<<"add booking data function called"<<std::endl;

    std::string customername , DLnumber , customeraddress , vehiclename , amountstatus , bookingid;

    std::cout<<"enter customer name : "<<std::endl;
    std::cin>>customername;

    std::cout<<"enter DL number : "<<std::endl;
    std::cin>>DLnumber;

    std::cout<<"enter customer address : "<<std::endl;
    std::cin>>customeraddress;

    std::cout<<"enter vehicle name : "<<std::endl;
    std::cin>>vehiclename;

    std::cout<<"enter amount status : "<<std::endl;
    std::cin>>amountstatus;

    std::cout<<"enter booking id : "<<std::endl;
    std::cin>>bookingid;

    m_bookingreportlist.push_back(BookingReport(customername , DLnumber , customeraddress , vehiclename , amountstatus , bookingid));
    fp->WriteBookingData(m_bookingreportlist);

}

void VehicleManagement::displayBike()
{
    std::cout<<"display bike function called"<<std::endl;
    for(auto i = m_bikelist.begin(); i!=m_bikelist.end(); i++)
    {
        cout.width(10);
        std::cout<<"NAME : ";

        cout.width(10);
        std::cout<<"FUEL : ";

        cout.width(5);
        std::cout<<"SEAT CAPACITY : ";

        cout.width(15);
        std::cout<<"VEHICAL NUMBER : ";

        cout.width(5);
        std::cout<<"CC : ";

        cout.width(5);
        std::cout<<"BIKE RENT TIME : ";

        cout.width(10);
        std::cout<<" BIKE STATUS : ";

        cout.width(10);
        std::cout<<"BIKE RENT COST : \n";

        cout.width(10);
        std::cout<<i->GetName();

        cout.width(10);
        std::cout<<i->GetFuel();

        cout.width(5);
        std::cout<<i->GetSeatCapacity();

        cout.width(15);
        std::cout<<i->GetVehicleNumber();

        cout.width(5);
        std::cout<<i->GetCC();

        cout.width(5);
        std::cout<<i->GetBikeRentTime();

        cout.width(10);
        std::cout<<i->GetBikeStatus();

        cout.width(10);
        std::cout<<i->GetBikeRentCost() << "\n";
    }
}

void VehicleManagement::displayCar()
{
    std::cout<<"display car function called"<<std::endl;
    for(auto i = m_carlist.begin(); i!=m_carlist.end(); i++)
    {
        cout.width(10);
        std::cout<<"NAME : ";

        cout.width(10);
        std::cout<<"FUEL : ";

        cout.width(5);
        std::cout<<"SEAT CAPACITY : ";

        cout.width(15);
        std::cout<<"VEHICAL NUMBER : ";

        cout.width(5);
        std::cout<<"TYPE : ";

        cout.width(5);
        std::cout<<"CAR RENT TIME : ";

        cout.width(10);
        std::cout<<" CAR STATUS : ";

        cout.width(10);
        std::cout<<"CAR RENT COST : \n";

        cout.width(10);
        std::cout<<i->GetName();

        cout.width(10);
        std::cout<<i->GetFuel();

        cout.width(5);
        std::cout<<i->GetSeatCapacity();

        cout.width(15);
        std::cout<<i->GetVehicleNumber();

        cout.width(5);
        std::cout<<i->GetCarType();

        cout.width(5);
        std::cout<<i->GetCarRentTime();

        cout.width(10);
        std::cout<<i->GetCarStatus();

        cout.width(10);
        std::cout<<i->GetCarRentCost() << "\n";
    }

}



