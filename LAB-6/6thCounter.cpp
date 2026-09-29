#include <iostream>
using namespace std;
class Counter{
    public:
    int N;
    Counter(int i)
    {
        N=i;
    }
    Counter operator ++()
    {
        N++;
        return Counter(N);
    }
    Counter operator ++(int)
    {
        Counter temp(N);
        N++;
        return temp;
    }
};
int main(){
    Counter C1(10);
    cout<<"the value of C1 is: ";
    cout<<C1.N<<endl;
    Counter C2=C1++;
    cout<<"the value of C1 and C2 after C1++ is: ";
    cout<<C1.N<<endl;
    cout<<C2.N<<endl;   
    cout<<"the value of C1 after ++C1 is: ";
    ++C1;
    cout<<C1.N<<endl;
    C1++;
    cout<<C1.N<<endl;
}