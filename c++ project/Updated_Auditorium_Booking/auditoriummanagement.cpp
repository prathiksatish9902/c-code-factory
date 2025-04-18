#include "auditoriummanagement.h"
#include <algorithm>

AuditoriumManagement::AuditoriumManagement() {
    std::cout<<"auditorium management constructor called"<<std::endl;
}

AuditoriumManagement::~AuditoriumManagement()
{
    std::cout<<"auditorium management destructor called"<<std::endl;
}

void AuditoriumManagement::AddAuditorium()
{
    std::cout<<"add auditorium function called"<<std::endl;
    m_auditoriumMap["AUD001"] = Auditorium("AUD001", "auditorium1", 300, "available");
    m_auditoriumMap["AUD002"] = Auditorium("AUD002", "auditorium2", 300, "available");
    m_auditoriumMap["AUD003"] = Auditorium("AUD003", "auditorium3", 300, "available");
    m_auditoriumMap["AUD004"] = Auditorium("AUD004", "auditorium4", 300, "available");
    m_auditoriumMap["AUD005"] = Auditorium("AUD005", "auditorium5", 300, "available");
    m_auditoriumMap["AUD006"] = Auditorium("AUD006", "auditorium6", 300, "available");
    m_auditoriumMap["AUD007"] = Auditorium("AUD007", "auditorium7", 300, "available");
    m_auditoriumMap["AUD008"] = Auditorium("AUD008", "auditorium8", 300, "available");
    m_auditoriumMap["AUD009"] = Auditorium("AUD009", "auditorium9", 300, "available");
    m_auditoriumMap["AUD010"] = Auditorium("AUD010", "auditorium10", 300, "available");

}

void AuditoriumManagement::DisplayAuditorium()
{
    std::cout << "Auditorium ID" << std::setw(20) << "Auditorium Name" << std::setw(20) << "Seat capacity" << std::setw(15) << "Status" << std::endl;
    std::cout << "---------------------------------------------------------------------------------" << std::endl;

    for( auto& pair : m_auditoriumMap)
    {
         Auditorium& auditorium = pair.second;
        if(auditorium.GetStatus() == "available")
        {
            std::cout << pair.first << std::setw(20) << auditorium.GetName() << std::setw(20)
            << auditorium.GetSeatCapacity() << std::setw(20) << auditorium.GetStatus() << std::endl;
        }
    }
}

bool AuditoriumManagement::IsAuditoriumBooked(const std::string& auditoriumId, const Calender& date)
{
    auto auditorium = m_bookingMap.find(date);
    if (auditorium != m_bookingMap.end()) {
        const std::list<std::string>& bookedAuditoriums = auditorium->second;
        return std::find(bookedAuditoriums.begin(), bookedAuditoriums.end(), auditoriumId) != bookedAuditoriums.end();
    }
    return false;
}

void AuditoriumManagement::DisplayAvailableAuditoriums(Calender &date)
{
    std::cout << "Auditoriums available on " << date.ToString() << ":" << std::endl;
    std::cout << "Auditorium ID" << std::setw(15) << "Auditorium Name" << std::setw(20)
              << "Capacity" << std::setw(15) << "Status" << std::endl;
    std::cout << "---------------------------------------------------------------------------------" << std::endl;

    for( auto& pair : m_auditoriumMap)
    {
         const std::string& auditoriumId = pair.first;
         Auditorium& auditorium = pair.second;

        if(!IsAuditoriumBooked(auditoriumId, date) && auditorium.GetStatus() == "available")
        {
            std::cout << auditoriumId << std::setw(15) << auditorium.GetName() << std::setw(20)
            << auditorium.GetSeatCapacity() << std::setw(15) << auditorium.GetStatus() << std::endl;
        }
    }
}

void AuditoriumManagement::BookAuditorium()
{
    std::string auditoriumId;
    int day, month, year;

    std::cout << "Enter booking date (DD MM YYYY): ";
    std::cin >> day >> month >> year;

    Calender bookingDate(day, month, year);

    DisplayAvailableAuditoriums(bookingDate);

    std::cout << "Enter the auditorium ID you want to book: ";
    std::cin >> auditoriumId;

    auto audIt = m_auditoriumMap.find(auditoriumId);
    if(audIt == m_auditoriumMap.end()) {
        std::cout << "Auditorium with ID " << auditoriumId << " not found" << std::endl;
        return;
    }

    if(IsAuditoriumBooked(auditoriumId, bookingDate)) {
        std::cout << audIt->second.GetName() << " is already booked on " << bookingDate.ToString() << std::endl;
        return;
    }

    m_bookingMap[bookingDate].push_back(auditoriumId);

    std::cout << audIt->second.GetName() << " (ID: " << auditoriumId << ") booked on " << bookingDate.ToString() << std::endl;

    std::cout << "\nAll auditoriums booked on " << bookingDate.ToString() << ":" << std::endl;
    for(const auto& id : m_bookingMap[bookingDate]) {
        std::cout << "- " << m_auditoriumMap[id].GetName() << " (ID: " << id << ")" << std::endl;
    }
}
