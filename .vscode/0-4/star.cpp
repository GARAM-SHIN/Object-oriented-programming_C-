// 솔루션명 : prac1
// 프로젝트명 : 0-4
// 소스파일명 : star.cpp

#include <iostream>

int main() 
{
    for (int i = 1; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}