#include <iostream>

using namespace std;

int main()
{
    int x = 6;
    bool comparision = x == 5;
    if(comparision)
    {
        cout<<"hello"<<std::endl;
    }
    const char* ptr = "hello";
    // const char* ptr = nullptr;

    if(ptr)
    {
        cout<<ptr<<endl;
    }
     if(ptr == "hello")
    {
        cout<<"hello2"<<endl;
    }
    else
    {
        cout<<"ptr is null"<<endl;

    }
    return 0;
}
