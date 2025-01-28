#include <iostream>
using namespace std;

// Function to check if a number is prime
int isPrime(int num) {
    int count = 0;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            count++;
            break;
        }
    }

    for (int u = 3; u < num; u++) {
        if (num % u == 0) {
            count++;
            break;
        }
    }

    for (int k = 5; k < num; k++) {
        if (num % k == 0) {
            count++;
            break;
        }
    }

    for (int g = 7; g < num; g++) {
        if (num % g == 0) {
            count++;
            break;
        }
    }

    return count == 0 ? 1 : 0;
}

int main() {
    int num;
    cout << "Enter your num: ";
    cin >> num;

    if (isPrime(num) == 1) {
        cout << "The number is a prime" << endl;
    } else {
        cout << "The number isn't" << endl;
    }

    return 0;
}
