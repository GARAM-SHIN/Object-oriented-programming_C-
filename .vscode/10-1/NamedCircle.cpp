#include <iostream>
#include <string>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 1) : radius(radius) {}
    void setRadius(int radius) { this->radius = radius; }
    int getRadius() const { return radius; }
    double getArea() const { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
    string name;
public:
    NamedCircle(const string& name, int radius) : Circle(radius), name(name) {}
    
    string getName() const { return name; }
    
    void show() const { 
        cout << "반지름이 " << getRadius() << "인 " << name << endl; 
    }
};

int main() {
    NamedCircle waffle("waffle", 3);
    waffle.show();
    cout << waffle.getName() << "의 넓이는 " << waffle.getArea() << endl;
    
    return 0;
}
