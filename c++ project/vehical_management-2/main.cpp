#include<iostream>
#include"adminmanager.h"
#include"usermanager.h"
using namespace std;
std::string bikefile = "bikefile.csv";
std::string carfile = "carfile.csv";
std::string bookingreportfile = "bookingfile.csv";
std::string adminfile = "adminfile.csv";
std::string userfile = "userfile.csv";

int main()
{
    while(1)
    {
        std::cout<<"1.admin"<<std::endl;
        std::cout<<"2.user"<<std::endl;
        std::cout<<"3.exit"<<std::endl;

        int choice;
        std::cout<<"enter your choice"<<std::endl;
        std::cin>>choice;
        switch(choice)
        {
        case 1:
            int option1;
            AdminManager *admin;
            admin = new AdminManager;
            std::cout<<"1.admin login"<<std::endl;
            std::cout<<"2.add admin "<<std::endl;
            std::cout<<"3.exit"<<std::endl;


            std::cout<<"enter your choice"<<std::endl;
            std::cin>>option1;
            switch(option1)
            {
            case 1:
            {
                admin->AdminLogin();
                RentalVehicalManger manager;
                manager.menu();
                break;
            }
            case 2:
            {
                admin->addAdmin();
                break;
            }

            case 3:
                delete admin;
                exit(0);
                break;



            default:
            {
                std::cout<<"invalid option"<<std::endl;
                break;
            }
            }
            break;

        case 2:
            int option2;
            UserManager *user;
            user = new UserManager;
            std::cout<<"1.user login"<<std::endl;
            std::cout<<"2.add user "<<std::endl;
            std::cout<<"3.exit"<<std::endl;


            std::cout<<"enter your choice"<<std::endl;
            std::cin>>option2;
            switch(option2)
            {
            case 1:

                user->userLogin();

                break;

            case 2:
                user->addUser();
                break;

            case 3:
                delete user;
                exit(0);
                break;




            default:
                std::cout<<"invalid option"<<std::endl;
                break;
            }
            break;
        case 3:
        {
            exit(0);
            break;
        }
        default:
            std::cout<<"invalid choice"<<std::endl;
            break;


        }
    }
    return 0;
}
