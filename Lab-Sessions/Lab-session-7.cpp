#include <iostream>
using namespace std;

class CPolygon {
protected:
    int width, height;

public:
    void set_values(int a, int b) {
        width = a;
        height = b;
    }
};

class CRectangle : public CPolygon {
public:
    int area() { return width*height; }
};

class CTriangle : public CPolygon {
public:
    int area() { return 0.5*width*height; }
};

int main() {
    CRectangle CRect1;
    CTriangle CTri1;
    CRect1.set_values(10, 5);
    CTri1.set_values(10, 5);

    cout << "Area of Rectangle 1: " << CRect1.area() << endl;
    cout << "Area of Triangle 1: " << CTri1.area() << endl;
    return 0;
}