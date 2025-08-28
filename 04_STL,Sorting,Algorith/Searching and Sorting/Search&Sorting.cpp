#include <iostream>
#include <algorithm>
using namespace std;
void firstfind(int arr[], int n, int target, int &ansIndex){
   int  s=0;
   int  e=n-1;
   int mid = (s+e)/2;

while (s<=e)
{
   if (arr[mid]==target)
   {
    ansIndex=mid;
    e=mid-1;
   }
   if(target> arr[mid]){
    s=mid+1;
   }
   if(target > arr[mid]){
    e=mid-1;
   }
   mid = (s + e)/2;
}
}

void lastfind(int arr[], int n, int target, int &ansIndex){
   int  s=0;
   int  e=n-1;
   int mid = (s+e)/2;

while (s<=e)
{
   if (arr[mid]==target)
   {
    ansIndex=mid;
    s=mid+1;
   }
   if(target> arr[mid]){
    s=mid+1;
   }
   if(target > arr[mid]){
    e=mid-1;
   }
   mid = (s + e)/2;
}

}
int main() {
    int brr[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
//  int n=9;
//     int target=9;
//     // pass base address, ending address, and target 
// bool ans=binary_search(arr,arr+n,target);
// cout << ans << endl;


// find index of first Occurence 

int arr[11]={10,20,20,20,20,20,20,20,20,20,60};
int n=11;
int target =20;
int ansIndex =-1;
firstfind(arr,n,target ,ansIndex);
cout << "your ans is " << ansIndex << endl;

// find index of first Occurence 
lastfind(arr,n,target ,ansIndex);
cout << "your ans is " << ansIndex << endl;


    return 0;
}