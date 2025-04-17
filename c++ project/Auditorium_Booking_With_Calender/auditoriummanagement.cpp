#include "auditoriummanagement.h"

AuditoriumManagement::AuditoriumManagement() {
    // std::cout<<"auditorium management constructor called"<<std::endl;
}

AuditoriumManagement::~AuditoriumManagement()
{
    // std::cout<<"auditorium management destructor called"<<std::endl;

}

void AuditoriumManagement::AddAuditorium()
{
    // std::cout<<"add auditorium function called"<<std::endl;
    m_auditoriums.push_back(Auditorium("auditorium1" , 300 , "available"));
    m_auditoriums.push_back(Auditorium("auditorium2" , 300 , "available"));
    m_auditoriums.push_back(Auditorium("auditorium3" , 300 , "available"));
    m_auditoriums.push_back(Auditorium("auditorium4" , 300 , "available"));
    m_auditoriums.push_back(Auditorium("auditorium5" , 300 , "available"));
    m_auditoriums.push_back(Auditorium("auditorium6" , 300 , "available"));
    m_auditoriums.push_back(Auditorium("auditorium7" , 300 , "available"));
    m_auditoriums.push_back(Auditorium("auditorium8" , 300 , "available"));
    m_auditoriums.push_back(Auditorium("auditorium9" , 300 , "available"));
    m_auditoriums.push_back(Auditorium("auditorium10" , 300 , "available"));

}



void AuditoriumManagement::DisplayAuditorium()
{
    std::cout<<"Auditorium Name "<<std::setw(20)<<"seat capacity "<<std::setw(15)<<"status "<<std::endl;
    std::cout<<"---------------------------------------------------------------------------------"<<std::endl;
    for(auto i = m_auditoriums.begin(); i!= m_auditoriums.end();i++)
    {
        if(i->GetStatus() == "available")
        {
            std::cout<<i->GetName()<<std::setw(20)<<i->GetSeatCapacity()<<std::setw(20)<<i->GetStatus()<<std::endl;
        }
    }
}

void AuditoriumManagement::DisplayAvailableAuditoriums(Calender &date)
{
    std::cout << "Auditoriums available on " << date.ToString() << ":" << std::endl;

    for(auto& auditorium : m_auditoriums)
    {
        if(auditorium.IsAvailableOnDate(date))
        {
            std::cout << auditorium.GetName() << " - Capacity: " << auditorium.GetSeatCapacity() <<" - Status: " << auditorium.GetStatus()<< std::endl;
        }
    }
}

void AuditoriumManagement::BookAuditorium()
{
    std::string auditoriumName;
    int day, month, year;
    std::cout << "Enter booking date (DD MM YYYY): ";
    std::cin >> day >> month >> year;

    Calender bookingDate(day, month, year);

    DisplayAvailableAuditoriums(bookingDate);

    std::cout << "Enter the auditorium name you want to book: ";
    std::cin >> auditoriumName;

    for(auto& auditorium : m_auditoriums)
    {
        if(auditorium.GetName() == auditoriumName)
        {
            if(auditorium.IsAvailableOnDate(bookingDate))
            {
                auditorium.AddBookedDate(bookingDate);
                std::cout << auditorium.GetName() << " booked on " << bookingDate.ToString() << std::endl;

                std::cout << "All bookings for " << auditoriumName << ":" << std::endl;
                for(auto& date : auditorium.GetBookedDates())
                {
                    std::cout << "- " << date.ToString() << std::endl;
                }
                return;
            }
            else
            {
                std::cout <<auditoriumName << " is already booked on " << bookingDate.ToString() << std::endl;
                return;
            }
        }
    }

    std::cout << "Auditorium not found" << std::endl;
}
