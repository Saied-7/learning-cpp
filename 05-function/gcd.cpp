//Greatest Common Divisor (GCD) using euclidean algorithm
#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
    a = abs(a);
    b = abs(b);
    
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    
    return 0;
}