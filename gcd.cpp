#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a; // Base case: when b becomes zero, a is the GCD
    } else {
        return gcd(b, a % b); // Recursive step: recursively call gcd with b and the remainder of a divided by b
    }
}

int main() {
    int num1=63, num2=42;
    
    int result = gcd(num1, num2);
    cout << "GCD: " << result << endl;

    return 0;
}
