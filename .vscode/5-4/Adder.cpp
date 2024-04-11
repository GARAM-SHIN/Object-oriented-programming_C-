/* 솔루션명 : project0410
   프로젝트명 : 5-4
   소스파일명 : Adder.cpp */

#include <iostream>
using namespace std;   

#include "Adder.h"   

Adder::Adder(int a, int b) {    
	op1 = a, op2 = b;   
}

int Adder::process() {    
	return op1 + op2;   
}