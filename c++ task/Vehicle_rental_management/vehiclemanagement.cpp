#include "vehiclemanagement.h"

VehicleManagement::VehicleManagement() {
    // std::cout<<"vehicle management constructor called"<<std::endl;

    fp = new FileOperation;
    m_bikelist=fp->ReadBikeData("bikefile.csv");
    m_carlist = fp->ReadCarData("carfile.csv");
    m_bookingreportlist = fp->ReadBookingData("bookingfile.csv");
}



VehicleManagement::~VehicleManagement()
{
    // std::cout<<"vehicle management destructor called"<<std::endl;
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
    // std::cout<<"add bike function called"<<std::endl;
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
    //fp->WriteBikeData(m_bikelist);
}

void VehicleManagement::addCar()
{
    // std::cout<<"add car function called"<<std::endl;
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
    //fp->WriteCarData(m_carlist);
}

void VehicleManagement::deleteBike(std::string &vehiclenumber)
{
    std::cout<<"enter the vehical number you want to delete :"<<std::endl;
    std::cin>>vehiclenumber;

    for(auto i = m_bikelist.begin(); i!= m_bikelist.end(); i++)
    {
        if(i->GetVehicleNumber() == vehiclenumber)
        {
            m_bikelist.erase(i);
            std::cout<<"bike with vehical number"<<vehiclenumber<<"deleted"<<std::endl;

            return;
        }
    }
    std::cout<<"bike with vehical number"<<vehiclenumber<<"not found"<<std::endl;
}

void VehicleManagement::deleteCar(string &vehiclenumber)
{
    std::cout<<"enter the vehical number you want to delete :"<<std::endl;
    std::cin>>vehiclenumber;

    for(auto i = m_carlist.begin(); i!= m_carlist.end();i++)
    {
        if(i->GetVehicleNumber() == vehiclenumber)
        {
            m_carlist.erase(i);
            std::cout<<"car with vehical number"<<vehiclenumber<<"deleted"<<std::endl;

            return;
        }
    }
    std::cout<<"car with vehical number"<<vehiclenumber<<"not found"<<std::endl;
}

void VehicleManagement::searchBike(string &vehiclename)
{
    std::cout<<"enter the vehicle name you want to search: "<<std::endl;
    std::cin>>vehiclename;

    for(auto i = m_bikelist.begin(); i!=m_bikelist.end(); i++)
    {
        if(i->GetName() == vehiclename)
        {
            std::cout<<"vehicle with name "<<vehiclename<<"found"<<std::endl;

            std::cout<<"fuel: "<<i->GetFuel()<<"seat capacity: "<<i->GetSeatCapacity()<<"vehicle number :"<<i->GetVehicleNumber()<<"status: "<<i->GetBikeStatus()<<"rent cost: "<<i->GetBikeRentCost()<<std::endl;
            return;
        }
    }
    std::cout<<"vehicle with name "<<vehiclename<<"not found"<<std::endl;
}

void VehicleManagement::searchCar(string &vehiclename)
{
    std::cout<<"enter the vehicle name you want to search: "<<std::endl;
    std::cin>>vehiclename;

    for(auto i = m_carlist.begin(); i!=m_carlist.end(); i++)
    {
        if(i->GetName() == vehiclename)
        {
            std::cout<<"vehicle with name "<<vehiclename<<"found"<<std::endl;

            std::cout<<"fuel: "<<i->GetFuel()<<"seat capacity: "<<i->GetSeatCapacity()<<"vehicle number :"<<i->GetVehicleNumber()<<"status: "<<i->GetCarStatus()<<"rent cost: "<<i->GetCarRentCost()<<std::endl;
            return;
        }
    }
    std::cout<<"vehicle with name "<<vehiclename<<"not found"<<std::endl;
}

std::list<Bike> VehicleManagement::sortByBikeStatus()
{
    for(auto i = m_bikelist.begin(); i!=m_bikelist.end();i++)
    {
        for(auto j = next(i);j!= m_bikelist.end();i++)
        {
            if(i->GetBikeStatus()!= "available" && j->GetBikeStatus() == "available")
            {
                std::iter_swap(i , j);
            }
            if(i->GetBikeStatus() == "available" && j->GetBikeStatus() == "booked")
            {
                std::iter_swap(i , j);
            }
            if(i->GetBikeStatus() == j->GetBikeStatus() && i->GetCC()<j->GetCC())
            {
                std::iter_swap(i , j);
            }
        }
    }
    return m_bikelist;
}

