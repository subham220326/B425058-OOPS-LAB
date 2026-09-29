#include <iostream>
using namespace std;
int find(int *arr,int n,int x){
    for(int i=0;i<n;i++){
      if(*arr==x)
      {
        cout<<"found"<<endl;
      return i;
      }
      arr++;            
    }
    return -1;
}
int main(){
    int *contact=new int[3];
    contact[0]=1;
    contact[1]=2;
    contact[2]=3;
    cout<<find(contact,3,2)<<endl;
    delete[] contact;
    free(contact);
}