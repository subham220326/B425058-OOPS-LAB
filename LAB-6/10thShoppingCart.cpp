#include <iostream>
using namespace std;
class Cart{
    public:
    int item;
    int quantity;
    string name;
    Cart(int i,int q,string n)
    {
        item=i;
        quantity=q;
        name=n;
    }
    Cart operator +(Cart i2){
        if(item==i2.item && name==i2.name){
            int totalQuantity=quantity+i2.quantity;
            return Cart(item,totalQuantity,name);
        }
        else{
            cout<<"Items are not same, cannot add quantities."<<endl;
            return Cart(0,0,"");
        }
    }
    Cart operator >(Cart i2){
        if(quantity>i2.quantity){
            return *this;
        }
        else{
            return i2;
        }
    }
};
int main(){
    Cart C1(101,50,"Widget");
    Cart C2(101,30,"Widget");
    Cart C4=C1>C2;
    if(C4.quantity==C1.quantity){
        cout<<"C1 has more quantity than C2"<<endl;
    }
    else{
        cout<<"C2 has more quantity than C1"<<endl;
    }
    Cart C3=C1+C2;
    if(C3.item!=0){
        cout<<"Total Quantity of "<<C3.name<<": "<<C3.quantity<<endl;
    }
}