#include <iostream>
using namespace std;
class Neg{
    public:
    int N;
    Neg(int i)
    {
        N=i;
    }
    int operator -()
    {
    return (-1*N);
    }
};
int main(){
    Neg N1(10);
    cout<<-N1;
}