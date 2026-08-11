#include <iostream>
using namespace std;

int main(){
    
    int *ptr = new int[3]; // dynamically allocate memory for an integer
    cout<<"Enter 3 no : ";
    for(int i=0;i<3;i++){//taking the user input
        cin>>ptr[i];
    }
    int high=ptr[0];
  
    for(int i=1;i<3;i++){//checking the maximum element
        if(ptr[i]>high)
        high=ptr[i];
    }
     cout<<"Highest Number is -  "<<high;
    delete ptr;
    ptr=nullptr;//to avoid pointer dangling
}