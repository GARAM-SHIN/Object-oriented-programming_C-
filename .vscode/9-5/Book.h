#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>

class Book {
    std::string title;
    int price;
    int pages;

public:
    Book(const std::string& title = std::string(), int price = 0, int pages = 0);
    const std::string& getTitle() const;
    int getPrice() const;
    int getPages() const;
    
    bool operator!() const;
    
    Book& operator++();
    
    Book operator++(int);

    friend std::ostream& operator<<(std::ostream& os, const Book& book);
};

#endif 
