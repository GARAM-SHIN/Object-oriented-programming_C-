#include <iostream>
#include <string>
using namespace std;

class Circle {
protected:
    int radius;
public:
    Circle(int radius = 0) : radius(radius) {}
    int getRadius() const { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() const { return 3.14 * radius * radius; }
};

class NamedCircle : public Circle {
    string name;
public:
    NamedCircle() {}
    NamedCircle(int radius, const string& name) : Circle(radius), name(name) {}

    void setName(const string& name) { this->name = name; }
    string getName() const { return name; }
    void show() const {
        cout << " 반지름이 " << getRadius() << "인 " << name;
    }

    friend istream& operator>>(istream& is, NamedCircle& nc) {
        is >> nc.radius >> nc.name;
        return is;
    }
};

int main() {
    NamedCircle pizza[5];
    int radius, max;
    string name;

    cout << "5개의 정수 반지름과 원의 이름을 입력하세요" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << " >> ";
        cin >> pizza[i];
    }

    max = pizza[0].getRadius();
    int count;
    for (int i = 0; i < 5; i++) {
        if (max < pizza[i].getRadius()) {
            max = pizza[i].getRadius();
            count = i;
        }
    }

    cout << "가장 면적이 큰 피자는 " << pizza[count].getName()<<"입니다."<endl;

    return 0;
}
