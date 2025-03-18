#include "vehiclemanagement.h"

VehicleManagement::VehicleManagement() {
    std::cout<<"vehicle management constructor called"<<std::endl;

    fp = new FileOperation;
    m_bikelist=fp->ReadBikeData("bikefile.csv");
    m_carlist = fp->ReadCarData("carfile.csv");
    m_bookingreportlist = fp->ReadBookingData("bookingfile.csv");
}



VehicleManagement::~VehicleManagement()
{
    std::cout<<"vehicle management destructor called"<<std::endl;
    delete fp;
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
    fp->WriteCarData(m_carlist);
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

    cout.width(20);
    std::cout<<"NAME : ";

    cout.width(20);
    std::cout<<"FUEL : ";

    cout.width(20);
    std::cout<<"SEAT CAPACITY : ";

    cout.width(20);
    std::cout<<"VEHICAL NUMBER : ";

    cout.width(20);
    std::cout<<"CC : ";

    cout.width(20);
    std::cout<<"BIKE RENT TIME : ";

    cout.width(20);
    std::cout<<" BIKE STATUS : ";

    cout.width(20);
    std::cout<<"BIKE RENT COST : \n";
    for(auto i = m_bikelist.begin(); i!= m_bikelist.end(); i++ )
    {
        cout.width(20);
        std::cout<<i->GetName();

        cout.width(20);
        std::cout<<i->GetFuel();

        cout.width(20);
        std::cout<<i->GetSeatCapacity();

        cout.width(20);
        std::cout<<i->GetVehicleNumber();

        cout.width(20);
        std::cout<<i->GetCC();

        cout.width(20);
        std::cout<<i->GetBikeRentTime();

        cout.width(20);
        std::cout<<i->GetBikeStatus();

        cout.width(20);
        std::cout<<i->GetBikeRentCost() << "\n";
    }
}

void VehicleManagement::displayCar()
{
    std::cout<<"display car function called"<<std::endl;
    cout.width(20);
    std::cout<<"NAME : ";

    cout.width(20);
    std::cout<<"FUEL : ";

    cout.width(20);
    std::cout<<"SEAT CAPACITY : ";

    cout.width(20);
    std::cout<<"VEHICAL NUMBER : ";

    cout.width(20);
    std::cout<<"TYPE : ";

    cout.width(20);
    std::cout<<"CAR RENT TIME : ";

    cout.width(20);
    std::cout<<" CAR STATUS : ";

    cout.width(20);
    std::cout<<"CAR RENT COST : \n";


    for(auto i = m_carlist.begin(); i!=m_carlist.end(); i++)
    {

        cout.width(20);
        std::cout<<i->GetName();

        cout.width(20);
        std::cout<<i->GetFuel();

        cout.width(20);
        std::cout<<i->GetSeatCapacity();

        cout.width(20);
        std::cout<<i->GetVehicleNumber();

        cout.width(20);
        std::cout<<i->GetCarType();

        cout.width(20);
        std::cout<<i->GetCarRentTime();

        cout.width(20);
        std::cout<<i->GetCarStatus();

        cout.width(20);
        std::cout<<i->GetCarRentCost() << "\n";
    }

}

void VehicleManagement::displayBookingData()
{
    std::cout<<"display booking data function called"<<std::endl;
    cout.width(20);
    std::cout<<" CUSTOMER NAME :";

    cout.width(20);
    std::cout<<"DL NUMBER :";

    cout.width(20);
    std::cout<<"ADDRESS :";

    cout.width(20);
    std::cout<<"VEHICLE NAME :";

    cout.width(20);
    std::cout<<"AMOUNT STATUS :";

    cout.width(20);
    std::cout<<"BOOKING ID :\n";

    for(auto i = m_bookingreportlist.begin(); i!= m_bookingreportlist.end() ; i++)
    {
        cout.width(20);
        std::cout<<i->GetCustomerName();

        cout.width(20);
        std::cout<<i->GetDLNumber();

        cout.width(20);
        std::cout<<i->GetCustomerAddress();

        cout.width(20);
        std::cout<<i->GetVehicleName();

        cout.width(20);
        std::cout<<i->GetAmountStatus();

        cout.width(20);
        std::cout<<i->GetBookId();

    }
}

