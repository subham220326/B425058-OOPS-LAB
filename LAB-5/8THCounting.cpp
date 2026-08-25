#include<iostream>
using namespace std;
int count(int num){// Function to count the number of digits in an integer
    int count=0;
    while(num!=0){
        num/=10;
        count++;
    }
    return count;
}
int count(int *arr){// Function to count the number of elements in an integer array (terminated by -1)
    int count=0;
    for(int i=0;arr[i]!=-1;i++){
        count++;
    }
    return count;
}
int count(char *arr,char ch){// Function to count the number of occurrences of a character in a string
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]==ch){
            count++;
        }
    }
    return count;
}
 
int main(){
    int num=12345;
    int arr[]={1,2,3,4,5,-1};
    char str[]="hello world";
    char ch='o';
    cout<<"Number of digits in "<<num<<": "<<count(num)<<endl;
    cout<<"Number of elements in array: "<<count(arr)<<endl;
    cout<<"Number of occurrences of '"<<ch<<"' in string: "<<count(str,ch)<<endl;
    return 0;
}
