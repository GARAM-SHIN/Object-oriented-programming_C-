#include <iostream>
#include "accumulator.h"
using namespace std;    

Accumulator::Accumulator(int value) {     
	this->value = value;    
}

Accumulator& Accumulator::add(int n){    
	value += n;
	return *this;    
}

int Accumulator::get() const{    
	return value;
}