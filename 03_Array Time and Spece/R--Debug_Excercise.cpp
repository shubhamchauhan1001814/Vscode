// Supreme3.0-Batch-Debug-Exercise-C++ (Week-3)
// NOTE: The code snippet given may be incomplete or have compile time, runtime or logical errors.
// How to attempt Debugging Exercise?
// Copy the code to your code editor (e.g. VS Code).
// Add relevant header files like “#include <iostream>” etc.
// Run the code.
// You will notice the expected output is not printing at the console.
// Apply your smart coder mind to Debug the code.
// Warning: Only see the solution after you have tried enough.

// Done// // Q1.Debug the code. Sum of array.
// #include<iostream>
// using namespace std;
// int main(){
//     int n, sum=0;
//     cin >> n;
//     int input[n];
//     for(int i=0;i<n;i++){
//         cin >> input[i];
//     }
//      for(int i=0; i<n; i++){
//          sum = sum + input[i];
//      }
//     cout << sum << endl;
//     return 0;
// }

// Done// // Q2.Debug the code. Linear Search.
// #include <iostream>
// using namespace std;
// bool linearSearch(int arr[], int n ,int val){
//     for(int i=0;i<n;i++){
//         if(arr[i]==val){
//             return true;
//         }
//     }
//     return false;
// }
// int main() {
//     int arr[5]={1,2,3,4,5}, n=sizeof(arr)/sizeof(int), val;
//     cout << "Enter the nubmer: " << endl;
//     cin >> val;
//    bool ans= linearSearch(arr,n,val);
//    cout << endl << ans;
//     return 0;
// }

// // Q3.Debug the code. Your task is to populate the array using the integer values in the range 1 to N (both inclusive) in the order - 1,3,5,.......,6,4,2.
// #include <iostream>
// using namespace std;
// void populate(int arr[],int n){
//     int j=0;
//     for(int i=0; i < n/2; i = i + 2){
//         arr[n-j] = i+2;
//         arr[j] = i+1;
//         j++;
//     }
//     for(int k=0; k<n;k++){
//         cout << arr[k] << " ";
//     }
// }
// int main() {
//     int n;
//     cout << "Enter the number: " ;
//     cin >> n;
//     int arr[n];
//     populate(arr,n);
//     return 0;
// }

// Done// // Q4.Debug the code.
// #include <iostream>
// using namespace std;
// void swapAlternate(int arr[],int size){
//     for(int i=0;i<size-1;i=i+2){
//         int temp = arr[i+1];
//         arr[i+1] = arr[i];
//         arr[i] = temp;
//     }
//     for(int j=0; j<size;j++){
//         cout << arr[j] <<" ";
//     }
// }
// int main() {
//     int n;
//     cout << "Enter the number: " ;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n;i++){
//         arr[i]=((i*i)-21)%10;
//     }
//     for(int j=0; j<n;j++){
//         cout <<arr[j] << " ";
//     }
//     cout << endl;
//     swapAlternate(arr,n);
//     return 0;
// }

// Done// // Q5.Debug the code. List all pairs in array that sums to X.
// #include <iostream>
// using namespace std;
// int pairSumToX(int input[], int size, int x){
// 	int pairs = 0;
// 	for(int i=0; i<size; i++){
// 		for(int j=i; j<size; j++){
// 			if(input[i] + input[j] == x) pairs++;
// 		}
// 	}
// 	return pairs;
// }
// int main() {
//     int n;
//     cout << "Enter the number: " ;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n;i++){
//         arr[i]=((i*i)-21)%10;
//     }
//     for(int j=0; j<n;j++){
//         cout <<arr[j] << " ";
//     }
//     cout << endl;
//     int x;
//     cout << "Finding Element: " ;
//     cin >> x;
//    int ans= pairSumToX(arr,n,x);
//    cout << endl << ans;
//     return 0;
// }

// Done// // Q6.Debug the code. List all triplets in array that sums to X.
// int tripletSumToX(int input[], int size, int x){
// 	int triplets = 0;
// 	for(int i=0; i<size; i++){
// 		for(int j=i; j<size; j++){
// 			for(int k=j; k<size; k++){
// 				if(input[i] + input[j] + input[k] == x) triplets++;
// 			}
// 		}
// 	}
// 	return triplets;
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cout << "Enter the number: " ;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n;i++){
//         arr[i]=((i*i)-21)%10;
//     }
//     for(int j=0; j<n;j++){
//         cout <<arr[j] << " ";
//     }
//     cout << endl;
//     int x;
//     cout << "Finding Element: " ;
//     cin >> x;
//    int ans= tripletSumToX(arr,n,x);
//    cout << endl << ans;
//     return 0;
// }

// // Q7.Debug the code. Sort 0s and 1s
// #include <iostream>
// using namespace std;
// void sort0sand1s(int input[], int size){
// 	int nextZero = 0;
// 	for(int i=0; i<size; i++){
// 		if(input[i] == 0){
// 			int temp = input[nextZero];
// 			input[nextZero] = input[i];
// 			input[i] = temp;
//             nextZero++;
// 		}
// 	}
//     for(int k=0; k<size;k++){
//       cout << input[k] <<" ";
//     }
// }
// int main() {
//     int n;
//     cout << "Enter the number: " ;
//     cin >> n;
//     int arr[n];
//     for(int i=0; i<n;i++){
//         arr[i]=((i*(i*i))%3)%2;
//     }
//     for(int j=0; j<n;j++){
//         cout <<arr[j] << " ";
//     }
//     cout << endl;
// sort0sand1s(arr,n);
//     return 0;
// }

// 1. Key Pair
// 2. Find Pivot Index
// 3. Missing Number
// 4. Remove Duplicates From Sorted Array
// 5. Maximum Average Subarray 1
// 6. Sort Colors
// 7. Moving All Negative Number to the Left Side of an Array
// 8. Find Duplicate Number
// 9. Missing Element From An Array With Duplicates
// 10. Find First Repeating Element
// 11. Common Element in 3 Sorted Array
// 12. Wave Print A Matrix
// 13. Spiral Print A Matrix
// 14. Add two numbers represented by two Arrays
// 15. Factorial of A Large Number