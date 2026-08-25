#include<iostream>
using namespace std;
int data1=10;
float data2=20.5;
int data3=30;
int *ptr1=&data3;
void modify(int &a){// Function to modify an integer by reference
    a+=5;
}
void modify(float &b){  // Function to modify a float by reference
    b+=5.5;
}
void modify(int *ptr){// Function to modify an integer using a pointer
    *ptr+=5;
}
int main(){
    cout<<"Before modification: "<<endl;
    cout<<"data1: "<<data1<<endl;
    cout<<"data2: "<<data2<<endl;
    cout<<"data3: "<<data3<<endl;
    modify(data1);
    modify(data2);
    modify(ptr1);
    cout<<"After modification: "<<endl;
    cout<<"data1: "<<data1<<endl;
    cout<<"data2: "<<data2<<endl;
    cout<<"data3: "<<data3<<endl;
    return 0;
}