#include <iostream>
using namespace std;

int main() {
    double arr[100];
    static int n = 0;

    for (double i = 1; i < 11; i = i + 1) {
        for (double j = 1; j < 11; j = j + 1) {
            double ans = i / j;
            bool isUnique = true;

            for (int k = 0; k < n; k++) {
                if (arr[k] == ans) {
                    isUnique = false;
                    break;
                }
            }

            if (isUnique) {
                arr[n] = ans;
                n++;
                cout << i << "/" << j << "= " << ans << "    ";
            }
        }
        cout << endl;
    }

    cout << "Unique values stored in array: ";
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

    cout << "Number of unique answers: " << n << endl;

    return 0;
}
