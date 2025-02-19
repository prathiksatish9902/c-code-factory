#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<std::string> v1;
    v1.push_back("abc");
    v1.push_back("xyz");
    for(int i=0;i<size(v1);i++){
        std::cout<<v1[i]<<std::endl;
    }
    v1.pop_back();
    for(int i=0;i<size(v1);i++){
        std::cout<<v1[i]<<std::endl;
    }
    v1.insert(v1.begin()+0,"mno");
    for(int i=0;i<size(v1);i++){
        std::cout<<v1[i]<<std::endl;
    }
    return 0;
}
