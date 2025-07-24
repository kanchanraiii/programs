// To find one's comliment of a number

#include<iostream>
using namespace std;

int onesComplement(int n) {
    int numBits = sizeof(n) * 8; 
    int mask = (1 << numBits) - 1;
    return n ^ mask;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = onesComplement(n);
    cout << "One's complement of " << n << " is: " << result << endl;

    return 0;
}