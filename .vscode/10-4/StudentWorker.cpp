#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(const string &name = "", int age = 1) : name(name), age(age) {}
    const string &getName() const { return name; }
    int getAge() const { return age; }
};

class Student : virtual public Person {
    int score;
public:
    Student(int score = 0, const string &name = "", int age = 0) : Person(name, age), score(score) {}
    int getScore() const { return score; }
};

class Worker : virtual public Person {
    int salary;
public:
    Worker(int salary = 0, const string &name = "", int age = 0) : Person(name, age), salary(salary) {}
    int getSalary() const { return salary; }
};

class StudentWorker : public Student, public Worker {
public:
    StudentWorker(const string &name = "", int age = 1, int score = 0, int salary = 0)
    : Person(name, age), Student(score, name, age), Worker(salary, name, age) {}

    // Override getName and getAge to avoid ambiguity
    const string &getName() const {
        return Person::getName();
    }
    int getAge() const {
        return Person::getAge();
    }
};

int main() {
    StudentWorker sw("홍길동", 20, 100, 3000000);
    cout << "이름: " << sw.getName() << ", 나이: " << sw.getAge() << ", 점수: " << sw.getScore() << ", 급여: " << sw.getSalary() << endl;
    return 0;
}
