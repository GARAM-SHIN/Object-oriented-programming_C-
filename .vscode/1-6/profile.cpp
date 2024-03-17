// 솔루션명 : prac2
// 프로젝트명 : 1-6
// 소스파일명 : profile.cpp

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char name[100];
    char address[100];
    int age;

    cout<<"이름은? ";
    cin.getline(name,100);

    cout<<"주소는? ";
    cin.getline(address,100);

    cout<<"나이는? ";
    cin>>age;

   	for (int i = 0; i <= 30; i++)
	{
		cout << '-';
	}
	cout << '\n';

	cout << name << '.' << address << '.' << age<<"세" << endl;
}