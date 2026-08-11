#include <iostream>
using namespace std;

int main(){
    int *ptr = new int[3]; // dynamically allocate memory for an integer
    cout<<"Enter 3 no : ";
    for(int i=0;i<3;i++){//taking the user input
        cin>>ptr[i];
    }
   cout<<"Numbers are -  ";
    for(int i=0;i<3;i++){
        cout<<ptr[i]<<" ";
    }
    delete ptr;
    ptr=nullptr;//to avoid pointer dangling
}