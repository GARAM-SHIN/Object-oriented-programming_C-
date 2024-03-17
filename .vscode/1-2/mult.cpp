// 솔루션명 : prac2
// 프로젝트명 : 1-2
// 소스파일명 : mult.cpp

#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<10; i++)
    {
        for(int j=1;j<10;j++)
        {
            cout<<i<<'*'<<j<<'='<<i*j<<'\t';
        }
        cout<<endl;
    }

    return 0;
}