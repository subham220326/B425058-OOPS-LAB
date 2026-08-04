#include <iostream>
using namespace std;
class Student{//CREATED THE CLASS STUDENT
    int rollNo;
    char Name[100];
    int Marks;
    public:
    void UserInput(){//CREATED A FUNCTION TO TAKE THE INPUT
      cout << "enter Roll no Of Student : ";
      cin>>rollNo;
      cout << "enter Name Of Student : ";
      cin>>Name;
      cout << "enter Mark Of Student : ";
      cin>>Marks;
    }
    void ShowUser(){//CREATED A FUNCTION TO SHOW THE USER
        cout << "Rollno - " << rollNo << "\nName - " << Name << "\nMarks - " << Marks;
    }
};

int main(){
  Student stu1;//CREATED AN OBJECT STU1 OF STUDENT CLASS
  stu1.UserInput();
  stu1.ShowUser();
}
