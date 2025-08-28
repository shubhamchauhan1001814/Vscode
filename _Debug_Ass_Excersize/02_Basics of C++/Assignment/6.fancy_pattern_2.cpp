#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows (half): ";
    cin >> n;
    cout << endl;

    int count = 1;

    // First half (including middle)
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << count;
            if (j != i) cout << "*"; // put * only between numbers
            count++;
        }
        cout << endl;
    }

    // Second half
    count = count - n; // adjust starting point for lower half
    for (int i = n; i >= 1; i--) {
        int temp = count;
        for (int j = 1; j <= i; j++) {
            cout << temp;
            if (j != i) cout << "*";
            temp++;
        }
        cout << endl;
        count = count - (i - 1);
    }

    return 0;
}
