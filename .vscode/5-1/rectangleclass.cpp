 /* 솔루션명 : prac
	프로젝트명 : 5-1
	소스파일명 : rectangleclass.cpp */

#include <iostream>
using namespace std;    

class Rectangle {   
	int width;   
	int height;    
public:   
	Rectangle();    
	Rectangle(int x, int y);    
	Rectangle(int x);    
	bool isSquare();   
};

Rectangle::Rectangle() {   
	width = height = 1;   
}

Rectangle::Rectangle(int x, int y) {   
	width = x, height = y;   
}

Rectangle::Rectangle(int x) {   
	width = height = x;  
}

bool Rectangle::isSquare() {   
	if (width == height)    
		return true;   
	else   
		return false;   
}

int main() {
	Rectangle rect1;   
	Rectangle rect2(3, 5);   
	Rectangle rect3(3);   

	if (rect1.isSquare())cout << "rect1은 정사각형이다." << endl;   
	if (rect2.isSquare())cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare())cout << "rect3는 정사각형이다." << endl;
}