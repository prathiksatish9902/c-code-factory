#include "adminmanager.h"
#include"fileoperation.h"
#include"rentalvehicalmanger.h"

AdminManager::AdminManager() {
    fileobject = new FileOperation;
    fileobject->ReadAdminData("adminfile.csv");

}

AdminManager::~AdminManager()
{
    delete fileobject;
}

void AdminManager::addAdmin()
{
    std::string adminUsername , adminPassword;

    std::cout<<"enter admin username"<<std::endl;
    std::cin>>adminUsername;

    std::cout<<"enter admin password"<<std::endl;
    std::cin>>adminPassword;

    m_adminList.push_back(new Admin(adminUsername , adminPassword));
    fileobject->WriteAdminData(m_adminList);


}

void AdminManager::AdminLogin()
{
    std::string adminUsername , adminPassword;

    std::cout<<"enter admin username"<<std::endl;
    std::cin>>adminUsername;

    std::cout<<"enter admin password"<<std::endl;
    std::cin>>adminPassword;
    manager = new RentalVehicalManger;
    for( auto *admin: m_adminList)
    {
        if(admin->GetAdminUserName() == adminUsername && admin->GetAdminPassword() == adminPassword){
            std::cout<<"login success"<<std::endl;
            manager->menu();

        }
    }
}



