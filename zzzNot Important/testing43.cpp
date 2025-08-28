#include <iostream>
using namespace std;

void pattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            if(j == n || j == i || i == n)
                cout << j << "*";
            else
                cout << "##"; // two spaces to maintain spacing alignment
        }
        cout << endl;
    }
}

int main() {
    int n = 5; // You can change this for more rows
    pattern(n);
    return 0;
}
