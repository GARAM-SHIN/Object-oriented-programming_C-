#include <iostream>
#include "Book.h"

int main() {
    Book book1("벼룩시장", 0, 50);
    Book book2("C++", 10000, 1000);

    if (!book1) {
        std::cout << "공짜다" << std::endl;
    }
    
    std::cout << ++book2 << std::endl;
    std::cout << book2++ << std::endl;
    std::cout << book2 << std::endl;

    return 0;
}
