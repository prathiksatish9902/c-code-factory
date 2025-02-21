#include <iostream>
#include <set>
#include <string>

template <typename T>
class MySet {
private:
    std::set<T> data;
public:
    void add(const T& value) {
        data.insert(value);
    }

    friend std::ostream& operator<<(std::ostream& os, const MySet<T>& obj) {
        for (const auto& value : obj.data) {
            os << value << " ";
        }
        return os;
    }
};

int main() {
    MySet<int> intSet;
    intSet.add(1);
    intSet.add(2);
    intSet.add(3);

    MySet<float> floatSet;
    floatSet.add(1.1f);
    floatSet.add(2.2f);
    floatSet.add(3.3f);

    MySet<std::string> stringSet;
    stringSet.add("hello");
    stringSet.add("world");

    std::cout << "Int Set: " << intSet << std::endl;
    std::cout << "Float Set: " << floatSet << std::endl;
    std::cout << "String Set: " << stringSet << std::endl;

    return 0;
}
