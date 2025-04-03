#include<iostream>
#include"adminmanager.h"
#include"usermanager.h"
using namespace std;
std::string bikefile = "bikefile.csv";
std::string carfile = "carfile.csv";
std::string bookingreportfile = "bookingfile.csv";
std::string adminfile = "adminfile.csv";
std::string userfile = "userfile.csv";
enum{
    Admin_operation = 1,
    User_operation,
    Exit
};

enum{
    admin_login = 1,
    add_admin,
    exit_admin
};

enum{
    user_login = 1,
    add_user,
    exit_user
};
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
        case Admin_operation:
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
            case admin_login:
            {
                admin->AdminLogin();
                RentalVehicalManger manager;
                manager.menu();
                break;
            }
            case add_admin:
            {
                admin->addAdmin();
                break;
            }

            case exit_admin:
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

        case User_operation:
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
            case user_login:

                user->userLogin();

                break;

            case add_user:
                user->addUser();
                break;

            case exit_user:
                delete user;
                exit(0);
                break;

            default:
                std::cout<<"invalid option"<<std::endl;
                break;
            }
            break;
        case Exit:
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
