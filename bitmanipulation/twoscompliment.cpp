// To find two's complement of a number

#include<iostream>
using namespace std;

int twosComplement(int n) {
    return ~n + 1; 
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = twosComplement(n);
    cout << "Two's complement of " << n << " is: " << result << endl;

    return 0;
}