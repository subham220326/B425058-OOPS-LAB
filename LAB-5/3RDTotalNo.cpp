#include<iostream>
using namespace std;
void total(int arr[],int size){// Function to calculate total of integer array
    int total=0;
    for(int i=0;i<size;i++){
        total+=arr[i];
    }
    cout<<"Total: "<<total<<endl;
}
void total(float arr[],int size){// Function to calculate total of float array
    float total=0;
    for(int i=0;i<size;i++){
        total+=arr[i];
    }
    cout<<"Total: "<<total<<endl;
}
void total(int arr[],int size,int upto){// Function to calculate total of integer array upto a certain index
    int total=0;
    for(int i=0;i<upto;i++){
        total+=arr[i];
    }
    cout<<"Total upto "<<upto<<" elements: "<<total<<endl;
}
int main(){
    int arr1[]={1,2,3,4,5};
    float arr2[]={1.5,2.5,3.5};
    total(arr1,5);
    total(arr2,3);
    total(arr1,5,3);
    return 0;
}