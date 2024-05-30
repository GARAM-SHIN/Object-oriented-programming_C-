#include "PartTimeEmployee.h"

PartTimeEmployee::PartTimeEmployee(int id, const std::string &name, int hourlyWage, int hoursWorked) : Employee(id, name), hourlyWage(hourlyWage), hoursWorked(hoursWorked) {}

void PartTimeEmployee::printInfo(std::ostream &out) const {
    out << "ID: " << id << ", Name: " << name << ", Type: Part Time";
}

int PartTimeEmployee::calculatePay() const {
    return hourlyWage * hoursWorked;
}
