#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

class Employee {
protected:
    int id;
    std::string name;
public:
    Employee(int id, const std::string &name);
    virtual ~Employee();
    virtual void printInfo(std::ostream &out) const = 0;
    virtual int calculatePay() const = 0;
};

#endif 
