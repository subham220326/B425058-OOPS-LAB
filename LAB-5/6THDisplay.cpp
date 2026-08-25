#include<iostream>
using namespace std;
void display(int a){// Function to display an integer
    cout<<"Integer: "<<a<<endl;
}
void display(float b){// Function to display a float
    cout<<"Float: "<<b<<endl;
}
void display(char c){// Function to display a character
    cout<<"Character: "<<c<<endl;
}
void display(int arr[],int size){// Function to display an integer array
    cout<<"Integer Array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void display(char arr[],int size){// Function to display a character array
    cout<<"Character Array: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int num1=10;
    float num2=20.5;
    char ch='A';
    int arr1[]={1,2,3,4,5};
    char arr2[]={'a','b','c','d','e'}; 
    display(num1);
    display(num2); 
    display(ch);
    display(arr1,5);
    display(arr2,5);
    return 0;
}