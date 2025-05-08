# explain smart pointers in c++ in detail
Smart pointers in C++ are class templates provided by the C++ Standard Library that manage the lifetime of dynamically allocated objects. They automate memory management, reducing the chances of memory leaks, dangling pointers, and other memory-related bugs.

There are three main types of smart pointers in C++:\

1. std::unique_ptr - 8 bytes just like raw pointers.\
Description:
Represents exclusive ownership of a dynamically allocated object.

Only one unique_ptr can own the object at any time.

Automatically deletes the object when the unique_ptr goes out of scope.

Key Features:
Cannot be copied, only moved.

Lightweight and efficient.\
#include <memory>\
#include <iostream>\

int main() {\
    std::unique_ptr<int> ptr = std::make_unique<int>(10);\
    std::cout << *ptr << std::endl;\

    // Transfer ownership\
    std::unique_ptr<int> ptr2 = std::move(ptr);\
    // ptr is now null\
}\
✅ Example: Transferring Ownership with std::move

#include <iostream>
#include <memory>

void takeOwnership(std::unique_ptr<int> p) {
    std::cout << "Took ownership: " << *p << std::endl;
}

int main() {
    std::unique_ptr<int> ptr1 = std::make_unique<int>(42);
    
    // Transfer ownership to a function
    takeOwnership(std::move(ptr1));  // ptr1 is now empty (nullptr)

    if (!ptr1)
        std::cout << "ptr1 is now nullptr after move." << std::endl;

    return 0;
}\



2. std::shared_ptr - 16 bytes (2 pointers one pointing to object and one pointing to control block.\
Description:
Represents shared ownership of a dynamically allocated object.

Multiple shared_ptrs can own the same object.

The object is destroyed when the last shared_ptr owning it is destroyed or reset.

Key Features:
Keeps an internal reference count.

Slightly heavier due to reference counting overhead.\


#include <memory>
#include <iostream>

int main() {
    std::shared_ptr<int> ptr1 = std::make_shared<int>(20);
    std::shared_ptr<int> ptr2 = ptr1; // reference count increases

    std::cout << *ptr1 << std::endl;
    std::cout << "Use count: " << ptr1.use_count() << std::endl;
}\

3. std::weak_ptr - 16 bytes just like shared pointers.\
Description:
A non-owning reference to an object managed by shared_ptr.

Used to break circular references (e.g., in graphs or trees with back-pointers).

Key Features:
Does not affect reference count.

Must be converted to shared_ptr to access the object.\

#include <memory>
#include <iostream>

int main() {
    std::shared_ptr<int> sp = std::make_shared<int>(30);
    std::weak_ptr<int> wp = sp;

    if (auto spt = wp.lock()) { // Creates a temporary shared_ptr
        std::cout << *spt << std::endl;
    } else {
        std::cout << "Pointer expired" << std::endl;
    }
}\


Use std::unique_ptr by default.

Use std::shared_ptr only when ownership is shared.

Use std::weak_ptr to prevent cyclic dependencies.

Avoid mixing raw pointers and smart pointers.


# since we can transfer ownership of unique_ptr using std::move why can't we we assign unique_ptr to weak_ptr\

std::unique_ptr does not create a control block.

std::weak_ptr requires a control block to track the shared/weak reference counts.

Therefore, you cannot assign a unique_ptr to a weak_ptr, because there's no control block for weak_ptr to observe.\
https://chatgpt.com/c/68198f54-dab0-800d-8c6b-1655b1840ec7

