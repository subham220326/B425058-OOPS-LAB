#include<iostream>
using namespace std;
int add(int a,int b){// Function to add two integers
    return a+b;
}
float add(int a,float b){// Function to add an integer and a float
    return a+b;
}
float add(float a,float b){// Function to add two floats
    return a+b;
}
int add(int arr[],int size){// Function to add elements of an integer array
    int total=0;
    for(int i=0;i<size;i++){
        total+=arr[i];
    }
    return total;
}
int add(int *ptr1,int *ptr2){// Function to add two integers using pointers
    return *ptr1+*ptr2;
}
int main(){
    int x=5,y=10;
    float m=2.5,n=3.5;
    int arr[]={1,2,3,4,5};
    int *ptr1=&x,*ptr2=&y;
    cout<<"Sum of two integers: "<<add(x,y)<<endl;
    cout<<"Sum of an integer and a float: "<<add(x,m)<<endl;    
    cout<<"Sum of two floats: "<<add(m,n)<<endl;
    cout<<"Sum of elements in the array: "<<add(arr,5)<<endl;
    cout<<"Sum of two integers using pointers: "<<add(ptr1,ptr2)<<endl;
    return 0;
}