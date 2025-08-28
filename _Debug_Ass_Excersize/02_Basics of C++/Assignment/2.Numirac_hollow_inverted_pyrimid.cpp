#include <iostream>
using namespace std;

void pattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = i; j <= n; j++) {
            if(j == i || j == n || i == 1)
                cout << j <<" ";
            else
                cout << "  "; // two spaces to maintain spacing alignment
        }
        cout << endl;
    }
}

int main() {
    int n = 5; // You can change this for more rows
    pattern(n);
    return 0;
}
