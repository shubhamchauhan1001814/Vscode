#include <iostream>
using namespace std;

void method_1(int n){
    if(n%2==1){
cout << " odd";
    }
    else{
        cout << " even";
    }
}


void method_2(int n){
    if(n&1==true){
        cout <<"odd";
    }
    else{
        cout <<"even";
    }

}
int main() {
    cout << "Enter the number : ";
    int n;
    cin >> n;
    cout << endl;
    method_1(n);
    cout << endl;
    method_2(n);
    return 0;
}