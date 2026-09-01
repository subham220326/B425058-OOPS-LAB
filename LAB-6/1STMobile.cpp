#include <iostream>
using namespace std;
int battery=100;
int *ptr=&battery;
void displayBattery(){
    cout<<"Battery is at :"<<endl;
    cout<<*ptr<<endl;
}
void Charge(int x){
    if(*ptr+x>100)
    {
        cout<<"Battery is full"<<endl;
    }
    else
    *ptr=*ptr+x;
}
int main(){
    displayBattery();
    Charge(20);
    displayBattery();
    return 0;
}