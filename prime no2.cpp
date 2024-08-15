#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " is not a prime number." << endl;
        return 0;
    }

    // Check divisors
    for (int i = 2;  i <= num/2; i++) {
        if (num % i == 0) {
            cout << num << " is not a prime number." << endl;
            return 0;
        }
    }

    // If no divisors found, it's prime
    cout << num << " is a prime number." << endl;
    return 0;
}
