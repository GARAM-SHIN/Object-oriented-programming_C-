#include <iostream>
using namespace std;   

class Circle {
    int radius;   
public:
    void setRadius(int r);   
    double getArea();    
};

void Circle::setRadius(int r) {    
    radius=r;
}

double Circle::getArea() {   
    return radius * radius * 3.14;
}

int main() {
    int r, count=0;   
    Circle *pcArray = new Circle[3];   

    for (int i = 0; i < 3; i++)
    {
        cout << "원 " << i+1 << "의 반지름 >>";
        cin >> r;    
        pcArray[i].setRadius(r);   
        if (pcArray[i].getArea() > 100)    
        {
            count++;
        }
    }

    cout << "면적이 100보다 큰 원" << count << "개입니다.";
    delete pcArray;   
}