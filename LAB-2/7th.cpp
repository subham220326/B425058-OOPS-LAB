#include <iostream>
using namespace std;
class Product{//CREATED A CLASS NAME PRODUCT
     public:
    int id;
    char name[100];
    int Quantity;
    float PricePerUnit;
    void UserInput(){//CREATED A FUNCTION TO TAKE INPUT
      cout << "enter productId  : ";
      cin>>id;
      cout << "enter Name : ";
      cin>>name;
      cout << "enter Quantity : ";
      cin>>Quantity;
      cout << "enter Price : ";
      cin>>PricePerUnit;
    }
    void Detail(){//CREATED A FUNCTION TO DISPLAY THE OUTPUT
        cout<<"Product Id : "<<id<<"\nName : "<<name<<"\nQuantity : "<<Quantity<<"\nPrice Per Unit : "<<PricePerUnit;
        }
    
        


    void Selling(){//CREATED A FUNCTION TO SELL THE PRODUCT
      if(Quantity>0){
        int sell;
        cout << "\nenter Quantity to Sell : ";
        cin>>sell;
        if(sell<=Quantity){
            Quantity-=sell;
            cout<<"\nTotal Price : "<<sell*PricePerUnit;
        }
        else
            cout << "\nInsufficient Quantity." << endl;
      }
      else
          cout << "\nProduct is out of stock." << endl;
    }
    void TotalInventoryValue(){//CREATED A FUNCTION TO CALCULATE TOTAL INVENTORY VALUE
        cout << "\nTotal Inventory Value : " << Quantity * PricePerUnit << endl;
    }
};




int main(){
  Product p1;//CREATED AN OBJECT OF CLASS PRODUCT
  p1.UserInput();
  p1.Detail();

  p1.Selling();
  p1.TotalInventoryValue();
}
