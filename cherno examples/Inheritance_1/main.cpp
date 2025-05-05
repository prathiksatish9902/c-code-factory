#include <iostream>
#include"player.h"
using namespace std;

int main()
{
    cout<<sizeof(Player)<<endl;
    cout << "Hello World!" << endl;
    Player player;
    player.move(5 , 5);
    player.printName();
    return 0;
}
