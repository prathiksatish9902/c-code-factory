#include <iostream>
#include "player.h"
#include "log.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Player player1;
    player1.move(1 , -1);
    // const int logLevelError = 0;
    // const int logLevelWarning = 1;
    // const int logLevelInfo = 2;
    Log log;
    // log.SetLevel(log.logLevelWarning);
    log.Error("hello");
    log.Info("hello");
    log.Warn("hello");


    return 0;
}
