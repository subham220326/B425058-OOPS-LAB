#include <iostream>
using namespace std;

int main(){
    int *ptr = new int; // dynamically allocate memory for an integer
    cout<<"Enter a no : ";
    cin>>*ptr; // assign a value to the allocated memory
    cout<<"value of ptr is - "<<*ptr;
    delete ptr;
    ptr=nullptr;//to avoid pointer dangling
}