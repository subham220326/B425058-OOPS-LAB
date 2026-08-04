#include <iostream>
using namespace std;
class Student{
    int rollNo;
    char Name[100];
    int Marks;
    public:
    void UserInput(){
      cout << "enter Roll no Of Student : ";
      cin>>rollNo;
      cout << "enter Name Of Student : ";
      cin>>Name;
      cout << "enter Mark Of Student : ";
      cin>>Marks;
    }
    void ShowUser(){
        cout << "Rollno - " << rollNo << "\nName - " << Name << "\nMarks - " << Marks;
    }
};

int main(){
  Student stu1;
  stu1.UserInput();
  stu1.ShowUser();
}
