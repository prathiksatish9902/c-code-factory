#include <iostream>
#include "smartphone.h"
using namespace std;

int main()
{
    SmartPhone s1("0987654321","abcdefg",32);
    s1.makeCall();
    s1.playMusic();
    s1.takePic();
    s1.Phone::display();
    s1.Camera::display();
    s1.Music::display();

    std::cout << "Hello World!" <<std:: endl;
    return 0;
}
