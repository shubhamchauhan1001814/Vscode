#include <iostream>
using namespace std;
int main() {
    int n,p;
    cout << "Enter the number :";
    cin >> n;
    cout << endl;
    while(n!=0){
        p=n%10;
        cout << p << endl;
        n=n/10;
    }
    return 0;
}