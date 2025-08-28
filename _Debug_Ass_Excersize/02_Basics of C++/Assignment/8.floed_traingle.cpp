#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int row = 2 * n + 1;
    int m = 1;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << m << " ";
            m++;
        }
        cout << endl;
    }

    return 0;
}
