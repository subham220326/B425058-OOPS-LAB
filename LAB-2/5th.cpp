#include <iostream>
using namespace std;
class Salary{//CREATED A CLASS NAME SALARY
    int EmployeeID;
    char Name[100];
    float BasicSalary;
    float HRA;
    float DA;
    float GrossSalary;
    public:
    void UserInput(){//CREATED A FUNCTION TO TAKE INPUT 
      cout << "enter Employ Id : ";
      cin>>EmployeeID;
      cout << "enter Name of the Employ : ";
      cin>>Name;
      cout<<"Enter salary : ";
      cin>>BasicSalary;
    }
    void CalculateGross(){//CREATED A FUNCTION TO CALCULATE GROSS SALARY
         HRA=BasicSalary/5;
         DA=BasicSalary/10;
         GrossSalary=BasicSalary+HRA+DA;
    }
    void Display()//CREATED A FUNCTION TO DISPLAY THE OUTPUT
    {
        cout<<"Employ ID - "<<EmployeeID<<"\nName - "<<Name<<"\nBasic Salary - "<<BasicSalary<<"\nHRA - "<<HRA<<"\nDA-"<<DA<<"\nGross Salary - "<<GrossSalary;
    }
};

int main(){
  Salary S1;//CREATED AN OBJECT OF CLASS SALARY
  S1.UserInput();
  S1.CalculateGross();
  S1.Display();
}
