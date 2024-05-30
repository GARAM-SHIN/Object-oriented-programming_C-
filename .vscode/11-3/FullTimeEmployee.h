#ifndef FULLTIMEEMPLOYEE_H
#define FULLTIMEEMPLOYEE_H

#include "Employee.h"

class FullTimeEmployee : public Employee {
private:
    int salary;
public:
    FullTimeEmployee(int id, const std::string &name, int salary);
    virtual void printInfo(std::ostream &out) const override;
    virtual int calculatePay() const override;
};

#endif 
