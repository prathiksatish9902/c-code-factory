#include <iostream>
#include <vector>
using namespace std;
void HelloWorld(int a){

    cout << "Hello World!" <<a<< endl;
}
void PrintValue(int value){
    cout<<value<<endl;
}
void forEach(const std::vector<int> &values , void(*func)(int)){
    for(int value : values)
        func(value);
}

int main()
{
    typedef void(*helloworldfunctiom)(int);
    helloworldfunctiom function = HelloWorld;
    function(8);

    std::vector<int> values = {1 , 2 , 3};
    forEach(values , PrintValue);
    return 0;
}
