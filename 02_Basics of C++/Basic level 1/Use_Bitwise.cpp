#include <iostream>
using namespace std;
int main() {

    // Multiply by 2
    // cout << (25<<1) << endl; // MULTIPLY BY 2
    // cout << (-25<<1) << endl; // -VE no multiply
    // cout << (5^5) << endl; // XOR
    // cout << (25>>1) << endl; // Right shift
    // cout << (-25>>1) << endl; // Right Shift with -ve number
    
    int n;
    cout <<"Enter Number: ";
    cin >> n;
    cout << endl;


    // /// Find even and odd 
    // if(n&1){
    //     cout << "Odd Number";
    // }
    // else {
    //     cout << "Even Numver";
    // }
    // cout << endl;



    // find the number of 1s in the input number;
    int Count=0;
  
    while(n!=0){
                if(n&1){
            Count++;
            
        }
        n=n>>1;
    }

    cout << Count;

    // Is there is onother way to counting 1s in the number more efficient


    return 0;
}