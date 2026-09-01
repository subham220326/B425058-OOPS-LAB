#include <iostream>
using namespace std;
int NoofEquip[6]={1,2,3,4,5,6};
int *ptr=NoofEquip;
void displayEquip(){
    cout<<"No of Equipments :";
    for(int i=0;i<6;i++){
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;
}
void displayAddress(){
    cout<<"Address of Equipments :\n";
    for(int i=0;i<6;i++){
        cout<<"Address of "<<*(ptr+i)<<" is : ";
        cout<<ptr+i<<endl;
    }
}
int main(){
    displayEquip();
    displayAddress();
    return 0;
}