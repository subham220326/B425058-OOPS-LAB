#include<iostream>
using namespace std;
int search(int arr[], int size, int key) {// Function to search for an integer in an integer array
    for(int i=0; i<size; i++) {
        if(arr[i] == key) {
            return i+1; // Return the index if key is found
        }   
    }
    return -1; // Return -1 if key is not found
}
int search(char arr[], int size, char key) {// Function to search for a character in a character array
    for(int i=0; i<size; i++) {
        if(arr[i] == key) {
            return i+1; // Return the index if key is found
        }   
    }
    return -1; // Return -1 if key is not found
}

int search(int arr[],int size,int key,int upto){// Function to search for an integer in an integer array upto a certain index
    for(int i=0;i<upto;i++){
        if(arr[i]==key){
            return i+1; // Return the index if key is found
        }
    }
    return -1; // Return -1 if key is not found
}


int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    char arr2[] = {'a', 'b', 'c', 'd', 'e'};
    int key1 = 3;
    char key2 = 'c';
    int key3 = 4;
    cout<<"Indexes of the searched elements are: "<<endl;
   cout<<search(arr1, 5, key1)<<endl; // Search in integer array
    cout<<search(arr2, 5, key2)<<endl; // Search in character
    cout<<search(arr1, 5, key3, 3)<<endl; // Search in integer array upto index 3
    return 0;
}
