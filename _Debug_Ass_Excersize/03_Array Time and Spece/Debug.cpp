/*# Supreme-Batch-Debug-Exercise-C++ (Week-3)
NOTE: The code snippet given may be incomplete or have compile time, runtime or logical errors
How to attempt Debugging Exercise?
1. Copy the code to your code editor (e.g. VS Code).
2. Add relevant header files like “#include <iostream>” etc.
3. Run the code.
4. You will notice the expected output is not printing at the console.
5. Apply your smart coder mind to Debug the code.
Warning: Only see the solution after you have tried enough.

*/
#include <iostream>
using namespace std;


// // 1. **Debug the code. Sum of array.**
// #include<iostream>
// using namespace std;

// int main(){
//     int n=0, sum=0;
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


// // 2.Debug the code. Linear Search.
// #include <iostream>
// using namespace std;
// bool linearSearch(int arr[], int n ,int val){
//     for(int i=0;i<n;i++){
//         if(arr[i]==val){
//             return 1;
//         }
//     }
//     return 0;
// }
// int main() {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int n =sizeof(arr)/sizeof(int);
//     int val;
//     cout << "Enter the value: ";
//     cin >> val;
//     bool ans=linearSearch(arr,n,val);
//     if(ans){
//         cout << "present";
//     }
//     else{
//         cout << "Not Present";
//     }
    

//     return 0;
// }


// // 3. Debug the code. Your task is to populate the array using the integer values in the range 1 to N (both inclusive) in the order - 1,3,5,.......,6,4,2.

// void populate(int arr[],int n){
//     int j=0;
//     for(int i=0; i < n; i = i + 2){
//         arr[n-j-1] = i+2;
//         arr[j] = i+1;
//         j++;
//     }
// }
// int main() {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int n =sizeof(arr)/sizeof(int);
//     populate(arr,n);
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//    return 0;
// }


// // 4.Debug the code.
// void swapAlternate(int arr[],int size){
//     for(int i=0;i<size-1;i=i+2){
//         int temp = arr[i+1];
//         arr[i+1] = arr[i];
//         arr[i] = temp;
//     }
// }
// int main() {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int size =sizeof(arr)/sizeof(int);
//     swapAlternate(arr,size);
//     for(int i=0; i<size; i++){
//         cout << arr[i] << " ";
//     }
//    return 0;
// }


// // 5. Debug the code. List all pairs in array that sums to X.
// int pairSumToX(int input[], int size, int x){
// 	int pairs = 0;
// 	for(int i=0; i<size; i++){
// 		for(int j=i; j<size; j++){
// 			if(input[i] + input[j] == x && i!=j) pairs++;
// 		}
// 	}
// 	return pairs;
// }
// int main() {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int size =sizeof(arr)/sizeof(int);
//     int x;
//     cout << "Enter the value: ";
//     cin >> x;
//     int ans=pairSumToX(arr,size,x);
// cout << endl << ans << endl;
//     return 0;
// }



// // 6. Debug the code. List all triplets in array that sums to X.

// int tripletSumToX(int input[], int size, int x){
// 	int triplets = 0;
// 	for(int i=0; i<size-2; i++){
// 		for(int j=i; j<size-1; j++){
// 			for(int k=j; k<size; k++){
// 				if(input[i] + input[j] + input[k] == x && i!=j && j!=k && i!=k) triplets++;
// 			}
// 		}
// 	}
// 	return triplets;
// }
// int main() {
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     int size =sizeof(arr)/sizeof(int);
//     int x;
//     cout << "Enter the value: ";
//     cin >> x;
//     int ans=tripletSumToX(arr,size,x);
// cout << endl << ans << endl;
//     return 0;
// }




// // 7. Debug the code. Sort 0s and 1s
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
// }

// void method2(int input[], int size){
//     int count=0;
//     for(int j=0; j<size; j++){
//         if(input[j]==1){
//             count++;
//         }
//     }
//     for(int k=0;k<count;k++){
//         input[k]=1;
//     }
//     for(int l=count;l<size;l++){
//         input[l]=0;
//     }
// }
// int main() {
//     int input[]={1,0,1,1,0,0,0,1,1,0};
//     int size =sizeof(input)/sizeof(int);
//     cout <<" Which method want to perform:" <<endl << "1.sir method" << endl << "2.Mymethod" << endl;
//     int p;
//     cin >> p;
//     for(int j=0;j<10;j++){

//         if(p==1){
//             sort0sand1s(input,size);
//             break;
//         }
//         else if(p==2){
//             method2(input,size);
//             break;
//         }
//         else{
//             cout << "Please Enter the valid input : ";
//         }
//     }


//     for(int i=0; i<size; i++){
//         cout << input[i] << " ";
//     }
//    return 0;
// }