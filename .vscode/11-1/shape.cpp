#include <iostream>
#include <string>
#include <cmath>

using namespace std;


class Shape {
protected:
    string name;
public:
    Shape(string name) : name(name) {}
    virtual ~Shape() {}
    string getName() const { return name; }
    virtual double getArea() const = 0; 
};


class Circle : public Shape {
private:
    double radius;
public:
    Circle(string name, double radius) : Shape(name), radius(radius) {}
    double getArea() const override {
        return M_PI * radius * radius;
    }
};


class Rect : public Shape {
private:
    double width;
    double height;
public:
    Rect(string name, double width, double height) : Shape(name), width(width), height(height) {}
    double getArea() const override {
        return width * height;
    }
};


class Triangular : public Shape {
private:
    double base;
    double height;
public:
    Triangular(string name, double base, double height) : Shape(name), base(base), height(height) {}
    double getArea() const override {
        return 0.5 * base * height;
    }
};

int main() {
    Shape *p[3];
    p[0] = new Circle("빈대떡", 10); 
    p[1] = new Rect("찰떡", 30, 40); 
    p[2] = new Triangular("토스트", 30, 40); 

    for(int i = 0; i < 3; i++)
        cout << p[i]->getName() << " 넓이는 " << p[i]->getArea() << endl;

    for(int i = 0; i < 3; i++)
        delete p[i];

    return 0;
}
