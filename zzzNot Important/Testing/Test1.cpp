#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Loop through multipliers 1 to 10
    for (int j = 1; j <= 20; ++j) {
        // Loop through numbers 1 to 20
        for (int i = 1; i <= 20; ++i) {
            bool n;
            cin >> n;
            if (n){
                if(i*j/10 ==0){
                cout << "    " <<i * j ;

            }
            else if(i*j/100==0){
                cout <<"   "<<  i * j;
            }
            else if(i*j/1000==0){
                cout <<  "  " << i * j;

            }
            else{
                cout << " "<< i * j;
            }
            }
            
            
        }
        cout << endl; // New line after each row
    }
    int n;
    cin >> n;
    return 0;
}
