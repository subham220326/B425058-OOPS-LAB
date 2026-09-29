#include <iostream>
using namespace std;
class Comp
{
public:
int real;
int imag;
Comp(int r,int i)
{
    real=r;
    imag=i;
}
Comp operator -(Comp d2) {
        int diffreal =  real - d2.real;
        float diffimag = imag - d2.imag;  
        return Comp(diffreal, diffimag);
    }
};
int main() {
    Comp d1(5, 8);
    Comp d2(3, 1);
    Comp d3 = d1 - d2;
    if(d3.imag<0){
cout << "Difference: " << d3.real << " " << d3.imag << " i" << endl;
    }
    else{
        cout << "Difference: " << d3.real << " + " << d3.imag << "i" << endl;
    }
    
    return 0;
}