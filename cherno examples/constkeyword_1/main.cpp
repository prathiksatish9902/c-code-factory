#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    const int MAX_AGE = 90;
    int /*const*/ */*const*/ a = new int;//const int * and int const* are similar
    *a = 2;
    a = (int*)&MAX_AGE;
    std::cout<<*a <<std::endl;
    return 0;
}
