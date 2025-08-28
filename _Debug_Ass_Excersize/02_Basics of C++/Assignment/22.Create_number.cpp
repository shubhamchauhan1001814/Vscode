#include <iostream>
using namespace std;
int main() {
    int n,p=0;
    for(int i=0;i<100;i++){
        cout << "Enter Number 0 to 9" << endl;
        cout << "Exit press 11" << endl;
        cout << "Your choice : ";
        cin >> n;
        if(n==11){
            break;
        }
        else{
            p=p*10+n;
        }
        cout << endl <<  "Your Number is: "<< p << endl << endl;
    }
    return 0;
}