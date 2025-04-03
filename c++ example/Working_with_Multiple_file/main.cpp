#include <iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    fout.open("STATE");

    fout<<"Karnataka \n";
    fout<<"Tamil nadu \n";
    fout<<"kerala \n";
    fout<<"AndraPradesh \n";
    fout<<"telangana \n";

    fout.close();

    fout.open("CAPITAL");

    fout<<"Bengaluru \n";
    fout<<"Chennai \n";
    fout<<"Tiruvanantapuram \n";
    fout<<"Amaravati \n";
    fout<<"Hyderabad \n";

    fout.close();

    ifstream fin;
    fin.getline()
    return 0;
}