std::list<Car> VehicleManagement::sortByCarStatus()
{
    for(auto i = m_carlist.begin(); i!=m_carlist.end();i++)
    {
        for(auto j = next(i);j!= m_carlist.end();i++)
        {
            if(i->GetCarStatus()!= "available" && j->GetCarStatus() == "available")
            {
                std::iter_swap(i , j);
            }
            if(i->GetCarStatus() == "available" && j->GetCarStatus() == "booked")
            {
                std::iter_swap(i , j);
            }
            if(i->GetCarStatus() == j->GetCarStatus() && i->GetCarRentCost()<j->GetCarRentCost())
            {
                std::iter_swap(i , j);
            }
        }
    }
    return m_carlist;
}

std::list<Bike> VehicleManagement::sortByBikePrice()
{
    for(auto i = m_bikelist.begin(); i!= m_bikelist.end();i++)
    {
        for(auto j = next(i); j!= m_bikelist.end();i++)
        {
            if(i->GetBikeRentCost() < j->GetBikeRentCost())
            {
                std::iter_swap(i , j);
            }
        }
    }
    return m_bikelist;
}

std::list<Car> VehicleManagement::sortByCarPrice()
{
    for(auto i = m_carlist.begin(); i!= m_carlist.end();i++)
    {
        for(auto j = next(i); j!= m_carlist.end();i++)
        {
            if(i->GetCarRentCost() < j->GetCarRentCost())
            {
                std::iter_swap(i , j);
            }
        }
    }
    return m_carlist;
}

std::list<Bike> VehicleManagement::sortByBikeName()
{
    for(auto i = m_bikelist.begin(); i!= m_bikelist.end();i++)
    {
        for(auto j = next(i); j!= m_bikelist.end();i++)
        {
            if(i->GetName() < j->GetName())
            {
                std::iter_swap(i , j);
            }
        }
    }
    return m_bikelist;
}

std::list<Car> VehicleManagement::sortByCarName()
{
    for(auto i = m_carlist.begin(); i!= m_carlist.end();i++)
    {
        for(auto j = next(i); j!= m_carlist.end();i++)
        {
            if(i->GetName() < j->GetName())
            {
                std::iter_swap(i , j);
            }
        }
    }
    return m_carlist;
}



// void VehicleManagement::searchBikeCustomer(string &customername)
// {
//     std::cout<<"enter the customer name you want to search: "<<std::endl;
//     std::cin>>customername;
//     for(auto i=m_bookingreportlist.begin(); i!=m_bookingreportlist.end();i++)
//     {
//         if(i->GetCustomerName() == customername && i->GetVehicalType() == "bike")
//         {
//             std::cout<<"customer with name"<<customername<<"found"<<std::endl;
//             std::cout<<"phone :"<<i->GetPhoneNumber()<<"DL num: "<<i->GetDLNumber()<<"address :"<<i->GetCustomerAddress()<<std::endl;
//             return;
//         }
//     }
//     std::cout<<"customer with name"<<customername<<"not found"<<std::endl;

// }

// void VehicleManagement::searchCarCustomer(string &customername)
// {
//     std::cout<<"enter the customer name you want to search: "<<std::endl;
//     std::cin>>customername;
//     for(auto i=m_bookingreportlist.begin(); i!=m_bookingreportlist.end();i++)
//     {
//         if(i->GetCustomerName() == customername && i->GetVehicalType() == "car")
//         {
//             std::cout<<"customer with name"<<customername<<"found"<<std::endl;
//             std::cout<<"phone :"<<i->GetPhoneNumber()<<"DL num: "<<i->GetDLNumber()<<"address :"<<i->GetCustomerAddress()<<std::endl;
//             return;
//         }
//     }
//     std::cout<<"customer with name"<<customername<<"not found"<<std::endl;
// }

void VehicleManagement::addBookingData(std::string vehicalName,std::string vehicalType  , std::string vehicalnumber)
{
    // std::cout<<"add booking data function called"<<std::endl;
    //report = new BookingReport;
    std::string customername , phonenumber , DLnumber , customeraddress ,  amountstatus , bookingid ;

    std::cout<<"enter customer name : "<<std::endl;
    std::cin>>customername;

    std::cout<<"enter phone number : "<<std::endl;
    std::cin>>phonenumber;

    std::cout<<"enter DL number : "<<std::endl;
    std::cin>>DLnumber;

    std::cout<<"enter customer address : "<<std::endl;
    std::cin>>customeraddress;

    // std::cout<<"enter vehicle name : "<<std::endl;
    // std::cin>>vehiclename;

    std::cout<<"enter amount status : "<<std::endl;
    std::cin>>amountstatus;

    std::cout<<"enter booking id : "<<std::endl;
    std::cin>>bookingid;

    m_bookingreportlist.push_back(BookingReport(customername ,phonenumber, DLnumber , customeraddress , vehicalName , amountstatus , bookingid,vehicalType , vehicalnumber));
    //fp->WriteBookingData(m_bookingreportlist);

}

