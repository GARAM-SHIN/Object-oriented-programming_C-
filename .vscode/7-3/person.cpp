#include <iostream>
using namespace std;   

class Person {   
    string name;
public:   
    Person() { name = ""; }    
    Person(const string &name) { this->name = name; }    
    const string &getName() const { return name; }   
    void setName(const string &name) { this->name = name; }    
};

class Family {
    string name;
    Person* p;   
    int size;  
public:   
    Family(const string &name, int size);  
    void setName(int index, const string &name);
    void show() const;    
    ~Family();  
};

Family::Family(const string &name, int size) {    
    p = new Person[size];   
    this->size = size;   
    this->name = name;  
}

void Family::setName(int index, const string &name) {   
    p[index].setName(name);
}

void Family::show() const{   
    cout << name << "가족은 다음과 같이 " << size << "명 입니다.\n";    
    for (int i = 0; i < size; i++) {   
        cout << p[i].getName() << "\t";
    }
}

Family::~Family() {   
    delete[] p;   
}

int main() {
    Family* simpson = new Family("Simpson", 3);   
    simpson->setName(0, "Mr. Simpson");    
    simpson->setName(1, "Mrs.Simpson");   
    simpson->setName(2, "Bart Simpson");   
    simpson->show();    
    delete simpson;   
}