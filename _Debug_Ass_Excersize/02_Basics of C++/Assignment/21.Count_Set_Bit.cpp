#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    int n, p;

    cout << "Enter the number: ";
    cin >> n;

    // Extract digits in reverse order
    while (n != 0) {
        p = n % 2;
        n = n / 2;
        arr.push_back(p);
    }
p=0;
    // Print digits in original order using iterator (reverse iterator)
    cout << "Digits in original order: ";
    for (vector<int>::reverse_iterator it = arr.rbegin(); it != arr.rend(); ++it) {
        cout << *it << " ";
        if(*it==1){
            p++;
        }
    }
    cout << endl << p << endl;

    return 0;
}