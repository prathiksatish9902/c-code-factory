#include <iostream>
#include<map>
using namespace std;

int main()
{
    std::map<std::string , std::string> India;
    India.emplace("Karnataka","Bengaluru");
    India.emplace("tamilnadu","chennai");
    India.emplace("andrapradesh","amaravati");
    India.emplace("telangana","hyderabad");
    for(auto i = India.begin(); i!=India.end();i++){
        cout<<"state :"<<i->first<<"      "<<"capital :"<<i->second<<std::endl;
    }
    return 0;
}
