#include <iostream>
#include <set>

int main() {
    std::set<int> mySet; // Declaring a set of integers

    // Inserting elements
    mySet.insert(10);
    mySet.insert(5);
    mySet.insert(20);
    mySet.insert(10); // Duplicate element, will be ignored
    mySet.insert(30);
    mySet.insert(15);
    mySet.erase(10);  // Removes element 10
    if (mySet.find(15) != mySet.end()) {
        std::cout << "15 is present in the set"<<std::endl;
    }
    std::cout << "Size of set: " << mySet.size()<<std::endl;

    // Printing elements
    std::cout << "Set elements: "<<std::endl;
    for (int elem : mySet) {
        std::cout << elem << " "<<std::endl;
    }

    return 0;
}
