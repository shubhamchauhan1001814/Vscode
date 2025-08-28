#include <iostream>
using namespace std;
int main() {
        cout << "Enter the number :";
    int n;
    cin >> n;
    cout << endl;
    int ans=1;
    for(int i=n;i>=1;i--){
        ans=ans*i;
    }
    cout << ans <<endl;
    return 0;
}