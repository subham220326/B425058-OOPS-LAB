#include <iostream>
using namespace std;
int status=1;
int *ptr=&status;
void Show(){
if(*ptr==1)
{
cout<<"processing";
}
else if(*ptr==2)
{
    cout<<"shipped";
}
else if(*ptr==3){
   cout<<" delivered";
}
else{
    cout<<"404 error";
}
}
void updateStatus(int *status){
    if(*status<3)
    *status=*status+1;
else
cout<<"404 error";
}
int main(){
    Show();
    updateStatus(ptr);
    Show();
}