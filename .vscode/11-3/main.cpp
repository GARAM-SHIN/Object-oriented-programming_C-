#include "FullTimeEmployee.h"
#include "PartTimeEmployee.h"
#include <iostream>
#include <string>
#include <limits>

Employee *createEmployee() {
    int type, id;
    std::string name;
    std::cout << "1. Full Time" << std::endl;
    std::cout << "2. Part Time" << std::endl;
    std::cout << "고용자의 유형을 선택하세요 >> ";
    std::cin >> type;
    if (type < 1 || type > 2) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        throw "잘못된 선택입니다.";
    }
    std::cout << "고용인 아이디 입력: ";
    std::cin >> id;
    std::cin.ignore();
    std::cout << "고용인 이름 입력: ";
    std::getline(std::cin, name);
    switch (type) {
        case 1: {
            int salary;
            std::cout << "월급 입력: ";
            std::cin >> salary;
            return new FullTimeEmployee(id, name, salary);
        }
        default: {
            int hourlyWage, hoursWorked;
            std::cout << "시급 입력: ";
            std::cin >> hourlyWage;
            std::cout << "근로 시간 입력: ";
            std::cin >> hoursWorked;
            return new PartTimeEmployee(id, name, hourlyWage, hoursWorked);
        }
    }
}

int main() {
    const int NUM_OF_WORKERS = 4;
    Employee *workers[NUM_OF_WORKERS];
    int i = 0;
    while (i < NUM_OF_WORKERS) {
        try {
            workers[i] = createEmployee();
            i++;
        } catch (const char *err) {
            std::cerr << err << std::endl;
        }
    }
    for (int i = 0; i < NUM_OF_WORKERS; i++) {
        std::cout << std::endl;
        workers[i]->printInfo(std::cout);
        std::cout << ", 이번달 급여는 " << workers[i]->calculatePay() << "원입니다." << std::endl;
    }
    for (int i = 0; i < NUM_OF_WORKERS; i++) delete workers[i];

    return 0;
}
