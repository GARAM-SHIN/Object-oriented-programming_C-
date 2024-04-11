/* 솔루션명 : prac1
   프로젝트명 : 5-4
   소스파일명 : Calculator.cpp */

#include <iostream>
using namespace std;    

#include "Adder.h"   
#include "Calculator.h"    

void Calculator::run() {
	cout << "두 개의 수를 입력하세요>>";
	int a, b;    
	cin >> a >> b;    
	Adder adder(a,b);   
	cout << adder.process();  
}