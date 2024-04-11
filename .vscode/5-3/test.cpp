/* 솔루션명 : prac1
   프로젝트명 : 5-3
   소스파일명 : test.cpp */

#include<iostream>
using namespace std;
 
class MyVector{
int *mem;
int size;
public:
MyVector();
MyVector(int n, int val);
~MyVector() { delete [] mem; }
void show();
};
MyVector::MyVector() { 
mem = new int [5]; 
size = 5;
for(int i=0; i<size; i++) mem[i] = 0;
}
MyVector::MyVector(int n, int val) { 
mem = new int [n]; 
size = n;
for (int i=0; i<size; i++) mem[i] = val;
}
void MyVector::show() {
    for(int i=0; i<size; i++) cout << mem[i] << ' ';
    cout << endl;
}

int main() {
MyVector v1, v2(10, 2);
v1.show();
v2.show();
}