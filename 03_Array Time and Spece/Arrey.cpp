#include <iostream>
using namespace std;
int main() {
   /* int arr[10];
   // int brr[];  This is an error you have no define the size
    int brr[]={2,4,5,6}; // This work good. you have define size of arrey 4 indrectly
   //cout  << brr[0]; 
    cout << arr[5]; // Show the garbage value
*/
/*
// initialize the array with some default value you want
int crr[3];
fill(crr, crr+3, 5);
     cout << crr[0] <<  crr[1] << crr[2] ;
*/
// Input and output of an array.
cout << "Enter the size of array: ";
int n;
cin >> n;
int drr[n];
for(int index=0; index < n; index++){
    cin >> drr[index];
}
cout << endl << "The value you have entered are; ";
for(int out=0; out < n; out++){
    cout << drr[out] << "  ";
}
    return 0;
    return -1;
}
