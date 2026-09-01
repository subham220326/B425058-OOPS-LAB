#include <iostream>
using namespace std;
char arr[4]={'a','b','1','2'};
char *ptr=arr;
void Count(){
    int c=0,n=0,s=0;
    for(int i=0;i<4;i++)
    {
        if(*ptr<='z'&& *ptr>='a')
        c++;
        else if(*ptr == ' ')
        s++;
        else
        n++;
        ptr++;
    }
    cout<<s<<" "<<n<<" "<<c;
}
int main(){
Count();
}