void VehicleManagement::updateBikeDetails(std::string &vehiclenumber)
{
    std::cout<<"update bike details function called"<<std::endl;
    bool found = false;
    std::cout<<"enter the vehicle number you want to update: "<<std::endl;
    std::cin>>vehiclenumber;
    for(auto &i : m_bikelist)
    {
        if(i.GetVehicleNumber() == vehiclenumber)
        {
            found = true;

            int choice;
            std::cout<<"bike found , which details do you want to update"<<std::endl;
            std::cout<<"1.Rent time"<<std::endl;
            std::cout<<"2.Rent status"<<std::endl;
            std::cout<<"3.Rent cost"<<std::endl;

            std::cout<<"enter your choice : "<<std::endl;
            std::cin>>choice;

            std::string newrentTime;
            std::string newrentstatus;
            float newrentcost;

            switch(choice){
            case 1:
                std::cout<<"enter new rent time :"<<std::endl;
                std::cin>>newrentTime;
                i.SetBikeRentTime(newrentTime);
                break;

            case 2:
                std::cout<<"enter new rent status :"<<std::endl;
                std::cin>>newrentstatus;
                i.SetBikeStatus(newrentstatus);
                break;

            case 3:
                std::cout<<"enter new rent cost :"<<std::endl;
                std::cin>>newrentcost;
                i.SetBikeRentCost(newrentcost);
                break;
            default:
                std::cout<<"invalid choice"<<std::endl;
                break;
            }
            std::cout<<"updated successfully"<<std::endl;
            fp->WriteBikeData(m_bikelist);
            break;
        }
    }
    if(!found){
        std::cout<<"bike with vehicle number "<<vehiclenumber<<" not found"<<std::endl;
    }
}

void VehicleManagement::updateCarDetails(string &vehiclenumber)
{
    std::cout<<"update car details function called"<<std::endl;
    bool found = false;

    for(auto &i : m_carlist)
    {
        if(i.GetVehicleNumber() == vehiclenumber)
        {
            found = true;

            int choice;
            std::cout<<"car found , which details do you want to update"<<std::endl;
            std::cout<<"1.Rent time"<<std::endl;
            std::cout<<"2.Rent status"<<std::endl;
            std::cout<<"3.Rent cost"<<std::endl;

            std::cout<<"enter your choice : "<<std::endl;
            std::cin>>choice;

            std::string newrentTime;
            std::string newrentstatus;
            float newrentcost;

            switch(choice){
            case 1:
                std::cout<<"enter new rent time :"<<std::endl;
                std::cin>>newrentTime;
                i.SetCarRentTime(newrentTime);
                break;

            case 2:
                std::cout<<"enter new rent status :"<<std::endl;
                std::cin>>newrentstatus;
                i.SetCarStatus(newrentstatus);
                break;

            case 3:
                std::cout<<"enter new rent cost :"<<std::endl;
                std::cin>>newrentcost;
                i.SetCarRentCost(newrentcost);

            default:
                std::cout<<"invalid choice"<<std::endl;
                break;
            }
            std::cout<<"updated successfully"<<std::endl;
            fp->WriteCarData(m_carlist);
            break;
        }
    }
    if(!found){
        std::cout<<"car with vehicle number "<<vehiclenumber<<" not found"<<std::endl;
    }
}

void VehicleManagement::rentBike(string &vehiclename)
{
    std::cout<<"rent bike function called"<<std::endl;

    std::cout<<"enter the bike name you want to rent :"<<std::endl;
    std::cin>>vehiclename;

    for(auto &i : m_bikelist)
    {

        if(i.GetName() == vehiclename && i.GetBikeStatus() == "available")
        {
            i.SetBikeStatus("booked");
            fp->WriteBikeData(m_bikelist);
            addBookingData();
        }

        else{
            std::cout<<"this bike is already booked"<<std::endl;
        }
    }
}

void VehicleManagement::rentCar(string &vehiclename)
{
    std::cout<<"rent car function called"<<std::endl;

    std::cout<<"enter the car name you want to rent :"<<std::endl;
    std::cin>>vehiclename;

    for(auto &i : m_carlist)
    {
        if(i.GetName() == vehiclename && i.GetCarStatus() == "available")
        {
            i.SetCarStatus("booked");
            fp->WriteCarData(m_carlist);
            addBookingData();
        }

        else
        {
            std::cout<<"this car is already booked"<<std::endl;
        }
    }
}

