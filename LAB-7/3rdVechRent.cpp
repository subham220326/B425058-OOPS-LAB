#include <iostream>
using namespace std;
class Vechile{
    protected:
    string VechNo;
    int NoOfDays;
};
class Car:public Vechile{
    protected:
    int rent;
};
class LuxuryCar:public Car{
int LuxRent;
public:
LuxuryCar(string n,int N,int R,int LR){
    VechNo=n;
   NoOfDays=N;
   rent=R;
   LuxRent=LR;
}
int Total(){
    return ((rent+LuxRent)*NoOfDays);
}
};
int main(){
    LuxuryCar l1("BMW",10,3000,5000);
    cout<<l1.Total()<<endl;
    return 0;
}