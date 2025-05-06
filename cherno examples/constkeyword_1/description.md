explain const keyword with different use cases


The const keyword in C++ means "read-only" — it tells the compiler that a value must not be modified after it's defined. C++ allows const in many contexts, and its behavior depends on where you place it.

✅ 1. Constant Variables

const int x = 5;
// x = 6; // ❌ Error: cannot modify a const variable
Declares a variable whose value cannot change.

Used for fixed values like configuration constants.

✅ 2. Pointers and Const
This is the most subtle use of const. There are three main variations:

a. Const Data

const char* ptr = "hello";  // or: char const* ptr = "hello";
Pointer to constant data.

You cannot change what *ptr points to:


*ptr = 'H';  // ❌ Error
ptr = anotherString;  // ✅ OK
b. Const Pointer

char* const ptr = buffer;
A constant pointer to data.

You can change *ptr, but not ptr itself:


*ptr = 'A';   // ✅ OK
ptr = anotherBuffer; // ❌ Error
c. Const Pointer to Const Data

const char* const ptr = "hello";
You cannot change ptr or the data it points to.

✅ 3. Function Parameters
a. By value:

void printValue(const int x);
Prevents accidental changes inside the function.

x is still a copy.

b. By reference:

void printName(const std::string& name);
No copy, read-only access.

Preferred for large objects like std::string, vectors, etc.

✅ 4. Function Return Values
a. Return by const reference:

const std::string& getName() const;
Prevents modification of returned object.

Usually used for member variables.

✅ 5. Const Member Functions

class Person {
public:
    std::string getName() const;  // guarantees it won’t modify `this`
};
Makes the method read-only — can't modify members.

Compiler enforces it.

✅ 6. Const in Classes (member variables)

class A {
    const int id;  // must be initialized in constructor
};
Once set in the constructor, cannot be changed.

✅ 7. Constexpr vs Const

const int x = 5;
constexpr int y = 5;
const: value is constant at runtime.

constexpr: value is known at compile time.
Useful for array sizes, template parameters, etc.

✅ 8. Const in Arrays and Strings

const char* msg = "hello";
msg points to constant string data.

Summary Table:
Use Case	Effect\
const int x	Variable cannot be changed\
const T* ptr	Data pointed to is const (can't change *ptr)\
T* const ptr	Pointer itself is const (can't change ptr)\
const T* const ptr	Both pointer and data are const\
void func(const T&)	Pass-by-reference but read-only\
T get() const	Member function won't modify class members\
const in class members	Must initialize in constructor\
constexpr	Constant value at compile-time\
