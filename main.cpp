#include <iostream>
#include <cmath> // For using the sqrt() function

using namespace std;

void primeNumber() {
    for (int i = 2; i < 100; i++) {
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " "; // Output the prime number
        }
    }
    cout << endl; // For a newline after all prime numbers are printed
}

int main() {
    primeNumber();
    return 0;
}
