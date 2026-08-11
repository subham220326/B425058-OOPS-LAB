#include <iostream>
using namespace std;
int main(){
    int **ptr= new int*[2]; //dynamically allocating memory for 2D array
    for(int i=0;i<2;i++){
        ptr[i]=new int[2];
    }
    cout<<"Enter 4 no : ";
    for(int i=0;i<2;i++){//taking the user input
        for(int j=0;j<2;j++){
            cin>>ptr[i][j];
        }
    }
    cout<<"The 2D array is : "<<endl;
    for(int i=0;i<2;i++){//displaying the 2D array
        for(int j=0;j<2;j++){
            cout<<ptr[i][j]<<" ";
        }
        cout<<endl;
    }


    // deallocate the memory
    for(int i=0;i<2;i++){
        delete[] ptr[i];
    }
    delete[] ptr;
    ptr=nullptr;//to avoid dangling pointer
}