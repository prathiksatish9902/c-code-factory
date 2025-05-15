#include <iostream>
#include<chrono>
#include<thread>
using namespace std;

int main()
{
    using namespace std::literals::chrono_literals;
    cout << "Hello World!" << endl;
    auto start = std::chrono::high_resolution_clock::now();

    std::this_thread::sleep_for(1s);

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<float> duration = end - start;
    std::cout<<duration.count()<<std::endl;

    return 0;
}
