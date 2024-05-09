#include<iostream>
#include<cstring>
#include "book.h"
using namespace std; 

Book::Book(const char* title, int price) {    
    this->title = new char[strlen(title) + 1];
    strcpy(this->title, title);
    this->price = price;    
}

Book::Book(const Book& other) {
    this->title = new char[strlen(other.title) + 1];
    strcpy(this->title, other.title);
    this->price = other.price;
    }

Book::~Book() {    
    delete[] title;
}

void Book::set(const char* title, int price) {   
    delete[] this->title;
    this->title = new char[strlen(title) + 1];
    strcpy(this->title, title);
    this->price = price;   
}