void VehicleManagement::displayBike()
{
    // std::cout<<"display bike function called"<<std::endl;

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
    // std::cout<<"display car function called"<<std::endl;
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
    // std::cout<<"display booking data function called"<<std::endl;
    cout.width(20);
    std::cout<<" CUSTOMER NAME :";

    cout.width(20);
    std::cout<<"PHONE NUMBER :";

    cout.width(20);
    std::cout<<"DL NUMBER :";

    cout.width(20);
    std::cout<<"ADDRESS :";

    cout.width(20);
    std::cout<<"VEHICLE NAME :";

    cout.width(20);
    std::cout<<"AMOUNT STATUS :";

    cout.width(20);
    std::cout<<"BOOKING ID :";

    cout.width(20);
    std::cout<<"VEHICAL TYPE :";

    cout.width(20);
    std::cout<<"VEHICAL NUMBER :\n";

    for(auto i = m_bookingreportlist.begin(); i!= m_bookingreportlist.end() ; i++)
    {
        cout.width(20);
        std::cout<<i->GetCustomerName();

        cout.width(20);
        std::cout<<i->GetPhoneNumber();

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

        cout.width(20);
        std::cout<<i->GetVehicalType();

        cout.width(20);
        std::cout<<i->GetVehicalNumber()<<"\n";

    }
}

void VehicleManagement::updateBikeDetails(std::string &vehiclenumber)
{
    // std::cout<<"update bike details function called"<<std::endl;
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
            //fp->WriteBikeData(m_bikelist);
            break;
        }
    }
    if(!found){
        std::cout<<"bike with vehicle number "<<vehiclenumber<<" not found"<<std::endl;
    }
}

void VehicleManagement::updateCarDetails(string &vehiclenumber)
{
    // std::cout<<"update car details function called"<<std::endl;
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
            //fp->WriteCarData(m_carlist);
            break;
        }
    }
    if(!found){
        std::cout<<"car with vehicle number "<<vehiclenumber<<" not found"<<std::endl;
    }
}

void VehicleManagement::rentBike(string &vehiclename)
{
    // std::cout<<"rent bike function called"<<std::endl;

    std::cout<<"enter the bike name you want to rent :"<<std::endl;
    std::cin>>vehiclename;

    for(auto &i : m_bikelist)
    {

        if(i.GetName() == vehiclename && i.GetBikeStatus() == "available")
        {
            i.SetBikeStatus("booked");
            //fp->WriteBikeData(m_bikelist);
            addBookingData(i.GetName(),"Bike" , i.GetVehicleNumber());
            return;

        }
    }
    std::cout<<"this bike is already booked"<<std::endl;
}

void VehicleManagement::rentCar(string &vehiclename)
{
    // std::cout<<"rent car function called"<<std::endl;

    std::cout<<"enter the car name you want to rent :"<<std::endl;
    std::cin>>vehiclename;

    for(auto &i : m_carlist)
    {
        if(i.GetName() == vehiclename && i.GetCarStatus() == "available")
        {
            i.SetCarStatus("booked");
            //fp->WriteCarData(m_carlist);
            addBookingData(i.GetName(),"Car" , i.GetVehicleNumber());
            return;
        }
    }
    std::cout<<"this car is already booked"<<std::endl;
}

void VehicleManagement::returnBike(std::string &vehiclename) {
    // std::cout<<"return bike function called"<<std::endl;
    std::cout<<"enter the bike name you want to return :"<<std::endl;
    std::cin>>vehiclename;
    bool found = false;

    for(auto &i : m_bikelist) {
        if(i.GetName() == vehiclename && i.GetBikeStatus() == "booked") {
            found = true;
            i.SetBikeStatus("available");

            std::cout<<"Bike returned successfully"<<std::endl;
            //fp->WriteBikeData(m_bikelist);

            break;
        }
    }

    if(!found) {
        std::cout<<"No booked bike found with name "<<vehiclename<<std::endl;
    }
}

void VehicleManagement::returnCar(std::string &vehiclename) {
    // std::cout<<"return car function called"<<std::endl;
    std::cout<<"enter the car name you want to return :"<<std::endl;
    std::cin>>vehiclename;
    bool found = false;

    for(auto &i : m_carlist) {
        if(i.GetName() == vehiclename && i.GetCarStatus() == "booked") {
            found = true;
            i.SetCarStatus("available");
            std::cout<<"Car returned successfully"<<std::endl;
            //fp->WriteCarData(m_carlist);

            break;
        }
    }

    if(!found) {
        std::cout<<"No booked car found with name "<<vehiclename<<std::endl;
    }
}

