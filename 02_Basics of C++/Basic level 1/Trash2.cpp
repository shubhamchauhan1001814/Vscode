#include <iostream>
using namespace std;

int binary(int n) {
    int high = 10, low = 0, mid;
    for (; low <= high; ) {
        mid = (high + low) / 2;
        if (mid / 2 + 1 == n) {
            return mid;
        } else if (mid / 2 + 1 < n) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout << "Element not found" << endl;
    return -1; 
}

int main() {
    int INPUT, OUTPUT;
    cin >> INPUT;
    OUTPUT = binary(INPUT);
    cout << OUTPUT << endl;
    return 0;
}