#include <iostream>
using namespace std;
class Employee{//class for employee details
    int Id;
    string Name;
    int Salary;
    public:
    void UserInput()//Taking user input for employee details
    {
        cout<<"Enter EmployId: ";
        cin>>Id;
        cout<<"Enter Name: ";
        cin>>Name;
        cout<<"Enter Salary: ";
        cin>>Salary;
    }
    void Display()//Displaying employee details
    {
        cout<<"EmployId: "<<Id<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Salary: "<<Salary<<endl;
    }
};
int main()
{
    Employee *ptr = new Employee[3]; //dynamic memory allocation for 3 objects of employee
    for(int i = 0; i < 3; i++)
    {
        ptr[i].UserInput();
        ptr[i].Display();
    }
    delete[] ptr;
    ptr=nullptr;//to avoid dangling pointer
}