#include<iostream>
using namespace std;
int small(int * arr){
    int small=*arr;
    for(int i=0;i<5;i++){
        if(*arr<small)
        small=*arr;
        arr++;
    }
    return small;
}


int main(){
    int *arr=new int[5];
    arr[0]=4;
    arr[1]=2;
    arr[2]=5;
    arr[3]=1;
    arr[4]=2;
    cout<<small(arr)<<endl;
    delete arr;
    free(arr);
}