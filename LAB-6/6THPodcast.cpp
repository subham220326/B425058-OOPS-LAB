#include <iostream>
using namespace std;
int pod[6]={10,30,10,20,30,40};
int *ptr=pod;
int longest(int *ptr,int n){
    int lar=*ptr;
    ptr++;
    for(int i=1;i<n;i++){
        if(*ptr>lar)
        lar=*ptr;
        ptr++;
    }
    return lar;
}
int main()
{
    int max=longest(ptr,6);
    cout<<max;
}