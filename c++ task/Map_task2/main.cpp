#include "capital.h"
#include <iostream>
#include <map>

using namespace std;

int main()
{
    Capital capital("Bengaluru");
    map<string,Capital>India;
    India.insert({"Karnataka",capital});
    for(auto i = India.begin();i != India.end();i++)
    {
        cout<<"_______________________________________"<<endl;
        cout<<"  State  "<<"          "<<"  Capital  "<<endl;
        cout<<"_______________________________________"<<endl;
        cout<<" "<<i->first<<"          "<<i->second<<endl;
        cout<<endl;
    }
    return 0;
}
