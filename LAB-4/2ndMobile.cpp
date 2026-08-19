#include <iostream>
using namespace std;
class Mobile{// Class Declaration
    private:
    string Brand;
    string Model;
    int  BatteryPercentage;
    friend void CheckBattery(Mobile);
};
void CheckBattery(Mobile myMobile){// Friend Function Definition
    myMobile.Brand = "Samsung";
    myMobile.Model = "Galaxy S24 ULTRA";
    myMobile.BatteryPercentage = 85;
    
    cout << "Brand: " << myMobile.Brand << endl;
    cout << "Model: " << myMobile.Model << endl;
   if(myMobile.BatteryPercentage >= 20) {
        cout << "Battery is sufficient." << endl;
    } else {
        cout << "Battery is low." << endl;
    }
}
int main() {
    Mobile myMobile;
    CheckBattery(myMobile);// Calling Friend Function
    return 0;
}
