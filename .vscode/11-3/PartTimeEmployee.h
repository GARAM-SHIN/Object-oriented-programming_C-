#ifndef PARTTIMEEMPLOYEE_H
#define PARTTIMEEMPLOYEE_H

#include "Employee.h"

class PartTimeEmployee : public Employee {
private:
    int hourlyWage;
    int hoursWorked;
public:
    PartTimeEmployee(int id, const std::string &name, int hourlyWage, int hoursWorked);
    virtual void printInfo(std::ostream &out) const override;
    virtual int calculatePay() const override;
};

#endif 
