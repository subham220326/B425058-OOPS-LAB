#include<iostream>
using namespace std;

int largest(int a, int b) {// Function to find the largest of two integers
   return (a > b) ? a : b;
}
int largest(int a, int b, int c) {// Function to find the largest of three integers
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}
float largest(float a, float b) {// Function to find the largest of two floats
    return (a > b) ? a : b;
}
int main() {
    int x = 5, y = 10, z = 15;
    float m = 2.5, n = 3.5;
    cout << "Largest of two integers: " << largest(x, y) << endl;
    cout << "Largest of three integers: " << largest(x, y, z) << endl;
    cout << "Largest of two floats: " << largest(m, n) << endl;
    return 0;
}