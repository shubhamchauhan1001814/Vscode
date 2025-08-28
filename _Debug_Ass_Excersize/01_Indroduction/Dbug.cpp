// //Debug the code. Take input a character, print 1, if its a capital alphabet, print 0, if its a lowercase alphabet, else print -1.
// #include<iostream>
// using namespace std;
// int main() {
// 	char c;
//     cin>>c;                      // In condition c<= 'z' change to c>= 'z'
//     if('a'<=c || c>= 'z'){
//         cout<<0;
//     }
// 	else if('A'<=c || c>= 'Z'){
//         cout<<1;
//     }
//     else{
//         cout<<-1;
//     }
// }





// //Debug the code. It is trying to print the given pattern.
// /*
// Pattern
// 1
// 23
// 345
// 4567
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;         // put the n=5;
//     int i=1;
//     while(i<n){
//         int j = i,count = 1;
//         while(count<=i){        // change count<i to count<=i
//             cout<<j;
//             j = j + 1;
//             count = count + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }


//Debug the code. It is trying to print the given pattern.
/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin >> n;
  
//     int i=1;
//     while(i<=n){   //
//         int j = i,count = 2*n-1,gaps=(n-i),k=0;     // 4 changes
//         while(k<=gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         int m = 0,ch = count-2*gaps;
//         while(m<ch){
//             cout<<"*";
//             m = m + 1;
//         }
//         k = 1;
//         while(k<gaps){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

// // Trying to do same things using less varable and compact form 
// #include <iostream>
// using namespace std;
// int main() {
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<2*n-1;j++){
//             if(n-i<=j && 2*n-i<=j){
//                 cout <<"*";
//             }
//             else{
//                 cout << " ";
//             }
//         }
//         cout << endl;
//     }
//     return 0;
// }






// //Debug the code. It is trying to print the given pattern.
// /*
// Pattern
// N = 4
// 1
// 22
// 333
// 4444
// */
// #include<iostream>
// using namespace std;
// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=0;i<n;i++){
//         for(j=0;j<=i;j++){   // change j=1 to j=0 and change condition j<i to j<=i
// 	        cout<<i;
//         }
//     cout<<endl;
//     }
// }

// //Debug the code. It is trying to print the given pattern.
// /*
// Pattern
// N = 4
// 1
// 21
// 321
// 4321
// */
// #include<iostream>
// using namespace std;
// int main(){
//   int i,j,n;
//     cin>>n;
//     for(i=0;i<n;i++){
//        int p=i+1;
//         for(j=0;j<=i;j++){
//           cout<<p;
//           p--;
//         }
//         cout<<endl;      
//     }
// }





// //Debug the code. It is trying to print the given pattern.
// /*
// Pattern
// N = 5
// E
// DE
// CDE
// BCDE
// ABCDE
// */
// #include<iostream>
// using namespace std;
// int main() {
//     int i,j,n;;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         char p='F'-i;    //  Only Change A to F
//         for(j=1;j<=i;j++){
//             cout<<p;
//             p++;  
//         }
//         cout<<endl;
//     }
// }





// //Debug the code. It is trying to print the given pattern. 
// /*
// Pattern
// N = 4
//    1
//   232
//  34543
// 4567654
// */
// #include<iostream>
// using namespace std;
// int main(){
//     int no;
//     cin>>no;
//     int i=1;
//     int n = 2*no;
//     while(i<=(no)){
//         int gaps = n-2*i+1,k=1;
//         int j = i;
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         int ch = n - gaps + 1, z = 1;  

//         // Change z=1 
//         while(z>1){
//             cout<<j;
//             j = j + 1;  // j will increase not decrese
//             z = z + 1;
//         }
//         j = j - 2;  
//         //now make j decrease -2
        
//         z = 1;  // change z
//         while(z>=1){
//             j = j - 1;
//             cout<<j;
//             z = z + 1;   // z will increse
//         }
//         k = 1;
//         while(k<=gaps/2){
//             cout<<" ";
//             k = k + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }

#include<iostream>
using namespace std;

int main() {
    int no;
    cin >> no;
    int i = 1;
    int n = 2 * no;
    while (i <= no) {
        int gaps = n - 2 * i + 1, k = 1;

        // Print spaces
        while (k <= gaps / 2) {
            cout << " ";
            k = k + 1;
        }

        // Print increasing numbers
        int ch = n - gaps + 1;
        int j = i;
        int z = 1;  // ✅ Changed: z was used incorrectly before. Now starting from 1 up to (ch/2 + 1)
        while (z <= ch / 2 + 1) {
            cout << j;
            j = j + 1;  // ✅ Changed: You were decreasing j here (j = j - 1), but it needs to increment first
            z = z + 1;  // ✅ Changed: z loop now increases, not mistakenly growing forever
        }

        // Print decreasing numbers
        j = j - 2;  // ✅ Changed: j needs to step back by 2 (it was 1 too far after the above loop)
        z = 1;
        while (z <= ch / 2) {  // ✅ Changed: correct loop limit for decreasing half
            cout << j;
            j = j - 1;
            z = z + 1;
        }

        // Optional: Print trailing spaces for symmetry (kept as is)
        k = 1;
        while (k <= gaps / 2) {
            cout << " ";
            k = k + 1;
        }

        cout << "\n";
        i = i + 1;
    }
}

