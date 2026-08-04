#include <iostream>
using namespace std;
class Book{//CREATED A CLASS NAME BOOK
     public:
    int id;
    char title[100];
    char nameOfStudent[100];
    int daysToCarry;
    int fine;
    void UserInput(){//CREATED A FUNCTION TO TAKE INPUT
      cout << "enter BookId  : ";
      cin>>id;
      cout << "enter title of book : ";
      cin>>title;
      cout << "enter Name of Student : ";
      cin>>nameOfStudent;
      cout << "enter Days to Carry : ";
      cin>>daysToCarry;
    }
    
    void Fine(){//CREATED A FUNCTION TO CALCULATE FINE
      if(daysToCarry>15){
        fine=(daysToCarry-15)*2;
      }
      else{
        fine=0;
      }
    }
    void TotalTransactionDetail(){//CREATED A FUNCTION TO DISPLAY THE OUTPUT
        cout<<"Book Id : "<<id<<"\nTitle : "<<title<<"\nName of Student : "<<nameOfStudent<<"\nDays to Carry : "<<daysToCarry<<"\nFine : "<<fine;
        }
    
};

int main(){
 Book b1;//CREATED AN OBJECT OF CLASS BOOK
  b1.UserInput();
  b1.Fine();
  b1.TotalTransactionDetail();
}
