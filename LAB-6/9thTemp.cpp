#include<iostream>
using namespace std;

class Temp{
    int cel;
    public:
    Temp(int c)
    {
        cel=c;
    }
    bool operator >(Temp t2) {
        if(cel>t2.cel)
        {
            return true;
        }
        else{
            return false;
        }
    }
    bool operator <(Temp t2) {
        if(cel<t2.cel)
        {
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Temp t1(25);
    Temp t2(30);
    if(t1>t2){
        cout<<"t1 is greater than t2"<<endl;
    }
    if(t1<t2){
        cout<<"t1 is less than t2"<<endl;
    }
}