#include <iostream>
using namespace std;
class Door{
    private:
    string doorNo;
    string status; 
  public:
    Door(string id, string s) { // Parameterized constructor
        doorNo = id;
        status = s;
    }
    friend class SecuritySystem; // Friend Class Declaration
};
class SecuritySystem{
public:
    void checkLockStatus(Door door) { // Friend Function Declaration
        cout << "Status: " << door.status << endl;
    }
};
int main(){
    Door door1("D001", "Locked");
    SecuritySystem security;
    security.checkLockStatus(door1);
    return 0;
}