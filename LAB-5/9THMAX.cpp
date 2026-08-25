#include <iostream>
using namespace std;
int max(int a, int b) {// Function to find the maximum of two integers
    return (a > b) ? a : b;
}
int max(int *ptr1, int *ptr2) {// Function to find the maximum of two integers using pointers
    return (*ptr1 > *ptr2) ? *ptr1 : *ptr2;
}
int max(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
int main() {
    int x = 5, y = 10;
    int *ptr1 = &x, *ptr2 = &y;
    int arr[] = {1, 2, 3, 4, 5};
    cout << "Maximum of two integers: " << max(x, y) << endl;   
    cout << "Maximum of two integers using pointers: " << max(ptr1, ptr2) << endl;
    cout << "Maximum in the array: " << max(arr, 5) << endl;
    return 0;
}