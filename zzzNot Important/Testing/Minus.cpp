#include <iostream>
using namespace std;
int main() {
    double arr[30];
    double brr[30];
    arr[0]=0;
    int count = 0;
    for(int i=1; i<30; i++){
        cin >> arr[i];
        if(arr[i]==0){
break;  
        }
        brr[i-1]=arr[i]-arr[i-1];
        count++;
    }

    cout << endl;
    for(int i =0; i<count; i++){
        cout << arr[i+1] << "----->" << brr[i+1] << endl;
    }

    return 0;
}
