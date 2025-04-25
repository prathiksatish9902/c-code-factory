#include "auditoriummanagement.h"
#include <algorithm>

AuditoriumManagement::AuditoriumManagement() {
    // std::cout<<"auditorium management constructor called"<<std::endl;
}

AuditoriumManagement::~AuditoriumManagement()
{
    // std::cout<<"auditorium management destructor called"<<std::endl;
    for( auto &pair : m_auditoriumMap)
    {
        delete pair.second;
    }
    m_auditoriumMap.clear();
}

void AuditoriumManagement::AddAuditorium()
{
    // std::cout<<"add auditorium function called"<<std::endl;
    m_auditoriumMap["AUD001"] = new Auditorium("AUD001", "auditorium1", 300, "available");
    m_auditoriumMap["AUD002"] = new Auditorium("AUD002", "auditorium2", 300, "available");
    m_auditoriumMap["AUD003"] = new Auditorium("AUD003", "auditorium3", 300, "available");
    m_auditoriumMap["AUD004"] = new Auditorium("AUD004", "auditorium4", 300, "available");
    m_auditoriumMap["AUD005"] = new Auditorium("AUD005", "auditorium5", 300, "available");
    m_auditoriumMap["AUD006"] = new Auditorium("AUD006", "auditorium6", 300, "available");
    m_auditoriumMap["AUD007"] = new Auditorium("AUD007", "auditorium7", 300, "available");
    m_auditoriumMap["AUD008"] = new Auditorium("AUD008", "auditorium8", 300, "available");
    m_auditoriumMap["AUD009"] = new Auditorium("AUD009", "auditorium9", 300, "available");
    m_auditoriumMap["AUD010"] = new Auditorium("AUD010", "auditorium10", 300, "available");

}

void AuditoriumManagement::DisplayAuditorium()
{
    std::cout << "Auditorium ID" << std::setw(20) << "Auditorium Name" << std::setw(20) << "Seat capacity" << std::setw(15) << "Status" << std::endl;
    std::cout << "---------------------------------------------------------------------------------" << std::endl;

    for( auto& pair : m_auditoriumMap)
    {
        Auditorium *auditorium = pair.second;
        if(auditorium->GetStatus() == "available")
        {
            std::cout << pair.first << std::setw(20) << auditorium->GetName() << std::setw(20)
            << auditorium->GetSeatCapacity() << std::setw(20) << auditorium->GetStatus() << std::endl;
        }
    }
}

bool AuditoriumManagement::IsAuditoriumBooked(const std::string& auditoriumId, const BookingDate& bookingdate)
{
    auto auditorium = m_bookingMap.find(bookingdate);
    if (auditorium != m_bookingMap.end()) {
        const std::list<std::string>& bookedAuditoriums = auditorium->second;
        return std::find(bookedAuditoriums.begin(), bookedAuditoriums.end(), auditoriumId) != bookedAuditoriums.end();
    }
    return false;
}

bool AuditoriumManagement::IsValidBookingDate(BookingDate &bookingDate)
{
    time_t now = time(0);
    struct tm* current = localtime(&now);

    int currentDay = current->tm_mday;
    int currentMonth = current->tm_mon + 1;  // tm_mon is 0-indexed
    int currentYear = current->tm_year + 1900;  // Years since 1900

    int bookingDay = bookingDate.GetDay();
    int bookingMonth = bookingDate.GetMonth();
    int bookingYear = bookingDate.GetYear();

    if ((bookingMonth < 1) || (bookingMonth > 12))
    {
        std::cout << "Invalid month. Month must be between 1 and 12." << std::endl;
        return false;
    }

    if (!IsValidDateForMonth(bookingDay, bookingMonth, bookingYear)) {
        std::cout << "Invalid day for month " << bookingMonth << ". ";

        int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (bookingMonth == 2) {
            if ((bookingYear % 4 == 0 && bookingYear % 100 != 0) || (bookingYear % 400 == 0)) {
                daysInMonth[2] = 29;
            }
        }

        std::cout << "The day should be between 1 and " << daysInMonth[bookingMonth] << "." << std::endl;
        return false;
    }

    BookingDate today(currentDay, currentMonth, currentYear);

    if (bookingDate < today) {
        std::cout << "Cannot book for past dates." << std::endl;
        return false;
    } else if (bookingDate == today) {
        std::cout << "Cannot book for today. Please book for future dates." << std::endl;
        return false;
    }

    return true;
}

bool AuditoriumManagement::IsValidDateForMonth (int day, int month, int year)
{
    int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            daysInMonth[2] = 29;
        }
    }

    return (day >= 1 && day <= daysInMonth[month]);
}

