#include <iostream>
using namespace std;
class Time{
    public:
    int hr;
    int min;
    Time(int h,int m)
    {
        hr=h;
        min=m;
    }
    Time operator +(Time T2)
    {
        int totalHr=hr+T2.hr;
        int totalMin=min+T2.min;
        if(totalMin>=60)
        {
            totalHr+=1;
            totalMin=(totalMin-60);
        }
        return Time(totalHr,totalMin);
    }
};
int main()
{
    Time T1(2,30);
    Time T2(3,45);
    Time T3=T1+T2;
    cout<<"Total Time: "<<T3.hr<<" hours and "<<T3.min<<" minutes";
}