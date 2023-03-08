#include <iostream>

class CPolygon {
protected:
    int width, height;

public:
    void set_values(int a , int b){
        width = a;
        height = b;
    }
    
    int area() {
        return 0;
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
    CRectangle rect;
    CTriangle trgl;
    CPolygon poly;
    
    CRectangle* ppoly1 = &rect;
    CTriangle* ppoly2 = &trgl;
    CPolygon* ppoly3 = &poly;
    
    ppoly1->set_values(10, 5);
    ppoly2->set_values(10, 5);
    ppoly3->set_values(10, 5);

    std::cout << "Area of Rectangle: " << ppoly1->area() << std::endl;
    std::cout << "Area of Triangle: " << ppoly2->area() << std::endl;
    std::cout << "Area of Polygon: " << ppoly3->area() << std::endl;
    return 0;
}