void VehicleManagement::bikeManagement()
{
    // std::cout<<"bike operation function called"<<std::endl;
    int choice;
    std::string vehiclenumber;
    std::string vehiclename;
    std::cout<<"1.add bike: "<<std::endl;
    std::cout<<"2.display menu: "<<std::endl;
    std::cout<<"3.update bike: "<<std::endl;
    std::cout<<"4.rent bike: "<<std::endl;
    std::cout<<"5.return bike: "<<std::endl;
    std::cout<<"6.delete bike: "<<std::endl;
    std::cout<<"7.search bike: "<<std::endl;

    std::cout<<"enter your choice: "<<std::endl;
    std::cin>>choice;


    switch(choice)
    {
    case 1:
        addBike();
        break;

    case 2:
        bikeDisplayMenu();
        break;

    case 3:

        updateBikeDetails(vehiclenumber);
        break;

    case 4:

        rentBike(vehiclename);
        break;

    case 5:

        returnBike(vehiclename);
        break;

    case 6:
        deleteBike(vehiclenumber);
        break;

    case 7:
        searchBike(vehiclename);
        break;

    default:
        std::cout<<"invalid choice"<<std::endl;
        break;
    }

}

void VehicleManagement::carManagement()
{
    // std::cout<<"car operation function called"<<std::endl;
    int choice;
    std::string vehiclenumber;
    std::string vehiclename;
    std::cout<<"1.add car: "<<std::endl;
    std::cout<<"2.display menu: "<<std::endl;
    std::cout<<"3.update car: "<<std::endl;
    std::cout<<"4.rent car: "<<std::endl;
    std::cout<<"5.return car: "<<std::endl;
    std::cout<<"6.delete car: "<<std::endl;
    std::cout<<"7.search car: "<<std::endl;

    std::cout<<"enter your choice: "<<std::endl;
    std::cin>>choice;


    switch(choice)
    {
    case 1:
        addCar();
        break;

    case 2:
        carDisplayMenu();
        break;

    case 3:

        updateCarDetails(vehiclenumber);
        break;

    case 4:

        rentCar(vehiclename);
        break;

    case 5:

        returnCar(vehiclename);
        break;

    case 6:
        deleteCar(vehiclenumber);
        break;

    case 7:
        searchCar(vehiclename);
        break;

    default:
        std::cout<<"invalid choice"<<std::endl;
        break;
    }

}

void VehicleManagement::bikeDisplayMenu()
{
    int choice;
    std::cout<<"1.display"<<std::endl;
    std::cout<<"2.sort by status"<<std::endl;
    std::cout<<"3.sort by price"<<std::endl;
    std::cout<<"4.sort by name"<<std::endl;

    std::cout<<"enter your choice : "<<std::endl;
    std::cin>>choice;

    switch(choice)
    {
    case 1:
        displayBike();
        break;

    case 2:
        sortByBikeStatus();
        break;

    case 3:
        sortByBikePrice();
        break;

    case 4:
        sortByBikeName();
        break;

    default:
        std::cout<<"invalid choice"<<std::endl;
        break;
    }
}


void VehicleManagement::carDisplayMenu()
{
    int choice;
    std::cout<<"1.display"<<std::endl;
    std::cout<<"2.sort by status"<<std::endl;
    std::cout<<"3.sort by price"<<std::endl;
    std::cout<<"4.sort by name"<<std::endl;


    std::cout<<"enter your choice : "<<std::endl;
    std::cin>>choice;

    switch(choice)
    {
    case 1:
        displayCar();
        break;

    case 2:
        sortByCarStatus();
        break;

    case 3:
        sortByCarPrice();
        break;

    case 4:
        sortByCarName();
        break;

    default:
        std::cout<<"invalid choice"<<std::endl;
        break;
    }
}
void VehicleManagement::menu()
{
    int choice;
    while(1){
        std::cout<<"1.bike: "<<std::endl;
        std::cout<<"2.car: "<<std::endl;
        std::cout<<"3.booking details: "<<std::endl;
        std::cout<<"4.exit: "<<std::endl;

        std::cout<<"enter your choice: "<<std::endl;
        std::cin>>choice;

        switch(choice)
        {
        case 1:

            this->bikeManagement();
            break;

        case 2:

            this->carManagement();
            break;

        case 3:

            this->displayBookingData();
            break;

        case 4:
            fp->WriteBikeData(m_bikelist);
            fp->WriteCarData(m_carlist);
            fp->WriteBookingData(m_bookingreportlist);
            exit(0);

        default:
            std::cout<<"invalid choice"<<std::endl;
            break;
        }
    }
}



