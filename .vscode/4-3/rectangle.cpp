 /* 솔루션명 : prac1
	프로젝트명 : 4-3
	소스파일명 : rectangle.cpp */

#include <iostream>
using namespace std;    

class Rectangle {    
public:   
	int width;    
	int height;    
	int getArea();    
};

int Rectangle::getArea() {    
	return width * height;    
}

int main() {
	Rectangle rect;   
	rect.width = 3;   
	rect.height = 5;   
	cout << "사각형의 면적은 " << rect.getArea() << endl;   
}