void VehicleManagement::returnBike(std::string &vehiclename) {
    std::cout<<"return bike function called"<<std::endl;
    std::cout<<"enter the bike name you want to rent :"<<std::endl;
    std::cin>>vehiclename;
    bool found = false;

    for(auto &i : m_bikelist) {
        if(i.GetName() == vehiclename && i.GetBikeStatus() == "booked") {
            found = true;
            i.SetBikeStatus("available");
            std::cout<<"Bike returned successfully"<<std::endl;
            fp->WriteBikeData(m_bikelist);
            break;
        }
    }

    if(!found) {
        std::cout<<"No booked bike found with name "<<vehiclename<<std::endl;
    }
}

void VehicleManagement::returnCar(std::string &vehiclename) {
    std::cout<<"return car function called"<<std::endl;
    std::cout<<"enter the car name you want to rent :"<<std::endl;
    std::cin>>vehiclename;
    bool found = false;

    for(auto &i : m_carlist) {
        if(i.GetName() == vehiclename && i.GetCarStatus() == "booked") {
            found = true;
            i.SetCarStatus("available");
            std::cout<<"Car returned successfully"<<std::endl;
            fp->WriteCarData(m_carlist);

            break;
        }
    }

    if(!found) {
        std::cout<<"No booked car found with name "<<vehiclename<<std::endl;
    }
}

void VehicleManagement::bikeOperations()
{
    std::cout<<"bike operation function called"<<std::endl;
    int choice;
    std::string vehiclenumber;
    std::string vehiclename;
    BookingReport *report;
    std::cout<<"1.add bike: "<<std::endl;
    std::cout<<"2.display bike: "<<std::endl;
    std::cout<<"3.update bike: "<<std::endl;
    std::cout<<"4.rent bike: "<<std::endl;
    std::cout<<"5.return bike: "<<std::endl;

    std::cout<<"enter your choice: "<<std::endl;
    std::cin>>choice;


    switch(choice)
    {
    case 1:
        addBike();
        break;

    case 2:
        displayBike();
        break;

    case 3:
        // std::cout<<"enter the vehicle number you want to update: "<<std::endl;
        // std::cin>>vehiclenumber;
        updateBikeDetails(vehiclenumber);
        break;

    case 4:
        // std::cout<<"enter the vehicle name you want to rent: "<<std::endl;
        // std::cin>>vehiclename;
        rentBike(vehiclename);
        break;

    case 5:
        // std::cout<<"enter the vehicle name you want to return: "<<std::endl;
        // std::cin>>vehiclename;
        returnBike(vehiclename);
        break;

    default:
        std::cout<<"invalid choice"<<std::endl;
        break;
    }

}

void VehicleManagement::carOperation()
{
    std::cout<<"car operation function called"<<std::endl;
    int choice;
    std::string vehiclenumber;
    std::string vehiclename;
    std::cout<<"1.add car: "<<std::endl;
    std::cout<<"2.display car: "<<std::endl;
    std::cout<<"3.update car: "<<std::endl;
    std::cout<<"4.rent car: "<<std::endl;
    std::cout<<"5.return car: "<<std::endl;

    std::cout<<"enter your choice: "<<std::endl;
    std::cin>>choice;


    switch(choice)
    {
    case 1:
        addCar();
        break;

    case 2:
        displayCar();
        break;

    case 3:
        // std::cout<<"enter the vehicle number you want to update: "<<std::endl;
        // std::cin>>vehiclenumber;
        updateCarDetails(vehiclenumber);
        break;

    case 4:
        // std::cout<<"enter the vehicle name you want to rent: "<<std::endl;
        // std::cin>>vehiclename;
        rentCar(vehiclename);
        break;

    case 5:
        // std::cout<<"enter the vehicle name you want to return: "<<std::endl;
        // std::cin>>vehiclename;
        returnCar(vehiclename);
        break;

    default:
        std::cout<<"invalid choice"<<std::endl;
        break;
    }

}



