// 솔루션명 : prac2
// 프로젝트명 : 1-5
// 소스파일명 : string.cpp

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char password1[100], password2[100];
    cout<<"새 암호를 입력하세요 >> ";
    cin.getline(password1,100);

    cout<<"새 암호를 다시 한번 입력하세요 >> ";
    cin.getline(password2,100);

   if(strcmp(password1, password2)==0)
   {
    cout<<"같습니다.\n";
   }
   else{
    cout<<"같지 않습니다.\n";
   }
}