#include <iostream>
using namespace std;

int main() {
    int arr[100] = {0};

    for (int j = 1; j <= 100; j++)
        for (int k = j; k <= 100; k += j)
            arr[k - 1] ^= 1;  // Toggle using XOR

    cout << "Open doors: ";
    int open = 0;
    for (int i = 0; i < 100; i++)
        if (arr[i]) cout << i + 1 << " ", open++;

    cout << "\nTotal open: " << open << endl;
    return 0;
}