#include <iostream>
using namespace std;

void posiblity_1(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(j==1 || j==i || i==n)
            cout << j;
            else{
                cout << " ";
            }
            
        }
        cout << endl;
    }

}





    void posiblity_2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i*2; j++){
            if(j%2==1){
            if(j==1 || j/2==i || i==n)
            cout << j/2+1;
            else{
                cout << " ";
            }
        }
        else{
            cout << " ";
        }
    }
        cout << endl;
    }}
    



    




    

int main() {
    int n;
    cout << " Please enter any number :";
    cin >> n;
    cout << endl;
    posiblity_1(n);
    cout << endl;
    posiblity_2(n);

    return 0;
}