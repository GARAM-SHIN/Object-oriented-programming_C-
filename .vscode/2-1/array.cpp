/* 솔루션명 : prac1
   프로젝트명 : 2-1
   소스파일명 : array.cpp */

#include <iostream>
using namespace std;   

int main() {
	int M[3][3] = { {1,2,3},{4,5,6},{7,8,9} };   
	int(*ptr)[3];   
	int* p;    
	int** pt;   

	ptr = M;
	cout << ptr <<'\n' << M<<'\n';   
	cout << ptr + 1<<'\n' << M + 1<<'\n';    
	cout << *(ptr + 1) <<'\n' << ptr[1] <<'\n' << *(M + 1)<<'\n' << M[1]<<'\n';    
	cout << *(ptr + 1)<<'\n' << **(M + 1)<<'\n' << *M[1] <<'\n' << M[1][0]<<'\n';   

	p = M[0];
	cout << p <<'\n' << M[0]<<'\n' << *M<<'\n';    
	cout << p + 1 <<'\n' << M[0] + 1 <<'\n' << *M + 1<<'\n';    
	cout << *(p + 1) <<'\n' << *(M[0] + 1)<<'\n' << *(*M + 1)<<'\n';   

	pt = &p;
	cout << *pt <<'\n' << p<<'\n';    
	cout << **pt <<'\n' << *p<<'\n';    
}