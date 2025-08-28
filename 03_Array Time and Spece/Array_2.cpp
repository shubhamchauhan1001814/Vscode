#include <iostream>
using namespace std;

int find_uniquenum(int arr[], int n){

int ans =0;
for (int i=0; i<n; i++){
    ans= ans^arr[i];
}
return ans;
}

void sortZeroOne(int arr[], int n){
    int count=0;
    

}



pair<int, int> cheakTwoSum(int crr[], int n, int Target){
    pair <int, int> ans =make_pair(-1,-1);
    for(int i=0; i< n; i++){
    for(int j=0; j<n;j++){
 //       cout << "(" << crr[j] <<","<< crr[i] <<")"<<"  ";
if(crr[j]+crr[i]==Target){
    ans.first =crr[i];
    ans.second=crr[j];
 return ans;
}
    }
    cout << endl;
}

}

int main() {
//     int arr[]={5,4,3,4,3};
//     int size= 5;

//     int ans = find_uniquenum(arr, size);
// cout << "Unique number is " << ans;



// // Short the 0 and 1
// int arr={0,1,1,0,1,0};
// int n=sizeof(arr)/sizeof(int);
// sortZeroOne(arr, n);


// // Pair all the element present with itself also 
// int crr[]={10,20,30,40,50,60,70};
// int n = sizeof(crr)/sizeof(int);
// for(int i=0; i< n; i++){
//     for(int j=0; j<n;j++){
//         cout << "(" << crr[j] <<","<< crr[i] <<")"<<"  ";
//     }
//     cout << endl;
// }




// // lower traingle
// int crr[]={10,20,30,40,50,60,70};
// int n = sizeof(crr)/sizeof(int);
// for(int i=0; i< n; i++){
//     for(int j=0; j<i;j++){
//         cout << "(" << crr[j] <<","<< crr[i] <<")"<<"  ";
//     }
//     cout << endl;
// }





// // Upper tringel 
// int crr[]={10,20,30,40,50,60,70};
// int n = sizeof(crr)/sizeof(int);
// for(int i=0; i< n; i++){
//     for(int j=i; j<n;j++){
//         cout << "(" << crr[j] <<","<< crr[i] <<")"<<"  ";
//     }
//     cout << endl;
// }


// // Avoide First elelment
// int crr[]={10,20,30,40,50,60,70};
// int n = sizeof(crr)/sizeof(int);
// for(int i=0; i< n; i++){
//     for(int j=1; j<n;j++){
//         cout << "(" << crr[j] <<","<< crr[i] <<")"<<"  ";
//     }
//     cout << endl;
// }


// // Include same element in lower traingle
// int crr[]={10,20,30,40,50,60,70};
// int n = sizeof(crr)/sizeof(int);
// for(int i=0; i< n; i++){
//     for(int j=0; j<=i;j++){
//         cout << "(" << crr[j] <<","<< crr[i] <<")"<<"  ";
//     }
//     cout << endl;
// }





// //  // avoide first element
// int crr[]={10,20,30,40,50,60,70};
// int n = sizeof(crr)/sizeof(int);
// for(int i=0; i< n; i++){
//     for(int j=1; j<n;j++){
//         cout << "(" << crr[j] <<","<< crr[i] <<")"<<"  ";
//     }
//     cout << endl;
// }




// // start form last
// int crr[]={10,20,30,40,50,60,70};
// int n = sizeof(crr)/sizeof(int);
// for(int i=0; i< n; i++){
//     for(int j=n-1; j>=0;j--){
//         cout << "(" << crr[j] <<","<< crr[i] <<")"<<"  ";
//     }
//     cout << endl;
// }






// // Start from last uppter left tringle
// int crr[]={10,20,30,40,50,60,70};
// int n = sizeof(crr)/sizeof(int);// n=7
// for(int i=0; i< n; i++){
//     for(int j=n-1; j>i;j--){
//         cout << "(" << crr[j] <<","<< crr[i] <<")"<<"  ";
//     }
//     cout << endl;
// }





// // Two Sum 
// // 1.By iterative
// int Target;
// cout << "Enter the Target :";
// cin >> Target;
// int crr[]={10,20,30,40,50,60,70};
// int n = sizeof(crr)/sizeof(int);// n=7
// for(int i=0; i< n; i++){
//     for(int j=n-1; j>i;j--){
//  //       cout << "(" << crr[j] <<","<< crr[i] <<")"<<"  ";
// if(crr[j]+crr[i]==Target){
//  cout << "(" << crr[j] <<","<< crr[i] <<")"<<"  ";
// }
//     }
//     cout << endl;
// }

// // By function call
// int Target;
//  cout << "Enter the Target :";
//  cin >> Target;
//  int crr[]={10,20,30,40,50,60,70};
// int n = sizeof(crr)/sizeof(int);// n=7
// pair<int,int> ans=cheakTwoSum( crr, n, Target);
// if(ans.first == -1 && ans.second ==-1) {
//     cout << "Pair not exit";
// }
// else{
//     cout << "Pair found: " << ans.first << ", " << ans.second << endl;
// }






// // Three Sum 
// 1.By iterative
// int Target, count =0;
// cout << "Enter the Target :";
// cin >> Target;
// int crr[]={10,20,30,40,50,60,70};
// int n = sizeof(crr)/sizeof(int);// n=7
// for(int i=0; i< n; i++){
//     for(int j=0; j<n;j++){
//         for(int k=0; k<n;k++)
//  //       cout << "(" << crr[j] <<","<< crr[i] <<")"<<"  ";
// if(crr[j]+crr[i]+crr[k]==Target){
//  cout << "(" << crr[j] <<","<< crr[i] << "," << crr[k] << ")"<<"  ";
// count ++;
// }
//     }
//     cout << endl;
// }
// cout << endl << count;


// // By function call
// int Target;
//  cout << "Enter the Target :";
//  cin >> Target;
//  int crr[]={10,20,30,40,50,60,70};
// int n = sizeof(crr)/sizeof(int);// n=7
// pair<int,int> ans=cheakTwoSum( crr, n, Target);
// if(ans.first == -1 && ans.second ==-1) {
//     cout << "Pair not exit";
// }
// else{
//     cout << "Pair found: " << ans.first << ", " << ans.second << endl;
// }







// // My crousity to find which value give me the maximum possiblity;
//     int count = 0, min, sum_max = 0, count_2 = 0, target_2 = 0;
//     int crr[] = {10, 20, 30, 40, 50, 60, 70};
//     int n = sizeof(crr) / sizeof(int); // n=7
//     // Finding minimum value
//     min = crr[0];
//     for (int q = 1; q < n; q++) {
//         if (crr[q] < min) {
//             min = crr[q];
//         }
//     }
//     // Calculating maximum possible sum
//     for (int p = 0; p < n; p++) {
//         sum_max += crr[p];
//     }
//     // Checking all possible Targets in range [min, sum_max]
//     for (int Target = min; Target <= sum_max; Target++) {
//         count = 0; // Reset count for each new Target
//         // Finding triplets that sum to Target
//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 for (int k = j + 1; k < n; k++) {
//                     if (crr[i] + crr[j] + crr[k] == Target) {
//                         count++;
//                         cout << "for Target  " << Target <<  " --> (" << crr[j] <<","<< crr[i] << "," << crr[k] << ")"<<"  "<< endl;
//                     }
//                 }
//             }
//         }
//         // Updating max count and Target_2
//         if (count > count_2) {
//             count_2 = count;
//             target_2 = Target;
//             cout << endl << endl;
//         }
//     }
//     cout << endl << count_2 << ", " << target_2;






// shifting an array;








    return 0;
}
