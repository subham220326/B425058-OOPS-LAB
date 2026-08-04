#include <iostream>
using namespace std;
class Bill{//CREATED A CLASS NAME BILL
     public:
    int ConsumerNo;
    char name[100];
    int Units;
    float TotalBill;
    void UserInput(){//CREATED A FUNCTION TO TAKE INPUT
      cout << "enter Consumer No : ";
      cin>>ConsumerNo;
      cout << "enter Name : ";
      cin>>name;
      cout << "enter Units : ";
      cin>>Units;
    }
    void Calc(){//CREATED A FUNCTION TO CALCULATE TOTAL BILL
        if(Units<=100){
                TotalBill=Units*5;
            }
            else if(Units>100 && Units<=200){
                TotalBill=100*5+(Units-100)*7.00;
            }
            else{
                TotalBill=100*5+100*7+(Units-200)*10;
            }
    }
    void Detail(){//CREATED A FUNCTION TO DISPLAY THE OUTPUT
        cout<<"Consumer No : "<<ConsumerNo<<"\nName : "<<name<<"\nUnits : "<<Units<<"\nTotal Bill : "<<TotalBill;
        }
    
    };
int main(){
  Bill p1;//CREATED AN OBJECT OF CLASS BILL
  p1.UserInput();
  p1.Calc();
  p1.Detail();
}

