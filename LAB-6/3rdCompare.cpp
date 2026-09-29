#include <iostream>
using namespace std;
class Student
{
public:
int Marks;
Student(int m)
{
    Marks=m;
}
bool operator >(Student d2) {
        if(Marks>d2.Marks)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main() {
    Student d1(5);
    Student d2(3);
    bool d3=d1>d2;
    if(d3==true){
cout<<"Student 1 has more than student 2 - true";
    }
    else{
        cout<<"Student 1 has more than student 2 - false";
    }
    
    return 0;
}