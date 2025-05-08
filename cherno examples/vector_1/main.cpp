#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    std::vector<std::vector<int>> array;
    array.push_back({1,2,3});
    array.push_back({4,5,6});
    for (const auto& row : array)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
