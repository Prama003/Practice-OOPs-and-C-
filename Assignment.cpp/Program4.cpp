#include <iostream>
using namespace std;

// Function to check if a number is prime
int isprime(int num) {
    if (num <= 1) {
        return 0; // Numbers <= 1 are not prime
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0; // Not prime if divisible by any number other than 1 and itself
        }
    }
    return 1; // Prime
}

int main() {
    int number;
    
    // Input from the user
    cout << "Enter a number: ";
    cin >> number;
    
    // Check if the number is prime and display the result
    if (isprime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }

    return 0;
}
