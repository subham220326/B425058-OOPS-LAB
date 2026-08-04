#include <iostream>
using namespace std;
class Account{ //CREATING THE CLASS ACCOUNT 
    int balance;//DECLARING ALL THE VARIABLE
    int AccountNo;
    char Name[100];
    public:
    void UserInput(){//TAKING THE USER INPUT 
      cout << "enter Account Number : ";
      cin>>AccountNo;
      cout << "enter Name : ";
      cin>>Name;
      cout << "enter Initial Balance : ";
      cin>>balance;
    }
    void Deposit(){//CREATING A FUNCTION TO DEPOSIT THE AMOUNT
        int amount;
        cout << "enter Amount to Deposit : ";
        cin>>amount;
        balance+=amount;
    }
    void Withdraw(){//CREATING A WITHDRAWING FUNCTION
        int amount;
        cout << "enter Amount to Withdraw : ";
        cin>>amount;
        if(amount<=balance)
            balance-=amount;
        else
            cout << "Insufficient Balance." << endl;
    }   
    void ShowBalance(){//CREATING A FUNCTION TO SHOW THE BALANCE
        cout << "Account Number - " << AccountNo << "\nName - " << Name << "\nBalance - " << balance;
    }
};

int main(){
  Account acc1;//CREATING THE OBJECT ACC1 OF ACCOUNT CLASS
  acc1.UserInput();
  acc1.Deposit();
  acc1.Withdraw();
  acc1.ShowBalance();
}

