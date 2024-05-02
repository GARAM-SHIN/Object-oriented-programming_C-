#include <iostream>
using namespace std;   

class Circle {
    int radius;   
public:
    void setRadius(int radius);   
    double getArea() const;    
};

void Circle::setRadius(int radius) {    
    this->radius=radius;
}

double Circle::getArea() const {   
    return radius * radius * 3.14;
}

int main() {
    Circle circle[3];
    int count = 0; 
    for (int i = 0; i < 3; ++i) {
        cout << "원 " << i + 1 << "의 반지름 값 >> ";
        int r;
        cin >> r;
        circle[i].setRadius(r);
        if (circle[i].getArea() > 100) ++count;
    }
    cout << "면적이 100보다 큰 원은 " << count << "개 입니다." << endl;
}