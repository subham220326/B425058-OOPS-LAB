#include <iostream>
#include <string>
using namespace std;

class Patient {
protected:
    string name;
    int patientID;
    int age;
public:
    Patient(string n, int id, int a) {
        name = n;
        patientID = id;
        age = a;
    }
};

class InPatient : public Patient {
private:
    double roomChargesPerDay;
    int days;
public:
    InPatient(string n, int id, int a, double charges, int d)
        : Patient(n, id, a) {
        roomChargesPerDay = charges;
        days = d;
    }

    void calculateAndDisplayBill() {
        double totalBill = roomChargesPerDay * days;
        cout << "Hospital Patient Bill" << endl;
        cout << "Patient Name : " << name << endl;
        cout << "Patient ID   : " << patientID << endl;
        cout << "Age          : " << age << endl;
        cout << "Room Rate/Day: Rs" << roomChargesPerDay << endl;
        cout << "Days Admitted: " << days << endl;
        cout << "Total Bill   : Rs" << totalBill << endl;
    }
};

int main() {
    InPatient p("Sub", 1004, 25, 150.0, 4);
    p.calculateAndDisplayBill();
    return 0;
}