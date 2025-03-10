#include"student.h"


Student::Student(std::string name, int id , int standard){
    std::cout<<"parameters cons called"<<std::endl;
    m_name = name;
    m_id = id;
    m_standard = standard;
}

Student::Student()
{
    std::cout<<"student constructor called"<<std::endl;

}



Student::~Student()
{
    std::cout<<"student destructor called"<<std::endl;
}



void Student::writedata(const std::string &filename)
{
    std::cout<<"write data function called"<<std::endl;
    std::ofstream out(filename,ios::app);
    if(out.is_open())
    {
        out<<m_name<<","<<m_id<<","<<m_standard<<std::endl;
        out.close();
        std::cout<<"data written successfully"<<std::endl;
    }
    else{
        std::cout<<"file is not opened"<<std::endl;
    }

}



void Student::readdata(const std::string &filename)
{
    std::cout<<"read data function called"<<std::endl;
    std::ifstream in(filename , ios::in);
    if(in.is_open()){
        std::string line;
        while(getline(in,line)){
            std::stringstream data(line);
            std::string name;
            int id;
            int standard;
            getline(data,name);
            data>>id;
            //data.ignore();
            data>>standard;
            std::cout<<"data read successfully.........................................................................."<<std::endl;
            std::cout<<"name :"<<m_name<<" " <<"id :"<<m_id<<" "<<"standard :"<<m_standard<<std::endl;
            // break;
        }
        in.close();
    }
    else{
        std::cout<<"file is not opened"<<std::endl;
    }
}


