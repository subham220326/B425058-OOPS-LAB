#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
};
class Student : virtual public Person {
protected:
    int rollNo;
    float cgpa;
public:
    Student(string n, int a, int r, float c) : Person(n, a) {
        rollNo = r;
        cgpa = c;
    }
};

class Employee : virtual public Person {
protected:
    int employeeID;
    float salary;
public:
    Employee(string n, int a, int id, float sal) : Person(n, a) {
        employeeID = id;
        salary = sal;
    }
};

class TeachingAssistant : public Student, public Employee {
public:
    TeachingAssistant(string n, int a, int r, float c, int id, float sal)
        : Person(n, a), Student(n, a, r, c), Employee(n, a, id, sal) {}

    void display() {
        cout << "Teaching Assistant Information" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "CGPA: " << cgpa << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: RS" << salary << endl;
    }
};

int main() {
    TeachingAssistant ta("Sobhanayak", 24, 101, 3.85, 5002, 2500.0);
    ta.display();
    return 0;
}