#include <iostream>
using namespace std;

long long int fact(int n){
    int k=1;
    for(int i=1;i<=n;i++){
        k=k*i;
    }
    return k;
}
int main() {

    cout << "Enter the number: ";
    int n;
    cin >> n;
    int result = fact(n);
    cout << result;
    return 0;
}