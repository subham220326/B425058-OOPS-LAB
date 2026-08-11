#include <iostream>
using namespace std;
class Employee{
    int Id;
    string Name;
    int NoofMonths;
    int *MonthlySalary;
    int TotalSalary=0;
    int HighestSalaryMonth=0;
    public:
    void UserInput()//Taking user input for employee details
    {
        cout<<"Enter EmployId: ";
        cin>>Id;
        cout<<"Enter Name: ";
        cin>>Name;
        cout<<"Enter no of Months: ";
        cin>>NoofMonths;
        MonthlySalary=new int[NoofMonths];
        for(int i=0;i<NoofMonths;i++)
        {
            cout<<"Enter Salary of Month "<<i+1<<": ";
            cin>>MonthlySalary[i];
            TotalSalary+=MonthlySalary[i];
            if(MonthlySalary[i]>MonthlySalary[HighestSalaryMonth])
            {
                HighestSalaryMonth=i;
            }
        }
    }
    void Display()//Displaying employee details
    {
        cout<<"EmployId: "<<Id<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Total Salary: "<<TotalSalary<<endl;
        cout<<"Average Salary: "<<TotalSalary/NoofMonths<<endl;
        cout<<"Month with Highest Salary: "<<HighestSalaryMonth+1<<endl;
    }
};
int main()
{
    Employee *ptr = new Employee; //dynamic memory allocation for object of employee
    ptr->UserInput();
    ptr->Display();
    delete ptr;
    ptr=nullptr;//to avoid dangling pointer
}