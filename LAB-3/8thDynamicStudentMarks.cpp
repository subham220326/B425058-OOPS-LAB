#include <iostream>
using namespace std;
class Student{//class for student details
    public:
    int RollNo;
    string Name;
    int NoOfSub;
    int Totalmarks=0;
    int *p=nullptr;
    void userInput()//Taking user input for student details
    {
        cout<<"Enter RollNo: ";
        cin>>RollNo;
        cout<<"Enter Name: ";
        cin>>Name;
        cout<<"Enter NoOfSub: ";
        cin>>NoOfSub;
        p=new int[NoOfSub];
        for(int i=0;i<NoOfSub;i++)
        {
            cout<<"Enter Marks of Subject "<<i+1<<": ";
            cin>>p[i];
            Totalmarks+=p[i];
        }   

    }
    void display()//Displaying student details
    {
        cout<<"RollNo: "<<RollNo<<endl;
        cout<<"Name: "<<Name<<endl;
        cout<<"NoOfSub: "<<NoOfSub<<endl;
        for(int i=0;i<NoOfSub;i++)
        {
            cout<<"Marks of Subject "<<i+1<<": "<<p[i]<<endl;
        } 
        cout<<"Total Marks: "<<Totalmarks<<endl;
        cout<<"Average Marks: "<<Totalmarks/NoOfSub<<endl;  
    }
};
int main()
{
    Student *ptr = new Student; //dynamic memory allocation for object of student
    ptr->userInput();
    ptr->display();
    delete ptr;
    ptr=nullptr;//to avoid dangling pointer
}