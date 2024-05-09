#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;  //헤더 파일에선 using 사용 금지

class Person {   
    string name;
public:   
    Person() { name = ""; }    
    Person(const string &name) { this->name = name; }    
    const string &getName() const { return name; }   
    void setName(const string &name) { this->name = name; }    
};

#endif 