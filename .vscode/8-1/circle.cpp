#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle() { radius = 1; }
    Circle(int radius) { this->radius = radius; }
    double getArea() const { return 3.14 * radius * radius; }
};

void swap(Circle& c1, Circle& c2) {
    Circle temp = c1;
    c1 = c2;
    c2 = temp;
}

int main() {
    Circle A;
    Circle B(3);
    cout << "A의 면적 = " << A.getArea() << ", " << "B의 면적 = " << B.getArea() << endl;
    swap(A, B);
    cout << "A의 면적 = " << A.getArea() << ", " << "B의 면적 = " << B.getArea() << endl;
}