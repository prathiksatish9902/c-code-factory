#include <iostream>
#include <thread>
using namespace std;
void function1(){
    for(int i = 0; i < 5; i++)
    {
        std::cout << "Function 1, iteration " << i << "\n";

    }
}

void function2(){
    for(int i = 0; i < 5; i++)
    {
        std::cout << "Function 2, iteration " << i << "\n";

    }
}
int main()
{
    cout << "Hello World!" << endl;
    std::thread t1(function1);
    std::thread t2(function2);

    // t1.join();
    // t2.join();

    // t1.detach();
    // t2.detach();

    std::cout << "Main thread finished.\n";


    return 0;
}
