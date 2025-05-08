#include <iostream>
#include <thread>
using namespace std;
static bool s_finished = false;

void DoWork(){
    using namespace std:: literals::chrono_literals;
    std::cout<<"started thread id:"<<std::this_thread::get_id()<<std::endl;

    while(!s_finished)
    {
        std::cout<<"working"<<std::endl;
        std::this_thread::sleep_for(1s);


    }
}
int main()
{
    std::thread worker(DoWork);
    s_finished = true;
    worker.join();
    std::cout<<"finished"<<std::endl;
    std::cout<<"started thread id:"<<std::this_thread::get_id()<<std::endl;

    return 0;
}
