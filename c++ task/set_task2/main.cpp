// #include <iostream>
// #include <set>
// #include <string>

// template <typename T>
// class MySet {
// private:
//     std::set<T> data;
// public:
//     void add(const T& value) {
//         data.insert(value);
//     }

//     friend std::ostream& operator<<(std::ostream& os, const MySet<T>& obj) {
//         for (const auto& value : obj.data) {
//             os << value << " ";
//         }
//         return os;
//     }
// };

// int main() {
//     MySet<int> intSet;
//     intSet.add(1);
//     intSet.add(2);
//     intSet.add(3);

//     MySet<float> floatSet;
//     floatSet.add(1.1f);
//     floatSet.add(2.2f);
//     floatSet.add(3.3f);

//     MySet<std::string> stringSet;
//     stringSet.add("hello");
//     stringSet.add("world");

//     std::cout << "Int Set: " << intSet << std::endl;
//     std::cout << "Float Set: " << floatSet << std::endl;
//     std::cout << "String Set: " << stringSet << std::endl;

//     return 0;
// }



// #include <iostream>
// #include <set>
// #include <string>

// template <typename T, typename K, typename A>
// class MySets {
// private:
//     std::set<T> set1;
//     std::set<K> set2;
//     std::set<A> set3;
// public:
//     void addSet1(const T& value) {
//         set1.insert(value);
//     }

//     void addSet2(const K& value) {
//         set2.insert(value);
//     }

//     void addSet3(const A& value) {
//         set3.insert(value);
//     }

//     friend std::ostream& operator<<(std::ostream& os, const MySets<T, K, A>& obj) {
//         os << "Set1: ";
//         for (const auto& value : obj.set1) {
//             os << value << " ";
//         }
//         os << "\nSet2: ";
//         for (const auto& value : obj.set2) {
//             os << value << " ";
//         }
//         os << "\nSet3: ";
//         for (const auto& value : obj.set3) {
//             os << value << " ";
//         }
//         return os;
//     }
// };

// int main() {
//     MySets<int, float, std::string> mySets;
//     mySets.addSet1(1);
//     mySets.addSet1(2);
//     mySets.addSet1(3);

//     mySets.addSet2(1.1f);
//     mySets.addSet2(2.2f);
//     mySets.addSet2(3.3f);

//     mySets.addSet3("hello");
//     mySets.addSet3("world");

//     std::cout << mySets << std::endl;

//     return 0;
// }


// #include <iostream>
// #include <set>
// #include <string>

// template <typename T, typename K, typename A>
// std::ostream& operator<<(std::ostream& os, const std::tuple<std::set<T>, std::set<K>, std::set<A>>& sets) {
//     const auto& [set1, set2, set3] = sets;

//     os << "Set1: ";
//     for (const auto& value : set1) {
//         os << value << " ";
//     }
//     os << "\nSet2: ";
//     for (const auto& value : set2) {
//         os << value << " ";
//     }
//     os << "\nSet3: ";
//     for (const auto& value : set3) {
//         os << value << " ";
//     }

//     return os;
// }

// int main() {
//     std::set<int> intSet;
//     intSet.insert(1);
//     intSet.insert(2);
//     intSet.insert(3);

//     std::set<float> floatSet;
//     floatSet.insert(1.1f);
//     floatSet.insert(2.2f);
//     floatSet.insert(3.3f);

//     std::set<std::string> stringSet;
//     stringSet.insert("hello");
//     stringSet.insert("world");

//     std::tuple<std::set<int>, std::set<float>, std::set<std::string>> sets = {intSet, floatSet, stringSet};

//     std::cout << sets << std::endl;

//     return 0;
// }



#include <iostream>
#include <set>
#include <string>

template <typename Key, typename Compare, typename Allocator>
std::ostream& operator<<(std::ostream& os, const std::set<Key, Compare, Allocator>& obj) {
    for (const auto& value : obj) {
        os << value << " ";
    }
    return os;
}

int main() {
    std::set<int> intSet{1,2,3};


    std::set<float> floatSet{1.1f,2.2f,3.3f};

    std::set<std::string> stringSet{"hello","world"};

    std::cout << "Int Set: " << intSet <<"\nfloat set :"<<floatSet<<"\nstring set :"<<stringSet<< std::endl;

    return 0;
}



