#include <iostream>
#include "Person.h"
#include "Family.h"
using namespace std;

Family::Family(const string &name, int size) {    
    p = new Person[size];   
    this->size = size;   
    this->name = name;  
}

void Family::setName(int index, const string &name) {   
    p[index].setName(name);
}

void Family::show() const{   
    cout << name << "가족은 다음과 같이 " << size << "명 입니다.\n";    
    for (int i = 0; i < size; i++) {   
        cout << p[i].getName() << "\t";
    }
}

Family::~Family() {   
    delete[] p;   
}