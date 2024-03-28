 /* 솔루션명 : prac1
	  프로젝트명 : 3-2
	  소스파일명 : big.cpp */

#include <iostream>
using namespace std;    

int big(int a, int b) 
{
	int max = 100;   
	int big = a;

	if (big < b)    
		big = b;    
	
	if (big > max)   
		big = max;

	return big;   
}

int big(int a, int b, int c)   
{
	int max = c;    
	int big = a;

	if (big < b)   
		big = b;

	if (big > max)   
		big = max;

	return big;    
}

int main() {
	int x = big(3, 5);    //3과 5중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
	int y = big(300, 60);    //300과 60중 큰 값 300이 최대값 100보다 크므로, 100리턴
	int z = big(30, 60, 50);    //30과 60중 큰 값 60이 최대값 50보다 크므로, 50 리턴

	cout << x << ' ' << y << ' ' << z << endl;
}

/*#include <iostream>
using namespace std;    //std 이름 공간에 선언된 모든 이름에 std:: 생략

int big(int a, int b, int c = 100)    //데이터 타입이 정수이고 디폴트 인자 1개를 포함한 big()
{
	int max = c;    //최대값 c(=100)
	int big = a;

	if (big < b)    //big(a)가 b보다 작을 경우
		big = b;

	if (big > max)    //big가 max(c)보다 클 경우
		big = max;

	return big;    //big의 값 리턴하기
}

int main() {
	int x = big(3, 5);    //3과 5중 큰 값 5는 최대값 100보다 작으므로, 5 리턴
	int y = big(300, 60);    //300과 60중 큰 값 300이 최대값 100보다 크므로, 100리턴
	int z = big(30, 60, 50);    //30과 60중 큰 값 60이 최대값 50보다 크므로, 50 리턴

	cout << x << ' ' << y << ' ' << z << endl;
}*/