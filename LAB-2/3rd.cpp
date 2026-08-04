#include <iostream>
using namespace std;
class Calculator{//CREATED A CLASS CALCULATOR 
    int a;
    int b;
    public:
    void UserInput(){//CREATED A FUNCTION TO TAKE THE INPUT
      cout << "enter first number : ";
      cin>>a;
      cout << "enter second number : ";
      cin>>b;
    }
    void Add(){//CREATED A FUNCTION TO ADD 2 NUMBERS
        cout << "Sum : " << a + b << endl;
    }
    void Sub()  {//CREATED A FUNCTION TO SUBTRACT 2 NUMBERS
        cout << "Difference : " << a - b << endl;
    }       
   void Mul()  {//CREATED A FUNCTION TO MULTIPLY 2 NUMBERS
        cout << "Product : " << a * b << endl;
    }       
    void Div()  {//CREATED A FUNCTION TO DIVIDE 2 NUMBERS
        if(b != 0)//IF THE DENOMINATOR BECOMES ZERO THEN IT WILL HANDLE 
            cout << "Quotient : " << a / b << endl;
        else
            cout << "Division by zero is not allowed." << endl;
    }
};

int main(){
  Calculator calc1;//CREATED A CALC1 OBJECT FROM CALCULATOR CLASS
  calc1.UserInput();
  calc1.Add();
  calc1.Sub();
  calc1.Mul();
  calc1.Div();
}
