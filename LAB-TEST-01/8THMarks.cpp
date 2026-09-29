#include <iostream>
using namespace std;
int marks[5]={95,20,41,57,32};
int *ptr=marks;
void showmarks(int *ptr2){
    for(int i=0;i<5;i++)
    {
        cout<<*ptr2<<" ";
    ptr2++;
    }
}
void Update(int *ptr1,int n){
    for(int i=0;i<5;i++){
        if(*ptr1<=95)
        {
            *ptr1=*ptr1+5;
        }
        ptr1++;
    }
}
int main(){
    showmarks(ptr);
    Update(ptr,5);
    showmarks(ptr);
}