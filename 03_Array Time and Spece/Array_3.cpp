#include <iostream>
#include <vector>
using namespace std;
int main() {
    // vector<int>a;
    // a.push_back(10);
    // a.push_back(20);
    // a.push_back(30);
    // a.push_back(40);
    // a.push_back(50);


    int arr
    [3]// first consider as row 
    [4]// Second is column
     = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    /*
    This is also valid
        int arr[3][4] = {1, 2, 3, 4,5, 6, 7, 8,9, 10, 11, 12};
    */

    int n = sizeof(arr) / sizeof(int);
    cout << "Total elements: " << n << endl;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << " ";
        }
        cout << endl; // Add newline after each row
    }
    int rowSize=4, colSize=3;

    // for(int r=0; r<rowSize; r++){
    //     for (int c=0; c<colSize; c++){
    //         cout << arr[c][r] << "";
        
    //     }
    //     cout << endl;
    // }


//H.W
    // diogonl Martix
    // othe diogonal also


    int prr[2][3];
    int Row =2;
    int Col =3;

    // taking input --> row -wise



    return 0;
}