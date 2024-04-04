/* 솔루션명 : prac1
   프로젝트명 : 4-2
   소스파일명 : vector.cpp */

#include <iostream>
#include <string>
#include <vector>
using namespace std;   

int main() {
	vector <string> s;    
	string name;

	cout << "이름을 5개 입력하라"<<'\n';

	int i;
	for (i = 0; i < 5; i++)
	{
		cout << i+1 << ">>";
		getline(cin, name);    
		s.push_back(name);    
	}

	name = s.at(0);    
	for (i = 0; i < 5; i++)
	{
		if (s[i] > name)    
			name = s[i];   
	}

	cout << "사전에서 가장 뒤에 나오는 이름은 " << name << endl;    
}