#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int row = 2 * n + 1;

    for (int i = 0; i < row; i++) {
        int currentRow = (i <= n) ? i : row - i - 1; // Mirror after n

        for (int j = 0; j < 2 * currentRow + 1; j++) {
            if (currentRow == 0 || j == 0 || j == 2 * currentRow) {
                cout << "* ";
            } else {
                if (j <= currentRow) {
                    cout << j << " ";
                } else {
                    cout << 2 * currentRow - j << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
