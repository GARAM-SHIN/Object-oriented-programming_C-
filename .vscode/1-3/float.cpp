// 솔루션명 : prac2
// 프로젝트명 : 1-3
// 소스파일명 : float.cpp

#include <iostream>
using namespace std;

double biggest(double a[], int b)
{
	double biggest = a[0];
	for (int n = 1; n < b; n++)
	{
		if (a[n] >= biggest)
		{
			biggest = a[n];
		}
	}
	return biggest;
}

int main()
{
    double a[5];
    cout<<"5개의 실수를 입력하라>>";

    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }

    cout<<"제일 큰 수 = "<<biggest(a,5)<<endl;
}