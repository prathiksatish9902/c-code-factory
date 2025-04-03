#include "readcsv.h"

Readcsv::Readcsv() {
    std::cout<<"read csv constructor called"<<std::endl;
}

Readcsv::~Readcsv()
{
    std::cout<<"read csv destructor called"<<std::endl;

}

void Readcsv::readData(const string &filename)
{
    std::cout<<"csv read data function called: "<< filename << std::endl;

    std::ifstream read(filename,ios::in);
    std::string line;
    std::string name;
    int age;
    std::string usn;
    std::string phone;

    if(read.is_open()){
        while(getline(read,line)){

            std::istringstream data(line);

            if(getline(data , name,',') &&  (data >> age) && (data.get() == ',') && getline(data , usn,',')  && getline(data , phone,',')){

                std::cout<<"name :"<<name<<" "<<"age :"<<age<<" "<<"usn :"<<usn<< " " << "phone :"<<phone<<std::endl;
            }
        }
        std::cout<<"data read successfully"<<std::endl;
        read.close();
    }
    else{
        std::cout<<"file is not opened"<<std::endl;
    }
}
