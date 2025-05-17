#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

// Function to calculate GCD
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

// Function to calculate LCM
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int a, b;
        cin >> a >> b;

        // Handle cases
        if (a == b) {
            cout << a << endl;  // If both numbers are the same
        } else {
            cout << lcm(a, b) << endl;  // Compute the least common multiple
        }
    }
    return 0;
}
