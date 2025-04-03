#include "rentalvehicalmanger.h"
#include"fileoperation.h"
#include"vehicalbookingreport.h"

RentalVehicalManger::RentalVehicalManger() {
    std::cout<<"rental manager constructor called"<<std::endl;
    fileobject= new FileOperation;
    m_bikelist = fileobject->ReadBikeData("bikefile.csv");
    m_carlist = fileobject->ReadCarData("carfile.csv");
    m_bookinglist = fileobject->ReadBookingData("bookingfile.csv");


}

RentalVehicalManger::~RentalVehicalManger()
{
    std::cout<<"rental manager destructor called"<<std::endl;
    fileobject->WriteBikeData(m_bikelist);
    fileobject->WriteCarData(m_carlist);
    fileobject->WriteBookingData(m_bookinglist);
    delete fileobject;
    delete payment;
    delete report;

}

void RentalVehicalManger::addBike()
{
    std::string bikeNumber , bikeName , bikeModelName , bikeStatus ;
    float bikeCost;

    std::cout<<"enter bike number :"<<std::endl;
    std::cin>>bikeNumber;

    std::cout<<"enter bike name :"<<std::endl;
    std::cin>>bikeName;

    std::cout<<"enter bike model name :"<<std::endl;
    std::cin>>bikeModelName;

    std::cout<<"enter bike status :"<<std::endl;
    std::cin>>bikeStatus;

    std::cout<<"enter bike rent cost :"<<std::endl;
    std::cin>>bikeCost;

    m_bikelist.push_back(new RentalBikeDetails(bikeNumber , bikeName , bikeModelName , bikeStatus , bikeCost));


}

void RentalVehicalManger::addCar()
{
    std::string carNumber , carName , carModelName , carStatus ;
    float carCost;

    std::cout<<"enter car number :"<<std::endl;
    std::cin>>carNumber;

    std::cout<<"enter car name :"<<std::endl;
    std::cin>>carName;

    std::cout<<"enter car model name :"<<std::endl;
    std::cin>>carModelName;

    std::cout<<"enter car status :"<<std::endl;
    std::cin>>carStatus;

    std::cout<<"enter car rent cost :"<<std::endl;
    std::cin>>carCost;

    m_carlist.push_back(new RentalCarDetails(carNumber , carName , carModelName , carStatus , carCost));
}

void RentalVehicalManger::addBookingData(string vehicalType, string VehicalNumber, string vehicalName, float vehicalRentCost, string amountStatus, string paymentMode)
{
    std::string customerName , DLNumber , customerPhoneNumber , customerAddress , bookingId , rentDuration , paymentId , paymentRefNumber;
    std::cout<<"enter customer name : "<<std::endl;
    std::cin>>customerName;

    std::cout<<"enter DL number : "<<std::endl;
    std::cin>>DLNumber;

    std::cout<<"enter phone number : "<<std::endl;
    std::cin>>customerPhoneNumber;

    std::cout<<"enter customer address : "<<std::endl;
    std::cin>>customerAddress;

    std::cout<<"enter booking id : "<<std::endl;
    std::cin>>bookingId;

    std::cout<<"enter rent duration :"<<std::endl;
    std::cin>>rentDuration;

    std::cout<<"enter payment id: "<<std::endl;
    std::cin>>paymentId;

    std::cout<<"enter payment ref number: "<<std::endl;
    std::cin>>paymentRefNumber;
    m_bookinglist.push_back(new vehicalBookingReport(customerName , DLNumber , customerPhoneNumber , customerAddress , bookingId , vehicalType,vehicalName, VehicalNumber , vehicalRentCost , rentDuration , amountStatus , paymentMode , paymentId , paymentRefNumber));
    return ;

}

void RentalVehicalManger::deleteBike()
{
    std::string vehicalNumber;
    std::cout<<"enter the vehical number you want to delete :"<<std::endl;
    std::cin>>vehicalNumber;

    for(auto i = m_bikelist.begin(); i!=m_bikelist.end(); i++)
    {
        // auto start =std::chrono::high_resolution_clock::now();
        if((*i)->GetVehicalNumber() == vehicalNumber)
        {
            m_bikelist.erase(i);
            std::cout<<"bike with vehical number"<<vehicalNumber<<"deleted"<<std::endl;

            return;

        }
        // auto end =std::chrono::high_resolution_clock::now();

        // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end-start);
        // std::cout<<"duration of the loop "<<duration.count();
    }
    std::cout<<"bike with vehical number"<<vehicalNumber<<"not found"<<std::endl;

}

