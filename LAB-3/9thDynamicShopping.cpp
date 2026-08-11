#include <iostream>
using namespace std;
class ShoppingCart{//class for shopping cart details
    public:
    int ProductId;
    string ProductName;
    int Price;
    int Quantity;
    int TotalPrice;
    void userInput()//Taking user input for shopping cart details
    {
        cout<<"Enter Product Id: ";
        cin>>ProductId;
        cout<<"Enter Product Name: ";
        cin>>ProductName;
        cout<<"Enter Price: ";
        cin>>Price;
        cout<<"Enter Quantity: ";
        cin>>Quantity;
    }
    void display()//Displaying shopping cart details
    {
        cout<<"ProductId: "<<ProductId<<endl;
        cout<<"ProductName: "<<ProductName<<endl;
        cout<<"Price: "<<Price<<endl;
        cout<<"Quantity: "<<Quantity<<endl;
        TotalPrice=Quantity*Price;
        cout<<"Total Price: "<<TotalPrice<<endl;
    }
};
int main()
{
    ShoppingCart *ptr = new ShoppingCart[3]; //dynamic memory allocation for object of shopping cart
    for(int i=0;i<3;i++)
    {
        ptr[i].userInput();
    }
    for(int i=0;i<3;i++)
    {
        cout<<"-----------------------------";
        ptr[i].display();
    }
  cout<<"Total Price of all products: "<<ptr[0].TotalPrice+ptr[1].TotalPrice+ptr[2].TotalPrice<<endl;
    delete[] ptr;
    ptr=nullptr;//to avoid dangling pointer
}