#include <iostream>

using namespace std;
static int i = 0;
void function(){
    i++;
    cout<<i<<endl;
}

int main()
{
    cout << "Hello World!" << endl;
    function();
    function();
    function();
    function();
    function();

    return 0;
}
