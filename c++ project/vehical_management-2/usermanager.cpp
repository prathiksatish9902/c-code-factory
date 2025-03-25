#include "usermanager.h"
UserManager::UserManager() {
    fileobject = new FileOperation;
    fileobject->ReadUserData("userfile.csv");
}

UserManager::~UserManager()
{
    // delete fileobject;
}

void UserManager::addUser()
{
    std::string userName , userPassword;

    std::cout<<"enter  username"<<std::endl;
    std::cin>>userName;

    std::cout<<"enter user password"<<std::endl;
    std::cin>>userPassword;

    m_userList.push_back(new User(userName , userPassword));
    fileobject->WriteUserData(m_userList);



}

void UserManager::userLogin()
{
    std::string Username , userPassword;

    std::cout<<"enter user username"<<std::endl;
    std::cin>>Username;

    std::cout<<"enter user password"<<std::endl;
    std::cin>>userPassword;
    // manager = new RentalVehicalManger;
    for( auto *user : m_userList)
    {
        if((*user).GetUsername() == Username && (*user).GetUserPassword() == userPassword){
            std::cout<<"login success"<<std::endl;
            int choice;
            std::cout<<"1.bike"<<std::endl;
            std::cout<<"2.car"<<std::endl;

            std::cout<<"enter your choice"<<std::endl;
            std::cin>>choice;

            // switch(choice)
            // {
            // case 1:
            //     int option1;
            //     std::cout<<"1.display"<<std::endl;
            //     std::cout<<"2.search"<<std::endl;
            //     std::cout<<"3.book bike"<<std::endl;

            //     std::cout<<"enter option"<<std::endl;
            //     std::cin>>option1;

            //     switch(option1)
            //     {
            //     case 1:
            //         manager->bikeDisplayMenu();
            //         break;

            //     case 2:
            //         manager->SearchBike();
            //         break;

            //     case 3:
            //         manager->rentBike();
            //         break;
            //     default:
            //         std::cout<<"invalid option"<<std::endl;
            //         break;
            //     }
            //     break;

            // case 2:
            //     int option2;
            //     std::cout<<"1.display"<<std::endl;
            //     std::cout<<"2.search"<<std::endl;
            //     std::cout<<"3.book car"<<std::endl;

            //     std::cout<<"enter option"<<std::endl;
            //     std::cin>>option2;

            //     switch(option2)
            //     {
            //     case 1:
            //         manager->carDisplayMenu();
            //         break;

            //     case 2:
            //         manager->SearchCar();
            //         break;

            //     case 3:
            //         manager->rentCar();
            //         break;
            //     default:
            //         std::cout<<"invalid option"<<std::endl;
            //         break;
            //     }
            //     break;
            // default:
            //     std::cout<<"invalid choice"<<std::endl;
            //     break;
            // }

        }
    }
}


