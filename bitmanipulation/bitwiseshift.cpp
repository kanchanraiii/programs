// To show the bitwise shift operations

#include<iostream>
using namespace std;

int leftShift(int n, int k) {
    return n << k; // Left shift by k bits
}

int rightShift(int n, int k) {
    return n >> k; // Right shift by k bits
}

int main() {
    int n, k;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the number of positions to shift: ";
    cin >> k;

    int leftShifted = leftShift(n, k);
    int rightShifted = rightShift(n, k);

    cout << "Left shift of " << n << " by " << k << " positions is: " << leftShifted << endl;
    cout << "Right shift of " << n << " by " << k << " positions is: " << rightShifted << endl;

    return 0;
}