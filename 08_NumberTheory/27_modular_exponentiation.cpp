#include <iostream>
using namespace std;

// Modular exponentiation using decrease and conquer
long long modularExp(long long base, long long exp, long long mod) {
    if (exp == 0) return 1;
    
    long long result = modularExp(base, exp / 2, mod);
    result = (result * result) % mod;
    
    if (exp % 2 == 1) {
        result = (result * base) % mod;
    }
    
    return result;
}

// Iterative approach (alternative)
long long modularExpIterative(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;
    
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        exp = exp / 2;
        base = (base * base) % mod;
    }
    
    return result;
}

int main() {
    long long base, exp, mod;
    
    cout << "Enter base: ";
    cin >> base;
    
    cout << "Enter exponent: ";
    cin >> exp;
    
    cout << "Enter modulus: ";
    cin >> mod;
    
    long long result1 = modularExp(base, exp, mod);
    long long result2 = modularExpIterative(base, exp, mod);
    
    cout << "Using recursive approach: " << base << "^" << exp << " mod " << mod << " = " << result1 << endl;
    cout << "Using iterative approach: " << base << "^" << exp << " mod " << mod << " = " << result2 << endl;
    
    return 0;
}
