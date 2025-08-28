#include <iostream>
#include <vector>

using namespace std;

// Search function for a fixed-size 2D array
bool search_in_2d(int arr[][4], int rowSize, int colSize, int target) {
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

// Search function for a vector 2D array
bool vetor2dsercharray(vector<vector<int>> &arr, int target) {
    int rowSize = arr.size();
    int colSize = arr[0].size(); // Fixed: Use arr[0].size() for columns

    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            if (arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

// Find minimum element in a 2D vector
int vector_min(vector<vector<int>> &arr) {
    int row = arr.size();
    int col = arr[0].size(); // Fixed: Use arr[0].size() for correct column size

    int m = arr[0][0]; // Fixed: Initialize with the first element
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            m = min(m, arr[i][j]);
        }
    }
    return m;
}

int vector_max(vector<vector<int>> &arr) {
    int row = arr.size();
    int col = arr[0].size(); // Fixed: Use arr[0].size() for correct column size

    int m = arr[0][0]; // Fixed: Initialize with the first element
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            m = max(m, arr[i][j]);
        }
    }
    return m;
}

void vector_row_sum(vector<vector<int>> &arr){
    int row = arr.size();
    int col = arr[0].size();
    int m = 0; // Fixed: Initialize with the first element
    for (int i = 0; i < row; i++) {
        m=0;
        for (int j = 0; j < col; j++) {
            m = m+ arr[i][j];
            cout << arr[i][j] << " ";
        }
        cout << "sum of Row_" << i << " is " << m << endl; 
    }
    cout << endl;

}

void vector_col_sum(vector<vector<int>> &arr){
    int row = arr.size();
    int col = arr[0].size();
    int m = 0; // Fixed: Initialize with the first element
    for (int i = 0; i < col; i++) {
        m=0;
        for (int j = 0; j < row; j++) {
            m = m+ arr[j][i];
            cout << arr[j][i] << " ";
        }
        cout << "sum of Col_" << i << " is " << m << endl; 
    }
    cout << endl;
}

void vector_sum(vector<vector<int>> &arr){
    int row = arr.size();
    int col = arr[0].size(); // Fixed: Use arr[0].size() for correct column size

    int m = 0; // Fixed: Initialize with the first element
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            m = m+arr[i][j];
            
        }
    }
    cout<< m << endl;

}


void vector_digonal_sum(vector<vector<int>> &arr){
    int row = arr.size();
    int col = arr[0].size(); // Fixed: Use arr[0].size() for correct column size

    int m = 0; // Fixed: Initialize with the first element
    for (int i = 0; i < row; i++) {
            m = m+arr[i][i];
            cout << arr[i][i] << "+ " ;
    }
    cout<< " is " << m << endl;
}

void vector_digonal_sum_2(vector<vector<int>> &arr){
    int row = arr.size();
    int col = arr[0].size(); // Fixed: Use arr[0].size() for correct column size
    int m = min(row, col); // Fixed: Initialize with the first element
    int sum=0;
    cout << endl;
    for (int i = 0; i < m; i++) {
        sum = sum +arr[i][col-(i+1)];
        cout << arr[i][col -(i+1)] << " "; 
    }
    cout << "sum = " << endl <<  sum << endl;
}

void vector_traspose(vector<vector<int>> &arr){
    int row = arr.size();
    int col = arr[0].size(); // Fixed: Use arr[0].size() for correct column size
    int ans[col][row];
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            ans[i][j]=arr[j][i];
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

void Vecotr_tranpose_into_same_array(vector<vector<int>> &arr){
    int row = arr.size();
    int col = arr[0].size(); // Fixed: Use arr[0].size() for correct column size
   if(row == col){
   
    for (int i = 0; i < col; i++) {
        for (int j = i; j < col; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < col; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


   }

}


int main() {
    // // Q1. Search in 2D array with function
    // int arr[3][4] = {10, 20, 30, 40, 50, 55, 57, 59, 69, 72, 79, 89};
    // int rowSize = 3, colSize = 4, target = 56;
    // bool a = search_in_2d(arr, rowSize, colSize, target);
    // cout << a << endl;
cout << endl;
   // Q2. Solve the same thing using a vector
    vector<vector<int>> brr(4, vector<int>(4, 0));
    int rowSize = brr.size();
    int colSize = brr[0].size();
    int target = 70;
    // Taking input for the 2D vector
    for (int i = 0; i < rowSize; i++) {
        for (int k = 0; k < colSize; k++) {
            brr[i][k]=((i*i)*2+k*k)%10;
        }
    }
    // Display the entered elements
    cout << "The elements you have entered are: " << endl;
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < colSize; j++) {
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    // // Searching for the target element
    // bool ans = vetor2dsercharray(brr, target);
    // cout << "Search result: " << (ans ? "Found" : "Not Found") << endl;


    // // Finding the minimum element
    // int minimum = vector_min(brr);
    // cout << "Minimum element: " << minimum << endl;
   

    // // Finding the maximum element
    // int maximum = vector_max(brr);
    // cout << "Maximum element: " << maximum << endl;
    
    // // Finding the sum of all element in the 2D vector
    // vector_row_sum(brr);
    // vector_col_sum(brr);
    // vector_sum(brr);
    // vector_digonal_sum(brr);
    //    vector_digonal_sum_2(brr);


    // // Finding the transpose of matirx
    // vector_traspose(brr);
    // Vecotr_tranpose_into_same_array(brr);
    return 0;
}