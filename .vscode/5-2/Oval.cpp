
/* 솔루션명 : prac1
   프로젝트명 : 5-2
   소스파일명 : Oval.cpp */

#include <iostream>
using namespace std;   

class Oval {    
private:    
	int width;   
	int height;   
public:   
	Oval(int a, int b) {   
		width = a, height = b;
	}

	Oval() {   
		width = height = 1;
	}

	~Oval() {    
		cout << "Oval 소멸 : " << "width = " << width << "," << "height = " << height << endl;
	}

	int getWidth() {  
		return width;
	}

	int getHeight() {   
		return height;
	}

	void set(int w, int h);   
	void show();   
};

void Oval::set(int w, int h) {   
	width = w, height = h;
}

void Oval::show() {   
	cout << "width = " << width << "," << "height = " << height << endl;
}

int main() {
	Oval a, b(3, 4);    //매개변수 있는 생성자 호출하기
	a.set(10, 20);    //타원의 너비와 높이를 변경하는 함수멤버 호출하기
	a.show();    //타원의 너비와 높이를 화면에 출력하는 함수멤버 호출하기
	cout << b.getWidth() << "," << b.getHeight() << endl;    //타원의 너비와 높이를 각각 리턴해주는 함수멤버 호출하기
}