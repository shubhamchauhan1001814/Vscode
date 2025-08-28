/*How to attempt Debugging Exercise?
Copy the code to your code editor (e.g. VS Code).
Add relevant header files like “#include <iostream>” etc.
Run the code.
You will notice the expected output is not printing at the console.
Apply your smart coder mind to Debug the code.
Warning: Only see the solution after you have tried enough.*/


// // Debug the code. This code is trying to calculate area of a rectangle.
// #include<iostream>
// using namespace std;
// int main() {
// 	double width, height;
// 	cin >> width >> height;
// 	double area = width * height; // int area change to double
// 	cout << area << endl;
// 	return 0;
// }


// // Debug the code. Convert Binary to Decimal.
// #include<iostream>
// using namespace std;
// int main() {
//     int n,sum=0,factor=1;
//     cin>>n;
//     while(n!=0){
//         int digit = n%2;  // remve devide and chage to modulus
//         sum = sum + digit*factor;
//         factor = 2*factor;
//         n = n/10;     // remove modulus and chage to divide
//     }
//     cout<<sum;
//     return 0;
// }





// // Debug the code. Print all the prime numbers that lie in the range 2 to N (both inclusive)
// #include<iostream>
// using namespace std;
// int main(){
//     int n, flag=1;
//     cin>>n;
//     for(int i=2;i<=n;i++){
//         flag = 1;
//         for(int j=2;j<=i/2;j++){
//             if(i%j==0){
//                 flag = 0;
//             }
//         }
//         if(flag==1){
//             cout<<i<<endl;
//         }
//     }
//     return 0;
// }




// // Debug the code. Print reverse of a number.
// #include<iostream>
// using namespace std;
// int main() {
// 	int n,a=0;
// 	cin>>n;
//     int z = n,digits=0;
//     while(z!=0){
//         z = z/10;
//         digits++;
//     }
//     while(n!=0){
//         int k = n%10,z=digits-1;
//         while(z--){
//             k = k*10;
//         }
//         a = a + k;
//         digits--;
//         n = n/10;
//     }
//     cout<<a;
//     return 0;
// }


// // Debug the code. Return true if the number is member of fibonacci series else false.
// int checkMember(int n){
//     int f1 = 1, f2 = 1;
//     if(n==0 && n==1){
//         return 0;
//     }
//     else{
//         while(1){
//             int temp = f1 + f2;
//             f1 = f2;
//             f2 = temp;
//             if(temp==n){
//                 return 1;
//             }
//             else if(temp>n){
//                 return 0;
//             }
//         }
//     }
// }
// #include <iostream>
// using namespace std;
// int main() {
//     int n;
//     cin >> n;
//     n=checkMember(n);
//     cout << n;
//     return 0;
// }


// //Debug the code. Correct the code for printing the pattern.
// /*
// Pattern for N = 4
//    1
//   212
//  32123
// 4321234
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int i=0,gaps = n-i;   //change in Gap
//     while(i<n){
//         int k=0,gaps=n-i;  // change in gap
//         while(k<gaps){
//             cout<<" ";
//             k++;
//         }
//         int num = i+1;
//         while(num>0){
//             cout<<num;
//             num = num - 1;
//         }
//         k = 2;
//         while(k<=(i+1)){
//             cout<<k;
//             k++;
//         }
//         k =0;
//         while(k<gaps){
//             cout<<" ";
//             k++;
//         }
//         i++;
//         cout<<"\n";
//     }
// }


// Debug the code. Correct the code for printing the pattern.
/*
Pattern for N = 5
1234554321
1234**4321
123****321
12******21
1********1
*/
// #include<iostream>
// using namespace std;

// int main() {
//     int n = 5;

//     int i = 0;
//     while (i < n) {
//         int k = 1;
//         int gaps = n - i;
        
//         // Print left side numbers
//         while (k <= gaps) {
//             cout << k;
//             k++;
//         }

//         // Print stars
//         int num = i * 2;  // ✅ Fix: total stars = 2 * i
//         while (num > 0) {
//             cout << "*";
//             num--;
//         }
//         k = gaps;
//         while (k >= 1) {
//             cout << k;
//             k--;
//         }

//         cout << "\n";
//         i++;
//     }
// }



// // Debug the code. Find the second largest in the code.
// #include<iostream>
// using namespace std;
// #include <climits>
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max = INT_MIN;
//     for(int i=0;i<n;i++){
// 	    if(max<arr[i]){
// 	      max=arr[i];
//       }
//      }
//      int second = INT_MIN;
//      for(int i=0;i<n;i++){
// 	     if(max>arr[i] && arr[i]>second){
// 	       second = arr[i];
//        }
//      }
//      cout<<second;
// 		 return 0;
// }


// // Debug the code. Find the second largest in the code.
// #include<iostream>
// using namespace std;
// /*
// Pattern for N = 4
// 4444
// 333
// 22
// 1
// */
// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=1;i<n;i++){  // change i=0 to i=1;
//         for(j=i;j<n;j++){
//             cout<<n-i; // change i to n-i
//         }
//         cout<<endl;
//     }
// }