#include <iostream>
using namespace std;
int main() {
        cout << "Enter the number :";
    int n;
    cin >> n;
    cout << endl;
    int p=0;
    while(n!=0){
        p=p+n%10;
        n=n/10;
        if(n!=0){
            p=p*10;
        }
    }
    cout << p <<endl;
    return 0;
}