#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter the Number :";
    cin>>number;
    int multiply =1;
    int sum = 0;
    int add = 0;

    for(int i=1;i<=number;i++)
    {
        if(i<=10)
        {
            multiply = multiply*i;
        }
        else if(i<=20)
        {
            sum = sum+i;
        }
        else if(i<=30)
        {
            add = 10+i;
            cout << add << endl;
        }
        else{
            cout<<"enter valid number"<<endl;

        }
    }
    cout << multiply << endl;
    cout << sum << endl;
    return 0;
}
