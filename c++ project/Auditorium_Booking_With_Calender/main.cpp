#include <iostream>
#include"auditoriummanagement.h"
#include"bookingdate.h"

#define True 1
#define Success 0
using namespace std;
enum{
    ADDAUDITORIUM = 1,
    DISPLAYAUDITORIUM,
    BOOKAUDITORIUM,
    EXIT
};
int main()
{

    AuditoriumManagement *audmgmt = new AuditoriumManagement;
    audmgmt->DisplayCalendarInterface();

    while(True)
    {
        int choice;
        std::cout<<"\n1.add auditorium"<<std::endl;
        std::cout<<"2.display auditorium"<<std::endl;
        std::cout<<"3.book auditorium"<<std::endl;
        std::cout<<"4.exit"<<std::endl;
        std::cout<<"enter your choice:"<<std::endl;
        std::cin>>choice;
        switch(choice)
        {
        case ADDAUDITORIUM:
            audmgmt->AddAuditorium();
            break;

        case DISPLAYAUDITORIUM:
            audmgmt->DisplayAuditorium();
            break;

        case BOOKAUDITORIUM:
            audmgmt->BookAuditorium();
            audmgmt->DisplayCalendarInterface();

            break;

        case EXIT:
            delete audmgmt;
            exit(Success);
            break;

        default:
            std::cout<<"invalid choice"<<std::endl;
            break;

        }
    }
    return Success;
}
