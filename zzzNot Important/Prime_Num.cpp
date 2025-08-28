#include <iostream>
#include <math.h>
using namespace std;

int main() {
    cout << "Enter the number till you need the prime number" << endl;
    int n,count=0;
    cin >> n;

    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << i << " ";
            count++;
        }
    }
    cout << endl << "Total Prime number present from 1 to " << n << " is: " << count;
    return 0;
}