void RentalVehicalManger::deleteCar()
{
    std::string vehicalNumber;
    std::cout<<"enter the vehical number you want to delete :"<<std::endl;
    std::cin>>vehicalNumber;

    for(auto i = m_carlist.begin(); i!=m_carlist.end();i++)
    {
        if((*i)->GetVehicalNumber() == vehicalNumber)
        {
            m_carlist.erase(i);
            std::cout<<"car with vehical number"<<vehicalNumber<<"deleted"<<std::endl;

            return;

        }
    }

    std::cout<<"car with vehical number"<<vehicalNumber<<"not found"<<std::endl;

}

void RentalVehicalManger::displayBikeData()
{
    cout.width(20);
    std::cout<<"BIKE NUMBER : ";

    cout.width(20);
    std::cout<<"BIKE NAME : ";

    cout.width(20);
    std::cout<<"BIKE MODEL NAME : ";

    cout.width(20);
    std::cout<<" BIKE STATUS : ";

    cout.width(20);
    std::cout<<"BIKE RENT COST : \n";
    for(auto i = m_bikelist.begin(); i!= m_bikelist.end(); i++ )
    {
        cout.width(20);
        std::cout<<(*i)->GetVehicalNumber();

        cout.width(20);
        std::cout<<(*i)->GetVehicalName();

        cout.width(20);
        std::cout<<(*i)->GetVehicalModelName();

        cout.width(20);
        std::cout<<(*i)->GetVehicalStatus();

        cout.width(20);
        std::cout<<(*i)->GetVehicalCost()<<"\n";

    }
}

// void RentalVehicalManger::displaySortedBike()
// {
//     cout.width(20);
//     std::cout<<"BIKE NUMBER : ";

//     cout.width(20);
//     std::cout<<"BIKE NAME : ";

//     cout.width(20);
//     std::cout<<"BIKE MODEL NAME : ";

//     cout.width(20);
//     std::cout<<" BIKE STATUS : ";

//     cout.width(20);
//     std::cout<<"BIKE RENT COST : \n";
//     for(auto i = m_sortedlist.begin(); i!= m_sortedlist.end(); i++ )
//     {
//         cout.width(20);
//         std::cout<<(*i)->GetVehicalNumber();

//         cout.width(20);
//         std::cout<<(*i)->GetVehicalName();

//         cout.width(20);
//         std::cout<<(*i)->GetVehicalModelName();

//         cout.width(20);
//         std::cout<<(*i)->GetVehicalStatus();

//         cout.width(20);
//         std::cout<<(*i)->GetVehicalCost()<<"\n";

//     }
// }

void RentalVehicalManger::displayCar()
{
    cout.width(20);
    std::cout<<"CAR NUMBER : ";

    cout.width(20);
    std::cout<<"CAR NAME : ";

    cout.width(20);
    std::cout<<"CAR MODEL NAME : ";

    cout.width(20);
    std::cout<<" CAR STATUS : ";

    cout.width(20);
    std::cout<<"CAR RENT COST : \n";
    for(auto i = m_carlist.begin(); i!= m_carlist.end(); i++ )
    {
        cout.width(20);
        std::cout<<(*i)->GetVehicalNumber();

        cout.width(20);
        std::cout<<(*i)->GetVehicalName();

        cout.width(20);
        std::cout<<(*i)->GetVehicalModelName();

        cout.width(20);
        std::cout<<(*i)->GetVehicalStatus();

        cout.width(20);
        std::cout<<(*i)->GetVehicalCost()<<"\n";

    }
}

