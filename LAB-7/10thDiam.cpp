#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int employeeID;
    string name;
public:
    Employee(int id, string n) {
        employeeID = id;
        name = n;
    }
};

class Developer : virtual public Employee {
protected:
    string programmingLang;
public:
    Developer(int id, string n, string lang) : Employee(id, n) {
        programmingLang = lang;
    }
};

class Tester : virtual public Employee {
protected:
    string testingTool;
public:
    Tester(int id, string n, string tool) : Employee(id, n) {
        testingTool = tool;
    }
};

class TechLead : public Developer, public Tester {
public:
    TechLead(int id, string n, string lang, string tool)
        : Employee(id, n), Developer(id, n, lang), Tester(id, n, tool) {}

    void display() {
        cout << "Tech Lead Information" << endl;
        cout << "Employee ID          : " << employeeID << endl;
        cout << "Name                 : " << name << endl;
        cout << "Programming Language : " << programmingLang << endl;
        cout << "Testing Tool         : " << testingTool << endl;
    }
};

int main() {
    TechLead lead(2006, "Sub", "C++", "python");
    lead.display();
    return 0;
}