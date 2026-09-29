#include <iostream>
using namespace std;
class Dist {
    public:
    int feet;
    int inches;
    Dist(int f, int i) {
        feet = f;
        inches = i;
    }
    Dist() {
        feet = 0;
        inches = 0.0;
    }
    Dist operator +(Dist d2) {
        int totalFeet = feet + d2.feet;
        float totalInches = inches + d2.inches;
        if (totalInches >= 12) {
            totalFeet += 1;
            totalInches = (totalInches - 12);
        }   
        return Dist(totalFeet, totalInches);
    }
};
int main() {
    Dist d1(5, 8);
    Dist d2(3, 11);
    Dist d3 = d1 + d2;
    cout << "Total Distance: " << d3.feet << " feet and " << d3.inches << " inches." << endl;
    return 0;
}
