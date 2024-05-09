#ifndef FAMILY_H
#define FAMILY_H

#include <iostream>
#include "Person.h"

using namespace std;

class Family{
    string name;
    Person *p;
    int size;
public:
    Family(const string &name, int size);
    ~Family();
    void setName(int index, const string &name);
    void show() const;
};

#endif