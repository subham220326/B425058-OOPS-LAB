#include <iostream>
using namespace std;
class FoodOrder{
    private:
    int orderId;
    string item;
    int quantity; 
    int price;
  public:
    FoodOrder(string n, int q, int p) { // Parameterized constructor
        item = n;
        quantity = q;
        price = p;
    }
friend void CalculateBill(FoodOrder); // Friend Function Declaration
};
void CalculateBill(FoodOrder order) {
    cout << "Order ID: " << order.orderId << endl;
    cout << "Item: " << order.item << endl;
    cout << "Quantity: " << order.quantity << endl;
    cout << "Price : ₹" << order.price << endl;
    cout << "Total bill for " << order.item << " is ₹" << (order.quantity * order.price) << endl;
}
int main(){
    FoodOrder order1("Pizza", 2, 250);
    CalculateBill(order1);
    return 0;
}