void RentalVehicalManger::displayBookingData()
{
    cout.width(15);
    std::cout<<" CUSTOMER NAME :";

    cout.width(15);
    std::cout<<"DL NUMBER :";

    cout.width(15);
    std::cout<<"PHONE NUMBER :";

    cout.width(15);
    std::cout<<"ADDRESS :";

    cout.width(15);
    std::cout<<"BOOKING ID :";

    cout.width(15);
    std::cout<<"VEHICAL TYPE :";

    cout.width(15);
    std::cout<<"VEHICLE NAME :";

    cout.width(15);
    std::cout<<"VEHICLE NUMBER :";

    cout.width(15);
    std::cout<<"RENT COST :";

    cout.width(15);
    std::cout<<"RENT DURATION :";

    cout.width(15);
    std::cout<<"AMOUNT STATUS :";

    cout.width(15);
    std::cout<<"PAYMENT MODE :";

    cout.width(15);
    std::cout<<"PAYMENT ID :";

    cout.width(15);
    std::cout<<"PAYMENT REF NUMBER :\n";

    for(auto i = m_bookinglist.begin();i!=m_bookinglist.end();i++)
    {
        cout.width(15);
        std::cout<<(*i)->GetCustomerName();

        cout.width(15);
        std::cout<<(*i)->GetDLNumber();

        cout.width(15);
        std::cout<<(*i)->GetPhoneNumber();

        cout.width(15);
        std::cout<<(*i)->GetCustomerAddress();

        cout.width(15);
        std::cout<<(*i)->GetBookingId();

        cout.width(15);
        std::cout<<(*i)->GetVehicalType();

        cout.width(15);
        std::cout<<(*i)->GetRentedVehicalName();

        cout.width(15);
        std::cout<<(*i)->GetRentedVehicalNumber();

        cout.width(15);
        std::cout<<(*i)->GetRentedVehicalCost();

        cout.width(15);
        std::cout<<(*i)->GetRentalDuration();

        cout.width(15);
        std::cout<<(*i)->GetAmountStatus();

        cout.width(15);
        std::cout<<(*i)->GetPaymentMode();

        cout.width(15);
        std::cout<<(*i)->GetPaymentId();

        cout.width(15);
        std::cout<<(*i)->GetPaymentNumber()<<"\n";



    }


}

enum {
    rent_status = 1,
    rent_cost
};
void RentalVehicalManger::updateBikeDetails()
{
    bool bikeFound = false;
    std::string vehicalNumber;
    std::cout<<"enter the vehical number you want to update:"<<std::endl;
    std::cin>>vehicalNumber;

    for(auto i = m_bikelist.begin();i!=m_bikelist.end();i++)
    {
        if((*i)->GetVehicalNumber() == vehicalNumber)
        {
            bikeFound = true;
            int choice;
            std::cout<<"bike found , which details do you want to update"<<std::endl;
            std::cout<<"1.Rent status"<<std::endl;
            std::cout<<"2.Rent cost"<<std::endl;

            std::cout<<"enter your choice : "<<std::endl;
            std::cin>>choice;

            std::string newrentstatus;
            float newrentcost;

            switch(choice){
            case rent_status:
                std::cout<<"enter new rent status :"<<std::endl;
                std::cin>>newrentstatus;
                (*i)->SetVehicalStatus(newrentstatus);
                break;

            case rent_cost:
                std::cout<<"enter new rent cost :"<<std::endl;
                std::cin>>newrentcost;
                (*i)->SetVehicalCost(newrentcost);
                break;

            default:
                std::cout<<"invalid choice"<<std::endl;
                break;
            }
            std::cout<<"updated successfully"<<std::endl;
            break;
        }
        if(!bikeFound){
            std::cout<<"bike with vehicle number "<<vehicalNumber<<" not found"<<std::endl;
        }
    }
}

void RentalVehicalManger::updateCarDetails()
{
    bool carFound = false;
    std::string vehicalNumber;
    std::cout<<"enter the vehical number you want to update:"<<std::endl;
    std::cin>>vehicalNumber;

    for(auto i = m_carlist.begin();i!=m_carlist.end();i++)
    {
        if((*i)->GetVehicalNumber() == vehicalNumber)
        {
            carFound = true;
            int choice;
            std::cout<<"car found , which details do you want to update"<<std::endl;
            std::cout<<"1.Rent status"<<std::endl;
            std::cout<<"2.Rent cost"<<std::endl;

            std::cout<<"enter your choice : "<<std::endl;
            std::cin>>choice;

            std::string newrentstatus;
            float newrentcost;

            switch(choice){
            case rent_status:
                std::cout<<"enter new rent status :"<<std::endl;
                std::cin>>newrentstatus;
                (*i)->SetVehicalStatus(newrentstatus);
                break;

            case rent_cost:
                std::cout<<"enter new rent cost :"<<std::endl;
                std::cin>>newrentcost;
                (*i)->SetVehicalCost(newrentcost);
                break;

            default:
                std::cout<<"invalid choice"<<std::endl;
                break;
            }
            std::cout<<"updated successfully"<<std::endl;
            break;
        }
        if(!carFound){
            std::cout<<"car with vehicle number "<<vehicalNumber<<" not found"<<std::endl;
        }
    }
}

