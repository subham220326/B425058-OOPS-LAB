#include <iostream>
using namespace std;

class Check{
    int day;
    int month;
    int year;
    public:
    Check(int d,int m,int y)
    {
        day=d;
        month=m;
        year=y;
    }
    bool operator ==(Check d2) {
        if(day==d2.day && month==d2.month && year==d2.year)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Check C1(10,5,2020);
    Check C2(10,5,2021);
    bool C3=C1==C2;
    if(C3==true){
        cout<<"Both dates are same - true";
    }
    else{
        cout<<"Both dates are same - false";
    }
}