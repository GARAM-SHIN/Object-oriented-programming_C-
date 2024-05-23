#include "Book.h"

Book::Book(const std::string& title, int price, int pages)
    : title(title), price(price), pages(pages) {}

const std::string& Book::getTitle() const {
    return title;
}

int Book::getPrice() const {
    return price;
}

int Book::getPages() const {
    return pages;
}

bool Book::operator!() const {
    return price == 0;
}

Book& Book::operator++() {
    price = static_cast<int>(price * 1.1); 
    return *this;
}

Book Book::operator++(int) {
    Book temp = *this;
    ++(*this);
    return temp;
}

std::ostream& operator<<(std::ostream& os, const Book& book) {
    os << "Title: " << book.title << ", Price: " << book.price << ", Pages: " << book.pages;
    return os;
}