void RentalVehicalManger::SearchBike()
{
    std::string vehicalName;
    std::cout<<"enter the bike name you want to search: "<<std::endl;
    std::cin>>vehicalName;

    for(auto i = m_bikelist.begin(); i!=m_bikelist.end(); i++)
    {
        if((*i)->GetVehicalName() == vehicalName)
        {
            std::cout<<"vehicle with name "<<vehicalName<<"found"<<std::endl;
            std::cout<<"vehical Number: "<<(*i)->GetVehicalNumber()<<"vehical model name:"<<(*i)->GetVehicalModelName()<<"status: "<<(*i)->GetVehicalStatus()<<"cost: "<<(*i)->GetVehicalCost()<<std::endl;
            return;
        }
        std::cout<<"vehicle with name "<<vehicalName<<"not found"<<std::endl;

    }

}

void RentalVehicalManger::SearchCar()
{
    std::string vehicalName;
    std::cout<<"enter the bike name you want to search: "<<std::endl;
    std::cin>>vehicalName;

    for(auto i = m_carlist.begin(); i!=m_carlist.end(); i++)
    {
        // auto start =std::chrono::high_resolution_clock::now();

        if((*i)->GetVehicalName() == vehicalName)
        {
            std::cout<<"vehicle with name "<<vehicalName<<"found"<<std::endl;
            std::cout<<"vehical Number: "<<(*i)->GetVehicalNumber()<<"vehical model name:"<<(*i)->GetVehicalModelName()<<"status: "<<(*i)->GetVehicalStatus()<<"cost: "<<(*i)->GetVehicalCost()<<std::endl;
            return;
        }
        std::cout<<"vehicle with name "<<vehicalName<<"not found"<<std::endl;
        // auto end =std::chrono::high_resolution_clock::now();

        // auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end-start);
        // std::cout<<"duration of the loop "<<duration.count();
    }
}

void RentalVehicalManger::sortByBikeName()
{
    m_bikelist.sort([](RentalBikeDetails *a , RentalBikeDetails *b){
        return a->GetVehicalName() < b->GetVehicalName();
    });
}


//------------------------------------------------------------------------------------------------------------------------------------
// std::list<RentalBikeDetails*> RentalVehicalManger::merge(std::list<RentalBikeDetails*>& left, std::list<RentalBikeDetails*>& right) {
//     std::list<RentalBikeDetails*> sortedList;
//     auto itL = left.begin(), itR = right.begin();

//     while (itL != left.end() && itR != right.end()) {
//         std::cout<<"\n vehicle name "<<(*itL)->GetVehicalName();
//         if ((*itL)->GetVehicalName() < (*itR)->GetVehicalName()) {
//             sortedList.push_back(*itL);
//             ++itL;
//         } else {
//             sortedList.push_back(*itR);
//             ++itR;
//         }
//     }
//     sortedList.insert(sortedList.end(), itL, left.end());
//     sortedList.insert(sortedList.end(), itR, right.end());
//     for(auto &b:sortedList)
//     {
//         std::cout<<"my display"<<b->GetVehicalName()<<std::endl;
//     }
//     m_sortedlist=sortedList;
//     return sortedList;
// }

// std::list<RentalBikeDetails*> RentalVehicalManger::mergeSort(std::list<RentalBikeDetails*>& bikes) {
//     if (bikes.size() <= 1) return bikes;

//     auto mid = bikes.begin();
//     std::advance(mid, bikes.size() / 2);

//     std::list<RentalBikeDetails*> left(bikes.begin(), mid);
//     std::list<RentalBikeDetails*> right(mid, bikes.end());

//     left = mergeSort(left);
//     right = mergeSort(right);

//     return merge(left, right);
// }

// std::list<RentalBikeDetails*> RentalVehicalManger::sortByBikeName() {
//     std::cout << "Sorting bikes by name..." << std::endl;
//     return mergeSort(m_bikelist);

// }
// void RentalVehicalManger::displayme(const std::list<RentalBikeDetails*> & bike){
//     for(auto &b:bike)
//     {
//         std::cout<<"my display"<<b->GetVehicalName()<<std::endl;
//     }
// }
//-----------------------------------------------------------------------------------------------------------------------



void RentalVehicalManger::sortByCarName()
{    m_carlist.sort([](RentalCarDetails *a , RentalCarDetails *b){
        return a->GetVehicalName() < b->GetVehicalName();
    });
}

void RentalVehicalManger::sortByBikeStatus()
{
    m_bikelist.sort([](RentalBikeDetails *a , RentalBikeDetails *b){
        return a->GetVehicalStatus() < b->GetVehicalStatus();
    });
}

