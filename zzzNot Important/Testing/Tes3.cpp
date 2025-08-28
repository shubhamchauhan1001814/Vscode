#include <iostream>
using namespace std;
int main() {
    for(int i=1; i<20; i++){
        cout << i << "= " << i*i << endl;
    }

    // Loop through numbers 1 to 20
    for (int i = 1; i <= 20; ++i) {
        cout << "\nTable of " << i << ":" << endl;
        // Loop through multipliers 1 to 10
        for (int j = 1; j <= 10; ++j) {
            cout << i << " * " << j << " = " << i * j << endl;
        }
    }


    return 0;
}
