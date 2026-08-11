#include <iostream>
using namespace std;

int main(){
    float sum=0,avg;
    float *ptr = new float[3]; // dynamically allocate memory for a float
    cout<<"Enter 3 no : ";
    for(int i=0;i<3;i++){//taking the user input
        cin>>ptr[i];
        sum=sum+ptr[i];
    }
  
     cout<<"Total Sum of Numbers are -  "<<sum;
     cout<<"\n Average of Numbers are - "<<sum/3;
     
    delete ptr;
    ptr=nullptr;//to avoid pointer dangling
}