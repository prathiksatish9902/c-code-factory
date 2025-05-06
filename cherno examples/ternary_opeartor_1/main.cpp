#include <iostream>

using namespace std;
static int s_level = 1;
static int s_speed = 2;
int main()
{
    cout << "Hello World!" << endl;
    s_speed = s_level > 5 ? 10 : 5;
    s_speed = (s_level > 5 && s_level < 100) ? s_level >10 ? 15:10:5;
    std::cout<<s_speed<<std::endl;
    return 0;
}
