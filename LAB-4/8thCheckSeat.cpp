#include <iostream>
#include <string>
using namespace std;

class TrainSeat {
private:
    int seatNumber;
    string passengerName;
    bool isBooked;

public:
    TrainSeat(int num, string name, bool status) 
        : seatNumber(num), passengerName(name), isBooked(status) {}

    friend class TicketChecker; // Grants access to private members
};

class TicketChecker {
public:
    void showDetails(TrainSeat s) {
        cout << "Seat: " << s.seatNumber << " | Status: " << (s.isBooked ? "Booked" : "Available") << endl;
    }

    void checkStatus(TrainSeat s) {
        cout << "Seat " << s.seatNumber << " is " << (s.isBooked ? "Booked" : "Available") << endl;
    }

    void showPassenger(TrainSeat s) {
        if (s.isBooked)
            cout << "Passenger: " << s.passengerName << endl;
        else
            cout << "Seat is not booked." << endl;
    }
};

int main() {
    TrainSeat s1(101, "Alice", true);
    TicketChecker tc;

    tc.showDetails(s1);
    tc.checkStatus(s1);
    tc.showPassenger(s1);

    return 0;
}
