#include <iostream>
using namespace std;
int Equal(int a){
    if(a%2==0){
       return 0;
    }
    return 1;
}

int main() {
    int a;
    cout << "Enter the number ";
    cin >> a;
    int r =Equal(a);
    if(r==0){
        cout << "Even";
    }  
    else cout << "Odd";
    
    return 0;
}