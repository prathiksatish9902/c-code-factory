#include <iostream>
#include"calender.h"
#include"auditoriummanagement.h"
using namespace std;

int main()
{
    Calender date1(15,4,2025);
    date1.DisplayCalender();

    AuditoriumManagement audmgmt;
    while(1)
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
        case 1:
            audmgmt.AddAuditorium();
            break;

        case 2:
            audmgmt.DisplayAuditorium();
            break;

        case 3:
            audmgmt.BookAuditorium();
            break;

        case 4:
            exit(0);
            break;

        default:
            std::cout<<"invalid choice"<<std::endl;
            break;

        }

    }

    return 0;
}
