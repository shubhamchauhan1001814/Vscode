#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the hight of Pyramid: ";
    cin >> n;
    cout << endl;


// My logic To made a pyramid
    // for(int i=0;i<n;i+=1){
    //     for(int j=0; j<=(2<<n)-1;j++){
    //         if(j>=n-i && j<=n+i){
    //             cout << "* ";
    //         }
    //         else{
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    
// Sir logic to make the pyramid

        for(int i=0;i<n;i+=1){
        for(int j=0; j<=(2<<n)-1;j++){
            if(j==n-i ||  j==n+i || i==n-1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }


    return 0;
}