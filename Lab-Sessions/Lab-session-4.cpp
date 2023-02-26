#include <iostream>

class Quadrilateral {
private:
    int x, y;

public:
    Quadrilateral(): x(0), y(0) {};

    void set_values(int valOfX, int valOfY) {
        x = valOfX;
        y = valOfY;
    }

    inline int area() { return x*y; }
};


int main() {
    Quadrilateral square, rectangle;

    square.set_values(10, 10);
    rectangle.set_values(5, 10);

    std::cout << "Area of square: " << square.area() << std::endl;
    std::cout << "Area of rectangle: " << rectangle.area() << std::endl;

    return 0;
}