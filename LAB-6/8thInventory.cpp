#include <iostream>
using namespace std;
class Inventory{
    public:
    int item;
    int quantity;
    string name;
    Inventory(int i,int q,string n)
    {
        item=i;
        quantity=q;
        name=n;
    }
    Inventory operator +(Inventory i2){
        if(item==i2.item && name==i2.name){
            int totalQuantity=quantity+i2.quantity;
            return Inventory(item,totalQuantity,name);
        }
        else{
            cout<<"Items are not same, cannot add quantities."<<endl;
            return Inventory(0,0,"");
        }
    }
};
int main(){
    Inventory I1(101,50,"Widget");
    Inventory I2(101,30,"Widget");
    Inventory I3=I1+I2;
    if(I3.item!=0){
        cout<<"Total Quantity of "<<I3.name<<": "<<I3.quantity<<endl;
    }
}