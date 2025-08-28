#include <iostream>
using namespace std;

// n -> Input Parameter

void print_2_table(int n){
    for(int i=1; i<=10 ;i++){
        cout << n*i << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print_2_table(n);
    return 0;
}