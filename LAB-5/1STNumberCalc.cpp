#include<iostream>
using namespace std;

int add(int a, int b) {// Function to add two integers
    return a + b;
}
int add(int a, int b, int c) {// Function to add three integers
    return a + b + c;
}
float add(float a, float b) {// Function to add two floats
    return a + b;
}
int main() {
    int x = 5, y = 10, z = 15;
    float m = 2.5, n = 3.5;
    cout << "Sum of two integers: " << add(x, y) << endl;
    cout << "Sum of three integers: " << add(x, y, z) << endl;
    cout << "Sum of two floats: " << add(m, n) << endl;
    return 0;
}