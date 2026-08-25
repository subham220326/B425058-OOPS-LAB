#include<iostream>
using namespace std;
void compare(int a,int b){// Function to compare two integers
  if(a>b){
      cout<<a<<" is greater than "<<b<<endl;
  }
  else if(a<b){
      cout<<b<<" is greater than "<<a<<endl;
  }
  else{
      cout<<a<<" is equal to "<<b<<endl;
  }
}
void compare(float a,float b){// Function to compare two floats
    if(a>b){
        cout<<a<<" is greater than "<<b<<endl;
    }
    else if(a<b){
        cout<<b<<" is greater than "<<a<<endl;
    }
    else{
        cout<<a<<" is equal to "<<b<<endl;
    }
}
void compare(int arr1[],int arr2[],int size){// Function to compare two integer arrays
    int greater=0;
    int smaller=0;
    for(int i=0;i<size;i++){
        if(arr1[i]>arr2[i]){
            greater++;
        }
        else if(arr1[i]<arr2[i]){
            smaller++;
        }
    }
    cout<<"Number of elements in first array greater than second array: "<<greater<<endl;
    cout<<"Number of elements in first array smaller than second array: "<<smaller<<endl;
}
int main(){
    int x=10,y=20;
    float m=15.5,n=12.5;
    int arr1[]={1,2,3,4,5};
    int arr2[]={5,4,3,2,1};
    compare(x,y);
    compare(m,n);
    compare(arr1,arr2,5);
    return 0;
}