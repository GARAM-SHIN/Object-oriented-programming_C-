 /* 솔루션명 : prac1
	프로젝트명 : 4-4
	소스파일명 : findstring.cpp */

#include <iostream>
#include <string>
using namespace std;   

int main() {
	string s;   
	cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다." << endl;

	getline(cin, s,'&');    
	cin.ignore();    

	string search, replace;    

	cout << "find:";    
	getline(cin, search,'\n');   

	cout << "replace:";    
	getline(cin, replace,'\n');    

	int search_index = 0;    
	while (1) {    
		int replace_index = s.find(search, search_index);    

		if (replace_index == -1)   
			break;   

		s.replace(replace_index, search.length(), replace);   

		search_index = replace_index + replace.length();   
	}
	cout << s << endl;    
}