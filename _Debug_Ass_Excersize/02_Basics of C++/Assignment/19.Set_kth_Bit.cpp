#include <iostream>
#include <vector>
using namespace std;

int setKthBit(int n, int k) {
    vector<int> arr;
    int sum = 0, temp = 1;

    // Convert decimal to binary (LSB to MSB)
    for (int tempN = n; tempN > 0; tempN /= 2) {
        arr.push_back(tempN % 2);
    }

    // Ensure the k-th bit exists (pad with zeros if needed)
    while (arr.size() <= k) {
        arr.push_back(0);
    }

    // Set the k-th bit from right (LSB is index 0)
    arr[k] = 1;

    // Debug: print the binary after setting the bit
    cout << "Binary after setting bit: ";
    for (int i = arr.size() - 1; i >= 0; i--) {
        cout << arr[i];
    }
    cout << endl;

    // Convert back to decimal
    for (int j = 0; j < arr.size(); j++) {
        sum += arr[j] * temp;
        temp *= 2;
    }

    return sum;
}

int main() {
    int n, k;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Enter the bit position to set (0-based from right): ";
    cin >> k;

    int ans = setKthBit(n, k);
    cout << "The result is: " << ans << endl;

    return 0;
}
