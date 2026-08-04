#include <iostream>
using namespace std;
class Calculator{
    int a;
    int b;
    public:
    void UserInput(){
      cout << "enter first number : ";
      cin>>a;
      cout << "enter second number : ";
      cin>>b;
    }
    void Add(){
        cout << "Sum : " << a + b << endl;
    }
    void Sub()  {
        cout << "Difference : " << a - b << endl;
    }       
   void Mul()  {
        cout << "Product : " << a * b << endl;
    }       
    void Div()  {
        if(b != 0)
            cout << "Quotient : " << a / b << endl;
        else
            cout << "Division by zero is not allowed." << endl;
    }
};

int main(){
  Calculator calc1;
  calc1.UserInput();
  calc1.Add();
  calc1.Sub();
  calc1.Mul();
  calc1.Div();
}
