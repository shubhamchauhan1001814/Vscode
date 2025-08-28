#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void prime_function(vector<int>& arr, int check) {
    for (int i = 2; i <= check; i++) {
        bool is_prime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            arr.push_back(i);  // Add prime numbers to arr
        }
    }
}

int main() {
    cout << "Enter the number: ";
    int n;
    cin >> n;
    cout << endl;

    int check = sqrt(n) + 1;
    vector<int> arr;
    prime_function(arr, n);  // Call to find primes up to check

    // Print the primes found in arr
    cout << "Prime numbers up to " << n << " are : ";
    for (int j = 0; j < arr.size(); j++) {
        cout << arr[j] << " ";
    }
    cout << endl << "There prime number are: " << arr.size() <<  endl;



    return 0;
}
