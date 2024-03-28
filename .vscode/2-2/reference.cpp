/* 솔루션명 : prac1
   프로젝트명 : 2-2
   솔루션명 : reference.cpp */

#include <iostream>
using namespace std;    

bool average(int a[], int size, int& avg) {    
	int sum = 0, i;
	
	if (size > 0)    
	{
		for (i = 0; i < size; i++)
		{
			sum += a[i];   
		}

		avg = sum / size;   

		return true;   
	}

	else
		return false;    
}

int main() {
	int x[] = { 0,1,2,3,4,5 };    
	int avg;
	if (average(x,6,avg))cout << "평균은" << avg << endl;    
	else cout << "매개 변수 오류" << endl;

	if (average(x,-2,avg))cout << "평균은" << avg << endl;    
	else cout << "매개 변수 오류" << endl;
}