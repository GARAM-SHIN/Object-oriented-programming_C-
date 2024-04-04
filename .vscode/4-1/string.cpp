/* 솔루션명 : prac1
   프로젝트명 : 4-1
   소스파일명 : string.cpp : */

#include <iostream>
#include <string>
using namespace std;

int main() {
	string name[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		cout << "이름>>";
		getline(cin, name[i]);
	}

	string back = name[0];
	for (i = 0; i < 5; i++)
	{
		if (name[i] > back)
			back = name[i];
	}
	cout << "사전에서 가장 뒤에 나오는 문자열은"<< back <<endl;
}