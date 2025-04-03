#include "wifimanager.h"

WifiManager::WifiManager() {
    std::cout<<"wifi constructor called"<<std::endl;
    m_readDataFromFile = new ReadDataFromFile;
    m_wifilist = m_readDataFromFile->readData("wifiData.csv");
    sort();
}

WifiManager::~WifiManager()
{
    std::cout<<"wifi destructor called"<<std::endl;
    delete m_readDataFromFile;

}

void WifiManager::display()
{
    for(auto i = m_wifilist.begin(); i!=m_wifilist.end(); i++){
        // std::cout<<"-----------------------------------------------------------------------------------------------"<<std::endl;
        cout.width(10);
        std::cout<<"NAME :";
        cout.width(20);

        std::cout<<"SIGNAL STRENGTH :";
        cout.width(30);

        std::cout<<"STATUS :";
        cout.width(40);

        std::cout<<"PASSWORD :\n";

        cout.width(10);
        std::cout<<i->GetWifiName();
        cout.width(20);
        std::cout<<i->GetSignalStrength();
        cout.width(30);
        std::cout<<i->GetWifiStatus();
        cout.width(40);
        std::cout<<i->GetWifiPassword()<<"\n";
        // std::cout<<"-----------------------------------------------------------------------------------------------"<<std::endl;

    }
}

void WifiManager::ConnectWifi()
{
    std::cout<<"connect wifi function is called"<<std::endl;
    std::string name;
    std::string password;
    std::cout<<"enter the name of wifi to connect"<<std::endl;
    std::cin>>name;
    for(auto &i : m_wifilist)
    {
        // std::cout<<i.GetWifiStatus()<<"................................................\n";

        if(i.GetWifiStatus()=="connected" && i.GetWifiName() == name)
        {
            std::cout<<"this wifi is already connected................................"<<std::endl;
            return;
        }
        if(i.GetWifiStatus()=="connected"&&i.GetWifiName()!=name)
        {
            // std::cout<<"status changed to before saved*******************************"<<i.GetWifiStatus()<<std::endl;

            i.setWifiStatus("saved");
            // std::cout<<"status changed to after saved..##############################33."<<i.GetWifiStatus()<<std::endl;

        }

         if(i.GetWifiName()==name){
            if(i.GetWifiStatus()=="connected"){
                i.setWifiStatus("saved");
            }


            if(i.GetWifiStatus()=="saved"){
                i.setWifiStatus("connected");
                for(auto &j : m_wifilist)
                {
                    if(j.GetWifiStatus()=="connected"&&j.GetWifiName()!=name)
                    {
                        // std::cout<<"status changed to before saved*******************************"<<j.GetWifiStatus()<<std::endl;

                        j.setWifiStatus("saved");
                        // std::cout<<"status changed to after saved..##############################33."<<j.GetWifiStatus()<<std::endl;

                    }

                }
                //sort();
                // return;
            }
            else if(i.GetWifiStatus()=="available")
            {
                std::cout<<"enter the password: "<<std::endl;
                cin>>password;
                if(i.GetWifiPassword() == password)
                {
                    i.setWifiStatus("connected");
                    for(auto &j : m_wifilist)
                    {
                        if(j.GetWifiStatus()=="connected"&&j.GetWifiName()!=name)
                        {
                            // std::cout<<"status changed to before saved*******************************"<<j.GetWifiStatus()<<std::endl;

                            j.setWifiStatus("saved");
                            // std::cout<<"status changed to after saved..##############################33."<<j.GetWifiStatus()<<std::endl;

                        }

                    }
                    //sort();

                }
                else{
                    std::cout<<"enter correct password"<<std::endl;
                }
            }
        }
         sort();

    }
}


std::list<Wifi> WifiManager::sort()
{
    std::cout<<"sort function called"<<std::endl;
    for(auto i = m_wifilist.begin(); i!= m_wifilist.end(); i++)
    {
        for(auto j = next(i); j!=m_wifilist.end();j++)
        {
            if(i->GetWifiStatus()!="connected" && j->GetWifiStatus() == "connected")
            {
                std::iter_swap(i,j);
            }
            if(i->GetWifiStatus()=="available" && j->GetWifiStatus() == "saved")
            {
                std:: iter_swap(i,j);

            }
            if(i->GetWifiStatus() == j->GetWifiStatus() && i->GetSignalStrength() < j->GetSignalStrength())
            {
                std::iter_swap(i,j);

            }
        }
    }
    return m_wifilist;
}

void WifiManager::setWifiList(std::list<Wifi> wifiList)
{
    // std::cout<<"set wifi list function called"<<std::endl;
    m_wifilist = wifiList;
}

std::list<Wifi> WifiManager::getWifiList()
{
    // std::cout<<"get wifi list function called"<<std::endl;

    return m_wifilist;
}