void RentalVehicalManger::sortByCarStatus()
{
    m_carlist.sort([](RentalCarDetails *a , RentalCarDetails *b){
        return a->GetVehicalStatus() < b->GetVehicalStatus();
    });
}

void RentalVehicalManger::sortByBikePrice()
{
    m_bikelist.sort([](RentalBikeDetails *a , RentalBikeDetails *b){
        return a->GetVehicalCost() < b->GetVehicalCost();
    });
}

void RentalVehicalManger::sortByCarPrice()
{
    m_carlist.sort([](RentalCarDetails *a , RentalCarDetails *b){
        return a->GetVehicalCost() < b->GetVehicalCost();
    });
}

enum{
    cash_payment = 1,
    upi_payment
};

void RentalVehicalManger::rentBike()
{
    std::string vehicalName;
    std::cout<<"enter the bike name you want to rent :"<<std::endl;
    std::cin>>vehicalName;

    for(auto i : m_bikelist)
    {
        std::cout<<i->GetVehicalNumber()<<std::endl;
        std::cout<<i->GetVehicalStatus()<<std::endl;
        if(i->GetVehicalName() == vehicalName && i->GetVehicalStatus() == "available")
        {
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

            report = new vehicalBookingReport(customerName , DLNumber , customerPhoneNumber , customerAddress , bookingId, vehicalType , rentedVehicalName,
                                              rentedVehicalNumber , rentedVehicalcost , rentalDuration , amountStatus , paymentMode , paymentId , paymentReferenceNumber);

            int choice;
            std::cout<<"1.cash"<<std::endl;
            std::cout<<"2.upi"<<std::endl;

            std::cout<<"enter your choice :"<<std::endl;
            std::cin>>choice;

            switch(choice)
            {
            case cash_payment:
            {
                payment = new CashPayment;
                report->SetPaymentMode("cash");
                payment->SetUniqueId("Null");
                payment->SetUniqueRefrence("Null");
                report->SetAmountStatus("paid");
                i->SetVehicalStatus("booked");
                addBookingData("bike" , i->GetVehicalNumber() , i->GetVehicalName() , i->GetVehicalCost() , report->GetAmountStatus() , report->GetPaymentMode());

                break;
            }

            case upi_payment:
            {
                payment = new OnlinePayment;
                report->SetPaymentMode("upi");
                report->SetAmountStatus("paid");
                i->SetVehicalStatus("booked");
                addBookingData("bike" , i->GetVehicalNumber() , i->GetVehicalName() , i->GetVehicalCost() , report->GetAmountStatus() , report->GetPaymentMode());
                break;
            }

            default:
                std::cout<<"invalid choice"<<std::endl;
                break;


            }

        }

    }

    return ;
}

void RentalVehicalManger::rentCar()
{
    std::string vehicalName;
    std::cout<<"enter the car name you want to rent :"<<std::endl;
    std::cin>>vehicalName;

    for(auto i : m_carlist)
    {
        std::cout<<i->GetVehicalNumber()<<std::endl;
        std::cout<<i->GetVehicalStatus()<<std::endl;
        if(i->GetVehicalName() == vehicalName && i->GetVehicalStatus() == "available")
        {


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

            report = new vehicalBookingReport(customerName , DLNumber , customerPhoneNumber , customerAddress , bookingId, vehicalType , rentedVehicalName,
                                              rentedVehicalNumber , rentedVehicalcost , rentalDuration , amountStatus , paymentMode , paymentId , paymentReferenceNumber);

            int choice;
            std::cout<<"1.cash"<<std::endl;
            std::cout<<"2.upi"<<std::endl;

            std::cout<<"enter your choice :"<<std::endl;
            std::cin>>choice;

            switch(choice)
            {
            case cash_payment:
            {
                payment = new CashPayment;
                report->SetPaymentMode("cash");
                payment->SetUniqueId("Null");
                payment->SetUniqueRefrence("Null");
                report->SetAmountStatus("paid");
                i->SetVehicalStatus("booked");
                addBookingData("car" , i->GetVehicalNumber() , i->GetVehicalName() , i->GetVehicalCost() , report->GetAmountStatus() , report->GetPaymentMode());
                break;
            }

            case upi_payment:
            {
                payment = new OnlinePayment;
                report->SetPaymentMode("upi");
                report->SetAmountStatus("paid");
                i->SetVehicalStatus("booked");
                addBookingData("car" , i->GetVehicalNumber() , i->GetVehicalName() , i->GetVehicalCost() , report->GetAmountStatus() , report->GetPaymentMode());


                break;
            }

            default:
                std::cout<<"invalid choice"<<std::endl;
                break;


            }

        }

    }

    return ;
}

