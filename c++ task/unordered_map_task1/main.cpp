#include <iostream>
#include <unordered_map>
#include"student.h"
using namespace std;

int main()
{
    unordered_map<int, Student> studentMap;

    // Insert students into the map
    studentMap.insert({101, Student("abc", 101, 10)});
    studentMap.insert({102, Student("def", 102, 11)});
    studentMap.insert({103, Student("mno", 103, 12)});
    for(const auto& pair : studentMap) {
        cout << pair.second << "\n\n";
    }
    return 0;
}
