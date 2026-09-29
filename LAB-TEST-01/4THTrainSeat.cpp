#include <iostream>
using namespace std;
int seat[8]={1,2,3,4,15,6,7,8};
int *ptr=seat;
void Correct(){
    for(int i=0;i<8;i++)
    {
        if(*ptr==i+1)
        {
            cout<<"gp";
        }
        else
        {
            *ptr=i+1;
            ptr++;
        }
    }
}
void Display(){
    cout<<"Seat numbers are :"<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<*ptr;
        ptr++;
    }
}
int main()
{
    Display();
    Correct();
    Display();
    return 0;
}