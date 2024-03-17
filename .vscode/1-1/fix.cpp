// 솔루션명 : prac2
// 프로젝트명 : 1-1
// 소스파일명 : fix.cpp

#include <iostream>

int sum(int, int);

int main(void)
{
    int n=0;
    std::cout<<"끝수를 입력하세요>> ";
    std::cin>>n;

    if(n<=0)
    {
        std::cout<<"양수를 입력하세요!\n";
        return 0;
    }

    std::cout<<"1에서 "<<n<<"까지의 합은 "<<sum(1,n)<<"입니다\n";

    return 0;
}

int sum(int a, int b)
{
    int res=0;

    for(int k=a;k<=b;k++)
    {
        res+=k;
    }

    return res;
}