#include "FullTimeEmployee.h"

FullTimeEmployee::FullTimeEmployee(int id, const std::string &name, int salary) : Employee(id, name), salary(salary) {}

void FullTimeEmployee::printInfo(std::ostream &out) const {
    out << "ID: " << id << ", Name: " << name << ", Type: Full Time";
}

int FullTimeEmployee::calculatePay() const {
    return salary;
}
