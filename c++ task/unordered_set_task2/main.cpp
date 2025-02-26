// #include <iostream>
// #include <unordered_set>
// #include <string>

// template <typename T>
// class MyUnorderedSet {
// private:
//     std::unordered_set<T> data;
// public:
//     void add(const T& value) {
//         data.insert(value);
//     }

//     friend std::ostream& operator<<(std::ostream& os, const MyUnorderedSet<T>& obj) {
//         for (const auto& value : obj.data) {
//             os << value << " ";
//         }
//         return os;
//     }
// };

// int main() {
//     MyUnorderedSet<int> intSet;
//     intSet.add(1);
//     intSet.add(2);
//     intSet.add(3);

//     MyUnorderedSet<float> floatSet;
//     floatSet.add(1.1f);
//     floatSet.add(2.2f);
//     floatSet.add(3.3f);

//     MyUnorderedSet<std::string> stringSet;
//     stringSet.add("hello");
//     stringSet.add("world");

//     std::cout << "Int Set: " << intSet << std::endl;
//     std::cout << "Float Set: " << floatSet << std::endl;
//     std::cout << "String Set: " << stringSet << std::endl;

//     return 0;
// }




#include <iostream>
#include <unordered_set>
#include <string>

template <typename Key, typename Hash, typename Equal, typename Allocator>
std::ostream& operator<<(std::ostream& os, const std::unordered_set<Key, Hash, Equal, Allocator>& obj) {
    for (const auto& value : obj) {
        os << value << " ";
    }
    return os;
}

int main() {
    std::unordered_set<int> intSet{1, 2, 3};


    std::unordered_set<float> floatSet{1.1f, 2.2f, 3.3f};


    std::unordered_set<std::string> stringSet{"hello", "world"};


    std::cout << "Int Set: " << intSet << "\nFloat Set: " << floatSet << "\nString Set: " << stringSet << std::endl;


    return 0;
}
