#include <iostream>
using namespace std;
class Student{//class for student details
    int Rollno;
    string Name;
    int Marks;
    public:
    void UserInput()//Taking user input for student details
    {
        cout<<"Enter Rollno: ";
        cin>>Rollno;
        cout<<"Enter Name: ";
        cin>>Name;
        cout<<"Enter Marks: ";
        cin>>Marks;
    }
    void Display()//Displaying student details
    {
        cout<<"Rollno: "<<Rollno<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"Marks: "<<Marks<<endl;
    }
};
int main()
{
    Student *ptr = new Student; //dynamic memory allocation for object of student
    ptr->UserInput();
    ptr->Display();
    delete ptr;
    ptr=nullptr;//to avoid dangling pointer
}