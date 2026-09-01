#include <iostream>
using namespace std;
int level=50;
int *ptr=&level;
void displayWater()
{
    cout<<"Water Level is :";
    cout<<*ptr<<endl;
}
void addWater(int x){
    *ptr=*ptr+x;
}
void removeWater(int x){
    *ptr=*ptr-x;
}
int main(){
    displayWater();
    addWater(20);
    removeWater(50);
    displayWater();
    return 0;
}