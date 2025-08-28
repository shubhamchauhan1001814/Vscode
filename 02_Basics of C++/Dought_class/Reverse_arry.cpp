#include <iostream>
#include <algorithm>
using namespace std;
void swap(int arr[],int n){
int l=0, h=n-1;
while(l<h){
swap(arr[l],arr[h]);
l++;
h--;
}

}
int main() {
    cout << "Enter the size of array:";
    int n;
    cin >> n;
    
    int arr[n];
    for(int i=0; i<n; i++ ){
        arr[i]= i+1;
    }
    for(int j=0; j<n;j++){
        cout << arr[j] << " ";
    }
n=sizeof(arr)/sizeof(arr[0]);
// // Method_1

// swap(arr,n);

// Method_2 by using function 
reverse(arr, arr + n);




cout << endl <<endl;
    for(int j=0; j<n;j++){
        cout << arr[j] << " ";
    }


    return 0;
}