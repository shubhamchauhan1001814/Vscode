#include <iostream>
using namespace std;
int reverse(int num){
    int k=0;
    while(num/10!=0){
            k=k+num%10;
            k=k*10;
            num=num/10;
    }
    return k+num;
}

int main() {
    cout << "Enter the number:";
    int num;
    cin >> num;
    cout << endl << "Reverse of number is : ";
    int result = reverse(num);
    cout << result;
    return 0;
}