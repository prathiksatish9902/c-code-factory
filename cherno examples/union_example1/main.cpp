#include <iostream>
using namespace std;

union Data {
    int intVal;
    float floatVal;
    char charVal;
};

int main() {
    Data data;
    std::cout<<&data<<"\n"<<sizeof(data)<<std::endl;

    data.intVal = 10;
    cout << "intVal: " << data.intVal << endl;
    std::cout<<&data.intVal<<std::endl;

    data.floatVal = 3.14;
    cout << "floatVal: " << data.floatVal << endl;
    std::cout<<&data.floatVal<<std::endl;

    data.charVal = 'A';
    cout << "charVal: " << data.charVal << endl;
    std::cout<<&data.charVal<<std::endl;

    return 0;
}
