#include <iostream>
using namespace std;

class BankAccount {
protected:
    int accno;
    int bal;
public:
    BankAccount(int a, int b) {
        accno = a;
        bal = b;
    }
};

class SavingAccount : public BankAccount {
public:
    SavingAccount(int a, int b) : BankAccount(a, b) {
        
    }

    int interest(int i) {
        return (bal * 0.05 * i);
    }
};

class CurrentAccount : public BankAccount {
public:
    CurrentAccount(int a, int b) : BankAccount(a, b) {
        if (bal < 500) {
            bal -= 1000;
        }
    }
};

int main() {
    SavingAccount b1(100, 500);
    
    cout << "Interest: " << b1.interest(5) << endl;
    
    return 0;
}