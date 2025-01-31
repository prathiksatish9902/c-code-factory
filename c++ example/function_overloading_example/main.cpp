#include <iostream>
#include <iostream>
#include <cmath>
using namespace std;

void draw(int radius) {
    std::cout << "Drawing a circle with radius: " << radius << std::endl;
}

void draw(int length, int width) {
    std::cout << "Drawing a rectangle with length: " << length << " and width: " << width << std::endl;
}

void draw(int side1, int side2, int side3) {
    std::cout << "Drawing a triangle with sides: " << side1 << ", " << side2 << ", and " << side3 << std::endl;
}

int main() {
    draw(10);
    draw(10, 20);
    draw(10, 20, 30);

    return 0;
}
