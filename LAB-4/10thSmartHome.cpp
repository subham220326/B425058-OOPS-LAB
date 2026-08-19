#include <iostream>
using namespace std;
class SmartDevice{
    private:
    string deviceName;
    string status; 
    int powerStatus; // 0 for off, 1 for on
  public:
    SmartDevice(string n, string s, int p) { // Parameterized constructor
        deviceName = n;
        status = s;
        powerStatus = p;
    }
    friend class HomeController; // Friend Class Declaration
};
class HomeController{
    public:
    void DisplayDeviceDetail(SmartDevice device1){
        cout << "Device Name: " << device1.deviceName << endl;
        cout << "Status: " << device1.status << endl;
        cout << "Power Status: " << (device1.powerStatus == 1 ? "On" : "Off") << endl;
    }
    void TogglePower(SmartDevice &device1){
        device1.powerStatus = (device1.powerStatus == 1) ? 0 : 1; // Toggle power status
        cout << "Power Status of " << device1.deviceName << " is now " << (device1.powerStatus == 1 ? "On" : "Off") << endl;
    }
};
int main(){
    SmartDevice device1("Smart Light", "Active", 1);
    HomeController homeController; 
    homeController.DisplayDeviceDetail(device1);
    homeController.TogglePower(device1);
        cout<<"-----------------------------"<<endl;
    homeController.DisplayDeviceDetail(device1);
    return 0;
}
