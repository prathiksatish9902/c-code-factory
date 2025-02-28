#include <iostream>
#include"student.h"
#include"fileoperation.h"
#include"readcsv.h"
#include"readjson.h"
#include"readxml.h"
#include"ui.h"
#include"studentmanager.h"
using namespace std;
enum{
    csv = 1,
    json,
    xml,
    ui
};
int main()
{

    StudentManager sm1;
    sm1.init_student();
    FileOperation *fp;
    int choice;
    while(1){
        std::cout<<"1.csv"<<std::endl;
        std::cout<<"2.json"<<std::endl;
        std::cout<<"3.xml"<<std::endl;
        std::cout<<"4.ui"<<std::endl;
        std::cout<<"enter choice :"<<std::endl;
        std::cin>>choice;
        switch(choice){
        case csv:
            fp = new Readcsv;
            fp->readData();
            break;
        case json:
            fp = new Readjson;
            fp->readData();
            break;
        case xml:
            fp = new Readxml;
            fp->readData();
            break;
        case ui:
            fp = new UI;
            fp->readData();
            break;
        default:
            std::cout<<"invalid choice"<<std::endl;
            exit(0);
        }
        delete fp;
    return 0;
    }
}