void RentalVehicalManger::returnBike()
{
    std::string vehicalName;
    std::cout<<"enter the bike name you want to return :"<<std::endl;
    std::cin>>vehicalName;
    bool found = false;


    for(auto i = m_bikelist.begin();i!=m_bikelist.end();i++)
    {
        if((*i)->GetVehicalName() == vehicalName && (*i)->GetVehicalStatus() == "booked")
        {
            found = true;

            (*i)->SetVehicalStatus("available");
            std::cout<<"Bike returned successfully"<<std::endl;
            break;
        }
    }
    if(!found)
    {
        std::cout<<"No booked bike found with name "<<vehicalName<<std::endl;

    }

}

void RentalVehicalManger::returnCar()
{
    std::string vehicalName;
    std::cout<<"enter the car name you want to return :"<<std::endl;
    std::cin>>vehicalName;
    bool found = false;


    for(auto i = m_carlist.begin();i!=m_carlist.end();i++)
    {
        if((*i)->GetVehicalName() == vehicalName && (*i)->GetVehicalStatus() == "booked")
        {
            found = true;

            (*i)->SetVehicalStatus("available");
            std::cout<<"car returned successfully"<<std::endl;
            break;
        }
    }
    if(!found)
    {
        std::cout<<"No booked car found with name "<<vehicalName<<std::endl;

    }
}
enum{
    display = 1,
    sort_by_status,
    sort_by_price,
    sort_by_name
};
void RentalVehicalManger::bikeDisplayMenu()
{
    int choice;
    // std::list<RentalBikeDetails*> leftlist;
    // std::list<RentalBikeDetails*> rightlist;

    std::cout<<"1.display"<<std::endl;
    std::cout<<"2.sort by status"<<std::endl;
    std::cout<<"3.sort by price"<<std::endl;
    std::cout<<"4.sort by name"<<std::endl;

    std::cout<<"enter your choice : "<<std::endl;
    std::cin>>choice;

    switch(choice)
    {
    case display:
        displayBikeData();
        break;

    case sort_by_status:
        sortByBikeStatus();
        displayBikeData();

        break;

    case sort_by_price:
        sortByBikePrice();
        displayBikeData();

        break;

    case sort_by_name:{
        // std::list<RentalBikeDetails*>& sort=sortByBikeName();
        sortByBikeName();
        displayBikeData();

        break;
    }
    default:
        std::cout<<"invalid choice"<<std::endl;
        break;
    }
}

void RentalVehicalManger::carDisplayMenu()
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
    case display:
        displayCar();
        break;

    case sort_by_status:
        sortByCarStatus();
        displayCar();

        break;

    case sort_by_price:
        sortByCarPrice();
        displayCar();

        break;

    case sort_by_name:
        sortByCarName();
        displayCar();

        break;

    default:
        std::cout<<"invalid choice"<<std::endl;
        break;
    }

}

enum{
    add = 1,
    Display,
    update,
    rent,
    Return,
    Delete,
    Search
};
void RentalVehicalManger::bikeManagement()
{
    int choice;
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
    case add:
        addBike();
        break;

    case Display:
        bikeDisplayMenu();
        break;

    case update:

        updateBikeDetails();
        break;

    case rent:

        rentBike();
        break;

    case Return:

        returnBike();
        break;

    case Delete:
        deleteBike();
        break;

    case Search:
        SearchBike();
        break;

    default:
        std::cout<<"invalid choice"<<std::endl;
        break;
    }
}

void RentalVehicalManger::carManagement()
{
    int choice;

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
    case add:
        addCar();
        break;

    case Display:
        carDisplayMenu();
        break;

    case update:

        updateCarDetails();
        break;

    case rent:

        rentCar();
        break;

    case Return:

        returnCar();
        break;

    case Delete:
        deleteCar();
        break;

    case Search:
        SearchCar();
        break;

    default:
        std::cout<<"invalid choice"<<std::endl;
        break;
    }
}
enum{
    bike = 1,
    car ,
    booking_details,
    Exit
};
void RentalVehicalManger::menu()
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
        case bike:

            this->bikeManagement();
            break;

        case car:

            this->carManagement();
            break;

        case booking_details:

            this->displayBookingData();
            break;


        case Exit:

            exit(0);
            break;

        default:
            std::cout<<"invalid choice"<<std::endl;
            break;
        }
    }
}


