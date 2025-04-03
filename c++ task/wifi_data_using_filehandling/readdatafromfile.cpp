#include "readdatafromfile.h"

ReadDataFromFile::ReadDataFromFile() {
    std::cout<<"Read Data From File constructor called"<<std::endl;
}

ReadDataFromFile::~ReadDataFromFile()
{
    std::cout<<"Read Data From File destructor called"<<std::endl;

}

std::list<Wifi> ReadDataFromFile::readData(const std::string &fileName)
{
    std::cout<<"read data function called"<<std::endl;

    std::ifstream read(fileName , ios::in);
    std::string line;

    std::string wifiName;
    int signalStrength;
    std::string wifiStatus;
    std::string wifiPassword;

    std::list<Wifi> wifilist;

    if(read.is_open()){
        while (getline(read,line)) {
            std::istringstream data(line);

            if(getline(data , wifiName , ',') && (data >> signalStrength) && (data.get() == ',') && getline(data,wifiStatus,',') && getline(data , wifiPassword , ',')){
                std::cout<<"name :"<<wifiName<<" "<<"signal strength :"<<signalStrength<<" "<<"status :"<<wifiStatus<<" "<<"password :"<<wifiPassword<<std::endl;
                wifilist.push_back(Wifi( wifiName ,  signalStrength ,  wifiStatus , wifiPassword));
            }

        }

        std::cout<<"data read successfully"<<std::endl;
        read.close();
    }
    else{
        std::cout<<"file is not opened"<<std::endl;
    }
    return wifilist;
}



