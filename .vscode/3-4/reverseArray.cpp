   /* 솔루션명 : prac1
	  프로젝트명 : 3-4
	  소스파일명 : reverseArray.cpp */

#include <iostream>
using namespace std;   

template <class T>   
void reverseArray(T a[], int size)    
{
	for (int i = 0; i < size/2; i++)    
	{
		T tmp;    
		tmp = a[i];
		a[i] = a[size - i - 1];
		a[size - i - 1] = tmp;
	}
}

int main() {
	int x[] = { 1,10,100,5,4 };

	reverseArray(x, 5);    

	for (int i = 0; i < 5; i++)
		cout << x[i] << ' ';    //4 5 100 10 1이 출력된다.
	cout << endl;
}