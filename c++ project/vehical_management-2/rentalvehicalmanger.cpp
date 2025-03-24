#include "rentalvehicalmanger.h"

RentalVehicalManger::RentalVehicalManger() {
    std::cout<<"rental manager constructor called"<<std::endl;
    fileobject = new FileOperation;
    m_bikelist = fileobject->ReadBikeData("bikefile.csv");
    m_carlist = fileobject->ReadCarData("carfile.csv");
    m_bookinglist = fileobject->ReadBookingData("bookingfile.csv");


}

RentalVehicalManger::~RentalVehicalManger()
{
    std::cout<<"rental manager destructor called"<<std::endl;

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

}

void RentalVehicalManger::deleteBike()
{
    std::string vehicalNumber;
    std::cout<<"enter the vehical number you want to delete :"<<std::endl;
    std::cin>>vehicalNumber;
    for(auto i = m_bikelist.begin(); i!=m_bikelist.end(); i++)
    {
        if((*i)->GetVehicalNumber() == vehicalNumber)
        {
            m_bikelist.erase(i);
            std::cout<<"bike with vehical number"<<vehicalNumber<<"deleted"<<std::endl;

            return;

        }
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
            std::cout<<"bike with vehical number"<<vehicalNumber<<"deleted"<<std::endl;

            return;

        }
    }
    std::cout<<"bike with vehical number"<<vehicalNumber<<"not found"<<std::endl;

}

void RentalVehicalManger::displayBike()
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
            case 1:
                std::cout<<"enter new rent status :"<<std::endl;
                std::cin>>newrentstatus;
                (*i)->SetVehicalStatus(newrentstatus);
                break;

            case 2:
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
            case 1:
                std::cout<<"enter new rent status :"<<std::endl;
                std::cin>>newrentstatus;
                (*i)->SetVehicalStatus(newrentstatus);
                break;

            case 2:
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
        if((*i)->GetVehicalName() == vehicalName)
        {
            std::cout<<"vehicle with name "<<vehicalName<<"found"<<std::endl;
            std::cout<<"vehical Number: "<<(*i)->GetVehicalNumber()<<"vehical model name:"<<(*i)->GetVehicalModelName()<<"status: "<<(*i)->GetVehicalStatus()<<"cost: "<<(*i)->GetVehicalCost()<<std::endl;
            return;
        }
        std::cout<<"vehicle with name "<<vehicalName<<"not found"<<std::endl;

    }
}

void RentalVehicalManger::sortByBikeName()
{
    for(auto i = m_bikelist.begin(); i!= m_bikelist.end();i++)
    {
        for(auto j = next(i);j!= m_bikelist.end();j++)
        {
            if((*i)->GetVehicalName() < (*j)->GetVehicalName())
            {
                std::iter_swap(i , j);
            }
        }

    }
}

void RentalVehicalManger::sortByCarName()
{
    for(auto i = m_carlist.begin(); i!= m_carlist.end();i++)
    {
        for(auto j = next(i);j!= m_carlist.end();j++)
        {
            if((*i)->GetVehicalName() < (*j)->GetVehicalName())
            {
                std::iter_swap(i , j);
            }
        }

    }
}

void RentalVehicalManger::sortByBikeStatus()
{
    for(auto i = m_bikelist.begin(); i!= m_bikelist.end();i++)
    {
        for(auto j = next(i);j!= m_bikelist.end();j++)
        {
            if((*i)->GetVehicalStatus()!= "available" && (*j)->GetVehicalStatus()== "available")
            {
                std::iter_swap(i , j);
            }

            if((*i)->GetVehicalStatus()== "available" && (*j)->GetVehicalStatus()== "booked")
            {
                std::iter_swap(i , j);
            }

            if((*i)->GetVehicalStatus() ==(*j)->GetVehicalStatus() && (*i)->GetVehicalCost() < (*j)-> GetVehicalCost())
            {
                std::iter_swap(i , j);
            }
        }
    }
}

void RentalVehicalManger::sortByCarStatus()
{
    for(auto i = m_carlist.begin(); i!= m_carlist.end();i++)
    {
        for(auto j = next(i);j!= m_carlist.end();j++)
        {
            if((*i)->GetVehicalStatus()!= "available" && (*j)->GetVehicalStatus()== "available")
            {
                std::iter_swap(i , j);
            }

            if((*i)->GetVehicalStatus()== "available" && (*j)->GetVehicalStatus()== "booked")
            {
                std::iter_swap(i , j);
            }

            if((*i)->GetVehicalStatus() ==(*j)->GetVehicalStatus() && (*i)->GetVehicalCost() < (*j)-> GetVehicalCost())
            {
                std::iter_swap(i , j);
            }
        }
    }
}

void RentalVehicalManger::sortByBikePrice()
{
    for(auto i = m_bikelist.begin(); i!= m_bikelist.end();i++)
    {
        for(auto j = next(i);j!= m_bikelist.end();j++)
        {
            if((*i)->GetVehicalCost() < (*j)->GetVehicalCost())
            {
                std::iter_swap(i , j);
            }
        }

    }
}

void RentalVehicalManger::sortByCarPrice()
{
    for(auto i = m_carlist.begin(); i!= m_carlist.end();i++)
    {
        for(auto j = next(i);j!= m_carlist.end();j++)
        {
            if((*i)->GetVehicalCost() < (*j)->GetVehicalCost())
            {
                std::iter_swap(i , j);
            }
        }

    }
}

void RentalVehicalManger::rentBike()
{
    std::string vehicalName;
    std::cout<<"enter the bike name you want to rent :"<<std::endl;
    std::cin>>vehicalName;

    for(auto i = m_bikelist.begin();i!=m_bikelist.end();i++)
    {
        if((*i)->GetVehicalName() == vehicalName && (*i)->GetVehicalStatus() == "available")
        {
            addBookingData("bike" , (*i)->GetVehicalNumber() , (*i)->GetVehicalName() , (*i)->GetVehicalCost() , report->GetAmountStatus() , report->GetPaymentMode());

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
            case 1:
                payment = new CashPayment;
                report->SetPaymentMode("cash");
                payment->SetUniqueId("Null");
                payment->SetUniqueRefrence("Null");
                break;

            case 2:
                std::string upiId , upiRefNumber;
                payment = new OnlinePayment;
                report->SetPaymentMode("upi");

                std::cout<<"enter upi id:"<<std::endl;
                std::cin>>upiId;
                payment->SetUniqueId(upiId);

                std::cout<<"enter upi ref number: "<<std::endl;
                std::cin>>upiRefNumber;
                payment->SetUniqueRefrence(upiRefNumber);
                break;


            }
        }
    }
}


