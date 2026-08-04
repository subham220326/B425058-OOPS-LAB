#include <iostream>
using namespace std;
class Student{//CREATED A CLASS NAME STUDENT
     public:
    char name[100];
    int RollNo;
    int marks[5];
    float percentage;
    void UserInput(){//CREATED A FUNCTION TO TAKE INPUT
      cout << "enter Roll No : ";
      cin>>RollNo;
      cout << "enter Name : ";
      cin>>name;
      cout<<"Enter marks : ";
      for(int i=0;i<5;i++)
      {
        cin>>marks[i];
      }
    }
    void Detail(){//CREATED A FUNCTION TO DISPLAY THE OUTPUT
        cout<<"Roll No : "<<RollNo<<"\nName : "<<name<<"\nMarks : ";
        for(int i=0;i<5;i++)
        {
            cout<<marks[i]<<" ";
        }
        cout<<"\nPercentage : "<<percentageCal();
        }

    int percentageCal()//CREATED A FUNCTION TO CALCULATE PERCENTAGE
    {
     return ((marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5);
    }


void ShowGrade(){//CREATED A FUNCTION TO SHOW GRADE
  int percentage=percentageCal();
  if(percentage>=90)
    cout<<"\nGrade : A";
  else if(percentage>=80&&percentage<90)
    cout<<"\nGrade : B";
  else if(percentage>=70&&percentage<80)
    cout<<"\nGrade : C";
  else if(percentage>=60&&percentage<70)
    cout<<"\nGrade : D";
  else
    cout<<"\nGrade : F";
}
};


int main(){
  Student s1;//CREATED AN OBJECT OF CLASS STUDENT
  s1.UserInput();
  s1.Detail();
  s1.ShowGrade();
}
