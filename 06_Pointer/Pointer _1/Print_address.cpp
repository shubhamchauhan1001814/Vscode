#include <iostream>
using namespace std;
int main() {
    int a =5;
    cout << &a << endl;
    int b[5]={1,2,3,4,5};
    cout << &b << endl;
    for(int i=0;i<5;i++){
        cout << &b[i] << " ";
    }

    return 0;
}