#include <iostream>
using namespace std;
bool slotOccupied[4] = {false, false, false, false}; // Array to track slot occupancy
class ParkingLot {// Class Declaration
    private:
     int SlotNo;
     string VechileNo;
     bool IsOccupied;
    friend void checkSlot(ParkingLot);// Friend Function Declaration
};
 void checkSlot(ParkingLot myParkingLot){// Friend Function Definition
    myParkingLot.SlotNo = 1;
    myParkingLot.VechileNo = "MH12AB1234";
    myParkingLot.IsOccupied = true;
    slotOccupied[myParkingLot.SlotNo - 1] = myParkingLot.IsOccupied; // Update occupancy status
    
    cout << "Slot Number: " << myParkingLot.SlotNo << endl;
    cout << "Vehicle Number: " << myParkingLot.VechileNo << endl;
   if(slotOccupied[myParkingLot.SlotNo - 1]) {
        cout << "The parking slot is occupied." << endl;
    } else {
        cout << "The parking slot is available." << endl;
    }
}

int main(){
    ParkingLot *myParkingLot=new ParkingLot[4];
    checkSlot(myParkingLot[0]);

}
