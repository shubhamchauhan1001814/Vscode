#include <iostream>
using namespace std;
int main() {
    int a=5;
    cout << a << endl;


    int *ptr = new int;
    *ptr=5;
    cout << *ptr << endl;
    
    delete ptr;




// array -> stack memory

    int arr[5];
    cout << arr[0] << arr[1] << arr[2] << endl;
    cout << sizeof(arr) << endl;

    // array - heap memoty
    int *brr= new int[5];
    cout << brr[0] << brr[1] << brr[2] << endl;
    cout << sizeof(brr);





    // creating 2D-array in stack memory
    int crr[2][4] ={0};


    // creating 2D array in heap memory
    int ** drr = new int *[4];
    for( int i=0;i<4; i++){
        drr[i] = new int[3];
    }

// Take inputs 
cout << endl << "Enter the Element in array" << endl;
for (int i=0; i<4;i++){
    for (int j=0; j<3; j++){
        cin >> drr[i][j];
    }
    cout << endl;
}


cout << endl << "Printing the 2d array" << endl;
for (int i=0; i<4;i++){
    for (int j=0; j<3; j++){
        cout << drr[i][j] << " ";
    }
    cout << endl;
}
for(int i=0;i<4;i++){
    delete[] drr[i];
}
    return 0;
}