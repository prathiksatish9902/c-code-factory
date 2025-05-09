// #include <iostream>
// #include <unordered_map>
// #include <string>

// template <typename K, typename V>
// class MyUnorderedMap {
// private:
//     std::unordered_map<K, V> data;
// public:
//     void add(const K& key, const V& value) {
//         data[key] = value;
//     }

//     friend std::ostream& operator<<(std::ostream& os, const MyUnorderedMap<K, V>& obj) {
//         for (const auto& pair : obj.data) {
//             os << "{" << pair.first << ": " << pair.second << "} ";
//         }
//         return os;
//     }
// };

// int main() {
//     MyUnorderedMap<int, std::string> intStringMap;
//     intStringMap.add(1, "one");
//     intStringMap.add(2, "two");
//     intStringMap.add(3, "three");

//     MyUnorderedMap<float, std::string> floatStringMap;
//     floatStringMap.add(1.1f, "one point one");
//     floatStringMap.add(2.2f, "two point two");
//     floatStringMap.add(3.3f, "three point three");

//     MyUnorderedMap<std::string, int> stringIntMap;
//     stringIntMap.add("hello", 1);
//     stringIntMap.add("world", 2);

//     std::cout << "Int-String Map: " << intStringMap << std::endl;
//     std::cout << "Float-String Map: " << floatStringMap << std::endl;
//     std::cout << "String-Int Map: " << stringIntMap << std::endl;

//     return 0;
// }



#include <iostream>
#include <unordered_map>
#include <string>

template <typename Key, typename Value, typename Hash, typename Equal, typename Allocator>
std::ostream& operator<<(std::ostream& os, const std::unordered_map<Key, Value, Hash, Equal, Allocator>& obj) {
    for (const auto& pair : obj) {
        os << "{" << pair.first << ": " << pair.second << "} ";
    }
    return os;
}

int main() {
    std::unordered_map<int, std::string> intMap{{1, "one"}, {2, "two"}, {3, "three"}};


    std::unordered_map<float, std::string> floatMap{{1.1f, "one point one"}, {2.2f, "two point two"}, {3.3f, "three point three"}};

    std::unordered_map<std::string, int> stringMap{{"hello", 1}, {"world", 2}};


    std::cout << "Int Map: " << intMap << "\nFloat Map: " << floatMap << "\nString Map: " << stringMap << std::endl;


    return 0;
}
