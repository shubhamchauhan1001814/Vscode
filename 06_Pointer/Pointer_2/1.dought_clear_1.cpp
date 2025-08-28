#include <iostream>
using namespace std;
void solve(int arr[], int size){
    cout << sizeof(arr);
}


int main() {
    int arr[]={10,20,30,40,50};
    int size=5;
    solve(arr,size);
// in this parameter entire array is not send only starting address is send to this parameter
    //whenever the array is passed through the function it is in the format of pointer.

    return 0;
}
