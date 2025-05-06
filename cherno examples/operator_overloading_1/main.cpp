#include <iostream>
#include "vector2.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Vector2 position(2.3f , 2.4f);
    Vector2 speed(3.2f,3.4f);
    Vector2 powerup(1.1f , 1.1f);
    Vector2 res = position + speed * powerup;
    std::cout << res <<std::endl;
    return 0;
}