void AuditoriumManagement::DisplayAvailableAuditoriums (BookingDate &bookingdate)
{
    std::cout << "Auditoriums available on " << bookingdate.ToString() << ":" << std::endl;
    std::cout << "Auditorium ID" << std::setw(15) << "Auditorium Name" << std::setw(20)
              << "Capacity" << std::setw(15) << "Status" << std::endl;
    std::cout << "---------------------------------------------------------------------------------" << std::endl;

    for( auto& pair : m_auditoriumMap)
    {
        const std::string& auditoriumId = pair.first;
        Auditorium *auditorium = pair.second;

        if(!IsAuditoriumBooked(auditoriumId, bookingdate) && auditorium->GetStatus() == "available")
        {
            std::cout << auditoriumId << std::setw(15) << auditorium->GetName() << std::setw(20)
            << auditorium->GetSeatCapacity() << std::setw(15) << auditorium->GetStatus() << std::endl;
        }
    }
}

void AuditoriumManagement::BookAuditorium()
{
    std::string auditoriumId;
    int day, month, year;
    time_t now = time(0);
    struct tm* current = localtime(&now);
    int currentDay = current->tm_mday;
    int currentMonth = current->tm_mon + 1;
    int currentYear = current->tm_year + 1900;

    std::cout << "Today's date is: " << currentDay << "/" << currentMonth << "/" << currentYear << std::endl;
    std::cout << "You can only book from tomorrow onwards." << std::endl;

    bool validDate = false;
    BookingDate bookingdate(0, 0, 0);

    while (!validDate) {
        std::cout << "Enter booking date (DD MM YYYY): ";
        if (!(std::cin >> day >> month >> year)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter numbers in format DD MM YYYY." << std::endl;
            continue;
        }
        // std::cin >> day >> month >> year;

        bookingdate = BookingDate(day, month, year);

        if (!IsValidBookingDate(bookingdate)) {
            std::cout << "Cannot book for today or past dates. Please enter a future date." << std::endl;
        } else {
            validDate = true;
        }
    }

    // Display calendar for the selected date
    // bookingdate.DisplayCalendar();

    // int userinput = 1;
    // int newMonth = month;
    // int newYear = year;
    // CalenderManager manager;

    // while(userinput)
    // {
    //     std::cout << "Do you want to see upcoming month calender?" << std::endl;
    //     std::cout << "1. next month" << std::endl;
    //     std::cout << "2. previous month" << std::endl;
    //     std::cout << "3. exit" << std::endl;
    //     std::cin >> userinput;

    //     switch(userinput)
    //     {
    //     case NEXTMONTH:

    //         manager.NavigateCalendar(newMonth, newYear, true);
    //         break;

    //     case PREVIOUSMONTH:
    //         manager.NavigateCalendar(newMonth, newYear, false);
    //         break;

    //     case EXIT:
    //         userinput = 0;

    //     default:
    //         std::cout<<"invalid input"<<std::endl;
    //         break;
    //     }
    // }

    DisplayAvailableAuditoriums(bookingdate);
    std::cout << "Enter the auditorium ID you want to book: ";
    std::cin >> auditoriumId;

    auto audIt = m_auditoriumMap.find(auditoriumId);
    if(audIt == m_auditoriumMap.end()) {
        std::cout << "Auditorium with ID " << auditoriumId << " not found" << std::endl;
        return;
    }

    if(IsAuditoriumBooked(auditoriumId, bookingdate)) {
        std::cout << audIt->second->GetName() << " is already booked on " << bookingdate.ToString() << std::endl;
        return;
    }

    m_bookingMap[bookingdate].push_back(auditoriumId);

    std::cout << audIt->second->GetName() << " (ID: " << auditoriumId << ") booked on " << bookingdate.ToString() << std::endl;

    std::cout << "\nAll auditoriums booked on " << bookingdate.ToString() << ":" << std::endl;
    for(const auto& id : m_bookingMap[bookingdate]) {
        std::cout << "- " << m_auditoriumMap[id]->GetName() << " (ID: " << id << ")" << std::endl;
    }

}
enum{
    NEXTMONTH = 1,
    PREVIOUSMONTH,
    EXIT
};
void AuditoriumManagement::DisplayCalendarInterface()
{
    time_t now = time(0);
    struct tm* current = localtime(&now);
    int currentDay = current->tm_mday;
    int currentMonth = current->tm_mon + 1;
    int currentYear = current->tm_year + 1900;

    std::cout << "Today's date is: " << currentDay << "/" << currentMonth << "/" << currentYear << std::endl;

    CalenderManager manager;
    manager.PrintMonthCalendar(currentMonth, currentYear, &m_bookingMap);

    int userinput = 1;
    int newMonth = currentMonth;
    int newYear = currentYear;

    while(userinput)
    {
        std::cout << "\nCalendar Navigation:" << std::endl;
        std::cout << "1. Next month" << std::endl;
        std::cout << "2. Previous month" << std::endl;
        std::cout << "3. Return to main menu" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> userinput;

        switch(userinput)
        {
        case NEXTMONTH:
            manager.NavigateCalendar(newMonth, newYear, true, &m_bookingMap);
            break;

        case PREVIOUSMONTH :
            manager.NavigateCalendar(newMonth, newYear, false, &m_bookingMap);
            break;

        case EXIT :
            userinput = 0;
            break;

        default:
            std::cout << "Invalid input" << std::endl;
            break;
        }
    }
}

